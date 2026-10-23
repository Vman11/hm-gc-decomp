// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
} /* extern "C" */
struct D_8015689C { u16 f0; u8 pad2[14]; void *f16; };
struct X_8015689C {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8();
    virtual void v9(D_8015689C *, D_8015689C *);
    virtual void v10(); virtual void v11();
    virtual void v12(D_8015689C *, D_8015689C *);
    virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16();
    virtual u32 v17();
};
struct A_8015689C {
    u8 pad[48];
    virtual void w0(); virtual void w1(); virtual void w2(); virtual void w3(); virtual void w4();
    virtual void w5(); virtual void w6(); virtual void w7(); virtual void w8(); virtual void w9();
    virtual void w10(); virtual void w11(); virtual void w12(); virtual void w13();
    virtual X_8015689C *w14();
};
extern "C" {

extern u16 lbl_803645AC;
u32 fn_80148018(D_8015689C *);
void fn_80148194(D_8015689C *, s32);
void fn_80148154(D_8015689C *, s32);

static inline u16 getf_8015689C(const D_8015689C *d) { return d->f0; }

void fn_8015689C(A_8015689C *a, u32 b, s32 c, D_8015689C *d) {
    X_8015689C *x;
    x = a->w14();
    if (!(getf_8015689C(d) & 0x3E0)) {
        d->f0 |= lbl_803645AC;
    }
    if (c != 0 && !(b & 0x1461) && !(b & 0x1C61) && (d->f0 & 1)) {
        if (d->f16 != 0) {
            if (fn_80148018(d) == 1) {
                if (x->v17() & 0x20) fn_80148194(d, 0);
            } else {
                if (x->v17() & 0x80) fn_80148154(d, 0);
            }
        } else {
            if (x->v17() & 0x20) fn_80148194(d, 0);
        }
    }
    if (b & 1) {
        x->v9(d, d);
    } else {
        x->v12(d, d);
    }
}

} /* extern "C" */
