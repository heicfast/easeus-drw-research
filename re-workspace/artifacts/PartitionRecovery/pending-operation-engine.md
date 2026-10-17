# The Pending-Operation Engine — Shared EPM (Partition Master) Core Inside DRW

> Binaries: ToolsModule.dll (17,876 fns), RecoveryModule.dll, CloneModule.dll, UILogic.dll,
> MainModule.dll — RTTI-verified class inventory; source tree `i:\_drw_main\partitionrecovery\epmlogic\`
> (EPM = EaseUS Partition Master). 1.17M lines decompiled in `re-workspace/reversed/ghidra-partition/`.

## Why a data-recovery product contains a partition manager

Recovering files is only half the job. Whole-disk recovery, "recover to a new disk",
bootable-media creation, and system-partition rescue all require REPARTITIONING, COPYING,
CONVERTING, and BOOT-REPAIRING — safely. DRW embeds the same operation engine that powers
EaseUS Partition Master (hence `epmlogic\` in the build tree, `EPMNtDrv` driver names,
`CBRSysPartProc` etc.). The engine is **transactional**: every user-visible action becomes a
"pending operation" that is composed, previewed, then applied — with undo semantics.

## Architecture (RTTI-verified)

```
Controller (validate + configure)   →   Operation (plan)   →   PendingOperation (execute/rollback)
        e.g. CChangeLetterController        CChangeLetterOperation      CChangeLetterPendingOperation
                    \____________________ COperationManager (queue+iterator) ____________________/
                                          CPendingOperationComposition (compose many ops)
                                          CPendingOperationCommon/Ex (base impl)
                                          CCreatePendingOperationDynamic (factory)
                                          CMoveResizePendingOperationDynamic (geometry-aware)
                                          CNullPendingOperation (no-op/placeholder)
                                          IControllerEx (extension interface)
```

## Complete operation vocabulary (ToolsModule RTTI)

| Family | Operations |
|---|---|
| Create/delete | CCreate, CDeletePartition, CDelAllPartition, CDiskRepartition |
| Layout | CMoveResize (+Dynamic), CSplitSpace, CAllocateSpace [sic "Alloacte" in code], CMergePartition, CPartAlign |
| Attributes | CChangeLetter, CPartitionLabel, CHide/CUnhide, CSetActive |
| Filesystem | CFormatPartition, CClusterSizeChange, CConvert2{Ntfs,Fat,Exfat}, CConvert2Dynamic (+ConvDM) |
| Disk tables | CInitToGPT, CInitToMBR, CRebuildMBR, CMBRGPTBcdProc (MBR↔GPT + BCD together) |
| Copy/clone | CCopyDisk{,Initialize,Finalize}, CCopyPartition (CloneModule: CCloneOperationController) |
| Destructive | CWipeData{Disk,Partition} |
| System/boot | CExtendBootPart, CBRSysPartProc, CBcdBootProc, CBcdEditProc, CBcdAccess, CBootExecute, CGenUEFISystemFile/CGenBIOSSystemFile (EFI/BIOS bootfile synthesis), CChangeBIOSReg |
| Storage special | CRepairRaid5 (RAID-5 rebuild!), CBitlockerTurnOff, CSmartRM, CCheckNTFSThead [sic] |
| Recovery-side (RecoveryModule) | CCopyDisk/CCopyPartition/CCreate/CDelete/CRepartition + CDiskPartInfo + CDevNotifyManager/Wnd |

## Shared "epmpublic" utilities (present in all four DLLs)

- `CAccessControlList`/`CAccessEntry`/`CFileDaclProc`/`CFileSecurityInfo` — NTFS security
  descriptors (DACL/SACL) preserved when files/partitions are copied — recovered files keep
  their original ACLs.
- `CBPIniParser` — boot-partition INI handling; `CConsoleProc` — console helpers.
- `CFileSecurityInfo` + `CArcAccess` — archive/EA access during copy.

## Recovery tie-ins (what DRW actually uses from this engine)

1. **Whole-disk recovery**: CDiskRepartitionPendingOperation + CCopyDisk* — lay out the
   target disk, then stream recovered content in (through the engine's devio, iso9660 —
   CloneModule sources devio.cpp/iso9660.cpp — and EPMNtDrv raw IO).
2. **Bootable media**: CloneModule's peandbcdproc/peandiniproc/preospeandbcdproc +
   CGenUEFISystemFile + CBcdEditProc build the WinPE media (mirrors EuPEMaker inside DRWUI).
3. **System rescue**: CExtendBootPart + CRebuildMBR + Fixup.mo (CEFIFirstBcd) after a
   system-partition recovery so the restored OS boots.
4. **BitLocker interplay**: CBitlockerTurnOffOperation + bitlockerhelp.mo + BitLockerLib.dll
   (pause/decrypt flows around recovery of encrypted volumes).
5. **RAID-5 repair**: CRepairRaid5Controller — reconstructs RAID-5 arrays (pairs with
   LdmManager.mo Dmrp* dynamic-disk parsing).

## Cross-links

- MOM host: `artifacts/PartitionRecovery/mom-module-system--architecture.md`
- Module map: `artifacts/PartitionRecovery/mo-module-map.md`
- Driver IO: `artifacts/PartitionRecovery/eprdtdrv-sys--driver-internals.md`
- WinPE: `architecture/03-winpe-boot-environment.md`
- Recovery workflow: `architecture/04-recovery-workflow.md`
- Raw evidence: `re-workspace/reversed/ghidra-partition/` (19 DLLs), RTTI JSON

## Confidence

All class names RTTI-ground-truth (typo "Alloacte" preserved as evidence of authenticity).
Composition semantics (Controller→Operation→PendingOperation) evident from class triads +
COperationManager/PendingOperationComposition. Usage scenarios cross-referenced with DRWUI
flows (RTTI windows/threads) and CloneModule source-file names.
