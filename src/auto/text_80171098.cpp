// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
extern u8 lbl_802A0DB8[];
s32 fn_8015641C(s32, void *);
void fn_80060568(const char *, s32, s32, s32);
} /* extern "C" */
struct B80171098 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual s32 v3();
};
struct E80171098 {
    u16 f0;
    u8 pad[18];
};
struct D80171098 : B80171098 {
    u32 f4;
    E80171098 a[3];
    u32 amask;
    E80171098 b[8];
    u32 bmask;
    E80171098 c[12];
    u32 cmask;
};
#pragma opt_loop_invariants off
extern "C" {
void fn_80171098(D80171098 *p, u32 arg) {
    u8 *data = lbl_802A0DB8;
    u32 i;
    if (p->v3()) p->v2();
    p->f4 = arg;
    p->amask = 0;
    for (i = 0; i < 3; i++) {
        if (fn_8015641C(((s32 *)(data + 144))[i], &p->a[i]) == 0)
            fn_80060568((char *)data + 204, 0, 0, 0);
        p->amask |= p->a[i].f0;
    }
    p->bmask = 0;
    for (i = 0; i < 8; i++) {
        if (fn_8015641C(((s32 *)(data + 156))[i], &p->b[i]) == 0)
            fn_80060568((char *)data + 228, 0, 0, 0);
        p->bmask |= p->b[i].f0;
    }
    p->cmask = 0;
    for (i = 0; i < 12; i++) {
        if (fn_8015641C(((s32 *)(data + 156))[i], &p->c[i]) == 0)
            fn_80060568((char *)data + 260, 0, 0, 0);
        p->cmask |= p->c[i].f0;
    }
}
}
#pragma opt_loop_invariants reset
extern "C" {

} /* extern "C" */
