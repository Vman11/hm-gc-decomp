// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern void *lbl_8035AFCC;
extern u8 lbl_802EAB78[];
extern volatile f32 lbl_80364ED8;
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
void *__nw__FUl(u32);
void fn_801B31A4(void *);

void *fn_801AF15C(void) {
    u8 *p;
    if (lbl_8035AFCC == 0) {
        fn_800604C4(-2, 0, 0, 0);
    }
    fn_800F7EC0(lbl_8035AFCC);
    p = __nw__FUl(388);
    if (p != 0) {
        fn_801B31A4(p);
    *(void * *)(p + 128) = lbl_802EAB78;
    *(f32 *)(p + 356) = lbl_80364ED8;
    *(f32 *)(p + 360) = lbl_80364ED8;
    *(f32 *)(p + 364) = lbl_80364ED8;
    *(f32 *)(p + 368) = lbl_80364ED8;
    }
    fn_800F7E98();
    if (p == 0) {
        fn_800604C4(-4, 0, 0, 0);
    }
    return p;
}
