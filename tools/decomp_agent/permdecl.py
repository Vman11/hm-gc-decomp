import os
import sys,os,re,itertools,subprocess,glob
S=os.environ.get('DECOMP_SCRATCH','/tmp/decomp-scratch')
os.chdir('/home/mi/Decomp/hauntedmansion-ghye6s')
# latest candidate per fn among c*/ dirs, that is FAIL in its res and not applied
res={}
for r in sorted(glob.glob(S+'/c*.res')):
    for l in open(r):
        p=l.split()
        if len(p)<4: continue
        st,fn,u,f=p[:4]
        if st=='ok': res[fn]=('ok',u,f)
        elif res.get(fn,('',))[0]!='ok': res[fn]=('FAIL',u,f)
skip=set()
fails=[(fn,u,f) for fn,(st,u,f) in res.items() if st=='FAIL' and os.path.exists(f)]
declre=re.compile(r'^    (?:const )?(?:u8|s8|u16|s16|u32|s32|f32|f64|void|char|BOOL|V\w*|T\w*|S\w*|u8 \*|\w+ \*)[\w\s\*]*?\b\w+(\[\w+\])?( = [^;]+)?;$')
def run(u,fn,path,cpp,lmw):
    env=dict(os.environ); env['QX']='-use_lmw_stmw on' if lmw else ''
    r=subprocess.run(['python3','-I',S+'/q.py',u,fn,path]+(['cpp'] if cpp else []),capture_output=True,text=True,env=env).stdout
    return r.startswith('MATCH')
out=[]
for fn,u,f in fails:
    src=open(f).read(); lines=src.split('\n')
    cpp='.cpp' in f; lmw=f.endswith('.lmw')
    # find function body start
    m=[i for i,l in enumerate(lines) if re.match(r'^\w.*\b'+re.escape(fn)+r'\(.*\) \{$',l)]
    if not m: continue
    i=m[0]+1; blk=[]
    while i<len(lines) and declre.match(lines[i]) and '(' not in lines[i].split('=')[0]: blk.append(i); i+=1
    # only uninitialized decls can be freely permuted; keep those with init too if no deps
    if len(blk)<2 or len(blk)>5: continue
    decls=[lines[j] for j in blk]
    found=False
    for perm in itertools.permutations(decls):
        if list(perm)==decls: continue
        # don't permute if an initializer references a later-declared name
        names=[re.search(r'\b(\w+)(\[\w+\])?( = [^;]+)?;$',d).group(1) for d in perm]
        bad=False
        for k,d in enumerate(perm):
            if ' = ' in d:
                rhs=d.split(' = ',1)[1]
                if any(re.search(r'\b'+n+r'\b',rhs) for n in names[k+1:]): bad=True
        if bad: continue
        nl=list(lines)
        for j,d in zip(blk,perm): nl[j]=d
        tmp=S+'/perm_tmp'+('.cpp' if cpp else '.c')
        open(tmp,'w').write('\n'.join(nl))
        if run(u,fn,tmp,cpp,lmw):
            dst=os.path.dirname(f)+'/../cperm/'+os.path.basename(f)
            os.makedirs(os.path.dirname(dst),exist_ok=True)
            open(dst,'w').write('\n'.join(nl)); out.append((fn,u,os.path.abspath(dst))); found=True; break
    print(fn, 'MATCH' if found else '-', flush=True)
open(S+'/cperm.res','w').write(''.join(f'ok {fn} {u} {p}\n' for fn,u,p in out))
print('found',len(out))
