// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern void *lbl_8035AAD0;
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
void *__nwa__FUl(u32);
void __dla__FPv(void *);

s32 fn_8010EBE0(u32 *p, u8 *a) {
    u32 n;
    u32 i;
    if (p[0] != 0) {
        if (p[1] != 0) {
            __dla__FPv((void *)p[1]);
        }
        p[0] = 0;
        p[1] = 0;
    }
    n = *(u32 *)(a + 32);
    p[0] = (u32)a;
    if (lbl_8035AAD0 == NULL) {
        fn_800604C4(-2, 0, 0, 0);
    }
    fn_800F7EC0(lbl_8035AAD0);
    p[1] = (u32)__nwa__FUl(n << 2);
    fn_800F7E98();
    if (p[1] == 0) {
        fn_800604C4(-4, 0, 0, 0);
    }
    for (i = 0; i < n; i++) {
        ((u32 *)p[1])[i] = i;
    }
    return 0;
}
