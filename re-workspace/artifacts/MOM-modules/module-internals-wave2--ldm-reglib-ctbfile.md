# MOM module internals wave 2 — LDM database parser, RegLib hive engine, CTbFile

> Deepening the per-module family (`MOM-modules/`) with algorithm internals decoded
> this session. Corpora: `re-workspace/reversed/ghidra-mo/{LdmManager,RegLib,
> DeviceManager}_decompiled.c`. Vendor names from RTTI/trace strings throughout.

## 1. LdmManager — the dynamic-disk (LDM) database parser [CODE]

Source files (embedded trace paths): `i:\_drw_main\partitionrecovery\legacy_mod\
mod.ldmmanager\{diskmanageritemproc,dmrpdisk,dmrpmodule}.cpp` — the module is legacy
PartitionRecovery code wrapped as mod.ldmmanager.

### 1.1 VMDB parser (FUN_180072790)

```
if !read(dev, buf): "Disk%d failed read the VMDB" → 0xFFFFFFFE
if *(u32*)buf != 0x564D4442 ("VMDB"): "Cannot find VMDB signature" → 0xFFFFFFFD
BE-swap fields (FUN_18008b350 = per-width big-endian fixup: 2/4/8 bytes)
if version != 4.10 (u16@+0x12==4, u16@+0x14==10):
    "Expected VMDB version %d.%d, got %d.%d. Aborting." → 0xFFFFFFFC
disk_group_id = BE-swap(u64 @ +0x75)
status = BE-swap(u16 @ +0x10):
    1 = healthy; 0 or >3 → zeroed; else "Database is in status[%s] Aborting."
    (status-name table at "Error"+status*0x20)
vblk_size @+0x10, vblk_count @+0x08, vblk_offset @+0x0C:
    offset != 0x200 → warn "VBLKs start at offset 0x%04x"
    if (disk_size << 9) < vblk_count * vblk_size:
        "!!!VMDB and TOCBLOCK don't agree on the database size.!!!"
    store {count (default 0x80), offset, size} at controller +0xA0/+0xA8/+0xB0
"Disk%d Parsed VMDB successfully.."
```

### 1.2 TOCBLOCK parser (FUN_180072ad0) — three-location search

```
for candidate in [toc1 + 2, toc1, toc1 + 1]:            # LDM's three TOC slots
    read(dev, buf)
    if *(u64*)buf == 0x544F43424C4F434B ("TOCBLOCK"): break
else: "disk%d Cannot find TOCBLOCK sign" → 0xFFFFFFFD
if strncmp(toc+0x24, "config", 8) != 0:
    "TOCBLOCK's first bitmap is '%s', should be '%s'"   # MUST be "config"
if strncmp(toc+0x46, <expected>, 8) != 0:
    "TOCBLOCK's second bitmap is '%s', should be '%s'"  # MUST be "log"
BE-swap sizes at +0x2E/+0x36/+0x50/+0x58 (config/log bitmap sizes and offsets)
```

Plus the PRIVHEAD chain (same region): "PRIVHEAD size doesn't match real disk size",
"PRIVHEAD contains an invalid GUID" — the private-header validation before TOCBLOCK.
The module also classifies protective partitions while scanning:
`"found OEM partition in MBR,disk:%d,pos:0x%I64x"`, `"found MSR partition in GPT"`,
`"found ESP partition in GPT"` (dmrpmodule.cpp) and enumerates `\Device\Harddisk%d`.

This is a complete offline LDM implementation — the product can reconstruct
Windows dynamic-disk volumes (spanned/striped/mirrored/RAID-5) from raw disks
[CODE for the parse chain; volume-composition VBLK walk covered at family level in
`LdmManager.md`].

## 2. RegLib — the offline-registry engine (read AND write) [CODE]

RTTI names: `RegLib::Node`, `RegLib::Hive` (dynamic-cast chain in
`RegAPI::CloseHiveByVolume`), plus the mangled export
`RegAPI::OpenHiveByVolumeW(PCWSTR, CRegVolumeDevice*, HKEY**)`.

```
OpenHiveByVolumeW(path, volume_device, &hk):
    device.read-at-offset family (params 3/3) into a 0x1070-byte Hive object
    if *(u32*)(hive+0x20) != 0x66676572 ("regf"): return 5 (ERROR_ACCESS_DENIED)
    if checksum(header@+0x20) != *(u32*)(hive+0x21C): return 5
        # 0x20 = regf base block; 0x21C = base-block checksum at regf+0x1FC
    *out = hk; return 0
```

The library also **writes/repairs hives**: the "hbin" (0x6E696268) block
constructor stamps `_time64()` timestamps, computes 0x1000-granular bin sizes
(`((size >> 12) + 2) * 0x1000` with edge cases), and zeroes new bins — an hbin
allocator for hive modification, not just parsing. Consumers: CheckVersion module
(offline Windows-installation discovery) and the BitLocker chain (FVE key lookup
in offline SYSTEM hives) — see `bitlockerlib--bitlocker-implementation.md`.

## 3. CTbFile / ITbFile — the Todo-Backup image access layer (DeviceManager) [CODE]

`DeviceManager.mo` embeds the `CTbFile` class (ctor FUN_180047550) and the
`ITbFile` interface (vftable at FUN_1800485xx):

```
CTbFile layout: { vftable; qword -1 (image/index handle); dword 0; ptr 0; dword 1 }
```

CTbFile is the .tbi (Todo Backup image) file wrapper used by DeviceManager to
surface **backup images as storage devices** — when DRW/WinPE boots from or scans
a backup image, the device layer presents it through ITbFile so all the
filesystem analysers treat the image contents like a physical disk. This is the
mount point for the "recover from EaseUS Todo Backup image" capability
[CODE for the class/interface; the image-format internals live in the Todo Backup
product line — EUDCPEPM's bitmap/urgent-cache machinery is the kernel side,
`PartitionRecovery/eudcpepm-euedkepm--hook-framework-urgent-cache.md` §1.3].

## 4. Cross-links

- Module family map: `MOM-modules/*.md` + `mom-module-system--architecture.md`
- DeviceManager/Device modules: `MOM-modules/Device.md`,
  `PartitionRecovery/getdriverinfo--tb-module-decode.md`
- BitLocker consumer: `PartitionRecovery/bitlockerlib--bitlocker-implementation.md`
- LDM at family level: `MOM-modules/LdmManager.md` (this file adds the parser chain)
- Raw evidence: corpus line refs in each section (LdmManager 59470-59660,
  RegLib 290-320 + 5400-5445, DeviceManager 48100-48560)

## 5. Confidence

100% [CODE] — every constant is verbatim (0x564D4442 VMDB, 4.10 version pair,
"config"/"log" bitmap names, 0x544F43424C4F434B TOCBLOCK, 0x66676572 regf,
checksum offset, hbin stamping). CTbFile's product-role sentence is [INFERRED]
from placement + naming; the class layout itself is CODE.
