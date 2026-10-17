# DRWUI Thread Architecture — the 45-Named-Thread Census and Concurrency Map

**Binary**: DRWUI.exe — thread-suffix symbol extraction from the 2.38M-line decompilation (45 `*Thread` names + pool + mutexes) + 45 thread-creation call sites
**Evidence**: string census (trace/class names embedded in binary), CreateThread/_beginthreadex site count, prior thread-related decodes (worklog, DRWUI architecture artifact)
**Role**: The concurrency map behind the UI — every worker thread the main product spins up, grouped by subsystem, with the synchronization objects that guard them.

---

## 1. The complete named-thread census (45 symbols, verbatim)

### Scan & results-tree workers
| Thread | Decoded role |
|---|---|
| `CStopScanThread` | scan cancellation worker (cooperative stop of the engine chain) |
| `CCheckNodeThread` / `CCheckNodesThread` | per-node / batched tree-checkbox workers (selection in the results tree walks nodes off-thread) |
| `CSelNodeThread` / `CUnCheckAllFileNodeThread` | selection + clear-all workers (large trees: uncheck-all is async) |
| `CSortNodeThread` | results-tree sort worker |
| `CSetClassifyThread` / `CSetFilterThread` | **the classify/filter appliers** — Type-tree rebuild and filter-criteria application run off-thread (config layer: filtering-priority artifact) |
| `CheckAnsyncToListThread` | async list-attachment of checked nodes |
| `CEnumPartitionThread` / `CheckPartitionThread` | partition enumeration/validation (device discovery phase) |
| `CGetListThumbnailThread` | thumbnail batch fetcher (preview pipeline) |

### Recovery & session
| Thread | Role |
|---|---|
| `EndRecoverThread` | recovery finalization (post-export bookkeeping, "Recover" completion flow) |
| `SaveRestoreThread` | SaveScan/session persistence worker (record-4 writer runs off-thread — matches the progress-object decode) |
| `CGoHomeThread` / `RepidGoThread` / `CNavigateThread` | view-manager navigation workers (page transitions kept responsive) |

### Scenario connectors (NAS/Linux/PE/Cloud/BitLocker/WeChat)
| Thread | Role |
|---|---|
| `CNasConnectThread` / `CNasCancelConnectThread` / `CNasDownloadConnectZipThread` | NAS agent connect + cancel + **connect.zip download** (the runtime-downloaded SSH client — doc-3 finding) |
| `CLinuxConnectThread` / `CLinuxCancelConnectThread` / `CLinuxDownloadConnectZipThread` | the Linux-recovery variant of the same triple (same code path, Linux target) |
| `CSBackupDownloadConnectZipThread` | the third sibling — session-backup variant of the agent downloader |
| `CPECreateThread` / `CPEGetInfoThread` | emergency-media creation (PE_Tools flow) + media info |
| `CCloudLogginThread` / `LoginThread` | cloud login flows |
| `BitlockerUnlockThread` | BitLocker unlock (pairs with DRWService pipe + BitLockerLib) |
| `CWeChatThread` | WeChat recovery connector (ApowersoftSDK link from earlier trace decode) |

### Repair & preview
| Thread | Role |
|---|---|
| `FileRepairThread` / `FileRepairAddThread` / `FileRepairSaveThread` | repair queue: add/save/execute stages as separate workers |
| `CPDFRepairGetPixmapThread` | PDF repair preview rasterizer |

### App lifecycle & infra
| Thread | Role |
|---|---|
| `InitThread` | startup worker (device enumeration behind the CStartWindow splash — the ground-truth "Reading the disk information" phase) |
| `CheckUpdateThread` / `CheckUpgrade` family | update checks |
| `MainWndExitThread` | shutdown sequence (clean exit of engines + threads) |
| `HolidayResDownloadThread` | **holiday skin assets downloader** (seasonal UI packs fetched at runtime) |
| `QSendEmailThread` | email send worker (feedback/sendlog flows) |
| `threadMakeDump` | crash-dump generation in-process (DRWReport handoff prep) |
| `CommonThreadPoolMgr` | **the shared thread pool** — general-purpose work-stealing pool the one-off threads defer to |
| `DRWRAWReadOver_ThreadImg` / `DRWUIWriteOver_ThreadImg` / `Mutex_ThreadImg` / `ShareMemory_ThreadImg` | the **shared-log-image handshake pair + mutex + shared-memory object** — DRWUI's side of the 2MB log buffer protocol with DRWLoader (DRWLoader flushes every 5s — launcher artifact) |

## 2. Architecture reading

1. **UI-thread purity**: every non-trivial operation (sort/filter/classify/select/thumbnail/navigation) is off-thread — the Qt event loop stays responsive; the browse-while-scanning behavior (ground-truth v5) is a direct consequence.
2. **Triple-connector pattern**: NAS/Linux/SBackup share one connector design (connect/cancel/download-agent) — the codebase factors remote-target recovery identically across transports.
3. **The `_ThreadImg` quartet** confirms the loader↔UI log protocol runs through named mutex + shared memory with read/write completion events — the runtime counterpart of the DRWLoader 5s flush loop.
4. **45 creation sites vs 40 named classes** — a few anonymous workers remain (Qt-internal + pool submissions); CommonThreadPoolMgr absorbs short tasks.

## 3. Cross-links

- DRWUI master architecture: `DRWUI-exe--main-ui-architecture.md` (44-thread earlier census — this artifact refines to named roles)
- Loader log protocol: `DRW-exe--launcher.md`; splash-phase ground truth: `UIUX/dynamic-ground-truth--splash-captured.md`
- Scenario threads: `UIUX/15-scenario-flows-nas-bitlocker-linux-pe.md`; repair: `architecture/06-repair-chain.md`
- Thumbnail/preview: `UIUX/10-preview-subsystem.md` + `18-preview-architecture.md`
