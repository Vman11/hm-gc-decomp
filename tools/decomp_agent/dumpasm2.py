# dumpasm.py N SKIPFILE -> compact asm for next N smallest unmatched functions in unregistered units
import json,subprocess,re,sys
P='/home/mi/Decomp/hauntedmansion-ghye6s/'
OD='/home/mi/.local/share/decompnet/toolchains/gc-wii-binutils/powerpc-eabi-objdump'
n=int(sys.argv[1]); skip=set(open(sys.argv[2]).read().split()) if len(sys.argv)>2 else set()
r=json.load(open(P+'build/GHYE6S/report.json'))
conf=open(P+'configure.py').read()
rows=[]
for u in r['units']:
    un=u['name'][5:]
    if not un.startswith('auto/'): continue
    if un in ('auto/text_800B2E70','auto/text_802752DC','auto/text_800DAA80'): continue
    for f in u.get('functions',[]):
        if (f.get('fuzzy_match_percent') or 0)<100 and f['name'] not in skip: rows.append((int(f.get('size',0)),f['name'],un))
rows.sort()
for s,fn,un in rows[:n]:
    out=subprocess.run([OD,'-dr',P+'build/GHYE6S/obj/'+un+'.o'],capture_output=True,text=True).stdout
    lines=[];on=False
    for l in out.split('\n'):
        if re.match(r'^[0-9a-f]+ <%s>:'%re.escape(fn),l): on=True; continue
        if on and re.match(r'^[0-9a-f]+ <',l): break
        if on and l.strip():
            m=re.match(r'^\s+([0-9a-f]+):\s+(?:[0-9a-f]{2} ){4}\s*(.*)$',l)
            if m: lines.append(m.group(1)+': '+re.sub(r'\s+',' ',m.group(2)).split('<')[0].strip())
            else:
                m=re.match(r'^\s+[0-9a-f]+: (R_\S+)\s+(\S+)',l)
                if m and lines: lines[-1]+='  ['+m.group(2)+']'
    print('#####',fn,un,s); print('\n'.join(lines))
