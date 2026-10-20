// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern void *lbl_8035B530;
extern u8 lbl_802D1ED4[];
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
void *__nw__FUl(u32);
void __ct__9C8024262CFv(void *);
void fn_8023C398(void *);
void __ct__9C8023D65CFv(void *);
void fn_800A91A0(void *);

void *fn_800A95E4(void) {
    u8 *p;
    if (lbl_8035B530 == NULL) {
        fn_800604C4(-2, 0, 0, 0);
    }
    fn_800F7EC0(lbl_8035B530);
    p = __nw__FUl(508);
    if (p != NULL) {
        __ct__9C8024262CFv(p);
        *(void **)p = lbl_802D1ED4;
        fn_8023C398(p + 360);
        fn_8023C398(p + 376);
        __ct__9C8023D65CFv(p + 392);
        __ct__9C8023D65CFv(p + 436);
        fn_800A91A0(p);
    }
    fn_800F7E98();
    if (p == NULL) {
        fn_800604C4(-4, 0, 0, 0);
    }
    return p;
}
