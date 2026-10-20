// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_80155298 { u8 pad[0x20]; virtual void p0(); virtual void m(); };
extern "C" { void fn_800604C4(s32, s32, s32, s32); void fn_800F7EC0(void *); void fn_800F7E98(void); void *__nwa__FUl(u32); void __dla__FPv(void *); void *memset(void *, s32, u32); }
extern "C" { extern u8 *lbl_8035ACC0; void fn_801482DC(void *, void *); void fn_80160F40(void *, void *, s32); }

s32 fn_80155298(V_80155298 *q, void *a, u16 b, u16 c, void *d, u16 e) {
    u8 *p = (u8 *)q;
    if (*(u16 *)(p + 26) & 1) {
        q->m();
    }
    fn_801482DC(q, d);
    *(u16 *)(p + 24) = e | 0x2000;
    *(u16 *)(p + 26) = 1;
    *(u16 *)(p + 28) = b;
    *(u16 *)(p + 30) = c;
    if (*(u32 *)(lbl_8035ACC0 + 24) >= 5) {
        *(u32 *)(lbl_8035ACC0 + 28) = *(u32 *)(lbl_8035ACC0 + 24);
    } else {
        *(u32 *)(lbl_8035ACC0 + 28) = 5;
    }
    if (lbl_8035ACC0 == 0) {
        fn_800604C4(-2, 0, 0, 0);
    }
    fn_800F7EC0(lbl_8035ACC0);
    *(void **)(p + 68) = __nwa__FUl(*(u16 *)(p + 30) * ((u32)(*(u16 *)(p + 28) * *(u16 *)(p + 2) + 7) >> 3));
    fn_800F7E98();
    if (*(void **)(p + 68) == 0) {
        fn_800604C4(-4, 0, 0, 0);
    }
    *(u32 *)(lbl_8035ACC0 + 28) = *(u32 *)(lbl_8035ACC0 + 24);
    if (*(u16 *)p & 4) {
        fn_80160F40(p + 36, p, 32);
    }
    return 1;
}

} /* extern "C" */
