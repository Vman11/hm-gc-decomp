// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern void *lbl_8035B530;
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
void *__nwa__FUl(u32);
void fn_802416D4(void *, void *);

void fn_8004B930(u8 *p, void *a) {
    u32 i;
    if (lbl_8035B530 == NULL) {
        fn_800604C4(-2, 0, 0, 0);
    }
    fn_800F7EC0(lbl_8035B530);
    *(u32 **)(p + 400) = __nwa__FUl(*(u32 *)(p + 468) * 4);
    fn_800F7E98();
    if (*(u32 **)(p + 400) == NULL) {
        fn_800604C4(-4, 0, 0, 0);
    }
    for (i = 0; i < *(u32 *)(p + 468); i++) {
        (*(u32 **)(p + 400))[i] = 0;
    }
    fn_802416D4(p, a);
}
