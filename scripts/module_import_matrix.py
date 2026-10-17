#!/usr/bin/env python3
"""Build the .mo module import matrix: which DLLs/modules each .mo imports,
plus export surface (GetModule/CreateObject factories)."""
import pefile, glob, json, os
from collections import defaultdict

mods = sorted(glob.glob('/home/z/my-project/repo/og-codebase/PartitionRecovery/*.mo'))
host = ['/home/z/my-project/repo/og-codebase/PartitionRecovery/%s' % f
        for f in ['MainModule.dll','RecoveryModule.dll','ToolsModule.dll','UILogic.dll',
                  'PartitionRecovery.dll','CloneModule.dll']]

out = {}
for path in mods + host:
    name = os.path.basename(path)
    try:
        pe = pefile.PE(path, fast_load=True)
        pe.parse_data_directories(directories=[
            pefile.DIRECTORY_ENTRY['IMAGE_DIRECTORY_ENTRY_IMPORT'],
            pefile.DIRECTORY_ENTRY['IMAGE_DIRECTORY_ENTRY_EXPORT']])
        imps = []
        if hasattr(pe, 'DIRECTORY_ENTRY_IMPORT'):
            for e in pe.DIRECTORY_ENTRY_IMPORT:
                imps.append(e.dll.decode())
        exps = []
        if hasattr(pe, 'DIRECTORY_ENTRY_EXPORT'):
            for s in pe.DIRECTORY_ENTRY_EXPORT.symbols:
                if s.name:
                    n = s.name.decode()
                    if any(k in n for k in ['GetModule', 'CreateObject', 'CanUnloadNow',
                                             'TBCreate', 'TBCanUnload', 'GetClassObject',
                                             'FreeModule']):
                        exps.append(n)
        out[name] = {'imports': imps, 'factory_exports': exps,
                     'machine': hex(pe.FILE_HEADER.Machine)}
    except Exception as ex:
        out[name] = {'error': str(ex)}
    finally:
        try: pe.close()
        except: pass

json.dump(out, open('/home/z/my-project/repo/re-workspace/raw-evidence/mom-modules/module_import_matrix.json', 'w'), indent=1)

# Print matrix summary
print(f"{'module':24s} {'mach':6s} {'mo-imp':6s} {'factory-exports'}")
for name, d in sorted(out.items()):
    if 'error' in d:
        print(f"{name:24s} ERR {d['error'][:40]}")
        continue
    mo_imps = [i for i in d['imports'] if i.lower().endswith('.mo')]
    print(f"{name:24s} {d['machine']:6s} {len(mo_imps):6d} {len(d['factory_exports']):3d}  "
          f"{' '.join(mo_imps)[:60]}")
