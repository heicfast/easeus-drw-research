# Runtime Family: Qt Quick 2 / QML engine (DiskHealth app only)

**Pattern**: `^(Qt5Qml|Qt5Quick|Qt5QuickTemplates2|Qt5QuickControls2|Qt5QuickShapes|Qt5QmlModels|Qt5RemoteObjects)\.dll$`  
**Shipped copies**: 7 across the tree  
**Role**: The QML engine stack used exclusively by diskhealth/DiskHealth.exe — DRWUI is widgets-only; DiskHealth is the QML-based companion.

## Shipped copies (all locations)

- `diskhealth/Qt5Qml.dll`
- `diskhealth/Qt5QmlModels.dll`
- `diskhealth/Qt5Quick.dll`
- `diskhealth/Qt5QuickControls2.dll`
- `diskhealth/Qt5QuickShapes.dll`
- `diskhealth/Qt5QuickTemplates2.dll`
- `diskhealth/Qt5RemoteObjects.dll`

## Consumer map (binaries importing this family, from PE import tables)

No PE-import consumers found in inventoried binaries — loaded dynamically (LoadLibrary) or consumed only by external processes. (Cross-check: the consumer may be the runtime-downloaded connect.exe, or loading is late-bound.)

## Family members

- Qt5Qml/Qt5Quick — QML scene engine (SMART dashboard UI)
- QtQuick/Controls.2 style plugins (Imagine/Material/Fusion/Universal) — theme selection
- Qt5RemoteObjects — cross-process model sync (DiskInfo service <-> UI)

## Cross-links

- Per-binary artifacts: `per-binary/` family; scan/repair architecture docs in `architecture/`
