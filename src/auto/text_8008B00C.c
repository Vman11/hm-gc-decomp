// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern void *lbl_8035B530;
extern u8 lbl_802C691C[];
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
void *__nw__FUl(u32);
void __ct__9C8024262CFv(void *);
void fn_8023C398(void *);
void fn_8008AE50(void *);

void *fn_8008B00C(void) {
    u8 *p;
    if (lbl_8035B530 == NULL) {
        fn_800604C4(-2, 0, 0, 0);
    }
    fn_800F7EC0(lbl_8035B530);
    p = __nw__FUl(336);
    if (p != NULL) {
        __ct__9C8024262CFv(p);
        *(void **)p = lbl_802C691C;
        fn_8023C398(p + 304);
        fn_8008AE50(p);
    }
    fn_800F7E98();
    if (p == NULL) {
        fn_800604C4(-4, 0, 0, 0);
    }
    return p;
}
