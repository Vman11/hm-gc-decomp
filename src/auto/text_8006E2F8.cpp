// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct Vec6E { f32 x; f32 y; f32 z; };
struct Q6E { u8 pad[0xd8]; s32 fd8; };
struct R6E { u32 f0; };
struct Z6E { u8 pad[4]; f32 f4; };
struct O6E { u8 pad[0x118]; Vec6E pos; u8 pad124[0x20c - 0x124]; Q6E *f20c; u8 pad210[0x4cc - 0x210]; s32 f4cc; u8 pad4d0[0x500 - 0x4d0]; f32 f500; f32 f504; u8 pad508[4]; R6E *f50c; u8 pad510[0x6b0 - 0x510]; f32 f6b0; u8 f6b4; };
struct M6E {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void play(char *, s32, s32, s32, s32);
};
struct P6E { u8 pad[0xdc]; s32 fdc; u8 pade0[0x118 - 0xe0]; O6E *f118; u8 pad11c[0x130 - 0x11c]; f32 *f130; u8 pad134[4]; f32 *f138; u8 pad13c[4]; f32 *f140; u8 pad144[4]; f32 *f148; u8 pad14c[0x1f0 - 0x14c]; M6E *f1f0; };
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

void fn_80073E4C(O6E *, s32);
void fn_80076D50(O6E *, s32);
void fn_802490E0(P6E *, s32, f32);
void fn_802494A4(P6E *, s32);
extern f32 lbl_8035F2C8;
extern f32 lbl_8035F0E0;
extern char lbl_8035F298[8];
extern char lbl_8035F2A0[8];
extern char lbl_8035F2A8[8];
extern char lbl_8035F2B0[8];
extern char lbl_8035F2B8[8];
extern char lbl_8035F2C0[8];

inline void SetF6E(P6E *p, s32 id) {
    if (p->fdc == 0xe && !fn_800724A4(p->f118)) fn_8007115C(p);
    fn_80241588(p, id, 0, lbl_8035F0E0);
}

void fn_8006E2F8(P6E *p) {
    f32 d;
    f32 z;
    Vec6E v;
    if (p->f118->f4cc == 0) return;
    fn_80073E4C(p->f118, 0);
    fn_80076D50(p->f118, 0);
    switch (p->f118->f6b4) {
    case 0: p->f1f0->play(lbl_8035F298, 0, 0, 0, 0); break;
    case 1: p->f1f0->play(lbl_8035F2A0, 0, 0, 0, 0); break;
    case 2: p->f1f0->play(lbl_8035F2A8, 0, 0, 0, 0); break;
    case 3: p->f1f0->play(lbl_8035F2B0, 0, 0, 0, 0); break;
    case 4: p->f1f0->play(lbl_8035F2B8, 0, 0, 0, 0); break;
    case 5: p->f1f0->play(lbl_8035F2C0, 0, 0, 0, 0); break;
    default: p->f1f0->play(lbl_8035F298, 0, 0, 0, 0); break;
    }
    fn_802490E0(p, 1, *p->f148);
    fn_802490E0(p, 0xc, *p->f140);
    z = fn_8022D694(p->f118)->f4;
    v = p->f118->pos;
    if (p->f118->f6b0 >= lbl_8035F2C8) {
        fn_802494A4(p, 0x19);
        return;
    }
    d = p->f118->f500 * p->f118->f500 + p->f118->f504 * p->f118->f504;
    if (d > lbl_8035F0C0) d = Sqrt6E(d);
    if (p->f118->f20c->fd8 == 1) {
        z = fn_8022D694(p->f118)->f4;
        SetF6E(p, 0x30);
        {
            Z6E *zz = fn_8022D694(p->f118);
            zz->f4 = lbl_8035F290 + z;
        }
        return;
    }
    if (d > *p->f138) {
        switch (fn_80072988(p->f118, v)) {
        case 1: SetF6E(p, 0x3d); break;
        case 2: SetF6E(p, 0x3e); break;
        case 3: SetF6E(p, 0x37); break;
        case 4: SetF6E(p, 0x38); break;
        default: SetF6E(p, 0x3d); break;
        }
        fn_80242168(p, lbl_8035F0B8);
        {
            Z6E *zz = fn_8022D694(p->f118);
            zz->f4 = lbl_8035F290 + z;
        }
    } else if (d > *p->f130) {
        switch (fn_80072988(p->f118, v)) {
        case 1: SetF6E(p, 0x41); break;
        case 2: SetF6E(p, 0x42); break;
        case 3: SetF6E(p, 0x43); break;
        case 4: SetF6E(p, 0x44); break;
        default: SetF6E(p, 0x41); break;
        }
        fn_80242168(p, lbl_8035F0B4);
        {
            Z6E *zz = fn_8022D694(p->f118);
            zz->f4 = lbl_8035F290 + z;
        }
    } else {
        SetF6E(p, 0x20);
    }
}

} /* extern "C" */
