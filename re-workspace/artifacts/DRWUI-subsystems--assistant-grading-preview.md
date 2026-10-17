# DRWUI core subsystems — RecoveryAssistant, CRecoverability, CRecoveryMgr, preview protocol

> The user-facing intelligence layer above the scan engines, decoded from
> `ghidra-drwui/DRWUI_decompiled.c` (2.38 M lines). Covers the post-scan statistics
> engine, the recovery-grading engine (the "Recovery Chances" gauge), the recovery
> orchestrator surface, and the thumbnail-preview socket protocol. Correlates with the
> dynamic UI captures (`UIUX/` family). [CODE] unless flagged.

## 1. RecoveryAssistant — the post-scan analyzer (FUN at 330837-330960) [CODE]

Runs at scan completion (logged to `RecoveryAssistant.log`):

```
"RecoveryAssistant analyze begin."
compute + log:
    TotalFileCount, rawCount (carved files),
    lostPartitionExistFileCount, lostPartitionDeleteFileCount,
    QuickScanExistFileCount, QuickScanDeleteFileCount,
    DeepScanFileCount, QuickScanDeleteExtend
per-category counts via FUN_1401c8940(categoryMap, ID):
    Graphics = 5   Document = 6   Archive = 7
    Video    = 8   Audio    = 9   Other   = 0xB
"RecoveryAssistant analyze finish." (+ GetTickCount64 elapsed → +0x38)
```

**The category IDs (5, 6, 7, 8, 9, 0xB) are the same type-ID space persisted in
IFileProperties `+0x60`** (the `.rsf` census showed `.jpg`→6/26/3 etc.) — confirming
the two-level type system: top-level categories 5-0xB (matching the PriorityDisplayType
config's 5 display categories), per-signature sub-IDs beneath them. This closes the
categorization chain: engine type-registry ID → IFileProperties +0x60 → category
buckets → the UI's Type tree and the filter layer.

## 2. CRecoverability — the per-file grading engine (FUN at 605660+, 14038ac90) [CODE]

Background-thread pipeline (`_LaunchPad<tuple<void(__cdecl*)(void*), CRecoverability*>>`
= std::thread on a member function; a second thread for the assistant half).

`"Recoverability analyze begin."` then per node:
```
if size < 1:                     grade = 0
else if node.type == 0xC:        grade = 2         # ZFS special-case
else if node.type in {3, 10, 0xB}:                  # NTFS / ReFS / Btrfs
    (deep validation path — device + fixer-aware)
else:                            generic path (FUN_1403895c0/400, tree ops)
grade adjustment: device.kind ∈ {1, 4} → offset −2
set grade via FUN_140089630(node, grade)
```
Grades observed at runtime: 0 = poor/none, 2 = high (the "Your files are highly
recoverable" verdict string sits at 1072691 in the same UI family). The per-selection
re-grading telemetry seen in the results-phase captures is this engine re-running
per selected node. `ICheckRecoverable` (vftables at 438476/439200) is the pluggable
checker interface [interface CODE; verdict mapping INFERRED from UI strings + grades].

## 3. CRecoveryMgr — the recovery orchestrator surface [CODE]

- Multiple-inheritance object (three vftable slots at ctor: 354280-354282).
- `doCancelRecovery` (trace @354502) — cancel path with checkpoint line 0xBF.
- `ExportThread` (traces @354990-355155) — the export loop with
  `P[%04d]:T[%04d] run to %s:%d` progress checkpoints, `initDataSource` recovery-type
  analysis (`RecoveryCnt`/`RecoveryFileSize` totals) — full decode already in
  `architecture/04-recovery-workflow.md` §export; this adds the trace-name anchors.
- The Preview telemetry family emanates from the same controller:
  `Preview_Click_Recover{,_Nas,_Linux,_SD}` (216826-216841) — per-destination
  click analytics (local/NAS/Linux/SD variants of the recover button).

## 4. VAPreviewListener — the preview socket protocol [CODE]

The preview panel streams thumbnails from a **local-socket peer** (the media
preview agent; `EaseUS_MediaGraph`-family per the exclusion note, but the PROTOCOL
is DRWUI-side and recovery-critical):

**Request `SyncWait4DataBack` (654520):**
```
if socket == -1: wait connect-event (100 ms)
send(request)                                  # Ordinal_19 (ws2_32 send)
if send failed: log "failed send data to peer"
ResetEvent(dataReady); poll up to 100 × 100 ms (10 s) for the response
resp = shared buffer (+0x50)
if resp.requestId(+0xC) == req.requestId
   and payloadSize = resp.size(+0x4) − 0x25A in (0, 0x100000]:      # ≤ 1 MiB
       hMem = GlobalAlloc(GMEM_MOVEABLE, (size + 0xDA5) & ~0xFFF)   # page-rounded HGLOBAL
       copy resp[0x25A … 0x25A+size]  →  GlobalLock(hMem)           # 602-byte header stripped
       *out = hMem                                                   # DIB/clipboard-ready bitmap
```

**Receive `RecvThumbnailBmpData` (654595):**
```
recv(fd, buf, 0x25A)                          # fixed 602-byte MediaInfo header first
if short read: "failed recv MediaInfo" → 0xFFFFFFFF
total = header.size(+0x4); if not in (0, 0x100000]: → 0xFFFFFFFE
loop recv until total bytes accumulated       # streaming continuation
if incomplete after loop: → 0xFFFFFFFD
```

Protocol contract: **[602-byte media-info header][≤1 MiB BMP thumbnail]** with
request/response id correlation and 10-second bounded wait. The HGLOBAL handoff
means the UI consumes a standard Windows bitmap handle (paste/clipboard-compatible).
The listener runs its own `_LaunchPad` thread (655949) [CODE].

## 5. Cross-links

- Category/type-ID system: `SaveScan/ifileproperties-part1--ntfs-fat-exfat.md` §2
  (+0x60), `config-files/filtering-priority--config-layer.md`
- Dynamic ground truth (gauge, preview panel, re-grade telemetry):
  `UIUX/30-interaction-driver-ground-truth.md` + interaction-driver artifacts
- Export chain: `architecture/04-recovery-workflow.md`
- QML preview widgets + whitelist: UIUX family artifacts (Preview role wiring)

## 6. Confidence

100% [CODE] — all quoted strings, IDs, offsets, socket flow, and thread types are
verbatim from the corpus. Category-ID ↔ type-ID-space identity is [CENSUS]-corroborated
(.rsf field values); verdict-string ↔ grade-2 mapping is [INFERRED] (adjacent UI
strings + runtime observations, not a direct code link).
