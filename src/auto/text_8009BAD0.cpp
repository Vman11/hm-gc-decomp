#include "common.h"
extern "C" {
#pragma inline_max_size(30000)
} /* extern "C" */
#define V(n) virtual void n();
struct Ent { u8 p[12]; virtual int ch(int); u8 q[0x6c - 0x10]; s32 d[6]; };
struct C80214C34 { u8 a[0x44]; Ent e; u8 rest[456 - 0x44 - sizeof(Ent)]; C80214C34(); ~C80214C34(); };
struct C800FB754 { u8 d[20]; C800FB754(); };
struct Card { u8 p[1720]; V(c0) V(c1) V(c2) V(c3) V(c4) V(c5) V(c6) V(c7) V(c8) V(c9) V(c10) V(c11) V(c12) V(c13) V(c14) V(c15) V(c16)
    virtual int stat(void *); V(c18) virtual void close(); };
struct MC { u8 p0[8]; u32 x8; u8 p1[84]; V(m0) V(m1) V(m2) V(m3) virtual u32 bsize(); V(m5) virtual u32 nblk(); V(m7)
    virtual Card *card(); virtual int first(void *); virtual int next(void *); V(m11) V(m12) virtual int chk(void *); virtual void fin(void *); };
struct Get { V(g0) V(g1) virtual MC *get(int, int); };
struct M2 { Get *f0; };
struct M1 { u8 p[4]; M2 *f4; };
struct Gm { u8 p0[0x2b8]; s32 x2b8; };
struct O { u8 p0[0x84]; void *x84; u8 p1[0x2e4 - 0x88]; u32 x2e4[9]; };
struct W { u8 p[4]; s32 x4; s32 x8; };
struct E { u8 p[0xc]; W w0; u8 p2[0x20 - 0x18]; W w1; u8 p3[0x34 - 0x2c]; s32 x34; };
struct G65C { u8 pad[36]; u8 *x24; };
struct G1DC { u8 pad[0x33b0]; void *x33b0; };
extern "C" {
extern Gm *lbl_8035A0A4;
extern M1 *lbl_8035B690;
extern G65C *volatile lbl_8035B65C;
extern G1DC *lbl_8035A1DC;
extern char lbl_803615D4[7], lbl_803615DC[6], lbl_803615E4[5], lbl_803615EC[8], lbl_803615F4[1], lbl_803615F8[2], lbl_803615FC[6];
extern char lbl_8029A2A4[];
void *memset(void *, int, u32);
char *strcpy(char *, const char *);
void fn_800FB700(C800FB754 *, u16 *, int);
void fn_8003C860(void *, s32, void *);
E *fn_80207198(void *, char *, int);
void fn_800FA5D8(W *, char *);
void fn_800FA69C(W *, void *);
void fn_800FA770(W *, char *);
void fn_800FA82C(W *, void *);
void *fn_801AAA5C(void *, char *, int);
void fn_800E8F6C(char *, char *, ...);

static inline W *slot(E *e) { return e->x34 ? &e->w1 : &e->w0; }
static inline void wcopy(u16 *d, const char *s) {
    while (*s) { *d = *s; s++; d++; }
    *d = 0;
}
static inline void fill(O *o, C80214C34 *f) {
    char name[8];
    char num[8];
    char date[32];
    Ent *en;
    s32 k;
    MC *m;
    E *e;
    Card *c;
    W *w;
    m = lbl_8035B690->f4->f0->get(0, 0);
    en = &f->e;
    k = en->ch(7) - 0x30;
    memset(name, 0, 8);
    strcpy(name, lbl_803615D4);
    *(volatile char *)&name[6] = k + 0x30;
    e = fn_80207198(lbl_8035B65C->x24 + 0x3e0, name, 0);
    c = m->card();
    c->stat(f);
    w = slot(e);
    fn_800FA69C(w, en);
    fn_800E8F6C(date, lbl_8029A2A4, f->e.d[1], f->e.d[2], f->e.d[0], f->e.d[3], f->e.d[4], f->e.d[5]);
    fn_800FA770(w, date);
    fn_800FA82C(w, fn_801AAA5C(lbl_8035A1DC->x33b0, lbl_803615DC, 0));
    fn_800E8F6C(num, lbl_803615E4, o->x2e4[k]);
    fn_800FA770(w, num);
    fn_8003C860(o->x84, k, en);
    c->close();
}

void fn_8009BAD0(O *o) {
    C80214C34 f;
    MC *mc = lbl_8035B690->f4->f0->get(0, 0);
    char name1[8];
    u8 tmp[4];
    s32 i;
    memset(name1, 0, 8);
    strcpy(name1, lbl_803615EC);
    for (i = 0; i < 6; i++) {
        u16 ws[2];
        E *e;
        wcopy(ws, lbl_803615F4);
        C800FB754 t;
        fn_800FB700(&t, ws, 2);
        fn_8003C860(lbl_8035A0A4, i + 1, &t);
        *(volatile char *)&name1[6] = i + '1';
        e = fn_80207198(lbl_8035B65C->x24 + 0x3e0, name1, 0);
        if (e) fn_800FA5D8(slot(e), lbl_803615F8);
    }
    if (mc) mc->chk(tmp);
    if (lbl_8035A0A4->x2b8 && mc && mc->first(&f)) {
        fill(o, &f);
        while (mc->next(&f)) fill(o, &f);
    }
    for (i = 0; i < 6; i++) {
        E *e;
        void *s;
        W *w;
        *(volatile char *)&name1[6] = i + '1';
        e = fn_80207198(lbl_8035B65C->x24 + 0x3e0, name1, 0);
        s = fn_801AAA5C(lbl_8035A1DC->x33b0, lbl_803615FC, 0);
        if (e) {
            w = slot(e);
            if ((u32)(w->x8 - w->x4) == 1) fn_800FA69C(w, s);
        }
    }
    if (mc) mc->fin(tmp);
}
}
