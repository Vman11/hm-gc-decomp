// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct B1930 { u8 pad[0x1930]; };
struct O43 : B1930 { virtual void a0(); virtual void a1(); virtual void a2(); virtual void a3(); virtual void a4(); virtual void a5(); virtual void a6(); virtual void a7(); virtual void a8(); virtual void a9(); virtual void a10(); virtual void a11(); virtual void a12(); virtual void a13(); virtual void a14(); virtual void a15(); virtual void a16(); virtual void a17(); virtual void a18(); virtual void a19(); virtual void a20(); virtual void a21(); virtual void a22(); virtual void a23(); virtual void a24(); virtual void a25(); virtual void a26(); virtual void a27(); virtual void a28(); virtual void a29(); virtual void a30(); virtual void a31(); virtual void a32(); virtual void a33(); virtual void a34(); virtual void a35(); virtual void a36(); virtual void a37(); virtual void a38(); virtual void a39(); virtual void a40(); virtual void a41(); virtual void a42(); virtual void a43(); virtual void a44(); virtual void a45(); virtual void a46(); virtual void a47(); virtual void a48(); virtual void a49(); virtual void a50(); virtual void a51(); virtual void a52(); virtual void a53(); virtual void a54(); virtual void a55(); virtual void a56(); virtual void a57(); virtual void a58(); virtual void a59(); virtual void a60(); virtual void a61(); virtual void a62(); virtual void a63(); virtual void a64(); virtual void a65(); virtual void a66(); virtual s32 a67(); virtual void a68(); virtual void a69(s32 a, s32 b); };
struct E43 { u8 d[0x34]; };
struct F43 { u8 pad[0x28]; f32 f28; };
struct P43 { u32 f0; u8 p4[0x6c - 4]; void *f6c; u8 p70[8]; F43 *f78; u8 p7c[0x90 - 0x7c]; u8 *f90; u8 p94[0xa0 - 0x94]; u32 fa0; E43 *fa4; u8 pa8[4]; f32 fac; };
extern f32 lbl_80364C1C;
extern f32 lbl_80364C20;
void fn_8019688C(P43 *p, O43 *b);
void fn_801A07E4(P43 *p, O43 *b);
void fn_80195AA0(E43 *e, O43 *b, void *q, s32 one, u8 *flag, f32 f);
void fn_801966EC(P43 *p, O43 *b) {
    u32 i;
    u8 flag = 0;
    if ((p->f0 & 0x10000) && p->fac > lbl_80364C1C) {
        fn_8019688C(p, b);
        p->fac = lbl_80364C1C;
    }
    b->a69(0, b->a67());
    void *t = p->f6c;
    void *q = p->f90 + 4;
    if (t) q = t;
    fn_801A07E4(p, b);
    f32 f = p->f78 ? p->f78->f28 : lbl_80364C20;
    for (i = 0; i < p->fa0; i++) fn_80195AA0(&p->fa4[i], b, q, 1, &flag, f);
}

} /* extern "C" */
