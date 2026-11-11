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
  d) the register fields are explained by a renaming of LIVE RANGES. Both versions
     are analysed over the control-flow graph of the original (branches, and bctr
     through the original's jump tables): for every register the set of definitions
     that can reach each instruction is computed, where a definition is an
     (instruction, operand) position, the value a register has at function entry,
     or the write a call / an implicit result (cr0 of a record form, lmw, ...)
     makes. The function passes when
       - every register operand that is read is reached by exactly the same set of
         definition positions in both versions, and by the same register number
         when one of them is an entry value, a call result or an implicit write.
         So a value may sit in r29 in one region and in r30 in another, and two
         values that are live at the same time can never share a register in ours
         (the clobbered one would be reached by a different definition);
       - the two source operands of add, addc, adde, and, or, xor, nand, nor, eqv,
         mullw, mulhw(u), fadd(s), fmul(s) and the multiplicands of f(n)madd/f(n)msub
         may be exchanged (for the float ones this ignores which NaN payload is
         propagated when both operands are NaN);
       - at every call: r1, r2, r13, every argument register (r3-r10, f1-f8) written
         in the same basic block before the call, and every volatile register the
         callee may read (its live-in set over the whole original program;
         r3-r10, f1-f8, cr1 for indirect or undecodable callees) hold the same
         definitions in the same register number;
       - at every return: r3, r4, f1, every callee-saved register, r1, r2, r13 and
         any volatile register that some caller reads after the call do;
       - implicitly used registers (CR logic, mfcr, stmw/lmw ranges) do.
     Copy forwarding (second try, only for a function that failed without it): a plain
     copy (mr / ori rA,rS,0 / fmr) is not a definition site, the copy holds the sites of
     its source. So `addi r3,..; mr r31,r3` and `addi r31,..; mr r3,r31` are the same
     (the value reaches r3 and r31 from the addi in both). When a site executes again,
     every register still holding its earlier value is marked stale and is never
     accepted this way; entry values and call results are not forwarded either.
     A value that is live across a call therefore has to be in a callee-saved
     register in ours as well, and results are read from the ABI registers.
     Assumptions: a callee does not interpret the caller's callee-saved registers
     (it only saves and restores them); a volatile register other than r3/r4/f1
     that a call leaves behind matters only when the caller reads it with its own
     instructions (for those, and for r3/r4/f1, a call is transparent for the
     registers the callee can return unchanged). Functions with an unresolved bctr,
     a call into the middle of another function, or unreachable code that differs
     are rejected, as is anything the decoder does not know.
  --strict uses the first version of rule d) instead: ONE renaming for the whole
     function (a bijection orig -> ours, separately for GPRs, FPRs and CR fields)
     that is the identity on every register visible across an ABI boundary:
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
  python3 tools/equivcheck.py --strict ...    same, with the whole-function renaming rule
  python3 tools/equivcheck.py --selftest      the listed functions must pass, corrupted copies must fail
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

COMM_DAB = {266, 10, 138, 235, 75, 11}       # add addc adde mullw mulhw mulhwu
COMM_ASB = {28, 444, 316, 476, 124, 284}     # and or xor nand nor eqv
RETREGS = R3 | R4 | F1
VOLLIST = [b for b in range(96) if VOL >> b & 1]
KEEP = bits(GP, [1, 2, 13])

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


def comm(w):
    """Indexes (into dec(w).ops) of two source operands that may be exchanged, else None."""
    op = w >> 26
    if op == 31:
        xo = (w >> 1) & 1023
        x9 = xo & 511
        if xo in COMM_ASB or (x9 in COMM_DAB and not (xo >= 512 and x9 in (75, 11))):
            return (1, 2)
    elif op in (59, 63):
        x5 = (w >> 1) & 31
        if x5 in (21, 25):          # fadd A,B / fmul A,C
            return (1, 2)
        if x5 in (28, 29, 30, 31):  # fmsub fmadd fnmsub fnmadd: A*C
            return (1, 3)
    return None


def regbits(mask):
    out = []
    b = 0
    while mask:
        if mask & 1:
            out.append(b)
        mask >>= 1
        b += 1
    return out


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
        self.web = None
        self.rd = None
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

    def passthru(self, thru_of):
        """Volatile registers that may still hold their entry value at a return."""
        n = self.n
        succ, call = self.succ, self.call
        kill = self.defs[:]
        for i, t in call.items():
            kill[i] = VOL & ~thru_of(t)
        unt = [0] * n
        unt[0] = VOL
        changed = True
        while changed:
            changed = False
            for i in range(n):
                m = unt[i]
                if m:
                    out = m & ~kill[i]
                    for s in succ[i]:
                        if out & ~unt[s]:
                            unt[s] |= out
                            if s <= i:
                                changed = True
        res = 0
        for i in self.rets:
            res |= (unt[i] & thru_of(call[i])) if i in call else unt[i]
        return res

    def xlive(self, retuse, thru_of):
        """Liveness for reads by this function's own instructions (and by its callers
        after the return: retuse), where a call only redefines what the callee cannot
        pass through."""
        n = self.n
        succ, use = self.succ, self.xuse[:]
        for i, w in enumerate(self.words):
            # crclr/crset (crxor/creqv b,b,b): the old CR field is not really an input
            if w >> 26 == 19 and (w >> 1) & 1023 in (193, 289) and \
                    (w >> 21) & 31 == (w >> 16) & 31 == (w >> 11) & 31:
                use[i] &= ~ALLCR
            elif w >> 26 == 31 and (w >> 1) & 1023 == 144:   # mtcrf does not read the CR
                use[i] &= ~ALLCR
        kill = self.defs[:]
        for i, t in self.call.items():
            kill[i] = VOL & ~thru_of(t)
        isret = [False] * n
        for i in self.rets:
            isret[i] = True
        live = [0] * n
        changed = True
        while changed:
            changed = False
            for i in range(n - 1, -1, -1):
                out = retuse if isret[i] else 0
                for s in succ[i]:
                    out |= live[s]
                new = use[i] | (out & ~kill[i])
                if new != live[i]:
                    live[i] = new
                    changed = True
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
        self.strict = False
        self.thru = None
        self.xin = {}
        self.starts = None
        self._solve()

    def containing(self, t):
        """Start address of the function that contains address t, else None."""
        if t is None:
            return None
        if self.starts is None:
            self.starts = sorted(self.fns)
        k = bisect.bisect_right(self.starts, t) - 1
        if k >= 0 and t < self.starts[k] + 4 * self.fns[self.starts[k]].n:
            return self.starts[k]
        return None

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

    # ---- per-live-range check ------------------------------------------------

    def thru_of(self, t):
        return self.thru.get(t, VOL) if t is not None else VOL

    def _solve_webs(self):
        """Whole-program facts for check_webs: thru[f] = volatile registers f may
        return with their entry value; retx[f] = volatile registers some caller
        reads with its own instructions after calling f."""
        if self.thru is not None:
            return
        fns = self.fns
        thru = self.thru = {}
        callers = {}
        for a, fn in fns.items():
            thru[a] = VOL if fn.opaque else 0
            if not fn.opaque:
                for t in fn.call.values():
                    if t is not None:
                        callers.setdefault(t, set()).add(a)
        live_fns = set(a for a, fn in fns.items() if not fn.opaque)
        dirty = set(live_fns)
        while dirty:
            todo = sorted(dirty)
            dirty = set()
            for a in todo:
                m = fns[a].passthru(self.thru_of)
                if m != thru[a]:
                    thru[a] = m
                    dirty |= callers.get(a, set()) & live_fns
        retx = self.retx = dict.fromkeys(fns, 0)
        self.ind_retx = 0
        dirty = set(live_fns)
        while dirty:
            todo = sorted(dirty)
            dirty = set()
            ind0 = self.ind_retx
            for a in todo:
                fn = fns[a]
                if not fn.call:
                    continue
                ru = retx[a] | self.ind_retx
                live = fn.xlive(ru, self.thru_of)
                for i, t in fn.call.items():
                    m = (ru if i in fn.rets else fn.liveout(i, live)) & VOL
                    if not m:
                        continue
                    if t not in fns:
                        t = self.containing(t)    # entry in the middle of a function (_savegpr_NN)
                    if t is None:
                        self.ind_retx |= m
                    elif m & ~retx[t]:
                        retx[t] |= m
                        if t in live_fns:
                            dirty.add(t)
            if self.ind_retx != ind0:
                dirty = set(live_fns)

    def unsupported(self, fn):
        """Why the per-live-range check cannot analyse this function, else None."""
        if fn.opaque:
            return fn.opaque
        if fn.bctr:
            return 'indirect jump without a recognised jump table at %08x' % (fn.addr + 4 * min(fn.bctr))
        for i, t in sorted(fn.call.items()):
            if t is not None and t not in self.fns:
                return 'call or branch to an address that is not a function start at %08x' % (fn.addr + 4 * i)
        return None

    def inputs_of(self, t):
        """Registers a callee may read: its live-in set (a call inside it redefines the
        volatile registers) plus what its own instructions read of the registers that
        its callees can pass through."""
        if t not in self.fns or self.fns[t].opaque:
            return ARGS_ALL
        m = self.xin.get(t)
        if m is None:
            m = self.xin[t] = self.fns[t].xlive(0, self.thru_of)[0] & VOL
        return self.fns[t].livein | m

    def _webinfo(self, fn):
        """Position-only data of the original function, cached."""
        if fn.web is not None:
            return fn.web
        n = fn.n
        starts = sorted(l for l in fn.leader if l < n)
        blocks = [(s, e) for s, e in zip(starts, starts[1:] + [n])]
        bidx = {s: k for k, s in enumerate(starts)}
        bsucc = [[bidx[t] for t in fn.succ[e - 1]] for _s, e in blocks]
        iuse = [0] * n
        idef = [0] * n
        for i, w in enumerate(fn.words):
            d = dec(w)
            u, df = d[1], d[2]
            if w >> 26 == 47:                                  # stmw reads its range
                u |= bits(GP, range(d[8], 32))
            if w >> 26 == 19 and (w >> 1) & 1023 in CRLOG:     # CR logic rewrites the field of BT
                df |= 1 << (CRF + ((w >> 21) & 31) // 4)
            if w >> 26 == 31 and (w >> 1) & 1023 == 144:       # mtcrf writes the selected fields
                u &= ~ALLCR
                df |= bits(CRF, [k for k in range(8) if w & (1 << (19 - k))])
            iuse[i], idef[i] = u, df
        fn.web = (blocks, bsucc, iuse, idef)
        return fn.web

    def _effects(self, fn, words, idef):
        """Per instruction: [(state index, def-site bit, kills)]. State index r is the
        register in the pass-through model, r+96 in the model where a call redefines
        every volatile register."""
        eff = []
        for i, w in enumerate(words):
            e = []
            for k, (base, sh, wd, role) in enumerate(dec(w)[0]):
                if role & WR:
                    r = base + ((w >> sh) & ((1 << wd) - 1))
                    b = 1 << (1 + 8 * i + k)
                    e.append((r, b, True))
                    e.append((r + 96, b, True))
            ib = 1 << (8 * i + 8)
            for r in regbits(idef[i]):
                e.append((r, ib, True))
                e.append((r + 96, ib, True))
            if i in fn.call and i not in fn.rets:
                th = self.thru_of(fn.call[i])
                for r in VOLLIST:
                    e.append((r, ib, not (th >> r) & 1))
                    e.append((r + 96, ib, True))
            eff.append(e)
        return eff

    @staticmethod
    def _rdflow(eff, blocks, bsucc):
        """Reaching definitions at the start of every basic block."""
        summ = []
        for s, e in blocks:
            d = {}
            for i in range(s, e):
                for idx, bit, kill in eff[i]:
                    if kill:
                        d[idx] = (bit, True)
                    else:
                        g = d.get(idx)
                        d[idx] = (g[0] | bit, g[1]) if g else (bit, False)
            summ.append(d)
        IN = [None] * len(blocks)
        IN[0] = [1] * 192          # bit 0: the value the register has at entry
        work = [0]
        inw = {0}
        while work:
            b = work.pop()
            inw.discard(b)
            out = IN[b][:]
            for idx, (g, k) in summ[b].items():
                out[idx] = g if k else out[idx] | g
            for t in bsucc[b]:
                cur = IN[t]
                ch = False
                if cur is None:
                    IN[t] = out[:]
                    ch = True
                else:
                    for idx in range(192):
                        v = out[idx]
                        if v & ~cur[idx]:
                            cur[idx] |= v
                            ch = True
                if ch and t not in inw:
                    work.append(t)
                    inw.add(t)
        return IN

    @staticmethod
    def _fwdstep(F, eff_i, cp, i, W):
        """One instruction of the copy-forwarding model. F[r] holds the definition sites a
        register's value comes from, but a plain copy (mr rD,rS) hands on the sites of rS
        instead of being a site itself. When a site executes again, every register that
        holds its earlier value gets the extra 'stale' bit (site shifted up by W)."""
        grp = 0xFF << (8 * i + 1)
        for r in range(96):
            v = F[r]
            if v & grp:
                F[r] = v | ((v & grp) << W)
        val = F[cp[1]] if cp else 0
        for idx, bit, kill in eff_i:
            if idx < 96:
                if cp and idx == cp[0]:
                    F[idx] = val
                else:
                    F[idx] = bit if kill else F[idx] | bit

    def _fwdflow(self, eff, cps, blocks, bsucc, W):
        """Copy-forwarded definition sets at the start of every basic block."""
        IN = [None] * len(blocks)
        IN[0] = [1] * 96
        work = [0]
        inw = {0}
        while work:
            b = work.pop()
            inw.discard(b)
            out = IN[b][:]
            for i in range(*blocks[b]):
                self._fwdstep(out, eff[i], cps[i], i, W)
            for t in bsucc[b]:
                cur = IN[t]
                if cur is None:
                    IN[t] = out[:]
                    ch = True
                else:
                    ch = False
                    for r in range(96):
                        if out[r] & ~cur[r]:
                            cur[r] |= out[r]
                            ch = True
                if ch and t not in inw:
                    work.append(t)
                    inw.add(t)
        return IN

    def check(self, fn, ours):
        """Compare the function with our words. Returns (ok, text)."""
        if self.strict:
            return self.check_strict(fn, ours)
        return self.check_webs(fn, ours)

    def check_webs(self, fn, ours):
        """Per-live-range equivalence (see the module docstring). A function that fails is
        tried once more with copy forwarding (see _fwdflow)."""
        ok, text = self._check_webs(fn, ours, False)
        if not ok and ('different value' in text or 'implicit use' in text):
            ok2, text2 = self._check_webs(fn, ours, True)
            if ok2:
                return ok2, text2
        return ok, text

    def _check_webs(self, fn, ours, fwd):
        orig = fn.words
        n = fn.n
        if len(ours) != n:
            return False, 'length differs'
        if ours == orig:
            return True, 'exact'
        why = self.unsupported(fn)
        if why:
            return False, why
        self._solve_webs()
        RO, RU, CPS = [], [], []
        for i, (wo, wu) in enumerate(zip(orig, ours)):
            do, du = dec(wo), dec(wu)
            at = '%08x' % (fn.addr + 4 * i)
            if du is None or (wo ^ wu) & ~do[7] & 0xFFFFFFFF:
                return False, 'non-register field differs at %s (%08x vs %08x)' % (at, wo, wu)
            if [(b, sh, bool(r & WR), bool(r & (RD | SAVE))) for b, sh, _w, r in do[0]] != \
               [(b, sh, bool(r & WR), bool(r & (RD | SAVE))) for b, sh, _w, r in du[0]]:
                return False, 'operand form differs at %s (r0 as base)' % at
            ro = [b + ((wo >> sh) & ((1 << wd) - 1)) for b, sh, wd, _r in do[0]]
            ru = [b + ((wu >> sh) & ((1 << wd) - 1)) for b, sh, wd, _r in do[0]]
            for regs, w in ((ro, wo), (ru, wu)):
                wr = [r for r, o in zip(regs, do[0]) if o[3] & WR]
                if len(wr) != len(set(wr)):
                    return False, 'instruction writes one register twice at %s' % at
            if wo >> 26 in (56, 57) and ro[0] != ru[0]:
                # psq_l writes both halves of the register; the model only follows one value
                return False, 'psq_l into a different register at %s' % at
            RO.append(ro)
            RU.append(ru)
            cp = None
            if copy_of(wo) and copy_of(wu):
                kw = [k for k, o in enumerate(do[0]) if o[3] & WR]
                kr = [k for k, o in enumerate(do[0]) if o[3] & RD]
                if len(kw) == 1 and kr:
                    cp = (kw[0], kr[0])
            CPS.append(cp)
        blocks, bsucc, iuse, idef = self._webinfo(fn)
        if fn.rd is None:
            eo = self._effects(fn, orig, idef)
            fn.rd = self._rdflow(eo, blocks, bsucc), eo
        INO, EO = fn.rd
        EU = self._effects(fn, ours, idef)
        INU = self._rdflow(EU, blocks, bsucc)
        idmask = ((1 << (8 * (n + 1))) - 1) // 255     # entry + every implicit/call def site
        if fwd:
            cpo = [(RO[i][c[0]], RO[i][c[1]]) if c and RO[i][c[0]] != RO[i][c[1]] else None
                   for i, c in enumerate(CPS)]
            cpu = [(RU[i][c[0]], RU[i][c[1]]) if c and RU[i][c[0]] != RU[i][c[1]] else None
                   for i, c in enumerate(CPS)]
            FW = 8 * n + 16
            FIO = self._fwdflow(EO, cpo, blocks, bsucc, FW)
            FIU = self._fwdflow(EU, cpu, blocks, bsucc, FW)
        retv = RETREGS | self.retx[fn.addr] | self.ind_retx
        moved = {}
        swaps = 0
        for b, (s, e) in enumerate(blocks):
            if INO[b] is None:
                if orig[s:e] != ours[s:e]:
                    return False, 'differs in unreachable code at %08x' % (fn.addr + 4 * s)
                continue
            so, su = INO[b][:], INU[b][:]

            if fwd:
                fo, fu = FIO[b][:], FIU[b][:]

            def same(a, c, off=0):
                x = so[a + off]
                if x == su[c + off] and (a == c or not x & idmask):
                    return True
                if fwd and not off:
                    # copy-forwarded definitions: equal, all explicit, none possibly stale
                    x, y = fo[a], fu[c]
                    return x == y and not x & idmask and not x >> FW
                return False

            written = 0
            for i in range(s, e):
                at = '%08x' % (fn.addr + 4 * i)
                wo = orig[i]
                ops = dec(wo)[0]
                ro, ru = RO[i], RU[i]
                rd = [k for k, o in enumerate(ops) if o[3] & (RD | SAVE)]
                bad = [k for k in rd if not same(ro[k], ru[k])]
                if bad:
                    cp = comm(wo)
                    sw = {cp[0]: cp[1], cp[1]: cp[0]} if cp else {}
                    if cp and all(same(ro[k], ru[sw.get(k, k)]) for k in rd):
                        swaps += 1
                    else:
                        k = bad[0]
                        return False, 'operand reads a different value at %s (%s vs %s)' % (
                            at, rname2(ro[k]), rname2(ru[k]))
                for r in regbits(iuse[i]):
                    if not same(r, r):
                        return False, 'implicit use of %s differs at %s' % (rname2(r), at)
                hard = soft = 0
                if i in fn.call:
                    cu = self.inputs_of(fn.call[i])
                    hard = (cu & RETREGS) | written | KEEP
                    soft = cu & ~hard & ~NONVOL
                    written = 0
                    if i in fn.rets:
                        hard |= NONVOL | (retv & self.thru_of(fn.call[i]))
                    what = 'call'
                elif i in fn.rets:
                    hard = retv | NONVOL | KEEP
                    what = 'return'
                else:
                    for k, o in enumerate(ops):
                        if o[3] & WR:
                            written |= (1 << ro[k] | 1 << ru[k]) & ARGREGS
                for r in regbits(hard):
                    if not same(r, r):
                        return False, '%s holds a different value at the %s at %s' % (rname2(r), what, at)
                for r in regbits(soft):
                    if not same(r, r, 96):
                        return False, '%s (callee input) holds a different value at the call at %s' % (rname2(r), at)
                for k, o in enumerate(ops):
                    if o[3] & WR and ro[k] != ru[k]:
                        key = (ro[k], ru[k])
                        moved[key] = moved.get(key, 0) + 1
                for idx, bit, kill in EO[i]:
                    so[idx] = bit if kill else so[idx] | bit
                for idx, bit, kill in EU[i]:
                    su[idx] = bit if kill else su[idx] | bit
                if fwd:
                    self._fwdstep(fo, EO[i], cpo[i], i, FW)
                    self._fwdstep(fu, EU[i], cpu[i], i, FW)
        txt = ' '.join('%s->%s(%d)' % (rname2(o), rname2(u), c) for (o, u), c in sorted(moved.items()))
        if swaps:
            txt += ' +%d commutative swap(s)' % swaps
        return True, 'regequiv ' + (txt.strip() or 'reads renamed only')

    def check_strict(self, fn, ours):
        """Whole-function renaming (the 2026-11-11 rule). Returns (ok, text)."""
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


def rname2(r):
    return rname(r & ~31 if r < CRF else CRF, r & 31 if r < CRF else r - CRF)


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
    prog.strict = args.strict
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


def load_units(P):
    units = []  # (unit, start, end)
    cur = None
    for line in open(P['splits']):
        if line and not line[0].isspace() and line.rstrip().endswith(':'):
            cur = os.path.splitext(line.rstrip()[:-1])[0]
        m = re.match(r'\s+\.text\s+start:0x([0-9A-Fa-f]+) end:0x([0-9A-Fa-f]+)', line)
        if m and cur:
            units.append((cur, int(m.group(1), 16), int(m.group(2), 16)))
    return units


def load_program(args, P):
    prog = Program(Dol(P['orig']), load_syms(P['syms']))
    prog.strict = args.strict
    prog.symaddr = {}
    for line in open(P['syms']):
        m = re.match(r'^(\S+) = [^:]+:0x([0-9A-Fa-f]+);', line)
        if m:
            prog.symaddr.setdefault(m.group(1), set()).add(int(m.group(2), 16))
    return prog


def list_mode(args, P):
    prog = load_program(args, P)
    units = load_units(P)
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
    ours, text_, loose = obj_words(prog, name, mine, tgt)
    if ours is None:
        return False, text_
    ok, text_ = prog.check(prog.byname[name], ours)
    if ok and loose:
        text_ += ' [%d local relocation target(s) not compared by name]' % loose
    return ok, text_


def obj_words(prog, name, mine, tgt):
    """Our words of the function with the relocated fields taken from the original:
    (words, None, loose) or (None, reason, 0)."""
    fn = prog.byname.get(name)
    if fn is None:
        return None, 'not a function in symbols.txt', 0
    m = mine.func(name)
    t = tgt.func(name)
    if m is None:
        return None, 'missing in our object', 0
    mw, mr = m
    tw, tr = t
    if len(mw) != fn.n or len(tw) != fn.n:
        return None, 'size differs (%d vs %d bytes)' % (4 * len(mw), 4 * fn.n), 0
    if sorted(mr) != sorted(tr):
        return None, 'relocations at different places', 0
    loose = 0
    ours = list(mw)
    for i in mr:
        a, b = mr[i], tr[i]
        if [(x[0], x[3]) for x in a] != [(x[0], x[3]) for x in b]:
            return None, 'relocation type/addend differs at +0x%x' % (4 * i), 0
        mask = 0
        for (ty, na, ba, _ad), (_ty, nb, bb, _ad2) in zip(a, b):
            if ty not in RELMASK:
                return None, 'unsupported relocation type %d' % ty, 0
            mask |= RELMASK[ty]
            if na != nb:
                aa, ab = prog.symaddr.get(na, ()), prog.symaddr.get(nb, ())
                if ba != 0 and len(aa) == 1 and len(ab) == 1:
                    if aa != ab:
                        return None, 'relocation target differs at +0x%x (%s vs %s)' % (4 * i, na, nb), 0
                else:
                    loose += 1
        ours[i] = (ours[i] & ~mask) | (fn.words[i] & mask)
    return ours, None, loose


# ---- --selftest -----------------------------------------------------------

# passed the whole-function rule on 2026-11-11; must keep passing
SELFTEST = ['fn_8019A7D0', 'fn_800F8274', 'fn_8013213C', 'fn_801E26B0', 'fn_8020FAA8', 'fn_8026E4C4']


def copy_of(w):
    """True for a plain register copy: or rA,rS,rS / ori rA,rS,0 / fmr (no record form)."""
    op = w >> 26
    if op == 31:
        return (w >> 1) & 1023 == 444 and not w & 1 and (w >> 21) & 31 == (w >> 11) & 31
    if op == 24:
        return w & 0xFFFF == 0
    if op == 63:
        return (w >> 1) & 1023 == 72 and not w & 1
    return False


def swap_class(w):
    """Name of a non-commutative two-source instruction, else None."""
    op = w >> 26
    xo = (w >> 1) & 1023
    if op == 31:
        if xo in (0, 32):
            return 'cmpw'
        if xo & 511 in (40, 8, 136):
            return 'subf'
        if xo & 511 in (491, 459):
            return 'divw'
        if xo in (60, 412, 24, 536, 792):
            return 'andc/orc/shift'
    elif op in (59, 63):
        if (w >> 1) & 31 == 18:
            return 'fdiv'
        if (w >> 1) & 31 == 20:
            return 'fsub'
        if op == 63 and xo in (0, 32):
            return 'fcmp'
    return None


def setfield(w, sh, wd, v):
    m = ((1 << wd) - 1) << sh
    return (w & ~m) | (v << sh)


def mutations(fn, ours):
    """Corrupted copies of `ours`: yields (kind, index, word). Every kind except
    'commutative' changes the meaning of the function."""
    seen = set()
    todo = [0]
    while todo:                                   # reachable instructions
        i = todo.pop()
        if i not in seen:
            seen.add(i)
            todo.extend(fn.succ[i])
    for i in sorted(seen):
        w = ours[i]
        ops = dec(fn.words[i])[0]
        reg = [(w >> sh) & ((1 << wd) - 1) for _b, sh, wd, _r in ops]
        rd = [k for k, o in enumerate(ops) if o[3] & (RD | SAVE)]
        for k in rd:                              # read a different register
            _b, sh, wd, _r = ops[k]
            r = reg[k]
            yield 'operand', i, setfield(w, sh, wd, r + 1 if r + 1 < 1 << wd else r - 1)
        pure = [k for k in rd if not ops[k][3] & WR]
        cls = swap_class(fn.words[i])
        cp = comm(fn.words[i])
        pair = cp if cp else (pure[0], pure[1]) if cls and len(pure) == 2 else None
        if pair and reg[pair[0]] != reg[pair[1]]:
            a, b = pair
            x = setfield(setfield(w, ops[a][1], ops[a][2], reg[b]), ops[b][1], ops[b][2], reg[a])
            yield ('commutative' if cp else 'swap ' + cls), i, x
    leaders = fn.leader
    for i in sorted(fn.call):                     # move an argument to another register
        if i in fn.rets or i not in seen:
            continue
        j = i - 1
        while j >= 0 and j not in fn.call:
            wo = fn.words[j]
            hit = [(k, o) for k, o in enumerate(dec(wo)[0]) if o[3] & WR and
                   (1 << (o[0] + ((wo >> o[1]) & 31))) & ARGREGS]
            if hit:
                k, (_b, sh, wd, _r) = hit[0]
                r = (ours[j] >> sh) & 31
                yield 'call argument', j, setfield(ours[j], sh, wd, r + 1 if r < 8 else r - 1)
                break
            if j in leaders:
                break
            j -= 1


def synth_tests():
    """Hand-made functions for the copy-forwarding rule: (name, target, ours, must pass)."""
    def addi(d, a, i): return 14 << 26 | d << 21 | a << 16 | i
    def mr(d, sr): return 31 << 26 | sr << 21 | d << 16 | sr << 11 | 444 << 1
    def add(d, a, b): return 31 << 26 | d << 21 | a << 16 | b << 11 | 266 << 1
    def cmpwi(a, i): return 11 << 26 | a << 16 | i
    def bl(off): return 18 << 26 | (off & 0x3FFFFFC) | 1
    def bc(bo, bi, off): return 16 << 26 | bo << 21 | bi << 16 | (off & 0xFFFC)
    blr = 0x4E800020
    g = 0x1000
    ret = [mr(3, 31), blr]
    cases = [
        # the result of an addi is copied: either register may take the address
        ('copy order', [addi(3, 4, 8), mr(31, 3), bl(g - 0x2008), mr(3, 31), blr],
                       [addi(31, 4, 8), mr(3, 31), bl(g - 0x2008), mr(3, 31), blr], True),
        ('copy order, other reader', [addi(3, 4, 8), mr(31, 3), bl(g - 0x2008), mr(3, 31), blr],
                                     [addi(31, 4, 8), mr(3, 31), bl(g - 0x2008), mr(3, 30), blr], False),
        ('copy order, wrong value', [addi(3, 4, 8), mr(31, 3), bl(g - 0x2008), mr(3, 31), blr],
                                    [addi(31, 4, 9), mr(3, 31), bl(g - 0x2008), mr(3, 31), blr], False),
        # reading the copy after its source was redefined is not reading the source
        ('stale copy (straight)', [addi(5, 4, 1), mr(6, 5), addi(5, 4, 2), add(3, 6, 6), blr],
                                  [addi(5, 4, 1), mr(6, 5), addi(5, 4, 2), add(3, 5, 5), blr], False),
        # same inside a loop: the copy is older than the last execution of the source's site
        ('stale copy (loop)', [addi(5, 4, 1), cmpwi(3, 0), bc(12, 2, 12), mr(6, 5), cmpwi(4, 5), bc(4, 2, -20),
                               add(3, 6, 6), blr],
                              [addi(5, 4, 1), cmpwi(3, 0), bc(12, 2, 12), mr(6, 5), cmpwi(4, 5), bc(4, 2, -20),
                               add(3, 5, 5), blr], False),
        ('copy of a copy', [addi(3, 4, 8), mr(31, 3), mr(30, 31), bl(g - 0x200C), mr(3, 30), blr],
                           [addi(30, 4, 8), mr(31, 30), mr(3, 31), bl(g - 0x200C), mr(3, 30), blr], True),
    ]
    out = []
    for name, tgt, ours, want in cases:
        out.append((name, tgt, ours, want))
    return out


class _Fake:
    def __init__(self, mem):
        self.mem = mem

    def words(self, addr, size):
        return [self.mem.get(addr + 4 * k, 0) for k in range(size // 4)]

    def read32(self, addr):
        return self.mem.get(addr)


def synth_run():
    """Run the hand-made cases; returns the number of problems."""
    bad = 0
    for name, tgt, ours, want in synth_tests():
        mem = {0x1000: 0x4E800020}
        for k, w in enumerate(tgt):
            mem[0x2000 + 4 * k] = w
        prog = Program(_Fake(mem), [('g', 0x1000, 4), ('f', 0x2000, 4 * len(tgt))])
        prog.strict = False
        ok, text_ = prog.check(prog.byname['f'], ours)
        print('%s synthetic %s: %s' % ('ok  ' if ok == want else 'FAIL', name, text_))
        if ok != want:
            bad += 1
    # unit test of the stale marking: a copy made before the source's site ran again is stale
    F = [0] * 96
    W = 100
    Program._fwdstep(F, [(5, 1 << 1, True)], None, 0, W)
    Program._fwdstep(F, [(6, 1 << 9, True)], (6, 5), 1, W)
    fresh = F[6] == F[5] == 2 and not F[6] >> W
    Program._fwdstep(F, [(5, 1 << 1, True)], None, 0, W)
    stale = F[5] == 2 and F[6] == 2 | 2 << W
    print('%s synthetic stale marking' % ('ok  ' if fresh and stale else 'FAIL'))
    return bad + (0 if fresh and stale else 1)


def selftest(args, P):
    prog = load_program(args, P)
    prog.strict = False
    units = load_units(P)
    bad = synth_run()
    names = list(dict.fromkeys(SELFTEST + load_allow(P['allow']) + args.selftest))
    bases = []
    npos = 0
    for name in names:                            # (a) known-good pairs
        fn = prog.byname.get(name)
        unit = next((u for u, s, e in units if fn and s <= fn.addr < e), None)
        try:
            mine = Obj(os.path.join(P['build'], 'src', unit + '.o'))
            tgt = Obj(os.path.join(P['build'], 'obj', unit + '.o'))
        except (OSError, TypeError) as e:
            print('skip %s: no objects (%s)' % (name, e))
            continue
        ours, why, _loose = obj_words(prog, name, mine, tgt)
        ok, text_ = prog.check(fn, ours) if ours is not None else (False, why)
        print('%s %s: %s' % ('PASS' if ok else 'FAIL', name, text_))
        if not ok:
            bad += 1
        elif text_ != 'exact':
            npos += 1
            bases.append((fn, ours, 15))
    print('selftest: %d register-equivalent function(s) pass' % npos)
    # originals as their own (exact) counterpart: plenty of every instruction kind
    want = {'swap subf': 30, 'swap fdiv': 30, 'swap cmpw': 30, 'call argument': 30, 'commutative': 30, 'operand': 30}
    for a in sorted(prog.fns)[::7]:
        fn = prog.fns[a]
        if 8 <= fn.n <= 600 and not prog.unsupported(fn):
            bases.append((fn, fn.words, 2))
    tot, rej, reasons = {}, {}, {}
    for fn, ours, cap in bases:
        if cap == 2 and all(tot.get(k, 0) >= n for k, n in want.items()):
            break
        by = {}
        for kind, i, x in mutations(fn, ours):
            if x != ours[i] and (cap != 2 or tot.get(kind, 0) < 2 * want.get(kind, 30)):
                by.setdefault(kind, []).append((i, x))
        picked = [(kind, i, x) for kind, lst in sorted(by.items())
                  for i, x in lst[::max(1, len(lst) // cap)][:cap]]
        for kind, i, x in picked:
            mut = list(ours)
            mut[i] = x
            ok, text_ = prog.check(fn, mut)
            tot[kind] = tot.get(kind, 0) + 1
            if kind == 'commutative':
                if ok:
                    rej[kind] = rej.get(kind, 0) + 1
                else:
                    bad += 1
                    print('FAIL selftest: commutative swap rejected in %s at %08x: %s' % (fn.name, fn.addr + 4 * i, text_))
            elif not ok:
                rej[kind] = rej.get(kind, 0) + 1
                key = re.sub(r'\b(at|vs) [0-9a-f]{8}|\b[rf]\d+\b|\bcr\d\b|\(.*\)', '', text_).strip()
                reasons[key] = reasons.get(key, 0) + 1
            else:
                bad += 1
                print('FAIL selftest: %s corruption accepted in %s at %08x (%08x -> %08x): %s' % (
                    kind, fn.name, fn.addr + 4 * i, ours[i], x, text_))
    for kind in sorted(set(tot) | set(want)):
        n = tot.get(kind, 0)
        print('selftest %-16s %5d of %5d %s' % (kind + ':', rej.get(kind, 0), n,
                                              'accepted' if kind == 'commutative' else 'rejected'))
        if n < min(want.get(kind, 1), 5):
            bad += 1
            print('FAIL selftest: too few %s cases' % kind)
    if args.verbose:
        for key, n in sorted(reasons.items(), key=lambda kv: -kv[1]):
            print('  %5d  %s' % (n, key))
    print('selftest: %s' % ('FAILED (%d problem(s))' % bad if bad else 'OK'))
    return 1 if bad else 0


def main():
    ap = argparse.ArgumentParser(description=__doc__.split('\n')[0])
    ap.add_argument('--version', default='GHYE6S')
    ap.add_argument('--dol', help='built DOL (default build/<version>/main.dol)')
    ap.add_argument('--list', nargs='+', metavar='UNIT', help='report whether units/functions would pass')
    ap.add_argument('--strict', action='store_true', help='whole-function renaming only (the first version of the rule)')
    ap.add_argument('--selftest', nargs='*', metavar='FN', help='self-test (extra functions that must pass)')
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
    if args.selftest is not None:
        sys.exit(selftest(args, P))
    sys.exit(list_mode(args, P) if args.list else check_dol(args, P))


if __name__ == '__main__':
    main()
