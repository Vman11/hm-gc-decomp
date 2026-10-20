// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct S_8017A780 { u8 pad[0x124]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void err(s32); virtual u32 n(); };
extern "C" { void fn_800604C4(s32, s32, s32, s32); void fn_800F7EC0(void *); void fn_800F7E98(void); void *__nwa__FUl(u32); void __dla__FPv(void *); void *memset(void *, s32, u32); }
struct C8017B3C0 { u8 pad[60]; C8017B3C0(); };
extern "C" { extern void *lbl_8035AD70; u32 fn_800FADA8(void *); void fn_800FAEA0(void *); void fn_8017B020(void *, void *, void *, void *); }

void fn_8017A780(u8 *p, u8 *q, S_8017A780 *s, void *x) {
    u32 i;
    if (*(u32 *)(p + 4) != 0) {
        s->err(39);
    }
    *(u32 *)(p + 4) = fn_800FADA8(s);
    if (*(u32 *)(p + 4) < 1) {
        s->err(35);
    }
    if (lbl_8035AD70 == 0) {
        fn_800604C4(-2, 0, 0, 0);
    }
    fn_800F7EC0(lbl_8035AD70);
    *(C8017B3C0 **)(p + 8) = new C8017B3C0[*(u32 *)(p + 4)];
    fn_800F7E98();
    if (*(void **)(p + 8) == 0) {
        fn_800604C4(-4, 0, 0, 0);
    }
    for (i = 0; i < *(u32 *)(p + 4); i++) {
        fn_8017B020(&(*(C8017B3C0 **)(p + 8))[i], *(void **)(q + 4), s, x);
    }
    fn_800FAEA0(s);
}

} /* extern "C" */
