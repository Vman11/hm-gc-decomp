#!/usr/bin/env python3
"""Register-equivalence check of the built main.dol against the original.

Policy (2026-11-11): a function whose only difference from the original is WHICH
registers hold values counts as matched. Such functions are listed in
config/<version>/regequiv.txt and this script is the safety net that replaces the
plain sha1 check:

  a) both DOLs have the same size and section table, and every byte outside .text
     is identical;
  b) every differing .text word lies inside a function listed in regequiv.txt;
  c) in each such function every instruction pair has the same opcode and the same
     non-register fields (immediates, displacements, branch targets, condition bits);
  d) one consistent register renaming (a bijection orig -> ours, separately for
     GPRs, FPRs and CR fields) explains all register fields of the function, and
     the renaming is the identity on every register that is visible across an ABI
     boundary:
       - r0, r1, r2, r13;
       - registers live at function entry (parameters; saving a callee-saved
         register to the stack frame is not counted as a read);
       - registers a callee may read at each call: the callee's own live-in set
         (computed over the whole original program; indirect/unknown callees read
         r3-r10, f1-f8, cr1; callee-saved registers the callee saves in its own
         frame are not inputs) plus every argument register written in the same basic
         block before the call;
       - r3/r4/f1 if anything may read them after a call before they are rewritten
         (results), and any other volatile register this function itself reads
         after a call;
       - r3 / f1 if the function writes them at all (results; also r4 when some
         caller reads r4 after calling the function);
       - registers used implicitly (cr0/cr1 of record forms, CR logic, mfcr/mtcrf);
     and it keeps volatile registers volatile, callee-saved registers callee-saved
     and the register range of stmw/lmw closed.
  Anything the decoder does not know is rejected.

Usage:
  python3 tools/equivcheck.py                 check build/<v>/main.dol (exit 1 on violation)
  python3 tools/equivcheck.py --list U ...    would these pass? U is a unit (auto/text_8002BDD4),
                                              unit:fn or a function name; compares
                                              build/<v>/src/<unit>.o with build/<v>/obj/<unit>.o
                                              and the original DOL, without linking.
Only the Python standard library is needed.
"""
import argparse
import bisect
import os
import re
import struct
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))

# register numbering inside bit masks: GPR n -> n, FPR n -> 32+n, CR field n -> 64+n
GP, FP, CRF = 0, 32, 64
RD, WR, SAVE = 1, 2, 4


def bits(base, regs):
    m = 0
    for r in regs:
        m |= 1 << (base + r)
    return m


VOL = bits(GP, [0] + list(range(3, 13))) | bits(FP, range(0, 14)) | bits(CRF, [0, 1, 5, 6, 7])
NONVOL = bits(GP, range(14, 32)) | bits(FP, range(14, 32)) | bits(CRF, [2, 3, 4])
FIXED = bits(GP, [0, 1, 2, 13])
ARGS_ALL = bits(GP, range(3, 11)) | bits(FP, range(1, 9)) | bits(CRF, [1])
ARGREGS = bits(GP, range(3, 11)) | bits(FP, range(1, 9))
ALLCR = bits(CRF, range(8))
CR0, CR1 = 1 << CRF, 1 << (CRF + 1)
R3, R4, F1 = 1 << 3, 1 << 4, 1 << (FP + 1)

X_DAB = {266, 10, 138, 40, 8, 136, 235, 75, 11, 491, 459}
X_DA = {234, 202, 232, 200, 104}
X_ASB = {28, 60, 444, 412, 316, 476, 124, 284, 24, 536, 792}
X_AS = {26, 954, 922, 824}
LOADX = {23, 87, 279, 343, 534, 790}
LOADUX = {55, 119, 311, 375}
STOREX = {151, 215, 407, 662, 918}
STOREUX = {183, 247, 439}
FLOADX = {535, 599}
FLOADUX = {567, 631}
FSTOREX = {663, 727, 983}
FSTOREUX = {695, 759}
CACHE = {86, 54, 278, 246, 1014, 470, 982}
CRLOG = {257, 449, 193, 225, 33, 289, 129, 417}

_memo = {}


def sext(v, n):
    return v - (1 << n) if v & (1 << (n - 1)) else v


def dec(w):
    """Decode one instruction word.

    Returns None when unknown, else a tuple
      (ops, use, defs, pin, kind, rel, cond, regmask, closed)
    ops:     ((base, shift, width, role), ...) for every renamable register field
    use/defs: implicit (non-renamable) reads / writes as masks
    pin:     registers that must keep their number because of this instruction
    kind:    '' | 'b' | 'bl' | 'bc' | 'ret' | 'bctr' | 'icall'
    rel:     branch displacement for b/bl/bc
    cond:    True when a branch/return can fall through
    regmask: instruction bits covered by ops
    closed:  N when the instruction is stmw/lmw rN (range rN..r31 must stay closed)
    """
    r = _memo.get(w)
    if r is None and w not in _memo:
        r = _memo[w] = _dec(w)
    return r


def _dec(w):
    op = w >> 26
    ops = []
    use = defs = pin = 0
    kind = ''
    rel = 0
    cond = False
    closed = None
    A = (w >> 16) & 31

    def g(sh, role):
        ops.append((GP, sh, 5, role))

    def f(sh, role):
        ops.append((FP, sh, 5, role))

    def c(sh, role):
        ops.append((CRF, sh, 3, role))

    def a0():
        if A:
            g(16, RD)

    def rc(bit):
        nonlocal defs, pin
        if w & 1:
            defs |= bit
            pin |= bit

    def bcond():
        # BO/BI of a conditional branch; returns True when the condition is used
        bo = (w >> 21) & 31
        if not bo & 16:
            c(18, RD)
        return (bo & 0x14) != 0x14

    if op in (7, 8, 12, 13):
        g(21, WR)
        g(16, RD)
        if op == 13:
            defs |= CR0
            pin |= CR0
    elif op in (10, 11):
        c(23, WR)
        g(16, RD)
    elif op in (14, 15):
        g(21, WR)
        a0()
    elif op == 16:
        if w & 3:
            return None  # absolute or conditional call
        cond = bcond()
        kind = 'bc'
        rel = sext(w & 0xFFFC, 16)
    elif op == 18:
        if w & 2:
            return None
        kind = 'bl' if w & 1 else 'b'
        rel = sext(w & 0x03FFFFFC, 26)
    elif op == 19:
        xo = (w >> 1) & 1023
        if xo == 16:
            cond = bcond()
            if w & 1:
                if cond:
                    return None
                kind = 'icall'
            else:
                kind = 'ret'
        elif xo == 528:
            cond = bcond()
            if cond:
                return None
            kind = 'icall' if w & 1 else 'bctr'
        elif xo == 0:
            c(23, WR)
            c(18, RD)
        elif xo in CRLOG:
            m = 0
            for sh in (21, 16, 11):
                m |= 1 << (CRF + ((w >> sh) & 31) // 4)
            use |= m
            pin |= m
        elif xo == 150:
            pass
        else:
            return None
    elif op == 20:
        g(16, RD | WR)
        g(21, RD)
        rc(CR0)
    elif op == 21:
        g(16, WR)
        g(21, RD)
        rc(CR0)
    elif op == 23:
        g(16, WR)
        g(21, RD)
        g(11, RD)
        rc(CR0)
    elif 24 <= op <= 29:
        g(16, WR)
        g(21, RD)
        if op >= 28:
            defs |= CR0
            pin |= CR0
    elif op == 31:
        xo = (w >> 1) & 1023
        x9 = xo & 511
        if xo in (0, 32):
            c(23, WR)
            g(16, RD)
            g(11, RD)
        elif x9 in X_DAB and not (xo >= 512 and x9 in (75, 11)):
            g(21, WR)
            g(16, RD)
            g(11, RD)
            rc(CR0)
        elif x9 in X_DA:
            g(21, WR)
            g(16, RD)
            rc(CR0)
        elif xo in X_ASB:
            g(16, WR)
            g(21, RD)
            g(11, RD)
            rc(CR0)
        elif xo in X_AS:
            g(16, WR)
            g(21, RD)
            rc(CR0)
        elif xo in LOADX:
            g(21, WR)
            a0()
            g(11, RD)
        elif xo in LOADUX:
            g(21, WR)
            g(16, RD | WR)
            g(11, RD)
        elif xo in STOREX:
            g(21, RD)
            a0()
            g(11, RD)
        elif xo in STOREUX:
            g(21, RD)
            g(16, RD | WR)
            g(11, RD)
        elif xo in FLOADX:
            f(21, WR)
            a0()
            g(11, RD)
        elif xo in FLOADUX:
            f(21, WR)
            g(16, RD | WR)
            g(11, RD)
        elif xo in FSTOREX:
            f(21, RD)
            a0()
            g(11, RD)
        elif xo in FSTOREUX:
            f(21, RD)
            g(16, RD | WR)
            g(11, RD)
        elif xo in (339, 83, 371):  # mfspr mfmsr mftb
            g(21, WR)
        elif xo in (467, 146):  # mtspr mtmsr
            g(21, RD)
        elif xo == 19:  # mfcr
            g(21, WR)
            use |= ALLCR
            pin |= ALLCR
        elif xo == 144:  # mtcrf
            g(21, RD)
            use |= ALLCR
            pin |= ALLCR
        elif xo in CACHE:
            a0()
            g(11, RD)
        elif xo == 598:
            pass
        else:
            return None
    elif 32 <= op <= 45:
        load = op < 36 or 40 <= op <= 43
        if load:
            g(21, WR)
        elif op == 36 and A == 1 and ((w >> 21) & 31) >= 14:
            g(21, SAVE)  # callee-saved register stored into the frame
        else:
            g(21, RD)
        if op & 1:
            g(16, RD | WR)
        else:
            a0()
    elif op in (46, 47):
        closed = (w >> 21) & 31
        a0()
        rng = bits(GP, range(closed, 32))
        if op == 46:
            defs |= rng
        elif closed < 14 or A != 1:  # not a prologue save
            use |= rng
            pin |= rng
    elif 48 <= op <= 55:
        if op < 52:
            f(21, WR)
        elif op == 54 and A == 1 and ((w >> 21) & 31) >= 14:
            f(21, SAVE)
        else:
            f(21, RD)
        if op & 1:
            g(16, RD | WR)
        else:
            a0()
    elif op in (56, 57, 60, 61):  # psq_l psq_lu psq_st psq_stu
        if op < 60:
            f(21, WR)
        elif op == 60 and A == 1 and ((w >> 21) & 31) >= 14:
            f(21, SAVE)
        else:
            f(21, RD)
        if op & 1:
            g(16, RD | WR)
        else:
            a0()
    elif op in (59, 63):
        x5 = (w >> 1) & 31
        xo = (w >> 1) & 1023
        if x5 in (18, 20, 21):
            f(21, WR)
            f(16, RD)
            f(11, RD)
            rc(CR1)
        elif x5 == 25:
            f(21, WR)
            f(16, RD)
            f(6, RD)
            rc(CR1)
        elif x5 in (28, 29, 30, 31) or (x5 == 23 and op == 63):
            f(21, WR)
            f(16, RD)
            f(11, RD)
            f(6, RD)
            rc(CR1)
        elif (x5 == 24 and op == 59) or (x5 == 26 and op == 63):
            f(21, WR)
            f(11, RD)
            rc(CR1)
        elif op == 59:
            return None
        elif xo in (0, 32):
            c(23, WR)
            f(16, RD)
            f(11, RD)
        elif xo in (12, 14, 15, 40, 72, 136, 264):
            f(21, WR)
            f(11, RD)
            rc(CR1)
        elif xo == 583:
            f(21, WR)
            rc(CR1)
        elif xo == 711:
            f(11, RD)
            rc(CR1)
        elif xo in (70, 38):
            rc(CR1)
        else:
            return None
    else:
        return None
    regmask = 0
    for _, sh, wd, _r in ops:
        regmask |= ((1 << wd) - 1) << sh
    return (tuple(ops), use, defs, pin, kind, rel, cond, regmask, closed)


class Fn:
    """Control flow and register use of one function of the ORIGINAL program."""

    def __init__(self, name, addr, words, read32=None):
        self.name = name
        self.addr = addr
        self.words = words
        n = self.n = len(words)
        self.opaque = None
        self.use = [0] * n
        self.xuse = [0] * n  # reads by the instruction itself
        self.defs = [0] * n
        self.succ = [()] * n
        self.call = {}      # index -> target address (None = indirect)
        self.rets = set()   # indexes of blr
        self.bctr = set()
        self.pin = 0
        self.saved = 0      # callee-saved registers the function stores into its frame
        self.closed = []
        self.leader = set([0])
        self.livein = ARGS_ALL
        self.live = None
        end = addr + 4 * n
        for i, w in enumerate(words):
            d = dec(w)
            if d is None:
                self.opaque = 'unknown instruction %08x at %08x' % (w, addr + 4 * i)
                return
            ops, use, defs, pin, kind, rel, cond, _m, closed = d
            for base, sh, wd, role in ops:
                b = 1 << (base + ((w >> sh) & ((1 << wd) - 1)))
                if role & RD:
                    use |= b
                if role & WR:
                    defs |= b
                if role & SAVE:
                    self.saved |= b
            self.pin |= pin
            if closed is not None:
                self.closed.append(closed)
                if w >> 26 == 47 and not d[1]:
                    self.saved |= bits(GP, range(closed, 32))
            self.xuse[i] = use
            nxt = (i + 1,) if i + 1 < n else None
            t = addr + 4 * i + rel
            if kind == '':
                succ = nxt
            elif kind == 'bl':
                self.call[i] = t
                defs |= VOL
                succ = nxt
            elif kind == 'icall':
                self.call[i] = None
                defs |= VOL
                succ = nxt
            elif kind == 'b':
                if addr <= t < end:
                    succ = ((t - addr) // 4,)
                    self.leader.add(succ[0])
                else:
                    self.call[i] = t  # tail call
                    self.rets.add(i)
                    succ = ()
                self.leader.add(i + 1)
            elif kind == 'bc':
                if not addr <= t < end:
                    self.opaque = 'conditional branch out of the function at %08x' % (addr + 4 * i)
                    return
                ti = (t - addr) // 4
                self.leader.add(ti)
                self.leader.add(i + 1)
                succ = (ti,) + nxt if cond and nxt else (ti,) if not cond else None
            elif kind == 'ret':
                self.rets.add(i)
                self.leader.add(i + 1)
                succ = nxt if cond else ()
            elif self._jumptable(i, read32):
                succ = self._jumptable(i, read32)
                self.leader.update(succ)
                self.leader.add(i + 1)
            else:  # bctr: unknown jump table or indirect tail call
                self.bctr.add(i)
                self.rets.add(i)
                use |= ARGS_ALL
                self.leader.add(i + 1)
                succ = ()
            if succ is None:
                self.opaque = 'falls off the end at %08x' % (addr + 4 * i)
                return
            self.use[i] = use
            self.defs[i] = defs
            self.succ[i] = succ

    def _jumptable(self, i, read32):
        """Targets of 'lis rA; addi rA,rA; ...; lwzx rT,rA,rB; mtctr rT; bctr', else None."""
        w = self.words
        if read32 is None or i < 4 or (w[i - 1] & 0xFC1FFFFF) != 0x7C0903A6:
            return None
        t = (w[i - 1] >> 21) & 31
        x = w[i - 2]
        if x >> 26 != 31 or (x >> 1) & 1023 != 23 or (x >> 21) & 31 != t:
            return None
        a = (x >> 16) & 31
        lo = hi = None
        for k in range(i - 3, max(i - 10, -1), -1):
            d = dec(w[k])
            if d is None or d[4]:
                return None
            wr = (w[k] >> 21) & 31 if w[k] >> 26 in (14, 15) else None
            if lo is None:
                if w[k] >> 26 == 14 and wr == a and (w[k] >> 16) & 31 == a:
                    lo = sext(w[k] & 0xFFFF, 16)
                elif any(base == GP and role & WR and (w[k] >> sh) & 31 == a for base, sh, _w, role in d[0]):
                    return None
            else:
                if w[k] >> 26 == 15 and wr == a and (w[k] >> 16) & 31 == 0:
                    hi = w[k] & 0xFFFF
                    break
                elif any(base == GP and role & WR and (w[k] >> sh) & 31 == a for base, sh, _w, role in d[0]):
                    return None
            if k in self.leader:
                break  # the address must be built in the block of the bctr
        if hi is None:
            return None
        tbl = ((hi << 16) + lo) & 0xFFFFFFFF
        end = self.addr + 4 * self.n
        out = []
        while len(out) < 4096:
            v = read32(tbl + 4 * len(out))
            if v is None or v & 3 or not self.addr <= v < end:
                break
            out.append((v - self.addr) // 4)
        return tuple(sorted(set(out))) or None

    def liveness(self, livein_of, r4ret, explicit=False):
        """Backward liveness; returns live-in masks per instruction.

        Default: every read that may happen (callees included). explicit=True:
        only reads by this function's own instructions."""
        n = self.n
        live = [0] * n
        defs, succ, call = self.defs, self.succ, self.call
        if explicit:
            use, retuse, cu = self.xuse, 0, {}
        else:
            use = self.use
            retuse = R4 if self.addr in r4ret else 0
            cu = {i: (ARGS_ALL if t is None else livein_of(t)) for i, t in call.items()}
        any_live = 0
        changed = True
        while changed:
            changed = False
            for i in range(n - 1, -1, -1):
                out = 0
                for s in succ[i]:
                    out |= live[s]
                if i in self.rets:
                    if i not in call:
                        out |= retuse
                    if i in self.bctr:
                        out |= any_live
                new = use[i] | (out & ~defs[i])
                if i in cu:
                    new |= cu[i]
                if new != live[i]:
                    live[i] = new
                    any_live |= new
                    changed = True
        if not explicit:
            self.live = live
            self.calluse = cu
        return live

    def liveout(self, i, live=None):
        live = live or self.live
        out = 0
        for s in self.succ[i]:
            out |= live[s]
        return out


class Program:
    """Whole-program analysis of the original DOL."""

    def __init__(self, dol, syms):
        self.dol = dol
        self.fns = {}
        self.byname = {}
        for name, addr, size in syms:
            words = dol.words(addr, size)
            if words is None:
                continue
            fn = Fn(name, addr, words, dol.read32)
            self.fns[addr] = fn
            self.byname[name] = fn
        self.r4ret = set()
        self.indirect_r4 = False
        self._solve()

    def livein_of(self, t):
        fn = self.fns.get(t)
        return fn.livein if fn is not None else ARGS_ALL

    def _solve(self):
        fns = self.fns
        callers = {}
        for fn in fns.values():
            if fn.opaque:
                fn.livein = ARGS_ALL
                continue
            fn.livein = 0
            for t in fn.call.values():
                if t is not None:
                    callers.setdefault(t, set()).add(fn.addr)
        dirty = set(a for a, fn in fns.items() if not fn.opaque)
        while dirty:
            todo = sorted(dirty)
            dirty = set()
            for a in todo:
                fn = fns[a]
                live = fn.liveness(self.livein_of, self.r4ret)
                # A callee-saved register the callee saves itself is the caller's to keep,
                # not an input: a read-before-write of it is an uninitialised variable.
                if live[0] & ~fn.saved != fn.livein:
                    fn.livein = live[0] & ~fn.saved
                    dirty |= callers.get(a, set())
                for i, t in fn.call.items():
                    if i in fn.rets:  # tail call: our caller's use of r4 is the callee's
                        r4 = a in self.r4ret
                    else:
                        r4 = bool(fn.liveout(i) & R4)
                    if r4:
                        if t is None:
                            self.indirect_r4 = True
                        elif t not in self.r4ret:
                            self.r4ret.add(t)
                            if t in fns and not fns[t].opaque:
                                dirty.add(t)

    def check(self, fn, ours):
        """Compare the function with our words. Returns (ok, text)."""
        orig = fn.words
        if len(ours) != len(orig):
            return False, 'length differs'
        if ours == orig:
            return True, 'exact'
        if fn.opaque:
            return False, fn.opaque
        maps = {GP: {}, FP: {}, CRF: {}}
        inv = {GP: {}, FP: {}, CRF: {}}
        ours_defs = 0
        orig_defs = 0
        for i, (wo, wu) in enumerate(zip(orig, ours)):
            at = '%08x' % (fn.addr + 4 * i)
            ops, _u, idf, _p, _k, _r, _c, regmask, _cl = dec(wo)
            if (wo ^ wu) & ~regmask & 0xFFFFFFFF:
                return False, 'non-register field differs at %s (%08x vs %08x)' % (at, wo, wu)
            for base, sh, wd, role in ops:
                m = (1 << wd) - 1
                o = (wo >> sh) & m
                u = (wu >> sh) & m
                if maps[base].setdefault(o, u) != u or inv[base].setdefault(u, o) != o:
                    return False, 'no consistent renaming (%s at %s)' % (rname(base, o), at)
                if role & WR:
                    orig_defs |= 1 << (base + o)
                    ours_defs |= 1 << (base + u)
            orig_defs |= idf
            ours_defs |= idf
        # registers that must keep their number
        live = fn.liveness(self.livein_of, self.r4ret)
        xlive = fn.liveness(None, None, explicit=True)
        why = {}

        def pin(mask, reason):
            b = 0
            while mask:
                if mask & 1:
                    why.setdefault(b, reason)
                mask >>= 1
                b += 1

        pin(FIXED, 'reserved register')
        pin(fn.pin, 'implicit use')
        pin(live[0], 'live at entry')
        written = 0
        for i in range(fn.n):
            if i in fn.leader:
                written = 0
            if i in fn.call:
                at = '%08x' % (fn.addr + 4 * i)
                pin(fn.calluse[i], 'read by callee at ' + at)
                pin(written, 'argument set up before call at ' + at)
                written = 0
                if i not in fn.rets:
                    # a volatile register read after a call holds a result: r3/r4/f1 when
                    # anything (a later callee included) may read it, any other one
                    # only when this function itself reads it
                    pin(fn.liveout(i) & (R3 | R4 | F1), 'result read after call at ' + at)
                    pin(fn.liveout(i, xlive) & VOL, 'read after call at ' + at)
            else:
                written |= fn.defs[i] & ARGREGS
        ret = R3 | F1
        if self.indirect_r4 or fn.addr in self.r4ret:
            ret |= R4
        pin((orig_defs | ours_defs) & ret, 'return value')
        moved = []
        for base in (GP, FP, CRF):
            for o, u in sorted(maps[base].items()):
                if o == u:
                    continue
                moved.append('%s->%s' % (rname(base, o), rname(base, u)))
                for x in (o, u):
                    if base + x in why:
                        return False, '%s->%s but %s is pinned (%s)' % (
                            rname(base, o), rname(base, u), rname(base, x), why[base + x])
                bo, bu = 1 << (base + o), 1 << (base + u)
                if bool(bo & NONVOL) != bool(bu & NONVOL) or bool(bo & VOL) != bool(bu & VOL):
                    return False, '%s->%s crosses volatile/callee-saved' % (rname(base, o), rname(base, u))
                if base == GP:
                    for n in fn.closed:
                        if (o >= n) != (u >= n):
                            return False, '%s->%s leaves the stmw/lmw r%d range' % (
                                rname(base, o), rname(base, u), n)
        if not moved:
            return False, 'differs but no register renamed'
        return True, 'regequiv ' + ' '.join(moved)


def rname(base, n):
    return {GP: 'r', FP: 'f', CRF: 'cr'}[base] + str(n)


class Dol:
    def __init__(self, path):
        self.data = d = open(path, 'rb').read()
        h = struct.unpack('>54I', d[:0xD8])
        self.header = d[:0x100]
        self.secs = [(h[i], h[18 + i], h[36 + i], i < 7) for i in range(18) if h[36 + i]]

    def find(self, addr):
        for off, a, size, _t in self.secs:
            if a <= addr < a + size:
                return off + addr - a
        return None

    def read32(self, addr):
        off = self.find(addr)
        return struct.unpack('>I', self.data[off:off + 4])[0] if off is not None else None

    def words(self, addr, size):
        off = self.find(addr)
        if off is None or size % 4 or self.find(addr + size - 4) != off + size - 4:
            return None
        return list(struct.unpack('>%dI' % (size // 4), self.data[off:off + size]))


def load_syms(path):
    out = []
    rx = re.compile(r'^(\S+) = \.(?:text|init):0x([0-9A-Fa-f]+); // type:function size:0x([0-9A-Fa-f]+)')
    for line in open(path):
        m = rx.match(line)
        if m:
            out.append((m.group(1), int(m.group(2), 16), int(m.group(3), 16)))
    out.sort(key=lambda s: s[1])
    return out


def load_allow(path):
    if not os.path.exists(path):
        return []
    return [l.split('#')[0].strip() for l in open(path) if l.split('#')[0].strip()]


def check_dol(args, P):
    orig = Dol(P['orig'])
    if not os.path.exists(P['dol']):
        print('FAIL: %s not built' % P['dol'])
        return 1
    ours = Dol(P['dol'])
    if len(orig.data) != len(ours.data) or orig.header != ours.header:
        print('FAIL: DOL size or section table differs')
        return 1
    text = max((s for s in orig.secs if s[3]), key=lambda s: s[2])
    toff, taddr, tsize, _ = text
    bad = 0
    if orig.data[:toff] != ours.data[:toff] or orig.data[toff + tsize:] != ours.data[toff + tsize:]:
        for i in range(0, len(orig.data), 4):
            if not toff <= i < toff + tsize and orig.data[i:i + 4] != ours.data[i:i + 4]:
                print('FAIL: byte difference outside .text at file offset 0x%x' % i)
                bad += 1
                if bad >= 10:
                    break
        return 1
    if orig.data == ours.data:
        print('OK: main.dol is byte-identical to the original')
        return 0
    syms = load_syms(P['syms'])
    starts = [s[1] for s in syms]
    allow = set(load_allow(P['allow']))
    n = tsize // 4
    wo = struct.unpack('>%dI' % n, orig.data[toff:toff + tsize])
    wu = struct.unpack('>%dI' % n, ours.data[toff:toff + tsize])
    touched = {}
    for i in range(n):
        if wo[i] != wu[i]:
            a = taddr + 4 * i
            k = bisect.bisect_right(starts, a) - 1
            if k < 0 or a >= syms[k][1] + syms[k][2]:
                print('FAIL: difference at %08x outside any function' % a)
                bad += 1
            else:
                touched[syms[k][0]] = touched.get(syms[k][0], 0) + 1
    prog = Program(orig, syms)
    npass = 0
    for name, cnt in sorted(touched.items()):
        fn = prog.byname[name]
        if name not in allow:
            print('FAIL %s: %d differing words, not listed in %s' % (name, cnt, os.path.relpath(P['allow'], ROOT)))
            bad += 1
            continue
        ok, text_ = prog.check(fn, ours.words(fn.addr, 4 * fn.n))
        print('%s %s: %s' % ('PASS' if ok else 'FAIL', name, text_))
        if ok:
            npass += 1
        else:
            bad += 1
    for name in sorted(allow - set(touched)):
        print('note %s: listed in regequiv.txt but exact (or unknown); entry can be removed' % name)
    if bad:
        print('FAIL: %d violation(s)' % bad)
        return 1
    print('OK: main.dol is register-equivalent to the original (%d function(s) differ by register renaming only)' % npass)
    return 0


# ---- --list: object files -------------------------------------------------

RELMASK = {4: 0xFFFF, 5: 0xFFFF, 6: 0xFFFF, 10: 0x03FFFFFC, 11: 0xFFFC, 109: 0x001FFFFF}


class Obj:
    def __init__(self, path):
        d = self.d = open(path, 'rb').read()
        shoff, = struct.unpack('>I', d[0x20:0x24])
        shentsize, shnum, _ = struct.unpack('>3H', d[0x2E:0x34])
        self.sh = [struct.unpack('>10I', d[shoff + i * shentsize:shoff + i * shentsize + 40]) for i in range(shnum)]
        self.funcs = {}
        self.syms = []
        for s in self.sh:
            if s[1] == 2:
                stro = self.sh[s[6]][4]
                for o in range(s[4], s[4] + s[5], 16):
                    nm, val, size, info, _oth, shndx = struct.unpack('>3I2BH', d[o:o + 16])
                    name = d[stro + nm:d.index(b'\0', stro + nm)].decode('latin1')
                    self.syms.append((name, info >> 4, shndx, val))
                    if info & 15 == 2 and size:
                        self.funcs[name] = (shndx, val, size)
        self.rel = {}
        for s in self.sh:
            if s[1] == 4:
                r = self.rel.setdefault(s[7], {})
                for o in range(s[4], s[4] + s[5], 12):
                    off, info, add = struct.unpack('>IIi', d[o:o + 12])
                    r.setdefault(off & ~3, []).append((info & 255, info >> 8, add))

    def func(self, name):
        if name not in self.funcs:
            return None
        shndx, val, size = self.funcs[name]
        base = self.sh[shndx][4] + val
        words = list(struct.unpack('>%dI' % (size // 4), self.d[base:base + size]))
        rels = {}
        for off, lst in self.rel.get(shndx, {}).items():
            if val <= off < val + size:
                rels[(off - val) // 4] = sorted(
                    (t, self.syms[s][0], self.syms[s][1], add) for t, s, add in lst)
        return words, rels


def list_mode(args, P):
    orig = Dol(P['orig'])
    syms = load_syms(P['syms'])
    prog = Program(orig, syms)
    prog.symaddr = {}
    for line in open(P['syms']):
        m = re.match(r'^(\S+) = [^:]+:0x([0-9A-Fa-f]+);', line)
        if m:
            prog.symaddr.setdefault(m.group(1), set()).add(int(m.group(2), 16))
    units = []  # (unit, start, end)
    cur = None
    for line in open(P['splits']):
        if line and not line[0].isspace() and line.rstrip().endswith(':'):
            cur = os.path.splitext(line.rstrip()[:-1])[0]
        m = re.match(r'\s+\.text\s+start:0x([0-9A-Fa-f]+) end:0x([0-9A-Fa-f]+)', line)
        if m and cur:
            units.append((cur, int(m.group(1), 16), int(m.group(2), 16)))
    rc = 0
    for arg in args.list:
        unit, _, only = arg.partition(':')
        if not only and unit in prog.byname:
            only = unit
            a = prog.byname[unit].addr
            unit = next((u for u, s, e in units if s <= a < e), None)
            if unit is None:
                print('FAIL %s: no unit' % only)
                rc = 1
                continue
        want = set(only.split(',')) if only else None
        try:
            mine = Obj(os.path.join(P['build'], 'src', unit + '.o'))
            tgt = Obj(os.path.join(P['build'], 'obj', unit + '.o'))
        except OSError as e:
            print('FAIL %s: %s' % (unit, e))
            rc = 1
            continue
        res = {'exact': 0, 'regequiv': 0, 'fail': 0}
        names = sorted(tgt.funcs, key=lambda k: tgt.funcs[k][1])
        for name in names:
            if want and name not in want:
                continue
            ok, text_ = list_one(prog, name, mine, tgt)
            key = 'fail' if not ok else 'exact' if text_.startswith('exact') else 'regequiv'
            res[key] += 1
            if key != 'exact' or want or args.verbose:
                print('%s %s %s: %s' % ('PASS' if ok else 'FAIL', unit, name, text_))
        if not want:
            verdict = 'QUALIFIES' if not res['fail'] and res['regequiv'] else \
                'EXACT' if not res['fail'] else 'NO'
            print('UNIT %s: %s (%d exact, %d regequiv, %d fail)' % (
                unit, verdict, res['exact'], res['regequiv'], res['fail']))
        if res['fail']:
            rc = 1
    return rc


def list_one(prog, name, mine, tgt):
    fn = prog.byname.get(name)
    if fn is None:
        return False, 'not a function in symbols.txt'
    m = mine.func(name)
    t = tgt.func(name)
    if m is None:
        return False, 'missing in our object'
    mw, mr = m
    tw, tr = t
    if len(mw) != fn.n or len(tw) != fn.n:
        return False, 'size differs (%d vs %d bytes)' % (4 * len(mw), 4 * fn.n)
    if sorted(mr) != sorted(tr):
        return False, 'relocations at different places'
    loose = 0
    ours = list(mw)
    for i in mr:
        a, b = mr[i], tr[i]
        if [(x[0], x[3]) for x in a] != [(x[0], x[3]) for x in b]:
            return False, 'relocation type/addend differs at +0x%x' % (4 * i)
        mask = 0
        for (ty, na, ba, _ad), (_ty, nb, bb, _ad2) in zip(a, b):
            if ty not in RELMASK:
                return False, 'unsupported relocation type %d' % ty
            mask |= RELMASK[ty]
            if na != nb:
                aa, ab = prog.symaddr.get(na, ()), prog.symaddr.get(nb, ())
                if ba != 0 and len(aa) == 1 and len(ab) == 1:
                    if aa != ab:
                        return False, 'relocation target differs at +0x%x (%s vs %s)' % (4 * i, na, nb)
                else:
                    loose += 1
        ours[i] = (ours[i] & ~mask) | (fn.words[i] & mask)
    ok, text_ = prog.check(fn, ours)
    if ok and loose:
        text_ += ' [%d local relocation target(s) not compared by name]' % loose
    return ok, text_


def main():
    ap = argparse.ArgumentParser(description=__doc__.split('\n')[0])
    ap.add_argument('--version', default='GHYE6S')
    ap.add_argument('--dol', help='built DOL (default build/<version>/main.dol)')
    ap.add_argument('--list', nargs='+', metavar='UNIT', help='report whether units/functions would pass')
    ap.add_argument('-v', '--verbose', action='store_true', help='--list: also print exact functions')
    args = ap.parse_args()
    v = args.version
    P = {
        'build': os.path.join(ROOT, 'build', v),
        'dol': args.dol or os.path.join(ROOT, 'build', v, 'main.dol'),
        'orig': os.path.join(ROOT, 'orig', v, 'sys', 'main.dol'),
        'syms': os.path.join(ROOT, 'config', v, 'symbols.txt'),
        'splits': os.path.join(ROOT, 'config', v, 'splits.txt'),
        'allow': os.path.join(ROOT, 'config', v, 'regequiv.txt'),
    }
    sys.exit(list_mode(args, P) if args.list else check_dol(args, P))


if __name__ == '__main__':
    main()
