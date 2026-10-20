// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 *lbl_8035AD38;
extern u32 lbl_80364738;
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
void *__nwa__FUl(u32);

void fn_801704BC(u8 *p, void *a) {
    *(u32 *)(p + 80) = 0;
    if (*(u32 *)(p + 8) & 1) {
        *(u32 *)(p + 80) += 12;
    }
    if (*(u32 *)(p + 8) & 2) {
        *(u32 *)(p + 80) += 4;
    }
    if (*(u32 *)(p + 8) & 4) {
        *(u32 *)(p + 80) += 8;
    }
    if (*(u32 *)(p + 8) & 8) {
        *(u32 *)(p + 84) = *(u32 *)(p + 80);
        *(u32 *)(p + 80) += 4;
    }
    if (*(u32 *)(p + 8) & 16) {
        *(u32 *)(p + 84) = *(u32 *)(p + 80);
        *(u32 *)(p + 80) += 16;
    }
    *(u32 *)(p + 12) |= lbl_80364738;
    *(void **)(p + 72) = a;
    if (*(u32 *)(lbl_8035AD38 + 24) >= 5) {
        *(u32 *)(lbl_8035AD38 + 28) = *(u32 *)(lbl_8035AD38 + 24);
    } else {
        *(u32 *)(lbl_8035AD38 + 28) = 5;
    }
    if (lbl_8035AD38 == 0) {
        fn_800604C4(-2, 0, 0, 0);
    }
    fn_800F7EC0(lbl_8035AD38);
    *(void **)(p + 76) = __nwa__FUl(*(u32 *)(p + 80) * *(u32 *)p);
    fn_800F7E98();
    if (*(void **)(p + 76) == 0) {
        fn_800604C4(-4, 0, 0, 0);
    }
    *(u32 *)(lbl_8035AD38 + 28) = *(u32 *)(lbl_8035AD38 + 24);
}

} /* extern "C" */
