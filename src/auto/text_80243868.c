// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern void *lbl_8035B4C0;
void fn_802439BC(void *);
void fn_800F6E88(void *, void *);
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void *__nwa__FUl(u32);
void fn_800F7E98(void);

s32 fn_80243868(u32 *p, u32 a, void *b, void *c, u32 n) {
    if (((s32 *)p)[0] != 0) {
        fn_802439BC(p);
    }
    p[0] = 1;
    fn_800F6E88(p + 1, b);
    fn_800F6E88(p + 3, c);
    p[5] = n;
    p[7] = a;
    if (p[5] < 8 && p[5] != 0) {
        p[5] = 8;
    }
    if (n != 0) {
        u32 i;
        if (lbl_8035B4C0 == NULL) {
            fn_800604C4(-2, 0, 0, 0);
        }
        fn_800F7EC0(lbl_8035B4C0);
        p[6] = (u32)__nwa__FUl(p[5] << 2);
        fn_800F7E98();
        if (p[6] == 0) {
            fn_800604C4(-4, 0, 0, 0);
        }
        for (i = 0; i < p[5]; i++) {
            ((u32 *)p[6])[i] = 0;
        }
    }
    p[10] = 0;
    return 0;
}
