import json,subprocess,re,os,sys
ROOT="/home/mi/Decomp/hauntedmansion-ghye6s"; os.chdir(ROOT)
lo,hi=int(sys.argv[1]),int(sys.argv[2])
mod=set(l[3:] for l in []) if 0 else set(l[3:] for l in subprocess.run(['git','status','--short'],capture_output=True,text=True).stdout.splitlines())
d=json.load(open('build/GHYE6S/report.json'))
def asm_of(unit,fn):
    p=f'build/GHYE6S/asm/{unit}.s'
    if not os.path.exists(p): return None
    s=open(p).read()
    m=re.search(r'^\.fn %s,.*?^\.endfn %s'%(fn,fn),s,re.S|re.M)
    return m.group(0) if m else None
bn=open('build.ninja').read()
out=[]
for u in d['units']:
    unit=u['name'][5:]
    path='src/'+unit+'.cpp' if os.path.exists('src/'+unit+'.cpp') else 'src/'+unit+'.c'
    if not os.path.exists(path): continue
    src=open(path).read()
    for f in u.get('functions',[]):
        sz=int(f['size'])
        if not(lo<=sz<=hi) or f.get('fuzzy_match_percent') is not None or f['name'] in src: continue
        a=asm_of(unit,f['name'])
        if not a: continue
        ins=[l.split('*/')[-1].strip() for l in a.splitlines() if l.startswith('/*')]
        if len(ins)<=6 and any(i.startswith('b ') for i in ins[-1:]) and any('r3, r3' in i or 'r11' in i for i in ins): continue  # thunk
        if any(i.startswith(('psq_','ps_')) for i in ins): tag='ps'
        else: tag=''
        out.append((sz,f['name'],unit,tag))
out.sort()
print(len(out))
for x in out[:int(sys.argv[3]) if len(sys.argv)>3 else 40]: print(*x)
