import os
import json,sys,re
idx=json.load(open(''+os.environ.get('DECOMP_SCRATCH','/tmp/decomp-scratch')+'/pseudo.json'))
for a in sys.argv[1:]:
    a=re.search(r'([0-9A-Fa-f]{8})',a).group(1).upper()
    p=idx.get(a)
    print('=== '+a); print(re.sub(r'\n\s*\n','\n',p) if p else '(none)')
