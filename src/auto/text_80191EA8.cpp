// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
} /* extern "C" */
struct C4_80191EA8 {
    f32 r, g, b, a;
};
struct P5_80191EA8 {
    C4_80191EA8 c;
    f32 e;
};
struct D80191EA8 {
    s32 f0;
    P5_80191EA8 p;
    u32 f24;
    u32 f28;
    u32 f32;
};
struct S80191EA8 {
    u32 flags;
    u32 f4;
    C4_80191EA8 cur;
    P5_80191EA8 p;
    u32 f44;
    u32 f48;
    u32 f52;
    u8 pad[104 - 56];
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
};
extern "C" {

void fn_80190C98(S80191EA8 *self);

void fn_80191EA8(S80191EA8 *self, u32 a1, const D80191EA8 *desc) {
    if (self->flags & 1) {
        self->v10();
    }
    self->flags = 1;
    if (desc->f0 != 0) {
        self->flags |= 2;
    }
    self->cur = desc->p.c;
    self->p.c = desc->p.c;
    self->p.e = desc->p.e;
    self->f44 = a1;
    if (desc->f28 != 0) {
        self->f48 = desc->f28;
    }
    if (desc->f32 != 0) {
        self->f52 = desc->f32;
    }
    fn_80190C98(self);
}

} /* extern "C" */
