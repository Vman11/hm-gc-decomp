// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern "C" int VIGetTvFormat(void);
void fn_800604C4(s32, s32, s32, s32);
struct M { u32 f0; u16 w; u16 h; u8 pad8[16]; u8 b24; u8 b25; };
struct Tb { M *a[9]; M *b[7]; M *c[7]; };
extern M lbl_802DF860, lbl_802DF89C, lbl_802DF8D8, lbl_802DF914, lbl_802DF950, lbl_802DF98C, lbl_802DF9C8, lbl_802DFA04, lbl_802DFA40, lbl_802DFA7C, lbl_802DFAB8, lbl_802DFAF4, lbl_802DFB30, lbl_802DFB6C, lbl_802DFBA8, lbl_802DFBE4, lbl_802DFC20, lbl_802DFC5C, lbl_802DFC98, lbl_802DFCD4, lbl_802DFD10, lbl_802DFD4C, lbl_802DFD88;
M *lbl_802E67E0[9] = {&lbl_802DF860, &lbl_802DF89C, &lbl_802DF8D8, &lbl_802DF914, &lbl_802DF950, &lbl_802DF98C, &lbl_802DF9C8, &lbl_802DFA04, &lbl_802DFA40};
M *lbl_802E6804[7] = {&lbl_802DFA7C, &lbl_802DFAB8, &lbl_802DFAF4, &lbl_802DFB30, &lbl_802DFB6C, &lbl_802DFBA8, &lbl_802DFBE4};
M *lbl_802E6820[7] = {&lbl_802DFC20, &lbl_802DFC5C, &lbl_802DFC98, &lbl_802DFCD4, &lbl_802DFD10, &lbl_802DFD4C, &lbl_802DFD88};
extern u32 lbl_8036456C, lbl_80364570, lbl_80364574, lbl_80364578;
struct F { u8 b[32]; };
struct E36 { u8 b[36]; };
struct T { void *f0; u32 f4, f8, f12, f16, f20, f24, f28, f32, f36, f40, f44, f48, f52, f56; u8 pad60[60]; u32 n120; E36 e124[9]; M **f448; };
void fn_8012C2FC(T *);
void fn_80148310(F *);
void fn_80148288(F *, int, u32, u32, u32, u32, int);
void fn_8014CB00(E36 *, u16, u16, F *, int, u32);
void fn_80153FC0(T *t, void *x) {
    if (t->f0) {
        fn_8012C2FC(t);
        t->n120 = 0;
        t->f448 = 0;
    }
    t->f0 = x;
    switch (VIGetTvFormat()) {
    case 0: t->n120 = 9; t->f448 = lbl_802E67E0; break;
    case 1: t->n120 = 7; t->f448 = lbl_802E6820; break;
    case 2: t->n120 = 7; t->f448 = lbl_802E6804; break;
    default: fn_800604C4(-6, 0, 0, 0); break;
    }
    u32 fl; u32 off; u8 *e; M *m; u32 i;
    e = (u8 *)t;
    i = 0;
    off = 0;
    for (; i < t->n120; off += 4, e += 36, i++) {
        m = *(M **)((u8 *)t->f448 + off);
        if (m) {
            F f;
            fn_80148310(&f);
            if ((m->f0 & ~3) == 0) fl = 0;
            else if ((m->f0 & ~3) == 4) fl = 1;
            else fl = 2;
            if (m->f0 == 0) fl |= lbl_8036456C;
            else if (m->f0 == 2) fl |= lbl_80364570;
            if (m->b24) fl |= lbl_80364574;
            if (m->b25) fl |= lbl_80364578;
            fn_80148288(&f, 24, 0xFF0000, 0xFF00, 0xFF, 0, 0);
            fn_8014CB00((E36 *)(e + 0x7c), m->w, m->h, &f, 0, fl);
        }
    }
    t->f4 = 3651;
    t->f8 = 0;
    t->f12 = 0x73F0F7;
    t->f16 = 123;
    t->f20 = 0x5FD59E18;
    t->f24 = 255;
    t->f28 = 255;
    t->f32 = 1791;
    t->f36 = t->f32;
    t->f40 = t->f20;
    t->f44 = t->f24;
    t->f48 = t->f28;
    t->f52 = t->f32;
    t->f56 = t->f36;
}

} /* extern "C" */
