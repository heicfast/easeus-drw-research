# UI/UX Artifact 09 — Results Phase Deep Dive (Tree · Classify · Filter · Search · List)

> Scope: the "found files" experience on `CDetailPage` — the screen where users spend most of their time.
> Evidence: `CDetailPage` ctor `FUN_1406b86e0` (52,625 chars — 41 signal connects, 30 unique signals) + moc dispatch `FUN_140b6bb20` (42 slots, cases 0–0x2a); region tr-sites (0x1406b8xxx–0x1406d0xxx); class map §6 of artifact 03; QSS objectNames; FileFilter/PriorityDisplayType/usefullostfiles configs.

## 1. Page composition (signal contract = component inventory)

The 30 signals wired in the ctor define the page's architecture:

| Signal | Direction | Component |
|---|---|---|
| `sigChangeTreeView(bool)` | in | Tree ⇄ list view toggle |
| `sigShowSearch(bool)`, `sigSwitchSearch(int)`, `sigClearSearch()`, `sigClearSearchFilter()`, `sigFilterNltSearchClicked()` | in | Search box lifecycle |
| `sigShowFilterBar(bool)`, `sigFilterChange(const AdvanceFilterCondition&,bool,bool)`, `sigFilterFinished()` | in | **Advanced filter** (typed condition struct) |
| `sigLeftTreeClickTag(bool)` | in | Classify-tree tag clicks |
| `sigSwitchNavigate(bool,bool)`, `sigUpdateNavigateBarPath(const QString&,const QString&)` | in | Breadcrumb navigation bar (path + display name) |
| `sigSelectRightIndex(int,int)`, `sigGetRightIndex(int&,int&)`, `sigListIconChanged(int)` | in | Right-pane list selection & icon-mode |
| `sigScanFinished()` (3×), `sigQuickScanFinished(int)`, `sigLoadFinished(bool)` (2×) | in | Scan lifecycle → progressive tree fill |
| `sigRecoverBtnClicked()`, `sigShowAutoRecoverBtn()` | in | Recovery CTA + Auto-Recover feature |
| `sigIsStopping(bool&)`, `sigIsSearch(bool&)`, `sigIsFilterBtnToggled(bool&)` | in/out | State queries (by-reference returns) |
| `sigValueChanged(bool,int,bool,QVariant)` | out | Generic property-change fanout |
| `splitterMoved(int,int)`, `OnResizeSplitterSize()` | in | **QSplitter layout** between tree and list |
| `doDispatchMessage(int,void*,int&)`, `sigAboutToGrabPixmap()` | internal | Message dispatch + snapshot capture |

The 42-slot moc dispatch (case 0–0x2a, functions `FUN_1406bc*`–`FUN_1406c3*`) implements these + model updates.

## 2. The left tree — 5 special branches (tr-verified coaching copy)

`CLeftTreeView`/`LostLeftTreeView`/`CTreeViewController`/`CTreeListViewItemDelegate` render the found-file hierarchy with these distinguished nodes (each with its explainer tooltip):

1. **Tags Extracted** — "We classify and organize the found files by extracted tags to help you easily locate desir[able files]" (EXIF/metadata tag grouping; icon `filetype_ico_Tags Extracted_fold`)
2. **File Name Lost** — "Here are some files whose original name cannot be found, but are more likely to be your de[sired files]" (raw-carved by content)
3. **File Path Lost** — "Files we found with Advanced Scan, but the file path was fully or partially missing. Altho[ugh they have no original names/paths…]" (carved without reconstructable location)
4. **Versions node** — "It is another version of the file in the same directory. You can view different versions o[f the same file]" (NTFS file-record multi-version recovery)
5. **Unimportant** — "To help you find the desired files quickly, we organize some unimportant files here." (collapsed junk bucket, `filetype_ico_Unimportant`)

Tree icons per partition state: `leftree_ico_root_*` family (existing/lost/lock/unlock/system/USB/camera/UAV/SD/recycle-bin/Dropbox cloud), expand states `folder_fold/unfold` (ImageResource.xml `<Tree>` map).

## 3. Classify system (type tree + tabs)

- `CClassifyLeftTreeView` (+Controller/ViewModel) — the "Type" tree replacing path-tree when toggled.
- `CFileTypeFilterTabBar` + `CFileTypeTagTabGroupWnd`/`CFileTypeTagTabItem` — the tab strip; tab clicks emit the 8-category telemetry (`Click_Audio/Document/Photo/Video/Archives/Emails/Databases/Bookmarks` — artifact 06).
- `CClassifyRightListView`/`CClassifyRightIconView` + Header/ViewModel/ListIconController — per-category right pane (list ⇄ icon modes).
- Category→extension mapping: FileFilter.xml (8 categories, 1,489 extensions — config artifact) + display priority from PriorityDisplayType.xml (`jpg(00) png(01) jpeg(02)…`).
- `usefullostfiles.xml` whitelist promotes carved RAW photos (cr2/cr3/nef/arw/dng…) out of "Unimportant".

## 4. Search & filter

**Search** (`CSearchLineedit`, 9 strings): inline box with "Optional Type" dropdown: **Pictures · Videos · Documents · Audio · Archive · Emails · Bookmarks · Unsaved File** (the last = office unsaved-document recovery!). Empty-results coach (`CSearchNltPopWnd`): "How to find files if it searched nothing" + 3 strategies (names may be lost → use type/size/date filter; look under File-Path-Lost branches) + "Learn More"/"Got it".

**Advanced filter** (`CFilterBar` + `CAdvanceFileFilterMgr` + `CAdvancedFilterBtn` + `CFilterGuideWnd`): typed condition struct `AdvanceFilterCondition` broadcast via `sigFilterChange(cond,bool,bool)`; resets emit `Click_ClearAdvanced/Clearsize/Cleartype/Cleartime`; guide copy: "To find your files quickly and easily by 'Filter'"; blocked-state copy: "The file was filtered. Please clear the filter and then [search] again." Extension grouping: `CFileExtensionGroupWnd`/`CFileExtensionItem`; date filtering via `CCalendarWidget`; `CFilterCountFrame` shows live match counts; `CFilterNoRlt` = no-result state; `CFilterLostFilesBtn` scopes to lost-file branches.

## 5. Right pane — list rendering stack

`CListControl` + `CListHeaderView` (96 v-methods — sortable column headers: Name/Size/Type/Date Modified + recovery-chance column) + `CListIconController` + `CIconViewDelegate` + `CIconItemStyleWidget` + `CIconListBtn` + `CListScrollbar` (6px slim). Thumbnails: `CGetListThumbnailThread` (async, per-row). Path bar: `sigUpdateNavigateBarPath(path, display)` → `navigate_address_button`/`navigate_direction_button` QSS chrome. `CSelAllCheckBox` (select-all with tri-state), `ArrowToggleButton` (expand/collapse). **AI layer**: "AI Recommend is on. Showing %1 recommended files." + "Switch views anytime to see all files." (AI-ranked results view, `Click_AIRecommeded` telemetry, `DrwAIDedupWindow` for dedup results).

## 6. Auto-Recover (the hands-free pipeline)

`CAutoRecoverMgr` + 4 windows (Entry/Open/Close/Setting). Settings copy (16 strings, tr-verified): "Auto-Recover after Advanced Scan Completed" / "Enable|Disable My Auto-Recover Plan" / file scope: "Suggested Recovery" | "All Files" / "Select file" / destination: "Save to … Browse…" with validation ("Source Drive! Change another one." / "Looks good!") / "Email notification(optional)" + "Invalid mailbox!" — a full auto-recovery subscription with mail alerts.

## 7. Progressive fill & sorting (behind the glass)

- Scan events stream in (`sigQuickScanFinished(int)` / `sigScanFinished` ×3 / `sigLoadFinished(bool)` for session import) → `CDirectoryTreeManager`/`CDirectoryTreeBuilder` rebuild → `CSetClassifyThread`, `CSetFilterThread`, `CSortNodeThread`, `CCheckNodeThread`(s), `CSelNodeThread` run incremental updates so the tree never blocks the UI thread ("Organizing found files..." phase from artifact 08).
- Selection state is checkpointed via `sigGetRightIndex(int&,int&)` by-reference queries; splitter position persisted (`splitterMoved` → `OnResizeSplitterSize`).

Cross-links: artifact 03 §6 (class census), 08 (scan that fills this page), 10 (preview from here), 11 (recovery from selection), SearchDLL/PartitionRecovery artifacts (where the data comes from).
