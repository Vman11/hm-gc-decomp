// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct C801291CC {
    u8 pad[26];
    u16 flags;
    u16 f1c;
    u16 f1e;
    virtual void v0();
    virtual void v1();
    virtual u32 v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9(u32 *, u32 *, s32);
    virtual void v10();
};
typedef struct { u32 a, b, c, d; } R801291CC;
extern u16 lbl_80363E58;
extern u8 lbl_8032C2D0[];
void fn_8014721C(void *, C801291CC *, C801291CC *, u32);
void fn_80145114(void *, u32, u32, s32, s32, u32, u32, R801291CC *);
void fn_801471FC(void *);

void fn_801291CC(C801291CC *a, C801291CC *b) {
    u32 l20, l16, l12, l8;
    R801291CC r;
    a->flags |= lbl_80363E58;
    fn_8014721C(lbl_8032C2D0, b, a, b->v2());
    b->v9(&l16, &l8, 1);
    a->v9(&l20, &l12, 2);
    r.b = 0;
    r.a = 0;
    r.c = b->f1c;
    r.d = b->f1e;
    fn_80145114(lbl_8032C2D0, l20, l12, 0, 0, l16, l8, &r);
    a->v10();
    b->v10();
    fn_801471FC(lbl_8032C2D0);
    a->flags &= ~0x20;
}

} /* extern "C" */
