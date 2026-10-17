# EUHwpFilePathCheckerModule.dll — HWP-Viewer Path Sanitizer (IsAccessiblePath)

**Binary**: EUHwpFilePathCheckerModule.dll — 29,099-line decompilation (ghidra-repair), single export
**Evidence**: export table (1 function), import census (`GetUserObjectInformationA`/`GetProcessWindowStation`/`MessageBoxA`/`SystemFunction036`), UTF-16 string set, consumer scan (zero PE importers)
**Role**: A tiny security gate for the Korean-document (HWP/Hangul) viewer chain — resolves as the `EUHwpViewer`'s path-validation module (loaded dynamically, hence no import-table consumers).

---

## 1. What it is

Single-export DLL: **`FilePathCheckerModuleExample.dll!IsAccessiblePath`** — the internal module name preserves its example/scaffold origin (`...ModuleExample.dll`). One job: answer "is this path accessible/safe" for a caller.

## 2. How it decides (imports tell the story)

- `GetProcessWindowStation` + `GetUserObjectInformationA` — **window-station/desktop access checks**: the classic "does this process's window station allow the operation" test (used to detect service-session vs interactive-session contexts)
- `GetActiveWindow`/`GetLastActivePopup` + `MessageBoxA` — error popups when a path fails the check (modal warning from the checker itself)
- **`SystemFunction036`** — `RtlGenRandom`: random-name generation (temp/scratch paths?) or nonce for path comparison
- `mscoree.dll` binding present (mixed managed/init stub) — but decompilation is native CRT (the mscoree import is the standard MSVC loader stub)

## 3. Why it exists (HWP chain context)

The Korean-market viewer chain (EUHwpViewer.exe + EUHwpFilePathCheckerModule.dll + EUOfficeViewer/EuOfficeTools adjacency) renders HWP documents — a format with **embedded file links/attachments** (Hangul docs can reference external files and OLE objects). Before opening any referenced path, the viewer asks this module: `IsAccessiblePath(path)` — blocking:
- paths outside allowed zones (the window-station/user-object checks detect unusual session contexts)
- inaccessible targets (the MessageBox reports failures)

No PE imports it → loaded via `LoadLibrary` by EUHwpViewer at runtime (the same dynamic pattern as libcurl in EUFileRepair — the product's plugin-style late binding for optional per-market components).

## 4. Cross-links

- Viewer chain: per-binary `EUHwpViewer.md`, `EUOfficeViewer.md`; repair-side HWPX (encrypted Hangul) handling: `architecture/06-repair-chain.md`
- Dynamic-load pattern family: `runtime-families/network-libraries.md` (libcurl zero-importer note)
