# relocs.py unit fn -> list of (op, reloctype, sym) in order
import subprocess,re,sys
P='/home/mi/Decomp/hauntedmansion-ghye6s/'
OD='/home/mi/.local/share/decompnet/toolchains/gc-wii-binutils/powerpc-eabi-objdump'
def relocs(un,fn):
    out=subprocess.run([OD,'-dr',P+'build/GHYE6S/obj/'+un+'.o'],capture_output=True,text=True).stdout
    on=False; res=[]; last=None
    for l in out.split('\n'):
        if re.match(r'^[0-9a-f]+ <%s>:'%re.escape(fn),l): on=True; continue
        if on and re.match(r'^[0-9a-f]+ <',l): break
        if not on: continue
        m=re.match(r'^\s+[0-9a-f]+:\s+(?:[0-9a-f]{2} ){4}\s*(\S+)\s*(.*)$',l)
        if m: last=(m.group(1),m.group(2).split('<')[0].strip()); res.append([last[0],last[1],None,None]); continue
        m=re.match(r'^\s+[0-9a-f]+: (R_\S+)\s+(\S+)',l)
        if m and res: res[-1][2]=m.group(1); res[-1][3]=m.group(2)
    return res
