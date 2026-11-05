// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

// NonMatching (DIFF 10, SDIFF 2): only the 12-byte arg copy before fn_80253B24 differs (target: words in r7/r3, lbl_8035B65C loaded after the stores).
// Same copy pattern in text_8003F140/800302CC/802245C0/8026985C; by-value, local copy, inline, ptmf type, member call all give r3/r7.

extern "C" {

struct V_8025E1DC { virtual void p0(); virtual void p1(); virtual void p2(); virtual void b(); virtual void p4(); virtual s32 a(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void c(void *); };
struct R_8025E1DC { u8 pad[8]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void *g(s32); };
struct MB0_8025E1DC { u8 pad[0x24]; u8 *f24; u8 pad28[0x90 - 0x28]; };
struct MB1_8025E1DC { u8 pad[8]; u8 f8[8]; };
struct M_8025E1DC { u8 pad[0x24]; u8 *f24; u8 pad28[0x90 - 0x28]; MB1_8025E1DC m90; };
typedef struct { u32 v[10]; } T40_8025E1DC;
typedef struct { u32 v[3]; } T12_8025E1DC;
extern T40_8025E1DC lbl_802A9BF8;
extern T12_8025E1DC lbl_802F2934;
extern char lbl_802A9CC8[];
extern M_8025E1DC *lbl_8035B65C;
extern u8 *lbl_8035B754;
extern char lbl_803669C8[8];
extern char lbl_803669D0[8];
extern char lbl_803669D8[8];
extern u32 lbl_803669E0[2];
extern f32 lbl_80366950;
extern f32 lbl_80366988;
void *fn_8010FEDC(void *, void *, void *, s32);
void *fn_80110444(void *, void *, s32);
void *fn_801104C0(void *, void *, void *, s32);
R_8025E1DC *fn_80207198(void *, char *, void *);
void fn_8025E6F4(void *, void *, s32, void *, void *);
void fn_80253B24(void *, void *, T12_8025E1DC, void *);

void fn_8025E1DC(V_8025E1DC *p, u8 *q) {
    u8 *b = (u8 *)p;
    if (p->a() != 0) {
        p->b();
    }
    *(void **)(b + 0x134) = fn_80207198(lbl_8035B65C->f24 + 0x3e0, lbl_803669C8, 0)->g(0);
    *(void **)(b + 0x138) = fn_80207198(lbl_8035B65C->f24 + 0x3e0, lbl_803669D0, 0)->g(0);
    *(void **)(b + 0xA8) = *(void **)(q + 0xC);
    if (*(void **)(q + 0x10) != NULL && *(void **)(b + 0xA8) != NULL) {
        *(void **)(b + 0xAC) = fn_8010FEDC(*(void **)(b + 0xA8), *(void **)(q + 0x10), lbl_802A9CC8, 1);
    }
    *(void **)(b + 0xC) = *(void **)(lbl_8035B754 + 0xC);
    *(void **)(b + 0x10) = fn_80110444(*(void **)(b + 0xC), lbl_802A9CC8, 0);
    {
        T40_8025E1DC t = lbl_802A9BF8;
        void *r = 0;
        MB1_8025E1DC *m;
        *(s32 *)(b + 0x14C) = 10;
        m = &lbl_8035B65C->m90;
        if (m) {
            void *x = fn_801104C0(m, lbl_803669D8, m->f8, 0);
            if (x) r = fn_8010FEDC(m, x, lbl_802A9CC8, 0);
        }
        fn_8025E6F4(b + 0x13C, &t, *(s32 *)(b + 0x14C), m, r);
    }
    *(f32 *)(b + 0x168) = lbl_80366950;
    *(f32 *)(b + 0x16C) = lbl_80366950;
    *(f32 *)(b + 0x170) = lbl_80366950;
    *(f32 *)(b + 0x174) = lbl_80366950;
    *(f32 *)(b + 0x178) = lbl_80366950;
    *(f32 *)(b + 0x17C) = lbl_80366950;
    *(f32 *)(b + 0x178) = lbl_80366988;
    fn_80253B24(lbl_8035B65C, p, lbl_802F2934, lbl_803669E0);
    p->c(q);
}

} /* extern "C" */
