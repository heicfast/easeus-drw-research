# UI/UX Artifact 14 — CDetailPage: Complete Slot Dispatch & View-Mode Architecture

> Scope: the 42-slot dispatcher of the results/scan page decoded function-by-function, plus the internal view-mode stack.
> Evidence: moc dispatch `FUN_140b6bb20` → `FUN_140b6bcc0` case table (artifact 09 §1); per-slot body analysis (Ghidra); ctor signal contract (artifact 09).

## 1. Slot classification (all 42 decoded)

**Signals (emit-only, `QMetaObject::activate`) — slots 0–8**: nine outgoing signals (the page's notification surface; matches the `sig*` contract in artifact 09 §1).

**Infrastructure / query slots**:
| Slot | Function | Behavior |
|---|---|---|
| 9 | `FUN_1406bc3e0` | `QWidget::isVisible` check — visibility query handler |
| 29/30 | `FUN_1406c2440/1406c2480` | small accessors (16/6-char bodies) |
| 33/41/42 | `FUN_1406c2c20/1406c3c40/1406c3c80` | small accessors |
| 11/12 | `FUN_1406bc510/1406bc560` | bool-flag setters (180/182 chars) |

**Layout slots**:
| Slot | Function | Behavior |
|---|---|---|
| 10 | `FUN_1406bc450` | `QSplitter::setSizes` + width calc + **telemetry** — splitter resize persistence |
| 19 | `FUN_1406bce00` | `activateWindow`/`move`/`isVisible` — window activation/restore |
| 40 | `FUN_1406c3480` | `QSize` arithmetic + tr strings — responsive size computation |

**View-mode switching (the internal stack)**:
| Slot | Function | Behavior |
|---|---|---|
| 22 | `FUN_1406c1370` | `QObject::sender()` + `currentIndex` + **`setCurrentIndex`** — view-mode switch on the page's internal QStackedWidget |
| 24 | `FUN_1406c1760` | `setCurrentIndex` — second switch path |
| 27 | `FUN_1406c1b30` (6,000+ chars) | **the re-binder**: connect/disconnect storm wiring per-mode slots `onAddressChanged()`, `onCheckFinished()`, `onFileNodeChanged(const QModelIndex&)`, `onPreviewChanged(int)` — each view mode re-binds the shared controllers to mode-specific slots |

**Interaction slots**:
| Slot | Function | Behavior |
|---|---|---|
| 15 | `FUN_1406bc670` (2,783 ch) | show/hide/move + service call — floating overlay control (scan-status layer) |
| 16 | `FUN_1406bc900` (3,105 ch) | heavy `QObject::tr` + `QString::arg` — dynamic status message builder (the "Searching: %1" / counters line) |
| 18/20/21 | `FUN_1406bcd00/1406bcf60/1406bd030` | service-hub calls — state notifications |
| 23 | `FUN_1406c1460` (2,272 ch) | `QLabel::pixmap`/`setPixmap`/`QPixmap::copy` + **telemetry** — implements `sigAboutToGrabPixmap()` (support-snapshot capture) |
| 26 | `FUN_1406c1ae0` | `QTimer::stop` — timer halt (progress/refresh timer) |
| 28 | `FUN_1406c2230` | service + **L"Search"** — search-bar toggle |
| 32 | `FUN_1406c2c20` | `QAbstractItemView::model` + `QModelIndex` ops (6,000+ ch) — file-node selection changed (list/tree click routing) |
| 34 | `FUN_1406c2c70` | `QAbstractButton::toggled` — checkbox/select-all handler |
| 37 | `FUN_1406c2eb0` | telemetry beacon |
| 38 | `FUN_1406c2fc0` (2,334 ch) | **`QDialog::exec` modal** with `sigCloseWaitDialog()` + `sigResizeWidth` — generic wait-dialog (busy operations) |
| 39 | `FUN_1406c3270` (1,846 ch) | **`QEventLoop::exec` nested loop** + `QModelIndex::row` — synchronous confirm-during-operation flow (modal selection inside an operation) |

## 2. The view-mode architecture (synthesis)

CDetailPage hosts its own QStackedWidget of view modes (path tree / classify / lost-files / version views), switched by slots 22/24. Slot 27's re-binder re-wires the four mode-agnostic controller slots (`onAddressChanged`, `onCheckFinished`, `onFileNodeChanged(QModelIndex)`, `onPreviewChanged(int)`) to the active mode's widgets — a manual "polymorphic view" pattern that keeps one controller set across modes. The splitter (slot 10) and breadcrumb (`sigUpdateNavigateBarPath`) persist per mode; `QObject::sender()` disambiguates switch sources.

## 3. Modal machinery inside the page

Two distinct modal mechanisms coexist:
1. `QDialog::exec` wait-dialog (slot 38) with resize cooperation — used during long blocking phases (e.g., session import `sigLoadFinished`).
2. `QEventLoop::exec` nested loop (slot 39) — a Qt-native nested event loop allowing the engine to synchronously request a row decision mid-operation (used with `QModelIndex::row` — e.g., version-choice: "It is another version of the file in the same directory. You can view different versions…" coaching ties here).

Cross-links: artifact 09 (page composition), 13 (wiring), 04 (how the page is entered).
