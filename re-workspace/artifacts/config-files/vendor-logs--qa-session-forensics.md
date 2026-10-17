# Shipped Vendor Logs — Forensic Artifact (EPMLOG / Eaolog / strutureReg: the vendor's own test runs, left in the retail tree)

**Files**: `og-codebase/EPMLOG.log` (15,269 B, ASCII, 140 lines), `og-codebase/Eaolog.log` (336 B, UTF-16LE), `og-codebase/strutureReg.log` (405 B, JSON)
**Role**: These are **not product data files** — they are leftover run logs from the vendor's own machines (the packaging process shipped the working directory as-is). Together with the 3 .rsf samples, they document the vendor's QA session of **2026-10-14/15** — the eve of the shipped build.

---

## 1. EPMLOG.log — the PartitionRecovery device-manager boot trace (2 runs)

Two complete `CDeviceManagerBuilder` boot sequences, timestamped **2026-10-14 22:57** (T:14564) and **2026-10-15 01:20** (T:14032), same PID 2116 (the host process; different worker threads per run):

```
CDeviceManagerBuilder : pDiskEnumerator->GetDiskEntries start.
CDiskEnumerator : Storage space init start/end          (storage-spaces enumeration!)
CDiskEnumerator : Storage space GetUsedPhysicalDisks end
CDiskEnumerator : Vds loadservice end                   (VDS service load)
CDiskEnumerator : disk enumerate end.
[CRefsVolumeBootRecord] ParseBufDirectly fail ×4        (ReFS probes on non-ReFS partitions)
[CRefsAnalyze] AnalyzeProc fail ×4
CDeviceManagerBuilder : CreateDiskManagerItem end.
CDeviceManagerBuilder : CalcDriveLetter end.
CUpdatePartitionUsedSpaceName : UpdatePartition fs : 0x11/0x3/0x4/0xff, Unavailable: 1
   → GetSpaceInformationByWin32API (non-NTFS) / CNTFSLib::GetSpaceInformation (NTFS)
```

**Verified facts**:
1. **The FS-code map cross-checks the static decode** — the live log shows 0x11, 0x3, 0x4, 0xff cycling through the update path (exFAT/NTFS/ext-family/unknown) — matching the type-code tables in the .rsf and engine decode (corroborates record-4's factory codes 1=FAT-family… and the engine FS codes).
2. **NTFS capacity queries route through CNTFSLib** (the module!), others through Win32 API (`GetSpaceInformationByWin32API`) — the "Unavailable: 1" flags on every partition indicate the QA disk had unmounted/exotic partitions.
3. **Storage Spaces + VDS enumeration** in the device-manager boot — dynamic disks and storage pools supported in the enumerator (matches the LdmManager/Device module decodes).
4. ReFS probes fail gracefully ×4 (partition records probed for ReFS, rejected, non-fatal) — exactly the CRefsFileSystemAnalyser behavior.

## 2. Eaolog.log — CEaoActiveOnline init (developer-attributed)

```
2026-10-14 22:57:02 [T/P:18688/2116] [Liaolanjun] CEaoActiveOnline::Init success.
2026-10-14 22:57:02 [T/P:18688/2116] [Liaolanjun] CEaoActiveOnline::Init version=0.
```

- **EAO = EaseUS Active Online** — the online-activation/telemetry component (VC9-era "Eao" prefix family)
- **Developer attribution `[Liaolanjun]`** — a named developer tag in the log format (like the xjq/Brance namespace attributions — the same product carries at least three distinct developer fingerprints)
- Same PID 2116 at 22:57:02 — **8 seconds before the EPMLOG boot** — the QA session ran the full product: EAO init → device manager boot → scan (the .rsf samples: 23:13 scan session save on I:)

## 3. strutureReg.log — the video-repair dev-pipeline JSON (Chinese-language QA)

```json
{
  "appversion": "19.3", "logversion": "1.0,0",
  "timestamp": "2026-10-15 01:21:26",
  "module": "视频重组",                  ← video regrouping (the moov/mdat datarun regroup!)
  "moduleversion": "19.2回退分支",        ← "19.2 rollback branch" — a Chinese-named git branch
  "environment": "开发机器",              ← dev machine
  "runEvn": "调试环境",                   ← debug environment
  "workType": "输出重组datarun",          ← "output regroup datarun"
  "level": "DEBUG", "regQueue": [], "message": [], "duration_ms": 0
}
```

- The **video-repair regroup engine** (the datarun-regroup algorithm decoded in the video-repair artifacts) has a JSON debug-logger with **Chinese-language module/branch labels** — domestic development of the repair line
- **Branch naming**: "19.2回退分支" documents a version-19.2 **rollback branch** — the repair line had a revert event during this cycle (app version 19.3 in dev while module on a 19.2 rollback branch)
- Timestamp 01:21:26 — **one minute after the second EPMLOG run** (01:20:53): the same QA night continued into video-repair testing

## 4. The QA-night reconstruction (all timestamps)

```
2026-10-14 22:57:02  CEaoActiveOnline init (PID 2116)              [Eaolog]
2026-10-14 22:57:10  device-manager boot #1, disk enumerate,       [EPMLOG]
                     ReFS probes, partition updates (22:57:16)
2026-10-14 23:13:21  scan session on I: saved as .rsf              [rsf record-2
                     ("Local Disk (I:)" — the 36 MB sample)          timestamps, doc-3]
2026-10-15 01:20:53  device-manager boot #2 (same PID)             [EPMLOG]
2026-10-15 01:21:26  video-repair regroup datarun test (debug)     [strutureReg]
```

The shipped zip preserves **the vendor's own QA session** — the product was run on the packager's machine, and the logs (plus the three .rsf scan sessions and the `log/` directory) survived into retail.

## 5. Cross-links

- The .rsf samples from the same night: `SaveScan/rsf-format--scan-session.md` (record-2 timestamps 2026-10-14 23:13:21.774 — byte-exact)
- FS-code tables corroborated: `SaveScan/rsf-record4--tree-node-grammar.md` §3, `architecture/04-recovery-workflow.md`
- Video-repair regroup algorithm: `FileRepair/` video artifacts + `architecture/06-repair-chain.md`
- Developer attributions: `SearchDLL/rawsearchdll--analyser-registry-census.md` §4 (xjq/Brance) — Liaolanjun now the third
