// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
extern void *lbl_8035AC00;
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
void fn_800F8E38(void *, u32);
void fn_80135FB0(void *, void *, u32);
void *memset(void *, s32, u32);
} /* extern "C" */
struct C801310B0 {
    u8 pad[16];
    virtual void v0();
    virtual void v1();
    virtual void v2(void *);
};
struct D801310B0 : C801310B0 {
    u32 f20;
    u32 f24;
    u32 pad28;
    u32 *f32;
    u32 f36;
    u32 pad40;
    u32 *f44;
};
extern "C" {
void fn_801310B0(D801310B0 *p, void *a, u32 b, u32 c, u32 d, u32 e) {
    if (p->f20 != 0) p->v1();
    p->f24 = b;
    p->f36 = c;
    p->f20 = d;
    fn_800F8E38(p, p->f20);
    if (p->f24 != 0) {
        if (lbl_8035AC00 == 0) fn_800604C4(-2, 0, 0, 0);
        fn_800F7EC0(lbl_8035AC00);
        p->f32 = new u32[p->f24];
        fn_800F7E98();
        if (p->f32 == 0) fn_800604C4(-4, 0, 0, 0);
        memset(p->f32, 0, p->f24 * 4);
    }
    if (p->f36 != 0) {
        if (lbl_8035AC00 == 0) fn_800604C4(-2, 0, 0, 0);
        fn_800F7EC0(lbl_8035AC00);
        p->f44 = new u32[p->f36];
        fn_800F7E98();
        if (p->f44 == 0) fn_800604C4(-4, 0, 0, 0);
        memset(p->f44, 0, p->f36 * 4);
    }
    p->v2(a);
    fn_80135FB0(a, p, e);
}

} /* extern "C" */
