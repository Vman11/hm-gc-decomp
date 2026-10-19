#!/usr/bin/env python3
"""try.py jobs.json: each job {unit, fn, code}. Insert code into src/<unit>.c in address order,
build+diff; keep on 100% match, else restore. Prints a summary."""
import json, os, re, subprocess, sys
import os, sys
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import ins
JOBS = os.path.abspath(sys.argv[1])
ROOT = "/home/mi/Decomp/hauntedmansion-ghye6s"; os.chdir(ROOT)
FDIFF = os.path.join(os.path.dirname(os.path.abspath(__file__)), "fdiff.py")
jobs = json.load(open(JOBS))
ADDR = {}
for line in open('config/GHYE6S/symbols.txt'):
    m = re.match(r'(\S+) = \.text:0x([0-9A-F]+);', line)
    if m: ADDR[m.group(1)] = int(m.group(2), 16)

def register(unit):
    """Add Object(NonMatching, unit) to the game lib in configure.py, in address order."""
    cfg = open('configure.py').read()
    if f'"{unit}.c"' in cfg or f'"{unit}.cpp"' in cfg: return False
    addr = int(unit.split('_')[-1], 16)
    lines = cfg.split('\n'); start = None
    for i, l in enumerate(lines):
        if '"lib": "game"' in l: start = i
        if start is not None and i > start and 'Object(' in l:
            m = re.search(r'"auto/text_([0-9A-F]{8})\.c"', l)
            if m and int(m.group(1), 16) > addr:
                indent = l[:len(l) - len(l.lstrip())]
                lines.insert(i, f'{indent}Object(NonMatching, "{unit}.c"),')
                open('configure.py', 'w').write('\n'.join(lines)); return True
        if start is not None and i > start and l.strip() == '],': break
    raise SystemExit('could not place ' + unit)

ok, bad = [], []
OBJDIFF = "/home/mi/.local/share/decompnet/toolchains/objdiff-cli/objdiff-cli"


def unit_matched(unit):
    """Names of functions in unit that currently match 100%, from a fresh report."""
    subprocess.run(['ninja', 'build/GHYE6S/report.json'], capture_output=True)
    d = json.load(open('build/GHYE6S/report.json'))
    for u in d['units']:
        if u['name'] == 'main/' + unit:
            return {f['name'] for f in u.get('functions', []) if f.get('fuzzy_match_percent') == 100.0}
    return set()


def to_cpp(unit):
    """Rename src/<unit>.c to .cpp with its C wrapped in extern "C"; keep only if nothing regresses.
    Returns an undo function, or None if the conversion broke something."""
    c, cpp = f'src/{unit}.c', f'src/{unit}.cpp'
    before = unit_matched(unit)
    SPL = 'config/GHYE6S/splits.txt'
    src, cfg, spl = open(c).read(), open('configure.py').read(), open(SPL).read()
    lines = src.split('\n')
    k = 0
    while k < len(lines) and (lines[k].startswith(('//', '#include', '/*')) or not lines[k].strip()):
        k += 1
    body = '\n'.join(lines[k:]).rstrip('\n')
    new = '\n'.join(lines[:k]).rstrip('\n') + '\n\nextern "C" {\n\n' + body + ('\n\n' if body else '') + '} /* extern "C" */\n'
    open(cpp, 'w').write(new); os.remove(c)
    open('configure.py', 'w').write(cfg.replace(f'"{unit}.c"', f'"{unit}.cpp"'))
    open(SPL, 'w').write(spl.replace(f'\n{unit}.c:', f'\n{unit}.cpp:'))
    def undo():
        if os.path.exists(cpp): os.remove(cpp)
        open(c, 'w').write(src); open('configure.py', 'w').write(cfg); open(SPL, 'w').write(spl)
        subprocess.run(['ninja', 'build.ninja'], capture_output=True)
    r = subprocess.run(['ninja', f'build/GHYE6S/src/{unit}.o'], capture_output=True, text=True)
    if r.returncode or not before <= unit_matched(unit):
        undo(); return None
    return undo

for j in jobs:
    path = f"src/{j['unit']}.c"
    if os.path.exists(f"src/{j['unit']}.cpp"):
        path = f"src/{j['unit']}.cpp"
    if os.path.exists(path) and re.search(r'^[^\n;]*\b%s\s*\([^;{}]*\)\s*\{' % j['fn'], open(path).read(), re.M):
        bad.append((j['fn'], 'already defined')); continue
    if register(j['unit']): print('registered', j['unit'])
    undo_cpp = None
    if j.get('cpp') and path.endswith('.c'):
        undo_cpp = to_cpp(j['unit'])
        if undo_cpp is None:
            bad.append((j['fn'], 'unit does not survive C++ conversion')); continue
        path = f"src/{j['unit']}.cpp"
    orig = open(path).read()
    addr = ADDR.get(j['fn'], 0)
    # find the first defined fn with a higher address to insert before
    pos = len(orig)
    for m in re.finditer(r'^[A-Za-z][^\n;]*\bfn_([0-9A-F]{8})\s*\([^;{]*\)\s*\{', orig, re.M):
        if int(m.group(1), 16) > addr:
            pos = m.start(); break
    best = None
    for code in [j['code']] + j.get('alts', []):
        new = orig[:pos].rstrip('\n') + '\n\n' + ins.dedup(code, orig).strip('\n') + '\n' + ('\n' + orig[pos:] if pos < len(orig) else '')
        open(path, 'w').write(new)
        r = subprocess.run(['python3', FDIFF, j['unit'], j['fn']], capture_output=True, text=True)
        out = r.stdout
        first = out.splitlines()[0] if out else r.stderr[-300:]
        if r.returncode == 0 and first.strip() == 'match: 100.0':
            best = 'ok'; break
        if best is None:
            best = (first if r.returncode == 0 else out[-600:], out)
    if best == 'ok':
        ok.append(j['fn'])
    else:
        open(path, 'w').write(orig)
        if undo_cpp: undo_cpp()
        bad.append((j['fn'], best[0]))
        if j.get('show'): print(best[1])
subprocess.run(['ninja'] , capture_output=True)
print('MATCHED', len(ok), ok)
for b in bad: print('FAILED', *b)
