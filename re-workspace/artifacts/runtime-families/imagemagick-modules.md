# Runtime Family: ImageMagick delegate modules (EUFileRepair)

**Pattern**: `^IM_MOD_RL_.*\.dll$`  
**Shipped copies**: 7 across the tree  
**Role**: ImageMagick modular delegates — each format codec is a separate DLL loaded at runtime by the repair pipeline's ImageMagick usage.

## Shipped copies (all locations)

- `EUFileRepair/IM_MOD_RL_heic_.dll`
- `EUFileRepair/IM_MOD_RL_jpeg_.dll`
- `EUFileRepair/IM_MOD_RL_png_.dll`
- `EUFileRepair/IM_MOD_RL_psd_.dll`
- `EUFileRepair/IM_MOD_RL_svg_.dll`
- `EUFileRepair/IM_MOD_RL_tiff_.dll`
- `EUFileRepair/IM_MOD_RL_webp_.dll`

## Consumer map (binaries importing this family, from PE import tables)

No PE-import consumers found in inventoried binaries — loaded dynamically (LoadLibrary) or consumed only by external processes. (Cross-check: the consumer may be the runtime-downloaded connect.exe, or loading is late-bound.)

## Family members

- IM_MOD_RL_png_.dll, IM_MOD_RL_svg_.dll (+others in EUFileRepair) — per-format encode/decode delegates

## Cross-links

- Per-binary artifacts: `per-binary/` family; scan/repair architecture docs in `architecture/`
