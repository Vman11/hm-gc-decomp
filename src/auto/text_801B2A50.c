// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern void *lbl_8035AFCC;
extern u8 lbl_802EACC8[];
extern f32 lbl_80364EF8;
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
void *__nw__FUl(u32);
void __ct__9C801DDC8CFv(void *);

void *fn_801B2A50(void) {
    u8 *p;
    if (lbl_8035AFCC == 0) {
        fn_800604C4(-2, 0, 0, 0);
    }
    fn_800F7EC0(lbl_8035AFCC);
    p = __nw__FUl(420);
    if (p != 0) {
        __ct__9C801DDC8CFv(p);
    *(void * *)(p + 128) = lbl_802EACC8;
    *(s32 *)(p + 364) = 0;
    *(s32 *)(p + 392) = 0;
    *(s32 *)(p + 396) = 0;
    *(s32 *)(p + 404) = 0;
    *(s32 *)(p + 368) = 0;
    *(s32 *)(p + 372) = 0;
    *(s32 *)(p + 376) = 0;
    *(s32 *)(p + 380) = 0;
    *(s32 *)(p + 412) = 0;
    *(s32 *)(p + 360) = 0;
    *(s32 *)(p + 408) = 13;
    *(s32 *)(p + 384) = 0;
    *(s32 *)(p + 388) = 0;
    *(f32 *)(p + 416) = lbl_80364EF8;
    }
    fn_800F7E98();
    if (p == 0) {
        fn_800604C4(-4, 0, 0, 0);
    }
    return p;
}
