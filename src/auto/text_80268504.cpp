// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

#pragma opt_propagation off
struct Snd { u8 pad[0x58]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void p17(); virtual void p18(); virtual void p19(); virtual void p20(); virtual void n(s32); virtual void m(f32, s32); virtual void p23(); virtual void vol(f32); };
struct Src { virtual void p0(); virtual s32 busy(); };
struct Entry { s32 pad[5]; s32 f14; u32 n; u32 a[10]; u32 b[5]; };
struct Music {
    Entry e[15];
    u8 pad528[0x14];
    s32 f53c;
    s32 f540;
    f32 *f544;
    f32 f548;
    Snd *f54c;
    Src *f550;
    u8 pad554[4];
    Snd *f558;
    void *f55c;
    u8 pad560[4];
    s32 f564;
    s32 f568[20];
    f32 f5b8;
    s32 f5bc;
};
extern f32 lbl_80366D48;
extern f32 lbl_80366D4C;
extern f32 lbl_80366D50;
int rand(void);
void fn_801FEC18(Snd *, u32, Src *, void *, int);

static inline int Slot(u32 s) {
    switch (s) {
    case 13: return 1;
    case 12: return 2;
    case 10: case 11: case 14: return 3;
    case 1: case 5: case 6: return 4;
    case 2: case 3: return 5;
    case 0: case 4: return 6;
    case 9: return 7;
    case 8: return 8;
    case 7: return 9;
    case 15: return 20;
    default: return 0;
    }
}

static inline u32 GetN(Music *m, s32 i) { return m->e[i].n; }
static inline u32 Pick(u32 n) { u32 r = 0; if (n != 0) r = rand() % n; return r; }

void fn_80268504(Music *m, f32 dt) {
    s32 cur;
    s32 busy;
    s32 best;
    int i;
    if (lbl_80366D48 != *m->f544 - m->f548) {
        m->f54c->m(*m->f544, 0);
        m->f558->m(*m->f544, 0);
        m->f548 = *m->f544;
    }
    busy = 0;
    if (m->f550 != 0) busy = m->f550->busy();
    if (m->f5bc == 1 && busy == 0) {
        cur = m->f564;
        if (m->e[cur].f14 == 0) {
            int k = Slot(cur);
            if (m->f568[k] == cur) m->f568[k] = 15;
        }
        m->f564 = 15;
    }
    m->f5bc = busy;
    if (m->f5b8 > lbl_80366D48) {
        m->f5b8 -= dt;
        { f32 t = m->f5b8; if (t <= lbl_80366D48) m->f5b8 = lbl_80366D48; }
    }
    if (m->f540 != 0) return;
    best = 15;
    {
        s32 *q;
        int j;
        for (j = 19, q = (s32 *)m + 19; j >= 0; q--, j--) {
            if (q[0x568 / 4] != 15) best = q[0x568 / 4];
        }
    }
    if (m->f564 == best) return;
    if (best == 15) {
        if (m->f54c != 0) {
            m->f54c->m(lbl_80366D48, 500);
            m->f54c->n(500);
        }
        if (m->f558 != 0) {
            m->f558->m(lbl_80366D48, 500);
            m->f558->n(500);
        }
        return;
    }
    if (m->f5bc == 0) {
    if (m->f53c == 0) return;
    {
        u32 n = GetN(m, best);
        if (n != 0) {
            u32 r = Pick(n);
            Snd *a, *b;
            m->f54c->n(0);
            m->f558->n(0);
            m->f54c->m(*m->f544, 0);
            m->f558->m(*m->f544, 0);
            a = m->f54c;
            b = m->f558;
            if (m->e[best].a[r] != 0) fn_801FEC18(a, m->e[best].a[r], m->f550, m->f55c, 0);
            if (m->e[best].b[r] != 0) fn_801FEC18(b, m->e[best].b[r], (Src *)m->f55c, m->f550, 0);
            m->f54c->vol(lbl_80366D4C);
            m->f558->vol(lbl_80366D50);
            m->f564 = best;
            m->f5b8 = lbl_80366D48;
        } else {
            int k = Slot(best);
            if (m->f568[k] == best) m->f568[k] = 15;
        }
    }
    } else {
        if (m->f54c != 0) {
            m->f54c->m(lbl_80366D48, 0);
            m->f54c->n(0);
        }
        if (m->f558 != 0) {
            m->f558->m(lbl_80366D48, 0);
            m->f558->n(0);
        }
    }
}

} /* extern "C" */
