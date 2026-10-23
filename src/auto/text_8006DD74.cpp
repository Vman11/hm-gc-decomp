// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct Vec6E { f32 x; f32 y; f32 z; };
struct Q6E { u8 pad[0xd8]; s32 fd8; };
struct R6E { u32 f0; };
struct Z6E { u8 pad[4]; f32 f4; };
struct O6E { u8 pad[0x118]; Vec6E pos; u8 pad124[0x20c - 0x124]; Q6E *f20c; u8 pad210[0x500 - 0x210]; f32 f500; f32 f504; u8 pad508[4]; R6E *f50c; };
struct P6E { u8 pad[0xdc]; s32 fdc; u8 pade0[0x118 - 0xe0]; O6E *f118; u8 pad11c[0x130 - 0x11c]; f32 *f130; u8 pad134[4]; f32 *f138; };
void fn_80249008(P6E *, s32);
Z6E *fn_8022D694(O6E *);
s32 fn_80072988(O6E *, Vec6E);
s32 fn_800724A4(O6E *);
void fn_8007115C(P6E *);
void fn_800711D0(P6E *, s32, f32);
extern f32 lbl_8035F1C8;
void fn_80241588(P6E *, s32, s32, f32);
void fn_80242168(P6E *, f32);
extern f32 lbl_8035F0C0;
extern f32 lbl_8035F0B8;
extern f32 lbl_8035F0B4;
extern f32 lbl_8035F1BC;
extern f64 lbl_8035F250;
extern f64 lbl_8035F258;
extern f64 lbl_8035F290;

inline f32 Sqrt6E(f32 x) {
    volatile f32 y;
    f64 g = __frsqrte(x);
    g = lbl_8035F250 * g * (lbl_8035F258 - g * g * x);
    g = lbl_8035F250 * g * (lbl_8035F258 - g * g * x);
    g = lbl_8035F250 * g * (lbl_8035F258 - g * g * x);
    y = x * g;
    return y;
}

inline void Set6E(P6E *p, s32 id) {
    if (p->fdc == 0xe && !fn_800724A4(p->f118)) fn_8007115C(p);
    fn_80241588(p, id, 0, lbl_8035F1BC);
}

inline void Set2_6D(P6E *p, s32 id) {
    if (p->fdc != 0xe && !fn_800724A4(p->f118)) fn_800711D0(p, 0, lbl_8035F1C8);
    fn_80241588(p, id, 0, lbl_8035F1BC);
}

void fn_8006DD74(P6E *p) {
    f32 d;
    f32 z;
    Vec6E v;
    z = fn_8022D694(p->f118)->f4;
    v = p->f118->pos;
    d = p->f118->f500 * p->f118->f500 + p->f118->f504 * p->f118->f504;
    if (d > lbl_8035F0C0) d = Sqrt6E(d);
    if (p->f118->f20c->fd8 == 1) return;
    if (d > *p->f138) {
        switch (fn_80072988(p->f118, v)) {
        case 1: Set2_6D(p, 0xe); break;
        case 2: Set6E(p, 0xf); break;
        case 3: Set6E(p, 0x1a); break;
        case 4: Set6E(p, 0x19); break;
        default: Set2_6D(p, 0xe); break;
        }
        fn_80242168(p, lbl_8035F0B8);
        {
            Z6E *zz = fn_8022D694(p->f118);
            zz->f4 = lbl_8035F290 + z;
        }
    } else if (d > *p->f130) {
        switch (fn_80072988(p->f118, v)) {
        case 1: Set6E(p, 0x23); break;
        case 2: Set6E(p, 0x2c); break;
        case 3: Set6E(p, 0x2b); break;
        case 4: Set6E(p, 0x2a); break;
        default: Set6E(p, 0x23); break;
        }
        fn_80242168(p, lbl_8035F0B4);
        {
            Z6E *zz = fn_8022D694(p->f118);
            zz->f4 = lbl_8035F290 + z;
        }
    } else if (fn_800724A4(p->f118)) {
        Vec6E *q = &p->f118->pos;
        f32 len = __fmadds(q->z, q->z, __fmadds(q->x, q->x, q->y * q->y));
        if (len > lbl_8035F0C0) len = Sqrt6E(len);
        if (len < lbl_8035F1C8) {
            Set6E(p, 4);
        } else {
            Set2_6D(p, 0xe);
        }
    } else {
        Set6E(p, 4);
    }
}

} /* extern "C" */
