# Language Pack Family — 37 .qm Catalogs, Mainland OEM Variants, and i18n Architecture

**Sources**: `og-codebase/language/` (25 product locales + 4 Mainland OEM variants + 8 qtbase Qt-internal), duplicated into `BUILDPE/EaseUS-x64/language/` for the PE build
**Method**: UTF-16BE string harvest from the QM binaries (census-grade — counts include source strings alongside translations; exact per-pair counts require the full QM offset-table parse; no over-claiming here)
**Role**: The complete internationalization surface — which locales ship, what the OEM variants emphasize, and how language is selected.

---

## 1. Census (37 files, 6.7 MB total)

| Group | Files | Notables |
|---|---|---|
| **Product locales (25)** | Arabic→Turkish incl. Chinese/ChineseTrad/Japanese/Korean (CJK), European set, Indonesian/Malay/Thai | all UTF-16 catalogs 138–231 KB; the CJK files are smaller per-string (compact codepoints) |
| **Mainland OEM variants (4)** | Mainland.qm, Mainland_Foxit.qm, Mainland_JZ.qm, Mainland_LC.qm | China-market sub-brands — see §2 |
| **qtbase Qt-internal (8)** | de/en/es/fr/it/ja/ko/nl/pt/zh_CN/zh_TW | Qt's own strings (standard buttons/dialogs) — **qtbase_en.qm is 16 bytes (header only)**: English is Qt's native language, no catalog needed |

## 2. The Mainland OEM variants — set analysis (harvested-string sets)

The four Mainland catalogs are **independently built, not layered subsets** (set math):

| Variant | Harvested strings | ∩ Mainland.qm | Distinctive content (verified samples) |
|---|---|---|---|
| Mainland.qm | 593 | — | VIP monetization copy: "尝试 VIP 聊天，尝试高级数据恢复并保存您的宝贵数据！", upgrade tiers, "无需订阅" |
| Mainland_Foxit.qm | 334 | 98 | **NAS-forward**: "一键连接NAS，立即开始恢复数据"; BitLocker: "BitLocker 自动解密失败"; scan-abort coaching: "中止扫描会导致部分数据无法找到" / "确定要放弃恢复剩下宝贵的数据吗？" |
| Mainland_JZ.qm | 553 | 90 | largest variant — full catalog with JZ-channel branding |
| Mainland_LC.qm | 388 | 142 | mid-size variant, LC-channel branding |

**Decoded**: the Foxit/JZ/LC suffixed catalogs are per-OEM-channel builds (different distribution partners in China — matching the `Mainland_Foxit.qm` name seen in the BUILDPE payload and the auto.bat OEM branch which gates Mainland builds to preset shortcuts). The **Foxit channel** emphasizes the NAS + BitLocker scenarios (its catalog carries their coaching copy at higher weight), evidence that OEM bundles configure feature marketing per channel.

## 3. Language selection architecture (static decode cross-ref)

- Boot seed: `software.reg` sets `HKLM\SOFTWARE\EASEUS\DRW\Language = English` (WinPE boots English-first — see WinPE boot-config artifact)
- User selection: DRWUI language menu (Qt QTranslator::load of the chosen .qm + qtbase_*.qm pair)
- `version.ini` `SelLanguage` field persists the choice (live tree shows it empty in pristine build)
- 25 locales ≈ the supported-market list; the product's UI claim "supports 20+ languages" maps to this directory

## 4. Method notes + verification discipline

- The harvester counts **all** UTF-16BE strings in the file — for non-Latin locales this approximates source+translation pairs; cross-file share percentages in the README table are therefore **census indicators**, not exact coverage numbers
- Mojibake entries (binary fragments misread as CJK) were observed in raw harvest and excluded from claims above; only clean readable strings are quoted
- qtbase_en.qm's 16-byte emptiness is the control case proving the format check works

## 5. Cross-links

- String inventory (all 25-language product strings): `UIUX/02-string-inventory.md`
- OEM branch (auto.bat Mainland gate): `WinPE/boot-config--winpeshl-autobat-regdrv.md` §2D
- WinPE payload (language dirs shipped to PE): `WinPE/pe-payload-census--buildpe-easeus-x64.md`
- QM parsing tooling: `scripts/parse_qm.py`, `scripts/qm_parse.py`
