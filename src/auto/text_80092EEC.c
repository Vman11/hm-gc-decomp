// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern void *lbl_8035B530;
extern u8 lbl_802CA580[];
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
void *__nw__FUl(u32);
void __ct__9C8024262CFv(void *);
void fn_80092BD8(void *);

void *fn_80092EEC(void) {
    void *r;
    if (lbl_8035B530 == NULL) {
        fn_800604C4(-2, 0, 0, 0);
    }
    fn_800F7EC0(lbl_8035B530);
    r = __nw__FUl(372);
    if (r != NULL) {
        __ct__9C8024262CFv(r);
        *(void **)r = lbl_802CA580;
        fn_80092BD8(r);
    }
    fn_800F7E98();
    if (r == NULL) {
        fn_800604C4(-4, 0, 0, 0);
    }
    return r;
}
