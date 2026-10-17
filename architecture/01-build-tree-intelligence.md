# 01 — Build Tree Intelligence (PDB Path Analysis)

**Source**: `re-workspace/pdb_paths.json` (extracted from RSDS debug directory of 507 binaries)
**Method**: Regex extraction of `RSDS` CodeView records — these contain the original build-machine paths. Hard evidence, zero speculation.
**Confidence**: 100% (strings physically present in binaries)

## 1. The Internal Build Universe

EaseUS Data Recovery Wizard is built from **at least 15 distinct source projects** across many developer build machines (drives C: through T:). The paths below are literal `RSDS` records recovered from the shipped binaries.

### 1.1 Core Product — "DRWIntelligentScan" (the real product name)
| Path | Binaries | Key files |
|---|---|---|
| `E:\DRW\_drw_main\DRWIntelligentScan\bin\Release\x64` | **35** | DRWUI.exe, DRWService.exe, ALL *SearchDLL.dll, EURawImg.exe, EUUnZip.exe, PE_Tools.dll, archive.dll, cloud_session.dll, PEtools.xml... |
| `E:\DRW\_drw_main\DRWIntelligentScan\DRWLoader\x64\Release` | 2 | DRW.exe (= "DRWLoader", the crash-monitoring launcher) |
| `E:\AWork\_drw_main\DRWIntelligentScan\bin\Release\x64` | 2 | EUOfficeViewer.exe |
| `E:\AWork\_drw_main\SetupUE\Release` | 1 | SetupUE.exe (installer, x86) |
| `E:\AWork\DRW_VS17_Main\DRWIntelligentScan\DRWReport\Release` | 2 | DRWReport.exe (crash reporter) |
| `D:\WorkSpace\_drw_main\DRWIntelligentScan\bin\Release\VideoViewer` | 2 | EaseUS_VideoViewer.exe, EaseUS_MediaGraph.dll |
| `D:\drw\DRW_MAIN\DRWIntelligentScan\bin\Release` | 2 | EUImageEnhance.dll |
| `e:\AWork\DRW16.2.1-QT\DRWIntelligentScan\bin\Release\ShareBin` | 4 | EUHwpViewer.exe, EUHwpFilePathCheckerModule.dll |
| `D:\WorkSpace\_drw_main_code\DRWIntelligentScan\bin\Release\Win32` | 2 | EUImgRepair.exe |
| `H:\DRW15.8AB3\DRWIntelligentScan\bin\Release\x64` | 2 | EuOfficeTools.exe |
| `e:/AWork/DRW15.8AB3/sharelib/EuDownloadPublicLibrary/x86/exe` | 2 | EuDownloader.exe |
| `i:/_drw_main_/RepairHost/Release` | 2 | EuRepairHost.exe |

**Naming note**: "_drw_main" / "DRW_MAIN" / "DRW_VS17_Main" are branches of the same monorepo-style product tree; version-suffixed folders (DRW15.8AB3, DRW16.2.1-QT) show long-lived version branches. The product's internal name is **DRWIntelligentScan** — "Intelligent Scan" is the marketing term EaseUS uses for the deep scan engine.

### 1.2 Kernel Drivers — "WinDiskAccessDriver" + EPM sharelib
| Path | Binaries | Files |
|---|---|---|
| `d:/project_application/_epm_main_/mod.windiskaccessdriver/windiskaccessdriver/objfre_wlh_amd64/amd64` | 4 | **eprdtdrv.sys, eprdtdrv_win7older.sys, ebrntdrv.sys, epmdkdrv.sys** |
| `d:/epm/_epm_main/sharelib/dc/Output/sys/fre_wlh_amd64/amd64` | 2 | **EUDCPEPM.sys, EUEDKEPM.sys** |
| `D:/Project_Application/_EPM_Main_/mod.WinDiskAccessDriverSetup/setupempdrv03/x64/Release` | 1 | setupdrvx64.exe (driver installer) |

**Decoding**:
- `objfre_wlh_amd64` = WDK build: **fre**e build, **wlh** = Windows Longhorn (Vista)+ target, amd64. This is standard WDK build-dir nomenclature → confirms WDK-compiled signed kernel drivers.
- Driver naming (recovered from names + context):
  - `eprdtdrv.sys` = **E**ase**US** **P**artition-**R**ecovery **D**isk... or **RDT** = Raw Disk Transfer? — role determined by RE (see driver artifacts). Installed by PartitionRecovery/setupdrvx64.exe.
  - `ebrntdrv.sys` = E(u) **BR** **NT** driver (Boot Recovery NT driver?) — deployed into WinPE system32.
  - `epmdkdrv.sys` = **EPM** **DK** driver (disk?) — WinPE deployed.
  - `EUDCPEPM.sys` / `EUEDKEPM.sys` = EPM product drivers ("dc" = disk-copy sharelib; EDK = EaseUS Deploy Kit?). 72KB + 19KB.
- The drivers are **shared with EaseUS Partition Master (EPM)** — path `_epm_main_` proves the DRW and EPM products share one driver codebase ("mod.windiskaccessdriver" module).

### 1.3 Partition Recovery Engine (C++ module system)
| Path | Binaries |
|---|---|
| `I:\_drw_main\PartitionRecovery\Output\Release_x64` | **42** — ALL `.mo` files + PartitionRecovery.dll, MainModule.dll, RecoveryModule.dll, ToolsModule.dll, UILogic.dll, RawFixer.dll, CloneModule.dll, Win32Bcd.dll, AutoUpdate.dll, Logger.dll, peformat.dll, GetDriverInfo.dll, WinChkdsk.exe, Burn.dll, eprdtdrv.sys, libvmdk.dll |
| `T:/source/repos/_EPM_main/legacy_mod/BitLockerLib/out/bin/x64-release` | BitLockerLib.dll |
| `J:/test/win/libvmdk/vs2017/Release/x64` | libvmdk.dll (VMDK parser, zlib.dll) |

**Key insight**: `.mo` files are **PE DLLs with a custom extension** ("Module Object") — a plugin architecture for the PartitionRecovery engine. Their PDB confirms they compile from `I:\_drw_main\PartitionRecovery\` — filesystem analysers (NTFS/FAT/exFAT/Ext/ReFS), LDM manager, boot modules, etc.

### 1.4 File Repair Product Line — "Fixo"
| Path | Binaries |
|---|---|
| `D:/Fixo/01_Project/00_Source/_main/UI/bin/Release/Win32` | 9 — EUAdobeRepair.exe, EUArchiveRepair.exe, EUImgRepairFile.exe, EuOfficeRepairFile.exe, EuPDFRepairFile.exe, EUZipRepairFile.exe, EURarRepairFile.exe, EUVideoRepairFile.exe |
| `D:/WorkSpace/fix_main_code/UI/bin/Release/Win32` | VideoFileRepairer.exe |

"Fixo" is the internal codename for EaseUS Fixo (the standalone file-repair product) — DRW embeds its engines. All Win32 (x86) — they run out-of-process from the x64 UI.

### 1.5 Supporting Products
| Path | Product |
|---|---|
| `H:/VS_SPACE/es_icloud_recovery/build/Release` | EuICloudRecovery.dll (7.2MB, 7064 exports — static runtime, likely static-linked framework) |
| `F:/drw_backup/Output/Release_Win32` | DiskHealth.exe (Qt/QML app — full Qt5Quick stack in diskhealth/) |
| `H:/AWork/UserInfoCollect/x64/Release` | AliyunWrap.dll / AliyunWrapExe.exe / InfoForSetup.exe (user info collection, Alibaba Cloud OSS) |
| `F:/share_lib/99_PublicLibrary/_HistoryVersion/FireBaseOnlineConfig/1.1/x64/Release` | firebasefetch.exe, firebaseonlineconfig.dll (Firebase remote config!) |
| `E:/AWork/share_lib/99_PublicLibrary/userrate/source/Output/Release` | EuUserRate.dll |
| `e:/AWork/share_lib/99_PublicLibrary/EUSetWebCtrlIEVersion/x86` | EUinApp.exe (in-app web viewer, IE version control) |
| `d:/svn/Tools/SendDmpWithAliyun/x64/Release` | send_dmp_with_aliyun.exe (crash dump uploader to Aliyun OSS) |
| `E:/AWork/DRW_MAIN/EuSendMessage_toInstaller/Release` | EuSendMessage.exe |

### 1.6 Third-Party Stack (exact build provenance)
- Qt 5.15.2 official binaries (`C:/Users/qt/work/qt/...`) — widgets + QML/Quick (only for DiskHealth)
- OpenSSL: 1.0.1u, 1.0.2o, 1.1.0h, 3.3.2 — **four different versions across the product** (dependency drift)
- pdfium (`D:/pdfium/pdfium/output`)
- ImageMagick CORE_RL_* (EUFileRepair)
- libzmq 4.3.5, libssh2, zlib (vcpkg builds)
- HEIF/x265/de265 (`C:/heic/vcpkg/...`) — HEIC support
- VC runtimes 9.0 (VS2008!) through 14.0 (VS2015/17) — mixed CRT generations in one install tree

## 2. Version Timeline Evidence (build timestamps from PE headers)
- unins000.exe: 2016 (Inno Setup uninstaller, VS2008-era)
- EuRepairHost.exe: 2021-06 (Fixo repair host)
- firebasefetch.exe: 2024-05
- DRWReport.exe: 2023-07
- DRW.exe / DRWUI.exe / DRWService.exe: **2026-10** (ts=1791869382 ≈ 2026-10-13) — fresh main build
- EuICloudRecovery.dll: 2026-06

The install tree mixes binaries built over ~10 years — typical for a long-lived product with layered legacy components.

## 3. What This Tells Us About Architecture (to be confirmed by decompilation)
1. DRW.exe (DRWLoader) is a thin watchdog/launcher — not the app.
2. DRWUI.exe (30MB, 3610 imports, 9 exports) is the Qt5 main application.
3. Per-filesystem scan engines are separate DLLs with a uniform factory export surface (`EUCreate<FS>Searcher` + `EUCreate<FS>QuickSearcher`) → plugin pattern, runtime-loaded by DRWUI or DRWService.
4. PartitionRecovery is a second engine (recovery of lost partitions) with its own .mo plugin modules — shared ancestry with EaseUS Partition Master (EPM).
5. Kernel drivers provide raw disk access (bypassing OS filesystem locks) — installed on demand by setupdrvx64.exe, also preloaded in the WinPE environment (BUILDPE).
6. File repair (Fixo) runs as separate x86 processes orchestrated by DRWUI (likely via EuRepairHost.exe).
7. Cloud/analytics: Firebase remote config + Aliyun OSS uploaders.
