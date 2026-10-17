# Runtime Family: Qt 5 Application Framework (core stack)

**Pattern**: `^(Qt5Core|Qt5Gui|Qt5Widgets|Qt5Network|Qt5Svg|Qt5WinExtras|Qt5Xml)\.dll$`  
**Shipped copies**: 18 across the tree  
**Role**: The Qt 5 main-window framework powering DRWUI.exe (and shipped duplicated into BUILDPE + diskhealth).

## Shipped copies (all locations)

- `BUILDPE/EaseUS-x64/Qt5Core.dll`
- `BUILDPE/EaseUS-x64/Qt5Gui.dll`
- `BUILDPE/EaseUS-x64/Qt5Network.dll`
- `BUILDPE/EaseUS-x64/Qt5Svg.dll`
- `BUILDPE/EaseUS-x64/Qt5Widgets.dll`
- `BUILDPE/EaseUS-x64/Qt5WinExtras.dll`
- `PartitionRecovery/Qt5Core.dll`
- `Qt5Core.dll`
- `Qt5Gui.dll`
- `Qt5Network.dll`
- `Qt5Svg.dll`
- `Qt5Widgets.dll`
- `Qt5WinExtras.dll`
- `diskhealth/Qt5Core.dll`
- `diskhealth/Qt5Gui.dll`
- `diskhealth/Qt5Network.dll`
- `diskhealth/Qt5Svg.dll`
- `diskhealth/Qt5Widgets.dll`

## Consumer map (binaries importing this family, from PE import tables)

**Core-tree consumers** (root + PartitionRecovery + repair + service):
- `DRWUI.exe`
- `PartitionRecovery/CloneModule.dll`
- `PartitionRecovery/MainModule.dll`
- `PartitionRecovery/PartitionRecovery.dll`
- `PartitionRecovery/RecoveryModule.dll`
- `PartitionRecovery/ToolsModule.dll`
- `PartitionRecovery/UILogic.dll`
- `Qt5Gui.dll`
- `Qt5Network.dll`
- `Qt5Svg.dll`
- `Qt5Widgets.dll`
- `Qt5WinExtras.dll`
- `iconengines/qsvgicon.dll`
- `imageformats/qgif.dll`
- `imageformats/qjpeg.dll`
- `imageformats/qsvg.dll`
- `platforms/qminimal.dll`
- `platforms/qoffscreen.dll`
- `platforms/qwindows.dll`
- `styles/qwindowsvistastyle.dll`

**Other-tree consumers** (diskhealth/PE/video/FileRepair sub-trees):
- `BUILDPE/EaseUS-x64/DRWUI.exe`
- `BUILDPE/EaseUS-x64/Qt5Gui.dll`
- `BUILDPE/EaseUS-x64/Qt5Network.dll`
- `BUILDPE/EaseUS-x64/Qt5Svg.dll`
- `BUILDPE/EaseUS-x64/Qt5Widgets.dll`
- `BUILDPE/EaseUS-x64/Qt5WinExtras.dll`
- `BUILDPE/EaseUS-x64/iconengines/qsvgicon.dll`
- `BUILDPE/EaseUS-x64/imageformats/qgif.dll`
- `BUILDPE/EaseUS-x64/imageformats/qjpeg.dll`
- `BUILDPE/EaseUS-x64/imageformats/qsvg.dll`
- `BUILDPE/EaseUS-x64/platforms/qminimal.dll`
- `BUILDPE/EaseUS-x64/platforms/qoffscreen.dll`
- `BUILDPE/EaseUS-x64/platforms/qwindows.dll`
- `diskhealth/DiskHealth.exe`
- `diskhealth/Qt/labs/settings/qmlsettingsplugin.dll`
- `diskhealth/Qt5Gui.dll`
- `diskhealth/Qt5Network.dll`
- `diskhealth/Qt5Qml.dll`
- `diskhealth/Qt5QmlModels.dll`
- `diskhealth/Qt5QmlWorkerScript.dll`
- `diskhealth/Qt5Quick.dll`
- `diskhealth/Qt5QuickControls2.dll`
- `diskhealth/Qt5QuickShapes.dll`
- `diskhealth/Qt5QuickTemplates2.dll`
- `diskhealth/Qt5RemoteObjects.dll`
- `diskhealth/Qt5Svg.dll`
- `diskhealth/Qt5Widgets.dll`
- `diskhealth/QtGraphicalEffects/private/qtgraphicaleffectsprivate.dll`
- `diskhealth/QtGraphicalEffects/qtgraphicaleffectsplugin.dll`
- `diskhealth/QtQml/Models.2/modelsplugin.dll`

## Family members

- Qt5Core.dll (event loop, signals/slots, i18n, QSettings)
- Qt5Gui.dll (raster/OpenGL painting, window integration, QSS styling)
- Qt5Widgets.dll (QMainWindow/QTreeView/QStackedWidget — the entire results UI)
- Qt5Network.dll (QNetworkAccessManager — firebase/remote-config/telemetry HTTP)
- Qt5Svg.dll + iconengines/qsvgicon.dll (SVG icons via RCC resources)
- Qt5WinExtras.dll (taskbar progress/jump-list integration for scan progress)

## Cross-links

- Per-binary artifacts: `per-binary/` family; scan/repair architecture docs in `architecture/`
