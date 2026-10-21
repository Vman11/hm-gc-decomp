import os
# q.py UNIT FN candidate.c [cpp] : compile standalone (common.h + candidate) with game flags, diff FN vs original object
import re,subprocess,sys,os,difflib
P='/home/mi/Decomp/hauntedmansion-ghye6s/'
S=os.environ.get('DECOMP_SCRATCH','/tmp/decomp-scratch')+'/'
OD='/home/mi/.local/share/decompnet/toolchains/gc-wii-binutils/powerpc-eabi-objdump'
unit,fn,cf=sys.argv[1],sys.argv[2],sys.argv[3]; cpp=len(sys.argv)>4
code=open(cf).read()
ext='.cpp' if cpp else '.c'
tmp=P+'src/auto/zz_q%d'%os.getpid()+ext
open(tmp,'w').write('#include "common.h"\n'+(('extern "C" {\n'+code+'\n}\n') if cpp else code))
o=S+'q%d.o'%os.getpid()
if os.path.exists(o): os.remove(o)
lang='-lang=c++ -Cpp_exceptions on' if cpp else '-lang=c'
r=subprocess.run(f'cd {P} && ~/.local/share/decompnet/toolchains/wibo/wibo ~/.local/share/decompnet/toolchains/mwcc/GC/{os.environ.get("QV","1.3.2")}/mwcceppc.exe -nodefaults -proc gekko -align powerpc -enum int -fp hardware -Cpp_exceptions off -O4,p -inline auto -pragma "cats off" -pragma "warn_notinlined off" -maxerrors 3 -nosyspath -RTTI off -fp_contract on -str reuse -multibyte -i include -i tools/rea/ref/dolsdk2004/include -i tools/rea/ref/dolsdk2004/include/libc -i build/GHYE6S/include -DBUILD_VERSION=0 -DVERSION_GHYE6S -DNDEBUG=1 {os.environ.get("QX","")} {lang} -c {tmp} -o {o}',shell=True,capture_output=True,text=True)
os.remove(tmp)
if not os.path.exists(o): print('COMPILE ERROR',r.stdout[-900:]); sys.exit(1)
def funcs(o):
    out=subprocess.run([OD,'-dr',o],capture_output=True,text=True).stdout
    d={};cur=None
    for l in out.split('\n'):
        m=re.match(r'^[0-9a-f]+ <(.+)>:$',l)
        if m: cur=m.group(1); d[cur]=[]; continue
        m=re.match(r'^\s+[0-9a-f]+:\s+((?:[0-9a-f]{2} ){4})\s*(.*)$',l)
        if m and cur: d[cur].append(m.group(1)+' '+re.sub(r'\s+',' ',m.group(2)).split('<')[0][:40]); continue
        m=re.match(r'^\s+[0-9a-f]+: (R_\S+)\s+(\S+)',l)
        if m and cur: d[cur].append('  '+m.group(1)+' '+m.group(2))
    return d
t=funcs(P+'build/GHYE6S/obj/'+unit+'.o').get(fn); d=funcs(o).get(fn); os.remove(o)
if d is None: print('fn missing in output'); sys.exit(1)
k=lambda L:[x[:12] if not x.startswith('  ') else x.split()[0] for x in L]
if k(t)==k(d): print('MATCH'); sys.exit(0)
print('\n'.join(difflib.unified_diff(t,d,'target','mine',lineterm='',n=2))); sys.exit(2)
