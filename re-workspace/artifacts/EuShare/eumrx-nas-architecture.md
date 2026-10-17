# EuShare / EuMrx.sys — NAS (Network-Attached Storage) Recovery Architecture

> Binaries analyzed: `og-codebase/EuShare/EuMrx.sys` (kernel mini-redirector),
> `og-codebase/libssh2.dll` (SSH-2.0-libssh2_1.11.0), `og-codebase/NasConfig/` (config),
> `DRWUI.exe` (NAS UI flow), decompilation: `re-workspace/reversed/ghidra-drivers/EuMrx_decompiled.c` (405 functions, 24K lines)
> PDB (EuMrx): `d:\project\调研\tb镜像mount\source\eushare\eumrx\wlh\sys\objfre_win7_amd64\amd64\EuMrx.pdb`

## 1. Executive Summary

NAS recovery lets DRW scan a Synology/QNAP-style box over the network WITHOUT mounting
anything on the NAS UI. The design is a three-layer stack:

1. **User mode (DRWUI)**: SSH (libssh2) into the box as root, push a Linux agent to
   `/tmp/EaseUS/`, run it there. The agent performs the actual on-box scanning
   (bitmap-based) and serves results.
2. **Kernel mode (EuMrx.sys)**: a self-contained RDBSS mini-redirector that publishes a
   virtual drive letter namespace so Windows file APIs (and DRW's own scan engines) can
   open NAS files like local files.
3. **Loopback bridge**: all EuMrx file opens are rewritten to `\\127.0.0.1\...` — the
   agent's data is reachable through an SSH tunnel terminating on localhost, so the
   kernel never does networking (no WSK/TDI imports at all).

## 2. EuMrx.sys — Kernel Mini-Redirector (verified from decompilation)

### 2.1 Self-contained RDBSS
- **RDBSS is statically linked INTO the driver** — 405 functions include the whole RDBSS
  runtime (`RxDriverEntry`, `RxRegisterMinirdr`, `RxFsdCommonDispatch`, `__RxInitializeTopLevelIrpContext`,
  `RxFindOrConstructVirtualNetRoot`, `RxScavengeFobxsForNetRoot`, `RxCanonicalizeNameAndObtainNetRoot`, ...).
- Imports: **NTOSKRNL.EXE only** (54 functions: Zw*File, Ke*, Ex*, Mm* MDL ops, Ps* process ops,
  `FsRtlRegisterUncProvider`, `IoRegisterFileSystem`, ...). No rdbss.sys dependency, no WSK.
- Built from `eushare/eumrx/wlh/sys` ("wlh" = Windows Longhorn/Vista+ baseline, win7_amd64 obj dir).

### 2.2 DriverEntry flow (decompiled, function @ 0x125f4 region)
```
1. ZwOpenKey HKLM\...\Services\EuMrx\Parameters; read LogRate (DWORD), clamp to 31
2. RxDriverEntry(...)                          // RDBSS runtime init
3. RxRegisterMinirdr(..., L"\\Device\\EuRdr", ...)  // minirdr registration
4. IoCreateSymbolicLink(L"\\??\\EuRdrDN", L"\\Device\\EuRdr")
5. DriverObject->MajorFunction[0..26] = FUN_00012e58   // ALL IRPs -> RDBSS dispatch
   DriverObject->DriverUnload = FUN_00012934
6. RxCreateRxContext + RxStartMinirdr(...)     // start minirdr
7. FsRtlRegisterUncProvider(...)               // register as UNC provider (MUP)
```
- Device: `\Device\EuRdr`; user-visible symlink: `\??\EuRdrDN` → DRWUI opens `\\.\EuRdrDN`.

### 2.3 Virtual namespace & drive-letter mapping (device extension layout)
- Device extension holds **8 session slots** (0x180 bytes each) starting at +0x6d8;
  slot name (wide) at +0x88, active flag at byte +0x88[0x90] — guarded by event at +0x6c0.
- **26-byte drive-letter state** at +0x688 (active) and +0x6a2 (slot index): mapping a
  letter sets `state[letter-'A']=1`, `slot[letter-'A']=idx` (function at 0x11224).
- Namespace root: **`\EuShare.com`** — user paths look like `X:\EuShare.com\<...>`.
  DRWUI's own strings confirm it references `\\EuShare.com` + `\\.\EuRdrDN`.
- The `\$:` / `\IPC$` / `\MAILSLOT` / `\PIPE` strings are RDBSS standard namespace
  special-cases (mailslot/named-pipe creation over redirector).
- "\;0:\EuShare.com\" (0x24-byte immediate memcpy) — the DOS-device link target format
  the driver builds when mapping a letter (RDBSS device-number prefix convention).

### 2.4 File-name rewrite → loopback (function @ 0x14xxx, FileInformationClass dispatch)
The minirdr's query-file-info handler (cases: 5=FileStandardInfo, 6=FileNameInfo?,
7=..., 0x22=FileNetworkOpenInfo, 0x31=FileNameInformation) — for **FileNameInformation
(0x31)** the driver answers with:

```
name = "\127.0.0.1\" + <original EuShare name>
```

i.e. every file opened through the EuShare letter is REALLY backed by a
`\\127.0.0.1\...` open underneath. This proves the loopback-bridge design: the agent's
SMB-ish endpoint is reached via localhost (SSH tunnel in user mode), and EuMrx proxies
kernel file requests to it.

### 2.5 LowIo dispatch inventory (.rdata `[nowait]` table)
RDBSS LowIo contexts implemented: CREATE, CR_NMPIPE, CR_MLSLOT, CLOSE, READ, WRITE,
QUERYINFO, SETINFO, QUERYEA, SETEA, FLUSH, QUERYVOL, SETVOL, DIRCTRL, FSCTL, IOCTL,
xIOCTL, SHUTDWN, LOCKCTRL, CLEANUP, QUERYPWR, SETQUOTA, QRYQUOTA, DVCHANGE, NOTDEFND,
QUERYSCRTY, SETSCRTY, PNPPOWER, SETQUOTA — i.e. a complete file-redirector surface
(exactly what a scan engine needs: open/read/dir/query only; WRITE is present but
recovery writes go back through the same path).

### 2.6 Installation (install.bat, verified)
```
reg add ...\Services\EuMrx\Parameters /v LogRate /d 0xf
reg add ...\Services\EuMrx\NetworkProvider /v DeviceName  = \Device\EuRdr
reg add ...\Services\EuMrx\NetworkProvider /v Name        = "EaseUS Network"
reg add ...\Services\EuMrx\NetworkProvider /v ProviderPath= System32\EuMrxnp.dll
sc create EuMrx binPath= system32\DRIVERS\EuMrx.sys type= filesys start= demand group= Network
-> prepends "EuMrx" to NetworkProvider\Order Providerorder
```
- Registered as a **Windows Network Provider** ("EaseUS Network") so UNC resolution
  consults it; NP shim DLL `EuMrxnp.dll` is referenced but not shipped in this folder
  (driver-only drop). `uninstall.bat` mirrors everything.

## 3. User-Mode Chain (DRWUI, string/RTTI-verified)

### 3.1 UI flow (CNas* classes)
`CNasStartPage` → `CNasLogonPage` (IP/port/account) → `CNasSSHPage` (+ `CNasSSHInfoWnd`,
`CNasSSHPopWnd`, `NasConfig/ssh_config.ini` state file) → `CNasDevicePage` /
`CNasEnummingPage` (enumerate volumes on box) → `CNasNoSystemPage` / `CNasNetErrorTipsWnd`
/ `CNasEnumFailedPage` / `CNasPortTipsWnd` error states → scan (standard engines) →
recovery. Threads: `CNasConnectThread`, `CNasCancelConnectThread`,
`CNasDownloadConnectZipThread`; Linux variant: `CLinuxConnectThread` family (same agent
model for plain Linux boxes / RAID).

### 3.2 SSH requirements (UI strings)
- "Enabling SSH service is required for remote access. You may DISABLE it once
  recovery is completed."
- "you may not have SSH enabled or ... an account with **root permissions**"
- Step-by-step enable-SSH guidance for NAS vendors; "Error in the SSH layer" (libssh2
  status surfaced), "Incorrect IP or port or disabled SSH service".
- `libssh2.dll` (**SSH-2.0-libssh2_1.11.0**) shipped in app dir AND in
  `BUILDPE/EaseUS-x64/` — NAS recovery also works from the bootable WinPE media.
  Loaded dynamically (no static importers — LoadLibrary pattern).

### 3.3 Agent push & on-box execution
- `NasConfig/ssh_config.ini`: `[SSH] is_exit/error/errcode/process` state slots,
  **`PushPath = /tmp/EaseUS/`** (where the agent is uploaded on the box), `ScanDev`
  (device selected for scan).
- Agent payload: `connect.zip` (referenced as `NasConfig\connect.zip` and
  `\EaseUS\DRW\connect.zip` — not included in this distribution; downloaded/updated via
  d1.easeus.com infrastructure alongside `https://d1.easeus.com/drw/PE/tools.zip`).
- Agent architecture selection: `NasModel.xml` — a **Synology model catalog**
  (X86: FS/SA/DS/RS/DVA models 2010–2022; ARM: DS1xx-DS4xx j/play/slim models) mapping
  each NAS model → CPU arch → which agent build to push.
- On-box evidence (paths in DRWUI strings): the agent writes
  `/tmp/log/FileStart.log`, `/tmp/log/euAuxiliaryBitmaplog.log`,
  `/tmp/log/euFileMatchinglog.log`, and `/tmp/FileNodeDataRun.txt` — i.e. the agent
  runs a **bitmap-based scanner + file-matching engine ON the NAS** (same "auxiliary
  bitmap" quick-scan concept as the Windows engines' volume-bitmap builders), then
  streams file-node results back.
- Agent version check callback: `%s?version=%s&uuid=%s&agent=%s&productname=FoxitRestore`
  (internal product codename "FoxitRestore"; cf. registry key
  `SOFTWARE\Foxit Software\FoxitRestore\Foxit Information`).

### 3.4 Data path (end-to-end) — corrected with connect.exe role
```
[DRWUI]  downloads connect.zip (CLinuxDownloadConnectZipThread) → EUUnZip.exe → NasConfig\connect.exe
[connect.exe (runtime-downloaded, loads libssh2.dll)] SSH (port 22, root)
   ──push agent──> /tmp/EaseUS/ (NAS side)
   ──libssh2 direct-tcpip local forward──> 127.0.0.1 ↔ NAS agent endpoint (port internal to connect.exe)
[DRWUI]  opens \\.\EuRdrDN; configures session slots; maps drive letter X:
[Win FS] X:\EuShare.com\...  open/read/dir
   └─> EuMrx.sys (static RDBSS, LanmanWorkStation-tuned) presents names as \\127.0.0.1\...
        ──> loopback endpoint (connect.exe tunnel) ──> NAS agent ──> disk
[*SearchDLL] scans X: like any local volume (IOCTL/raw where applicable)
[recovery] writes recovered files out through the same redirector path
```
(NB: the agent-side version callback `productname=FoxitRestore` is the NAS agent's own
HTTP check — the "SSH (libssh2, port 22, root)" actor is connect.exe, not DRWUI itself.)

## 4. Why This Design (engineering analysis)

- **Kernel driver instead of Dokan/CBFS**: no third-party filter dependency; RDBSS is
  Microsoft's supported redirector framework; self-contained static link = single .sys
  deployable on Win7+ (objfre_win7_amd64) without rdbss version issues.
- **Loopback instead of kernel networking**: WSK in a signed data-recovery driver is a
  support/WHQL headache; user-mode libssh2 tunnel keeps all crypto/transport in
  userspace, supports any NAS (stock SSH), and traverses NAT/firewall-free (outbound 22).
- **Agent-on-box scanning**: scanning gigabytes over SMB v1/v2 is slow; the agent reads
  the box's disks locally (with root), builds the auxiliary bitmap + file matching
  locally, and only streams matched results — an order-of-magnitude speedup and the
  only way to reach unmounted/deleted volumes on the box.
- **Network Provider registration**: makes `\\EuShare.com\...` resolvable system-wide
  (any app, including Explorer, could browse it), though DRWUI primarily uses the
  mapped letter.

## 5. Cross-links

- Kernel driver family overview: `architecture/02-kernel-driver-architecture.md`
- DRWUI scenario flow: `artifacts/DRWUI-exe--main-ui-architecture.md` (§3.2 NAS)
- Remote scan strategy: `CDoScanRemoteDevice` (DRWUI RTTI)
- WinPE variant (libssh2 in BUILDPE): `architecture/03-winpe-boot-environment.md`
- Raw evidence: `re-workspace/reversed/ghidra-drivers/EuMrx_{decompiled.c,functions.txt,imports.txt}`,
  `re-workspace/reversed/EuShare/EuMrx.sys/` (rabin2/strings), `og-codebase/EuShare/{install.bat,uninstall.bat}`

## 6. Confidence

- All driver claims: direct reads of Ghidra decompilation (function addresses cited).
- All DRWUI/UI claims: RTTI class names + exact UI strings from DRWUI Qt tables.
- Config claims: literal file contents (ssh_config.ini, NasModel.xml, install.bat).

### 6.1 SSH-forward port — RESOLVED as "not in shipped codebase" (verified)

The earlier open item ("exact forwarded port/protocol pending DRWUI decompilation") is now
closed with a definitive negative + architecture correction:

1. **DRWUI contains NO libssh2 usage at all** — zero `ssh2_*` symbols across all 119,182
   decompiled functions; no `libssh2.dll` string; no ws2_32 tunnel sockets besides the
   media-preview bridge (127.0.0.1:20171/20172 = VAPreviewListener/VideoViewer subsystem,
   verified separate).
2. **The SSH client is `connect.exe`, which is NOT SHIPPED** — it is downloaded at
   runtime and extracted: `CLinuxDownloadConnectZipThread` (vftable @ DRWUI 1298630)
   fetches `connect.zip` to `%AppData%\EaseUS\DRW\connect.zip`, then `EUUnZip.exe`
   (shipped, generic child-process launcher FUN_1408161c0/FUN_1401434f0:
   `"%s%s%s \"%s\" \"%s\""` = appdir + dir + exe + two quoted args, CreateProcessW with
   hidden window + wait) extracts it to `NasConfig\connect.exe`. Version management via
   the `[VERSION] connectver` ini key (QSettings UTF-8) vs. remote `value_connect`.
   Neither `connect.exe` nor `connect.zip` nor `EuMrxnp.dll` exists in og-codebase or
   BUILDPE — `NasConfig/` ships only `NasModel.xml` + `ssh_config.ini`.
3. `libssh2.dll` (SSH-2.0-libssh2_1.11.0, 135 exports incl. `libssh2_channel_direct_tcpip_ex`)
   ships in the app dir and BUILDPE **solely as connect.exe's runtime dependency** — which
   also explains why no in-tree binary imports it (verified via PE import-table scan of
   every binary: 0 importers).
4. Therefore the tunnel's local forward port is a **connect.exe-internal constant** that
   cannot be recovered from this codebase. What IS established: EuMrx presents the
   tunnel as `\\127.0.0.1\` (FileNameInformation rewrite, EuMrx line 2530), and EuMrx
   tunes itself from `LanmanWorkStation\Parameters` (`RxReadRegistryParameters` reads
   `DisableByteRangeLockingOnReadOnlyFiles` + `ReadAheadGranularity`, capped at 0x1000
   then <<12) — i.e. the loopback endpoint speaks SMB semantics, consistent with
   connect.exe forwarding 127.0.0.1:SMB ↔ NAS:445 over a libssh2 `direct-tcpip` channel
   (the shipped export `libssh2_channel_direct_tcpip_ex` is exactly this facility).

### 6.2 RDBSS internals evidence (this session, line-cited)

- EuMrx is a **statically-linked RDBSS mini-redirector**: Ghidra library matches for
  `RxReadRegistryParameters`, `RxPrefixTableLookupName`, `RxpUnregisterMinirdr`,
  `RxTearDownDispatcher`, `RxUnload`, `RxDereference`, `FsRtlRegisterUncProvider`,
  VS2019 rdbss.lib — the ONLY networking-capable surface is the local SMB stack.
- Canonical prefix built by memcpy immediate: `\;0:\EuShare.com\` (0x24 bytes, line 337);
  prefix-table entries typed 0xEB10/0xEB11/0xEB12 (lines 363-381).
- Session/letter mapping re-verified at function @ 0x11224: the session-lookup loop
  bound is **`while (idx < 8)` → exactly 8 session slots** (0x180 bytes each at +0x6d8;
  server name compared case-insensitively at session+0x110 via _wcsnicmp); 26-byte
  drive-letter tables at +0x688 (active) and +0x6a2 (slot index); failure status
  0xC00000CC (STATUS_BAD_NETWORK_NAME) when no slot matches.
- UNC acceptance requires a `\EuShare.com` server component + `X:` drive-letter suffix
  (chars 'A'-'Z' = 0x41-0x5A bounds check, lines 199-204).
