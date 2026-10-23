// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct S_801FB850 {
    u32 flags;
    u8 pad4[16];
    f32 f14;
    u8 pad18[4];
    f32 f1C;
    f32 f20;
    f32 f24;
    f32 f28;
    u8 pad2C[20];
    f32 f40;
    f32 f44;
    f32 f48;
    f32 f4C;
    u8 pad50[8];
    virtual void v0();
    virtual void v1();
    virtual void v2(f32);
    virtual void v3(f32);
};

void fn_801FB850(S_801FB850 *p, f32 dt) {
    if (p->flags & 8) {
        p->f48 += dt;
        if (p->f48 >= p->f4C) {
            p->v2(p->f44);
            p->flags &= ~8;
        } else {
            p->v2(p->f48 / p->f4C * (p->f44 - p->f40) + p->f40);
        }
    }
    if (p->flags & 0x10) {
        p->f24 += dt;
        if (p->f24 >= p->f28) {
            p->v3(p->f20);
            p->flags &= ~0x10;
        } else {
            p->f14 = p->f24 / p->f28 * (p->f20 - p->f1C) + p->f1C;
            p->v3(p->f14);
        }
    }
}

} /* extern "C" */
