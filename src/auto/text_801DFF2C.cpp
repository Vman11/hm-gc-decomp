// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct El801DFF2C;
struct Cb801DFF2C {
    u32 pad;
    virtual void f0();
    virtual void f1(El801DFF2C *);
};
struct El801DFF2C {
    u32 flags;
    f32 f4;
    u8 pad8[4];
    Cb801DFF2C *cb;
    u8 pad10[24];
    f32 f28;
    u32 f2c;
    u32 f30;
    u8 pad34[8];
};
struct Res801DFF2C { u8 pad[176]; El801DFF2C *els; };
struct Obj801DFF2C {
    u8 pad0[36];
    u32 flags;
    void *f28;
    void *f2c;
    s32 idx;
    u32 f34;
    u32 f38;
    f32 f3c;
    s32 f40;
    f32 f44;
};

extern const u32 lbl_80365280;
extern const u32 lbl_80365284;
extern const u32 lbl_80365288;
extern f32 lbl_8036528C;
Res801DFF2C *fn_8019556C(void *);
void fn_80103BB4(El801DFF2C *, u32);

void fn_801DFF2C(Obj801DFF2C *o) {
    El801DFF2C *e;
    if (o->flags & 2) {
        e = &fn_8019556C(o->f2c ? o->f2c : o->f28)->els[o->idx];
        if (o->f3c >= lbl_8036528C) {
            e->f28 = o->f3c;
        }
        if (o->f38 != 0) {
            e->f2c = o->f38;
        }
        fn_80103BB4(e, o->f34);
        e->flags |= lbl_80365280;
        if (e->cb != 0) {
            e->cb->f1(e);
        }
        e->f30 |= lbl_80365284;
        e->f4 = o->f44;
        if (o->f40 != 0) {
            e->flags |= lbl_80365288;
        } else {
            e->flags &= ~4;
        }
    }
}

} /* extern "C" */
