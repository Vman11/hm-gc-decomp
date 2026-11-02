// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct P48;
struct A48 {
virtual void a0(); virtual void a1(); virtual void a2(); virtual void a3(); virtual void a4(); virtual void a5(); virtual void a6(); virtual void a7(); virtual void a8(); virtual void a9();
virtual void a10(); virtual void a11(); virtual void a12(); virtual void a13(); virtual void a14(); virtual void a15(); virtual void a16(); virtual void a17(); virtual void a18(); virtual void a19();
virtual void a20(); virtual void a21(); virtual void a22(); virtual void a23(); virtual void a24(); virtual void a25(); virtual void a26(); virtual void a27(); virtual void a28(); virtual void a29();
virtual void a30(); virtual void a31(); virtual void a32(); virtual void a33(); virtual void a34(); virtual void a35(); virtual void a36(); virtual void a37(); virtual void a38(); virtual void a39();
virtual void a40(); virtual void a41(); virtual void a42(); virtual void a43(); virtual void a44(); virtual void a45(); virtual void a46(); virtual void a47(); virtual s32 a48(P48 *p);
};
struct N48 { A48 *o; s32 f4; N48 *next; };
struct B80 { u8 pad[0x80]; };
struct C48 : B80 {
virtual void c0(); virtual void c1(); virtual void c2(); virtual void c3(); virtual void c4(); virtual void c5(); virtual void c6(); virtual void c7(); virtual void c8(); virtual void c9();
virtual void c10(); virtual void c11(); virtual void c12(); virtual void c13(); virtual void c14(); virtual void c15(); virtual void c16(); virtual void c17(); virtual void c18(); virtual void c19();
virtual void c20(s32); virtual void c21(); virtual void c22(); virtual void c23(); virtual void c24(); virtual void c25(); virtual void c26(); virtual void c27(); virtual void c28(); virtual void c29(); virtual void c30(); virtual void c31(); virtual void c32(); virtual void c33(); virtual void c34(); virtual void c35(); virtual void c36(); virtual void c37(); virtual void c38(); virtual void c39(); virtual void c40(); virtual void c41(); virtual void c42(); virtual void c43(); virtual void c44(); virtual void c45(); virtual void c46(); virtual void c47(); virtual void c48(); virtual void c49(); virtual void c50(); virtual void c51(); virtual void c52(); virtual void c53(); virtual void c54(); virtual void c55(); virtual void c56(); virtual void c57(); virtual void c58(); virtual void c59(s32, s32); virtual void c60(); virtual void c61(); virtual void c62(); virtual void c63(); virtual void c64(); virtual void c65(); virtual void c66(); virtual void c67(); virtual void c68(); virtual void c69(); virtual void c70(); virtual void c71(); virtual void c72(); virtual void c73(); virtual void c74(); virtual void c75(); virtual void c76(); virtual void c77(); virtual void c78();
};
struct B34 { u8 pad[0x34]; };
struct D48 : B34 {
virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void d4(); virtual void d5(); virtual void d6(s32, s32);
};
struct P48 { u8 pad[0x68]; s32 f68; u8 p6c[4]; D48 *f70; u8 p74[0x88 - 0x74]; N48 *list; u8 p8c[0x144 - 0x8c]; s32 f144; u8 p148[0x168 - 0x148]; C48 *f168; };
void fn_801B8E6C(P48 *p, s32 b) {
    N48 *n;
    s32 found = 0;
    for (n = p->list; n != 0; n = n->next) {
        if (n->o->a48(p) == 0) found = 1;
    }
    if (found == 0) {
        p->f144 = 0x20;
        if (p->f168 != 0) {
            p->f168->c20(1);
            *(u32 *)((u8 *)p->f168 + 0x6c) |= 2;
            p->f168->c78();
            p->f168->c59(0, b);
        }
        if (b != 0 && p->f70 != 0) p->f70->d6(0x80, p->f68);
    }
}

} /* extern "C" */
