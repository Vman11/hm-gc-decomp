import os
# gen_sinit.py famsize famcount outdir : generate sinit candidates for cos+ctor+register families
import json,sys,re,os
S=os.environ.get('DECOMP_SCRATCH','/tmp/decomp-scratch')
sys.path.insert(0,S)
from relocs import relocs
d=json.load(open(S+'/families.json'))
cnt,size,outd=int(sys.argv[1]),int(sys.argv[2]),sys.argv[3]
fam=[x for x in d if x[0]==cnt and x[1]==size][0][3]
os.makedirs(outd,exist_ok=True)
lst=[]
for fn,un,_ in fam:
    regs={}; decl={}; body=[]; calls=[]; fsrc=None
    ins=relocs(un,fn)
    for op,args,rt,sym in ins:
        a=[x.strip() for x in args.split(',')]
        if op=='lis' and sym: regs[a[0]]=('lbl',sym)
        elif op=='addi' and sym: regs[a[0]]=('lbl',sym)
        elif op=='addi' and not sym and len(a)==3 and a[1] in regs and regs[a[1]][0]=='lbl': regs[a[0]]=('off',regs[a[1]][1],int(a[2],0))
        elif op=='li' and sym: regs[a[0]]=('sda',sym)
        elif op=='li': regs[a[0]]=('imm',int(a[1],0))
        elif op=='mr': regs[a[0]]=regs.get(a[1])
        elif op=='bl':
            calls.append((sym,dict(regs))); regs['r3']=('ret',sym)
    # reloc order gives d1/dc etc
    syms=[x[3] for x in ins if x[3]]
    src,_,d1,dc,cf=syms[:5]
    # d2 = sym of second stfs SDA
    stfs=[x[3] for x in ins if x[0]=='stfs' and x[3]]
    d2=stfs[1]
    def argexpr(v):
        if v is None: return '0'
        if v[0]=='lbl':
            s=v[1]
            if s.startswith('fn_') or s.startswith('__'): decl[s]=f'void {s}(void);'; return f'(void *){s}'
            decl[s]=f'extern u8 {s}[];'; return s
        if v[0]=='off': decl[v[1]]=f'extern u8 {v[1]}[];'; return f'{v[1]} + {v[2]}'
        if v[0]=='sda': decl[v[1]]=f'extern u32 {v[1]};'; return f'&{v[1]}'
        if v[0]=='imm': return str(v[1])
        if v[0]=='ret': return 'RET'
    lines=[f'    {d1} = {src}[0];',f'    {d2} = {cf}({dc});']
    ctor_sym,cregs=calls[1]; reg_sym,rregs=calls[2]
    cargs=[argexpr(cregs.get(r)) for r in ['r3','r4','r5','r6','r7']]
    ctorcall=f'{ctor_sym}('+', '.join(cargs)+')'
    rargs=[ctorcall,argexpr(rregs.get('r4')),argexpr(rregs.get('r5'))]
    lines.append(f'    __register_global_object({", ".join(rargs)});')
    hdr=f'extern f32 {src}[];\nextern volatile f32 {d1};\nextern volatile f32 {d2};\nextern volatile f64 {dc};\ndouble {cf}(double);\nvoid *{ctor_sym}(void *, void *, void *, void *, s32);\nvoid __register_global_object(void *, void *, void *);\n'
    for k,v in decl.items():
        if k in (ctor_sym,'__register_global_object'): continue
        hdr+=v+'\n'
    c=hdr+f'\nvoid {fn}(void) {{\n'+'\n'.join(lines)+'\n}\n'
    open(f'{outd}/{fn}.c','w').write(c); lst.append(f'{fn} {un}')
open(outd+'/list','w').write('\n'.join(lst)+'\n')
print(len(lst))
