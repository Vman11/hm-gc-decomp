// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct E_80107FA4 { u8 pad[0x124]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual s32 m5(); };
struct T12 { f32 a, b, c; };
extern "C" { extern u8 lbl_803286D0[]; extern u32 lbl_8036390C; void fn_800FB064(void *, void *); void fn_800F87F0(void *, void *, void *); void fn_800FAEF8(void *); void fn_80101124(void *, void *); f32 fn_800FB2E0(void *); void fn_80104D8C(void *, void *, void *, s32); }

void fn_80107FA4(u8 *p, E_80107FA4 *q, void *r) {
    u8 *t;
    s32 k;
    T12 v;
    u8 buf[8];
    fn_800FB064(q, buf);
    fn_800F87F0(r, buf, p);
    fn_800FAEF8(q);
    t = lbl_803286D0;
    while ((u32)(k = q->m5()) != 6) {
        switch (k) {
        case 62: {
            f32 f = fn_800FB2E0(q);
            *(f32 *)(p + 40) = f;
            *(f32 *)(p + 44) = f;
            *(f32 *)(p + 48) = f;
            (*(void (**)(void *))(t + 84))(*(void **)(p + 16));
            *(u32 *)(p + 32) |= lbl_8036390C;
            break;
        }
        case 63:
            fn_80101124(&v, q);
            *(f32 *)(p + 40) = v.a;
            *(f32 *)(p + 44) = v.b;
            *(f32 *)(p + 48) = v.c;
            (*(void (**)(void *, void *))(t + 88))(*(void **)(p + 16), &v);
            *(u32 *)(p + 32) |= lbl_8036390C;
            break;
        default:
            fn_80104D8C(p, q, r, k);
            break;
        }
    }
}

} /* extern "C" */
