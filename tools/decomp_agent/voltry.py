import os,re,glob,subprocess
S=os.environ.get('DECOMP_SCRATCH','/tmp/decomp-scratch')
os.chdir('/home/mi/Decomp/hauntedmansion-ghye6s')
res={}
for r in sorted(glob.glob(S+'/c*.res')):
    for l in open(r):
        p=l.split()
        if len(p)<4: continue
        st,fn,u,f=p[:4]
        if st=='ok': res[fn]=('ok',u,f)
        elif res.get(fn,('',))[0]!='ok': res[fn]=('FAIL',u,f)
# also older c2..c8 dirs without res: scan files
for d in ['c2','c3','c4','c4v','c5','c6','c7','c8']:
    for f in glob.glob(S+'/'+d+'/fn_*'):
        fn=os.path.basename(f).split('.')[0]
        if fn not in res: res[fn]=('FAIL','auto/text_'+fn[3:],f)
rep=open('build/GHYE6S/report.json').read()
import json
R=json.loads(rep); done=set()
for u in R['units']:
    for fo in u.get('functions',[]):
        if fo.get('fuzzy_match_percent',0)==100: done.add(fo['name'])
out=[]
for fn,(st,u,f) in sorted(res.items()):
    if st=='ok' or fn in done or not os.path.exists(f): continue
    src=open(f).read()
    if not re.search(r'^extern (f32|f64) ',src,re.M): continue
    cpp='.cpp' in f; lmw=f.endswith('.lmw')
    v=re.sub(r'^extern (f32|f64) ',r'extern volatile \1 ',src,flags=re.M)
    tmp=S+'/vol_tmp'+('.cpp' if cpp else '.c'); open(tmp,'w').write(v)
    env=dict(os.environ); env['QX']='-use_lmw_stmw on' if lmw else ''
    r=subprocess.run(['python3','-I',S+'/q.py',u,fn,tmp]+(['cpp'] if cpp else []),capture_output=True,text=True,env=env).stdout
    ok=r.startswith('MATCH')
    if ok:
        os.makedirs(S+'/cvol',exist_ok=True)
        dst=S+'/cvol/'+os.path.basename(f); open(dst,'w').write(v); out.append(f'ok {fn} {u} {dst}\n')
    print(fn,'MATCH' if ok else '-',flush=True)
open(S+'/cvol.res','w').write(''.join(out))
print('found',len(out))
