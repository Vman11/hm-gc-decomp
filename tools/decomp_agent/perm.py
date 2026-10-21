import os
# perm.py unit fn file : permute each contiguous block (>=2) of local declaration lines; report first MATCH
import sys,re,itertools,subprocess,os,tempfile
S=os.environ.get('DECOMP_SCRATCH','/tmp/decomp-scratch')
unit,fn,path=sys.argv[1:4]
src=open(path).read().split('\n')
decl=re.compile(r'^\s+(?:const )?(?:struct )?\w[\w\s]*\**\s*\**\w+(\[\d+\])?( = [^;]+)?;$')
blocks=[];i=0
while i<len(src):
    if decl.match(src[i]) and not src[i].strip().startswith(('return','break')) and '(' not in src[i]:
        j=i
        while j<len(src) and decl.match(src[j]) and '(' not in src[j]: j+=1
        if j-i>=2: blocks.append((i,j))
        i=j
    else: i+=1
cpp='.cpp' in path; lmw=path.endswith('.lmw')
env=dict(os.environ); 
if lmw: env['QX']='-use_lmw_stmw on'
d=tempfile.mkdtemp(dir=S+'/wF')
for (a,b) in blocks:
    lines=src[a:b]
    if len(lines)>6: continue
    for perm in itertools.permutations(lines):
        if list(perm)==lines: continue
        new=src[:a]+list(perm)+src[b:]
        f=os.path.join(d,os.path.basename(path)); open(f,'w').write('\n'.join(new))
        r=subprocess.run(['python3','-I',S+'/q.py',unit,fn,f]+(['cpp'] if cpp else []),capture_output=True,text=True,env=env,cwd='/home/mi').stdout
        if r.startswith('MATCH'): print('MATCH',f); sys.exit(0)
print('none')
