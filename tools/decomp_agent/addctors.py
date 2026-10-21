import re,os,sys
spl=open('config/GHYE6S/splits.txt').read()
n=0
for r in sys.argv[1:]:
    for l in open(r):
        p=l.split()
        if p[0]!='ok': continue
        _,fn,u,f=p[:4]
        m=re.search(r'\n'+re.escape(u)+r'\.(c|cpp):\n(.*?)\n\n',spl,re.S)
        if not m or '.ctors' not in m.group(2): continue
        for ext in ('c','cpp'):
            pth=f'src/{u}.{ext}'
            if os.path.exists(pth):
                s=open(pth).read()
                if 'section ".ctors"' not in s:
                    tail='\n} /* extern "C" */\n' if ext=='cpp' and s.rstrip().endswith('} /* extern "C" */') else ''
                    entry=f'\n__declspec(section ".ctors") static void (*const ctor_{fn[3:]})(void) = {fn};\n'
                    if tail: s=s.rstrip().rsplit('} /* extern "C" */',1)[0].rstrip('\n')+'\n'+entry+tail
                    else: s=s.rstrip('\n')+'\n'+entry
                    open(pth,'w').write(s); n+=1
print('ctors added',n)
