#include "common.h"

extern "C" {
}
struct C8023C7CC { u8 pad[8]; void *cur; void *x12; u8 pad16[28 - 16]; C8023C7CC(); ~C8023C7CC(); };
struct V3 { f32 x, y, z; };
struct G8 { u32 fl; f32 x4; u8 pad8[48 - 8]; u32 x48; };
struct H132 { u8 pad[8]; G8 *x8; };
struct Nd { u32 fl; u8 pad4[132 - 4]; H132 *x132; u32 x136;
    G8 *get() { return x132 == 0 ? 0 : x132->x8; } };
struct I168 { u8 pad[28]; u32 n; };
struct K156 { u32 fl; u16 h4; u8 pad6[168 - 6]; I168 *x168; };
struct S468 { int v; };
struct E;
struct EB { virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9(); virtual void s10(); virtual void s11(); virtual void s12(); virtual void pos(V3 *, int, int, int, int);
    virtual void t14(); virtual void t15(); virtual void t16(); virtual void t17(); virtual void t18(); virtual void t19(); virtual void t20(); virtual void t21(); virtual void t22(); virtual void t23(); virtual void t24(); virtual void t25(); virtual void t26(); virtual void t27(); virtual void t28(); virtual void t29(); virtual void t30(); virtual void t31(); virtual void t32(); virtual void play(char *, void *, int, int, int); };
struct E : EB { u8 pad4[156 - 4]; K156 *x156; u8 pad160[180 - 160]; u32 x180; u8 pad184[468 - 184]; S468 *x468; u8 pad472[544 - 472]; int x544; };
extern "C" {
struct O { u8 pad0[600]; f32 x600; u8 pad604[948 - 604]; u32 n; E *sel[6]; int x976[6]; Nd *x1000[6]; u32 x1024[6]; f32 x1048[12]; f32 *x1096; f32 *x1100; f32 x1104; };
extern void *lbl_8035B308;
extern u8 *lbl_8035B65C;
extern char lbl_8035FF2C[8];
extern f32 lbl_8035FEB8, lbl_8035FF34;
extern char lbl_80298F34[];
void fn_8023C720(C8023C7CC *, void *);
void fn_8019B6B8(void *, Nd *);
void fn_8019B7E8(void *, Nd *);
void fn_8023C528(C8023C7CC *, char *);
E *fn_8023A490(void *, void *);
f32 fn_80101590(V3 *, V3 *);
void fn_8023C3F4(C8023C7CC *);
int rand(void);
static inline u32 Rnd(u32 n) { u32 r = 0; if (n) r = rand() % n; return r; }
static inline int Ok(E *e) {
    if (e->x544 > 0) return 1;
    if (e->x544 < 0) return 0;
    if (e->x468) return e->x468->v;
    return 1;
}
void fn_8008930C(O *o, V3 *pos, int mode, f32 range) {
    V3 v;
    C8023C7CC it;
    E *cand[255];
    E **pe;
    u32 n, i;
    fn_8023C720(&it, lbl_8035B308);
    if (mode) {
        o->n = 0;
        o->sel[0] = 0; o->sel[1] = 0; o->sel[2] = 0; o->sel[3] = 0; o->sel[4] = 0; o->sel[5] = 0;
        for (i = 0; i < 6; i++) {
            Nd *d = o->x1000[i];
            if (d) {
                d->fl &= ~0x800;
                if (d->x136 == 0) fn_8019B6B8(*(void **)(lbl_8035B65C + 12), d);
            }
        }
    }
    pe = cand;
    {
        E **p = pe;
        int k;
        for (k = 255; k > 0; k--) *p++ = 0;
    }
    n = 0;
    fn_8023C528(&it, lbl_8035FF2C);
    while (n != 255 && it.cur) {
        E *e = it.cur ? fn_8023A490(it.cur, it.x12) : 0;
        if ((e->x180 & 2) && (e->x156->fl & 2) && Ok(e)) {
            e->pos(&v, 0, 0, 0, 0);
            if (fn_80101590(pos, &v) <= range) {
                *pe++ = e;
                n++;
            }
        }
        fn_8023C3F4(&it);
    }
    {
        E **end = &cand[n];
        E **base = cand;
        while (n != 0 && o->n < 6) {
            u32 k = Rnd(n);
            if (k >= n) k = n;
            if (base[k] && k < n) {
                int found = 0;
                u32 j;
                for (j = 0; j < o->n; j++) {
                    if (o->sel[j] == base[k]) { found = 1; break; }
                }
                if (!found) {
                    if (mode) {
                        o->x976[o->n] = 0;
                        o->x600 = *o->x1096 * o->x1104;
                    } else {
                        o->x976[o->n] = 1;
                        o->x600 = *o->x1100 * o->x1104;
                    }
                    if (lbl_8035FEB8 != o->x600) {
                        Nd *d;
                        o->sel[o->n] = base[k];
                        o->x1048[o->n] = lbl_8035FF34;
                        d = o->x1000[o->n];
                        if (d->x136 == 0) fn_8019B7E8(*(void **)(lbl_8035B65C + 12), d);
                        if (d->get()) {
                            G8 *g = d->get();
                            if (g->x48 & 1) {
                                g->x4 = lbl_8035FEB8;
                                g->fl &= ~0x18;
                            }
                        }
                        o->n++;
                    }
                }
                base[k] = *--end;
                n--;
            }
        }
    }
    for (i = 0; i < o->n; i++) {
        if (o->sel[i]->x156->h4 == 3) {
            u32 m = o->sel[i]->x156->x168->n;
            o->x1024[i] = Rnd(m);
            o->sel[i]->play(lbl_80298F34, o, 0, 0, 0);
        }
    }
}
}
