# EPMNtDrv Driver Trio — Byte-Level Diff Verification (eprdtdrv / ebrntdrv / epmdkdrv)

**Binaries**: `PartitionRecovery/eprdtdrv.sys` (27,728 B), `BUILDPE/x64/Windows/system32/ebrntdrv.sys` (27,272 B), `BUILDPE/x64/Windows/system32/epmdkdrv.sys` (27,272 B)
**Method**: SHA-256 compare, byte-range diff (`cmp -l` + range grouping), UTF-16 string census, pool-tag scan
**Role**: Verifies and REFINES the prior claim "eprdtdrv/ebrntdrv/epmdkdrv = the same EPMNtDrv" — the trio is **one source family built three times**, not three copies of one binary.

---

## 1. Hash and diff matrix (verified numbers)

| Pair | Bytes differing | Sizes |
|---|---|---|
| ebrntdrv vs epmdkdrv | **2,907** | equal (27,272) |
| ebrntdrv vs eprdtdrv | **9,703** in common range + **456 extra bytes** in eprdtdrv | eprdtdrv is 456 B larger |
| Hashes (SHA-256/16) | eprdtdrv `0f21a48ebc8e1077`, ebrntdrv `4370aae1ee1cdeab`, epmdkdrv `486f65c894d5f23c` | all distinct |

**Verdict**: three distinct compilations of one codebase. The earlier architecture-level claim (same EPMNtDrv project: same `\Device\Harddisk%u\Partition0` string set ×3, same pool-tag hits, same IRP/IOCTL contract) is CONFIRMED at family level; the binaries are NOT interchangeable copies.

## 2. Where the differences live (ebrntdrv ↔ epmdkdrv, decoded ranges)

| Offset region | Nature of difference |
|---|---|
| 0xF8–0xFA | PE **checksum** field (must differ — different bytes) |
| 0xFEA–0x199F (~2.3 KB) | **Code**: register-allocation variance (`mov rbp,rsi` vs `mov rbp,rdi` patterns: `H\x8b\xeaH\x85\xf6` vs `H\x8b\xf2H\x85\xed`), a small structural delta around 0x108B (epmdkdrv has an extra 5-byte branch block), and shifted displacement constants (`\x11\x01` vs `\x16\x01` = +5 offsets) |
| 0x3354, 0x4469, 0x56A8–0x6A84 | **Authenticode signature blocks** (certificate hashes differ per signed binary) |
| 0x3A58–0x3A88 | **Jump/dispatch table offsets** shifted by ~5 B (code-layout ripple from the 0x108B delta) |

Reading: epmdkdrv is a **recompiled variant** of ebrntdrv with one small code addition (~5 bytes at 0x108B — plausibly a service-name/device-naming branch) that shifted internal offsets; everything else is compiler register choice + per-binary signatures.

## 3. eprdtdrv vs the PE pair

9,703 differing bytes in the common range + 456 extra bytes (high-entropy tail — no new strings; likely a code appendix + padding + its own signature): eprdtdrv is the **live-Windows build** with additional functionality over the PE-edition builds (consistent with its deployment role: runtime-loaded by Device.mo on demand, while the PE builds start via the Boot File System group).

## 4. Corrected nomenclature for the corpus

- ✅ "EPMNtDrv family — same source project" (architecture artifact's claim stands)
- ❌ "identical binaries / copies" (refined: separate compilations — different builds, different signatures, eprdtdrv functionally extended)
- The naming map: `\Device\EPMNTDRV` base name shared; sub-device namespaces differ per deployment (`\\.\EPRDTDRV\d\p` consumer path documented in Device.mo decode)

## 5. Cross-links

- Driver architecture master: `architecture/02-kernel-driver-architecture.md` (§EPMNtDrv)
- eprdtdrv internals: `PartitionRecovery/eprdtdrv-sys--driver-internals.md`
- PE registration (Start types per binary): `WinPE/boot-config--winpeshl-autobat-regdrv.md` §3
