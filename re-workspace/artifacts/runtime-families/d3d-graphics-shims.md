# Runtime Family: Direct3D/DXGI shims (PE-only)

**Pattern**: `^(d3d9|d3d11|d3d8thk|dxgi)\.dll$`  
**Shipped copies**: 4 across the tree  
**Role**: BUILDPE-only: WinPE's reduced graphics stack lacks full D3D; these shims let Qt's OpenGL scene-graph + video preview render. The live Windows install relies on the OS.

## Shipped copies (all locations)

- `BUILDPE/EaseUS-x64/d3d11.dll`
- `BUILDPE/EaseUS-x64/d3d8thk.dll`
- `BUILDPE/EaseUS-x64/d3d9.dll`
- `BUILDPE/EaseUS-x64/dxgi.dll`

## Consumer map (binaries importing this family, from PE import tables)

**Core-tree consumers** (root + PartitionRecovery + repair + service):
- `Qt5Gui.dll`

**Other-tree consumers** (diskhealth/PE/video/FileRepair sub-trees):
- `BUILDPE/EaseUS-x64/Qt5Gui.dll`
- `BUILDPE/EaseUS-x64/d3d11.dll`
- `BUILDPE/EaseUS-x64/d3d9.dll`
- `diskhealth/Qt5Gui.dll`
- `diskhealth/scenegraph/qsgd3d12backend.dll`

## Family members

- d3d9.dll (2MB — D3D9 + D3DX runtime)
- d3d11.dll + dxgi.dll (D3D11 modern path)
- d3d8thk.dll (legacy D3D8 thunk)

## Cross-links

- Per-binary artifacts: `per-binary/` family; scan/repair architecture docs in `architecture/`
