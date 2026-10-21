#!/usr/bin/env python3
# unitcheck.py UNIT FN candidate.c [QV] : merge candidate into a temp copy of the unit source (like apply_q) and
# compile the WHOLE unit; prints OK or the compiler errors. Does not modify the project.
import os,re,subprocess,sys
P='/home/mi/Decomp/hauntedmansion-ghye6s/'
src=open(P+'tools/rea/apply_q.py').read()
ns={'re':re}; exec(src[src.index('def merge'):src.index('\n\n\nfor arg')],ns); merge=ns['merge']
unit,fn,cf=sys.argv[1:4]; qv=sys.argv[4] if len(sys.argv)>4 else '1.3.2'
code=open(cf).read().strip('\n')+'\n'
cur=open(P+f'src/{unit}.c').read()
for m in re.finditer(r"^(?:asm )?\w[^\n;{]*?\b(\w+)\([^)]*\)\s*\{",code,re.M): cur,code=merge(cur,code,m.group(1))
tmp=P+f'src/auto/zz_u{os.getpid()}.c'; o=f''+os.environ.get('DECOMP_SCRATCH','/tmp/decomp-scratch')+'/zz_u{os.getpid()}.o'
open(tmp,'w').write(cur.rstrip('\n')+'\n\n'+code)
r=subprocess.run(f'cd {P} && ~/.local/share/decompnet/toolchains/wibo/wibo ~/.local/share/decompnet/toolchains/mwcc/GC/{qv}/mwcceppc.exe -nodefaults -proc gekko -align powerpc -enum int -fp hardware -Cpp_exceptions off -O4,p -inline auto -pragma "cats off" -pragma "warn_notinlined off" -maxerrors 5 -nosyspath -RTTI off -fp_contract on -str reuse -multibyte -i include -i tools/rea/ref/dolsdk2004/include -i tools/rea/ref/dolsdk2004/include/libc -i build/GHYE6S/include -DBUILD_VERSION=0 -DVERSION_GHYE6S -DNDEBUG=1 -lang=c -c {tmp} -o {o}',shell=True,capture_output=True,text=True)
os.remove(tmp); ok=os.path.exists(o)
if ok: os.remove(o)
errs=[l for l in r.stdout.split('\n') if l.strip()]
print('OK' if ok else 'ERROR\n'+'\n'.join(errs[-25:]))
