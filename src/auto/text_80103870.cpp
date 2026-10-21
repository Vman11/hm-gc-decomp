// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern void *lbl_8035AA38;
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
void *__nwa__FUl(u32);
void __dla__FPv(void *);

void fn_80103870(u8 *p, u32 a) {
    u32 i;
    if (*(void **)(p + 16) != 0) {
        if (*(void **)(p + 16) != 0) {
            __dla__FPv(*(void **)(p + 16));
        }
    *(s32 *)(p + 16) = 0;
    *(s32 *)(p + 20) = 0;
    *(s32 *)(p + 8) = 0;
    *(s32 *)(p + 12) = 0;
    }
    *(u32 *)(p + 12) = a;
    if (lbl_8035AA38 == 0) {
        fn_800604C4(-2, 0, 0, 0);
    }
    fn_800F7EC0(lbl_8035AA38);
    *(u32 **)(p + 16) = (u32 *)(__nwa__FUl(*(u32 *)(p + 12) * 4));
    fn_800F7E98();
    if (*(u32 **)(p + 16) == 0) {
        fn_800604C4(-4, 0, 0, 0);
    }
    for (i = 0; i < *(u32 *)(p + 12); i++) {
        (*(u32 **)(p + 16))[i] = 0;
    }
}

} /* extern "C" */
