import os
import json,sys,os,re,subprocess
S=os.environ.get('DECOMP_SCRATCH','/tmp/decomp-scratch')
sys.path.insert(0,S)
from relocs import relocs
os.chdir('/home/mi/Decomp/hauntedmansion-ghye6s')
d=json.load(open(S+'/families.json'))
os.makedirs(S+'/sib',exist_ok=True)
res=[]
def extract(src,fn):
    m=re.search(r'^(?:asm )?\w[^\n;{]*\b'+re.escape(fn)+r'\([^)]*\)\s*\{\n.*?^\}\n',src,re.M|re.S)
    return m.group(0) if m else None
for n,s,h,g,m in d:
    if not m: continue
    sfn,sun=m
    if sun in ('auto/text_800B2E70','auto/text_802752DC'): continue
    sp=[f'src/{sun}.cpp',f'src/{sun}.c']; sp=[p for p in sp if os.path.exists(p)]
    if not sp: continue
    src=open(sp[0]).read(); body=extract(src,sfn)
    if not body: continue
    # headers: all top-level non-function lines before body (decls/structs)
    pre=src[:src.index(body)]
    pre=re.sub(r'^(//|#include).*\n','',pre,flags=re.M).replace('extern "C" {','')
    sr=[x[3] for x in relocs(sun,sfn) if x[3]]
    for tfn,tun,_ in g:
        tr=[x[3] for x in relocs(tun,tfn) if x[3]]
        if len(tr)!=len(sr): continue
        mp={}
        ok=True
        for a,b in zip(sr,tr):
            if mp.get(a,b)!=b: ok=False
            mp[a]=b
        if not ok: continue
        mp[sfn]=tfn
        code=pre+body
        # rename struct tags derived from sfn address too
        sa=re.search(r'([0-9A-F]{8})',sfn).group(1); ta=re.search(r'([0-9A-F]{8})',tfn).group(1)
        for a,b in sorted(mp.items(),key=lambda x:-len(x[0])):
            code=re.sub(r'\b'+re.escape(a)+r'\b','\x00'+b+'\x00',code)
        code=code.replace('\x00','')
        code=re.sub(r'_'+sa+r'\b','_'+ta,code)
        ext='cpp' if sp[0].endswith('.cpp') else 'c'
        cfg=open('configure.py').read()
        lmw='-use_lmw_stmw on' in re.search(r'Object\([^)]*"%s\.(c|cpp)"[^)]*\)'%re.escape(sun),cfg).group(0)
        out=f'{S}/sib/{tfn}.{ext}'+('.lmw' if lmw else '')
        open(out,'w').write(code.strip()+'\n')
        res.append(f'{tfn} {tun}')
open(S+'/sib/list','w').write('\n'.join(res)+'\n'); print(len(res))
