# RE Workspace — EaseUS Data Recovery Wizard

Per-file reverse engineering workspace. For each analyzed binary:
- `raw/<path>/` — copies of original binaries (preserved evidence)
- `reversed/<path>/` — all RE tool outputs: strings, imports, exports, disassembly, decompiled code, structures
- `artifacts/<path>/` — human-readable .md documentation (in-depth context, role in architecture, algorithms)

Plus global: inventory.csv/json (master file inventory), tool outputs at scale.
