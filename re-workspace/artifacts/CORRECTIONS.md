# CORRECTIONS — RE-output errata fed back by the core_recovery parity sessions

> Cross-verification errata: claims made in these artifacts that failed
> re-verification against the decompiled trees when the core_recovery
> parity-refactor sessions re-checked them line-by-line. Each entry cites the
> artifact, the correction, and the evidence. The artifacts remain the ground
> truth for everything NOT listed here; these rows supersede their originals.

| # | Artifact / claim | Correction | Evidence |
|---|---|---|---|
| 1 | NTFS deep-dive: "resident $DATA cap 0xFFF" | Not a resident-size cap — the constant belongs to an MSVC `std::string` destructor sequence, not the attribute parser. There is no 0xFFF resident gate in the engine. | core AUDIT-NTFS NTFS-4 (three-agent re-verification); decompile context re-read |
| 2 | Two artifacts label FUN_180041970 as the in-use test | FUN_180041970 is the BASE-RECORD test (base_record != 0), not the in-use bit test. Extension-record skip logic keys on it. | core AUDIT-NTFS (prior-claims list #6); W2-7 fix cites the corrected reading |
| 3 | FAT algorithms doc: chain walker implied BAD-cluster handling parity | Og follows FAT12 BAD cluster 4087 RAW (garbage-tolerant continuation) — no canonicalization at the 12-bit boundary. (Core deliberately canonicalizes; registered delta, not an og-behavior claim.) | core AUDIT-FAT FAT-4; IFATTable decompile sites |
| 4 | ext4 deep-dive §2: backup-superblock positions (8193, 32768, …) | No such constants exist in the EXT4SearchDLL decompile — the backup-SB claim is an overreach from kernel knowledge, not engine evidence. Treat as UNVERIFIED for the engine. | core AUDIT-LINUX-FS UNVERIFIED-1 |
| 5 | FileFilter.xml census: 8 categories / 1,489 extensions; RawConfig.ini 37 toggles | Recount: 8 categories / **1,481** extensions; RawConfig.ini ships **34** toggles. | core PARITY-REFACTOR-PLAN §1 #10 (mechanical recount) |
| 6 | ext4 deep-dive: journal salvage implies commit/descriptor semantics | EXT4SearchDLL gates ONLY on jsb magic 0xC03B3998 + blocktype {3,4}; every block in [s_first, s_maxlen) feeds the directory parser — no commit/revoke handling exists engine-side. | core AUDIT-LINUX-FS E-2 (FUN_18000e5b0 + FUN_18000e890, :12159–12368) |
| 7 | NTFS artifacts: viability gate boundary | Og is strict `0x3ff < size` (Dec 21208) — files of exactly 1023 bytes take the fast-path with no bitmap check. Any `>=` reading is wrong. | core AUDIT-NTFS NTFS-1 |
| 8 | Btrfs deep-dive: implied chunk-tree-uuid validation | Og does NO chunk-tree-uuid validation (name memcmps only); the kernel SB field at +0x60 is `log_root`-adjacent, not a uuid source. | core AUDIT-LINUX-FS BTR-2 re-pin |

*Fed back by the core_recovery deep-parity refactor session (W5 docs wave).
Channel rule: a correction requires the same evidence bar as an original
claim — a decompile cite or a mechanical recount — and the artifact's owning
session should fold each row into the artifact text when next touched.*
| 9 | userdata-remoteconfig--signature-and-flags.md §1 ("custom RAW signatures (user-extensible **carving**)"; the file behind "add custom file type") + rawsearch-carving--deep-dive.md :61 area ("consulted alongside raw_signs") | EUUserData never reaches the RAW carving engine. Sole consumer: DRWUI's `CHKRepairFileSign` (RTTI `.?AVCHKRepairFileSign@@` / `.?AVCHKRepair@@` / `.?AVICHKRepairObject@@` / `.?AVCHKRepairAdapterMgr@@`) — read at `%s/EUUserData` (DRWUI :1005387), parsed (:1005497+, "signs" :1005818), and consulted by the MatchedFile/NotMatchedFile file-signature checker (:721520-721680) for the CHK repair chain. RAWSearchDLL has zero EUUserData references (rg over 80,614 lines). `GetRawUserInfoMap` = the singleton's per-scan carve-statistics map (insert-or-increment from the ~70 analyser detection paths, FUN_18000ed00 :11376-11525; cleared at every searcher init FUN_18000beb0 :9044-9051; read one-way post-scan by DRWUI's "Trigger_Raw"/"FileSystem" report builder :227538-:227625) — scan output, never scan input. | First-hand both-direction decode (insert side + consumer side), Agent 2 scan-engine session 2026-10-28; core_recovery CORPUS-ERRATA E-A/E-B + PARITY-DELTAS D-104 |
