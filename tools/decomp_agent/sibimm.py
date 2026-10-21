import os
import sys,os,re,subprocess
S=os.environ.get('DECOMP_SCRATCH','/tmp/decomp-scratch')
sys.path.insert(0,S)
from relocs import relocs
import json
os.chdir('/home/mi/Decomp/hauntedmansion-ghye6s')
d=json.load(open(S+'/families.json'))
sibof={}
for n,s,h,g,m in d:
    if m:
        for tfn,tun,_ in g: sibof[tfn]=m
def imms(un,fn):
    out=[]
    for op,a,rt,sym in relocs(un,fn):
        if sym: continue
        if op in ('b','bl','beq','bne','bge','ble','blt','bgt','bdnz'): continue
        for x in re.findall(r'(?<![\w(])(-?\d+)(?![\w(])',a):
            out.append(int(x))
    return out
for l in open(S+'/sib.res'):
    st,fn,un,f=l.split()
    if st=='ok': continue
    sfn,sun=sibof[fn]
    si,ti=imms(sun,sfn),imms(un,fn)
    if len(si)!=len(ti): print(fn,'imm count differs'); continue
    diffs=sorted({(a,b) for a,b in zip(si,ti) if a!=b})
    code=open(f).read()
    for a,b in diffs:
        for form in (str(a),hex(a).upper().replace('0X','0x')):
            code=re.sub(r'(?<![\w.])'+re.escape(form)+r'(?![\w.])','\x00'+str(b)+'\x00',code)
    code=code.replace('\x00','')
    open(f,'w').write(code); print(fn,diffs)
