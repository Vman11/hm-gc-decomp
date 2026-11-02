// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct E_80107C10 { u8 pad[0x124]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual s32 m5(); };
struct T12 { f32 a, b, c; };
struct T16 { f32 a, b, c, d; };
extern "C" { extern u8 lbl_803286D0[]; extern u32 lbl_80363900; void fn_800FB064(void *, void *); void fn_800F87F0(void *, void *, void *); void fn_800FAEF8(void *); void fn_80101124(void *, void *); void fn_800FF9E8(void *, void *); void fn_80104D8C(void *, void *, void *, s32); }

void fn_80107C10(u8 *p, E_80107C10 *q, void *r) {
    u8 *t;
    s32 k;
    T16 w;
    T12 v;
    u8 buf[8];
    fn_800FB064(q, buf);
    fn_800F87F0(r, buf, p);
    fn_800FAEF8(q);
    t = lbl_803286D0;
    while ((u32)(k = q->m5()) != 6) {
        switch (k) {
        case 60:
            fn_800FF9E8(&w, q);
            (*(void (**)(void *, void *))(t + 24))(*(void **)(p + 16), &w);
            *(u32 *)(p + 32) |= lbl_80363900;
            break;
        case 61:
            fn_80101124(&v, q);
            (*(void (**)(void *, void *))(t + 12))(*(void **)(p + 16), &v);
            *(u32 *)(p + 32) |= lbl_80363900;
            break;
        default:
            fn_80104D8C(p, q, r, k);
            break;
        }
    }
}

} /* extern "C" */
