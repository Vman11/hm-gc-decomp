// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern void *lbl_8035B530;
extern u8 lbl_802CDD64[];
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
void *__nw__FUl(u32);
void fn_80273018(void *);
void __ct__9C80214C34Fv(void *);
void fn_8009C2B0(void *);

void *fn_8009C44C(void) {
    u8 *p;
    if (lbl_8035B530 == NULL) {
        fn_800604C4(-2, 0, 0, 0);
    }
    fn_800F7EC0(lbl_8035B530);
    p = __nw__FUl(784);
    if (p != NULL) {
        fn_80273018(p);
        *(void **)p = lbl_802CDD64;
        __ct__9C80214C34Fv(p + 248);
        fn_8009C2B0(p);
    }
    fn_800F7E98();
    if (p == NULL) {
        fn_800604C4(-4, 0, 0, 0);
    }
    return p;
}
