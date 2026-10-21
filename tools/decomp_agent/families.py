import os
# group unmatched functions (in unregistered auto units AND registered nonmatching) by normalized asm
import json,subprocess,re,sys,hashlib,collections
P='/home/mi/Decomp/hauntedmansion-ghye6s/'
OD='/home/mi/.local/share/decompnet/toolchains/gc-wii-binutils/powerpc-eabi-objdump'
r=json.load(open(P+'build/GHYE6S/report.json'))
rows=[]; matched=[]
for u in r['units']:
    un=u['name'][5:]
    if not un.startswith('auto/'): continue
    for f in u.get('functions',[]):
        pct=f.get('fuzzy_match_percent') or 0
        (rows if pct<100 else matched).append((int(f.get('size',0)),f['name'],un))
def norm(un,fn):
    out=subprocess.run([OD,'-d',P+'build/GHYE6S/obj/'+un+'.o'],capture_output=True,text=True).stdout
    ins=[];on=False
    for l in out.split('\n'):
        if re.match(r'^[0-9a-f]+ <%s>:'%re.escape(fn),l): on=True; continue
        if on and re.match(r'^[0-9a-f]+ <',l): break
        m=re.match(r'^\s+[0-9a-f]+:\s+(?:[0-9a-f]{2} ){4}\s*(\S+)\s*(.*)$',l)
        if on and m:
            op,args=m.group(1),m.group(2).split('<')[0]
            args=re.sub(r'-?\b(0x)?[0-9a-f]+\b(?!\()',lambda mm: '#' if not re.match(r'r\d|f\d|cr\d',mm.group(0)) else mm.group(0),args)
            ins.append(op+' '+args)
    return hashlib.md5('\n'.join(ins).encode()).hexdigest()
mode=sys.argv[1] if len(sys.argv)>1 else 'groups'
groups=collections.defaultdict(list)
for s,fn,un in rows:
    if s>2000: continue
    groups[norm(un,fn)].append((fn,un,s))
mg={}
for s,fn,un in matched:
    if s>2000 or s<40: continue
    h=norm(un,fn)
    if h in groups: mg.setdefault(h,(fn,un))
out=[]
for h,g in groups.items():
    if len(g)>=2 or h in mg:
        out.append((len(g),g[0][2],h,g,mg.get(h)))
out.sort(key=lambda x:(-(x[4] is not None),-x[0]*x[1]))
json.dump([[n,s,h,[list(x) for x in g],m] for n,s,h,g,m in out],open("'+os.environ.get('DECOMP_SCRATCH','/tmp/decomp-scratch')+'/families.json","w"))
for n,s,h,g,m in out[:60]:
    print(n,s,'MATCHED-SIBLING '+m[0]+' '+m[1] if m else '-', ' '.join(x[0] for x in g[:8]))
