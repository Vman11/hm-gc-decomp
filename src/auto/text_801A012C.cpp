// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

}
struct S_801A012C;
struct C_801A012C { u8 pad_[8];
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void f48(S_801A012C *);
};

struct V3_801A012C { f32 x, y, z; };
struct S_801A012C { u8 pad[28]; V3_801A012C *a; V3_801A012C *b; u8 pad2[116 - 36]; u32 f116; u8 pad3[12]; u32 f132; };
struct N_801A012C { u8 pad[12]; C_801A012C *f12; C_801A012C *f16; f32 d; };
extern "C" {
extern f32 lbl_80364D80;
void fn_80101624(V3_801A012C *, V3_801A012C *, V3_801A012C *, f32);
void fn_801A012C(N_801A012C *n, S_801A012C *s) {
    V3_801A012C *pa = s->a;
    V3_801A012C *pb = s->b;
    f32 ax, d1, d, d0;
    ax = *(volatile f32*)&pa->z; d = *(volatile f32*)&n->d; d1 = pb->z; d1 -= d; d0 = ax - d;
    V3_801A012C m;
    V3_801A012C *sv;
    if (d0 >= lbl_80364D80) {
        if (d1 < lbl_80364D80) {
            fn_80101624(&m, s->a, s->b, d0 / (d0 - d1));
            if (n->f12) { sv = s->b; s->b = &m; n->f12->f48(s); s->b = sv; }
            if (s->f132 < s->f116 && n->f16) { sv = s->a; s->a = &m; n->f16->f48(s); s->a = sv; }
        } else if (n->f12) {
            n->f12->f48(s);
        }
    } else if (d1 >= lbl_80364D80) {
        fn_80101624(&m, s->a, s->b, d0 / (d0 - d1));
        if (n->f16) { sv = s->b; s->b = &m; n->f16->f48(s); s->b = sv; }
        if (s->f132 < s->f116 && n->f12) { sv = s->a; s->a = &m; n->f12->f48(s); s->a = sv; }
    } else if (n->f16) {
        n->f16->f48(s);
    }
}
}
extern "C" {

} /* extern "C" */
