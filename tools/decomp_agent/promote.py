#!/usr/bin/env python3
# promote.py UNIT...: flip NonMatching -> Matching with bisection; keeps only units that link byte-identical. Run under the lock.
import subprocess,sys,os
os.chdir('/home/mi/Decomp/hauntedmansion-ghye6s')
def sh(c): return subprocess.run(c,shell=True,capture_output=True,text=True)
def setm(units,on):
    c=open('configure.py').read()
    for u in units:
        for ext in ('.c','.cpp'):
            a,b=f'Object(NonMatching, "{u}{ext}"',f'Object(Matching, "{u}{ext}"'
            if not on: a,b=b,a
            c=c.replace(a,b)
    open('configure.py','w').write(c)
def ok():
    sh('rm -f build/GHYE6S/main.dol')
    return sh('timeout 900 ninja').returncode==0 and 'OK' in sh('sha1sum -c config/GHYE6S/build.sha1').stdout
def tryset(us):
    setm(us,True)
    if ok(): print('OK',us,flush=True); return us
    setm(us,False)
    if len(us)==1: print('FAIL',us,flush=True); return []
    h=len(us)//2; return tryset(us[:h])+tryset(us[h:])
good=tryset(sys.argv[1:]); ok(); print('linked',good)
