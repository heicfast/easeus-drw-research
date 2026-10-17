# The Vendor QA Logs (log/) — Complete Session Forensics: Build Identity, the .rsf Scan Session, Partition-Search Results, Tree-Builder Stages

**Files**: `og-codebase/log/DRWUI.log` (691 lines), `log/CalcPartition.log` (205), `log/DefaultLog.txt` (557), `log/DRWLog.log` (0 — empty), plus `EPMLOG.log`/`Eaolog.log`/`strutureReg.log` at tree root (companion artifact)
**Role**: The complete run-log record of the vendor's own QA night (2026-10-14/15) — the shipped build's identity, the exact scan that produced the .rsf samples, real partition-search output, and the tree-builder's stage machine — all in the vendor's own words.

---

## 1. Build identity (DRWUI.log line 2 — the fingerprint)

```
DRWUI [21.0.0.0_free easeus] build at[Oct 13 2026 13:33:43] [40504ccb1923e316c9c9a1ffb06907c8307930de]
COnlineConfigFirebase::init environment:abroad__free__easeus__21000__1013
```

- **Git commit of the shipped build: `40504ccb1923e316c9c9a1ffb06907c8307930de`**, built **Oct 13 2026 13:33:43** — one day before the QA night, one day after version.ini's `SetupBuildTime=1013` stamp ✓ (three-way consistency: binary build date ↔ version.ini ↔ log)
- The full environment string format: `market__edition__channel__build__setupdate` = `abroad__free__easeus__21000__1013`

## 2. The .rsf sample's scan session (DRWUI.log — this IS the sample's origin)

```
22:57:08  PE device name=ST500DM002-1BD142, F:, G:, H:, I:      ← vendor's Seagate 500GB
          PE device name=Generic-SD/MMC/MS PRO, E:               ← card reader
22:57:17  CameraDeviceManager: Insert Camera Device SD/MMC/MS PRO (size=62607327232) — type=12/13 notices
          nMaxRemovebleDiskSize=549755813888 (512GB threshold)
22:57:57  CScanMgr::doScan: "Scan drive:I, Partition type:3 (NTFS), Scan Desktop:0"
          CDoScanPartition::PushScanDevice / PushFolderFilter / DoScan
          Quick scan StartSector=705794048, TotalSector=270977023
          Deep scan StartSector=705794048 (same range)
22:58:01  OfficeTmp=D:\OfficeRepairTmp ; CDoScanPartition::ScanThread type=0
22:58:23  UpdateScanFinishedInfo (quick pass ~21s)
   ...15-minute session...
23:13:21  .rsf saved ("auto_Local Disk (I_)10_14_23_13_21")  ← record-2 timestamp, byte-exact
```

**Verified**: the shipped `auto_Local Disk (I_)…rsf` is the save of THIS logged scan (same drive, same night, timestamps interleaved). The vendor QA-scanned their own I: partition and shipped the session. Also visible: the camera/card flow (`CameraDeviceManager` — SD cards get camera-device classification), and the `bottomarea.cpp:838 nStatus=2 m_iScanType=1` trace with the **e:\drw\_drw_main\drwintelligentscan\qtdrwui\detailpage\** source path (build-drive E: for DRWUI — matching the PDB-path build tree).

## 3. CalcPartition.log — real partition-search output (PartitionRecoveryD)

Two search rounds (23:12 — the I:-disk scan; 00:43 — a 434M-sector disk, likely D:):
- Round 1: **15+ overlapping NTFS partition candidates** (StartSec 94680–361792, all ending at 270977016) with per-candidate file/folder counts (329 files on the 94680-start candidate — the real ghost partitions)
- Round 2: 6 candidates + **`AdjustPartitionInfoOrder`** resolution picking the final set (fileCount-ranked: the 2048-start with 16 files wins over 0-file ghosts)
- **This is the lost-partition search engine's real output format** — candidate generation → scoring by recoverable files → order adjustment → final set. Cross-checks the PartitionRecoveryD module decode.

## 4. DefaultLog.txt — the tree-builder stage machine (CDirectoryTreeBuilder)

```
GetSelPartitonAndSystemTree (223,364,468 → 223,364,531 items)
  → remove file system node (223,364,531)
  → FinishSearch → "prepare to create 3 new file system tree"      ← THE 3-BRANCH TREE!
  → CreateNewFileSystemTree (root 223,364,531)
  → BuildTree cycles: "show file system node" ⇄ "build raw file node"  (incremental batches ~1000 items)
  → notify UI to remove system node
```

- **"create 3 new file system tree"** — the vendor log itself names the THREE-branch architecture (existing + File Path Lost + Reconstructed) that the .rsf decode and the live screenshot independently verified — three evidence channels now agree
- The 223M item counts: the builder processed a 223-million-item cumulative workload (stress-scale QA disk) in ~1000-item incremental batches (show-node/build-raw cycles) — the incremental tree-construction architecture (matches the browse-while-scanning behavior seen live)
- `CDirectoryTreeBuilder` — the vendor's own name for the IDirecotryTreeBuilder-family decode (typo'd in the binary's RTTI, correct in the logs)

## 5. What the empty DRWLog.log tells us

The launcher-side log (DRWLoader's 2MB shared buffer sink) is **empty** — the loader never flushed in this session (no crash events): the QA session ran clean to completion.

## 6. Cross-links

- The .rsf that this session produced: `SaveScan/rsf-format--scan-session.md` (records byte-exact)
- Root-tree logs (Eaolog/EPMLOG/strutureReg): `config-files/vendor-logs--qa-session-forensics.md`
- Partition-search engine: `MOM-modules/PartitionRecoveryD.md` + `architecture/05-scan-engine-architecture.md`
- Tree builder (static): `architecture/05-uiux-architecture.md` + moc tooling artifact; (dynamic): `UIUX/dynamic-ground-truth--scan-phase-captured.md` (3-branch live)
- Build-tree intelligence (E:/I:/D: drives): `architecture/01-build-tree-intelligence.md` — this artifact adds the **git commit hash** to that map
