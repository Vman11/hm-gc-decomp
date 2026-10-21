// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct T801547BC {
    u8 pad[32];
    virtual void v0();
    virtual void v1();
    virtual u32 f16();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void f44(u32 *a, u32 *b, s32 n);
    virtual void f48();
};
extern u32 lbl_8035AC30;
extern u32 lbl_8035AC34;
extern u32 lbl_8032C2D0[0x21D8 / 4];
void fn_8014721C(u32 *ctx, T801547BC *src, T801547BC *dst, u32 fmt);
void fn_80129040(T801547BC *dst, u32 a, u32 b);
void fn_801456A8(u32 *ctx, u32 a, u32 b, u32 c, u32 d, u32 e, u32 f, u32 g);
void fn_801471FC(u32 *ctx);

void fn_801547BC(T801547BC *dst, u32 a2, u32 a3, T801547BC *src, u32 a5, u32 a6, u32 a7) {
    T801547BC *d;
    u32 w;
    u32 h;
    d = dst;
    src->f44(&w, &h, 1);
    d->f44(&lbl_8035AC30, &lbl_8035AC34, 2);
    fn_8014721C(lbl_8032C2D0, src, d, src->f16());
    fn_80129040(d, a6, a7);
    fn_801456A8(lbl_8032C2D0, lbl_8035AC30, lbl_8035AC34, a2, a3, w, h, a5);
    lbl_8032C2D0[0] &= ~0x1000;
    lbl_8032C2D0[0] &= ~0x800;
    fn_801471FC(lbl_8032C2D0);
    lbl_8035AC30 = 0;
    d->f48();
    src->f48();
}

} /* extern "C" */
