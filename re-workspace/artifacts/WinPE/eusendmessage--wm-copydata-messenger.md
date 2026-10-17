# EuSendMessage.exe — WM_COPYDATA Messenger to the "DRW_Installer" Window (PE-only utility)

**Binary**: BUILDPE/EaseUS-x64/EuSendMessage.exe — x86, VC9-era CRT (msvcr90), 640-line decompilation (ghidra-wave2), **3 real functions** + CRT boilerplate
**Evidence**: full decompile read (`FUN_004010c0` = main logic, `FUN_00401000` = ANSI converter); imports = `FindWindowW` + `SendMessageW` + `CommandLineToArgvW` + `WideCharToMultiByte` (the complete functional surface)
**Role**: Answers the WinPE payload census open item "EuSendMessage.exe (PE-only, role TBD)" — a one-shot inter-process notifier.

---

## 1. The entire algorithm (byte-exact decode)

```c
// FUN_004010c0 — main
LPWSTR *argv = CommandLineToArgvW(GetCommandLineW(), &argc);
if (!argv || argc < 2) return -1;                    // needs ≥1 argument

wchar_t wmsg[0x104] = {0};                           // 208-wchar concat buffer
for (i = 1; i < argc; i++) wcscat_s(wmsg, 0x208, argv[i]);
                                                     // all args concatenated (space lost —
                                                     // caller must quote)

char amsg[0x410];                                    // 1040-byte ANSI target
FUN_00401000(wmsg, 0x208, amsg, &len);               // WideCharToMultiByte wrapper
                                                     // (2-phase: size probe then convert,
                                                     //  '_' default char, no-best-fit 0x200)

HWND hwnd = FindWindowW(NULL, L"DRW_Installer");     // find BY WINDOW TITLE (any class)
if (hwnd) {
    COPYDATASTRUCT cds = { /*dwData*/ 999,            // command code = 999
                           /*cbData*/ strlen(amsg)+1,
                           /*lpData*/ amsg };
    SendMessageW(hwnd, WM_COPYDATA /*0x4A*/, 0, (LPARAM)&cds);
}
```

`FUN_00401000` is a two-phase `WideCharToMultiByte` (probe length → convert) with default-char `_` and `WC_NO_BEST_FIT_CHARS` (0x200) — lossy chars become underscores.

## 2. The IPC contract

| Element | Value |
|---|---|
| Target window | title **"DRW_Installer"** (class-agnostic `FindWindowW(NULL, title)`) |
| Message | `WM_COPYDATA` (0x4A) — the standard cross-process data message (passes through UIPI, system-marshalled) |
| Command code (`dwData`) | **999** |
| Payload | the command-line argument string (ANSI, NUL-terminated, ≤1040 B) |
| Exit code | -1 on missing args; 0 otherwise (silently no-ops if the window doesn't exist) |

## 3. Who is "DRW_Installer"?

The window title identifies the **DRW installer wizard** (SetupUE.exe-family — the live-tree installer that the PE build deliberately omits). The receiver interprets command 999 — most plausibly a "message to display/log" channel (progress or status injection into the installer UI) used by scripted flows. Because the receiver lives in the installer (out of core scope), the exact 999-semantics on the receiving side is documented as installer-side detail; the messenger's contract above is complete.

## 4. Why it ships ONLY in the bootable PE build

The PE media is built by the media-builder flow (PE_Tools.dll / WAIK slicing, arch 03 §4) — a scripted, unattended context. A headless one-liner that can poke a titled window is exactly what a build/script environment needs (e.g. the builder or a post-boot script signaling a running installer in the PE session). In the live Windows install, the installer is interactive and this helper is unnecessary — hence live-tree absence (verified: 0 copies outside BUILDPE).

## 5. Verification notes

- Single string literal in the binary: `"DRW_Installer"` (the window title) — everything else is CRT boilerplate
- The 999 command code and WM_COPYDATA are read directly from the decompiled struct-init (local_8b4 = 999 before SendMessageW with 0x4a)
- VC9-era CRT dates it to the 2008-2010 toolchain generation — a utility carried forward since the earliest WinPE media builds

## 6. Cross-links

- WinPE payload census (where this was flagged): `WinPE/pe-payload-census--buildpe-easeus-x64.md` §5 (now resolved)
- Installer side (live tree): `InfoForSetup.exe` / `SetupUE.exe` per-binary artifacts
- WM_COPYDATA usage elsewhere in the product: DRWUI preview/IPC artifacts (VAPreviewListener zmq + window messages family)
