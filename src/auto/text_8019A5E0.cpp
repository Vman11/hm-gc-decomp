// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V4 { f32 x, y, z, w; };
struct Base30 { u8 pad[0x30]; };
struct B22 : Base30 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(V4 *v); virtual void v6();
};
struct Base8 { u8 pad[8]; };
struct C22 : Base8 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5();
    virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10(); virtual void v11(B22 *b, V4 *v);
};
struct A22 { u8 pad[0x40]; C22 *c; };
extern s32 lbl_8035AE8C;
extern volatile f32 lbl_80364CC0;
void fn_80100CF4(V4 *v);
void fn_8019A7D0(A22 *a, s32 b, s32 c);
void fn_8018BAA8(B22 *b);
void fn_8019A5E0(A22 *__restrict a, B22 *__restrict b, V4 *__restrict c) {
    volatile V4 v;
    fn_80100CF4((V4 *)&v);
    lbl_8035AE8C++;
    fn_8019A7D0(a, 3, 0);
    if (c == 0) {
        fn_8018BAA8(b);
        b->v5((V4 *)&v);
    } else {
        f32 z, w, y, x;
        x = *(volatile f32 *)&c->x; y = *(volatile f32 *)&c->y; z = *(volatile f32 *)&c->z; w = *(volatile f32 *)&c->w;
        v.x = x; v.y = y; v.z = z; v.w = w;
        v.w = w + lbl_80364CC0;
    }
    b->v6();
    a->c->v11(b, (V4 *)&v);
}

} /* extern "C" */
