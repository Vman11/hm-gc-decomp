// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
extern char lbl_803638D0[0x4];
extern char lbl_803638D4[0x6];
int fn_80215C84(void *, int, void *, int, int);
void fn_80060E30(...);
void fn_80106834(int, int);
void fn_80215BFC(void *);
}
struct C80215F50 { char pad[0x40]; C80215F50(); ~C80215F50(); };

extern "C" void fn_801067A4(int param_1, int param_2) {
    int iVar1;
    C80215F50 s;
    iVar1 = fn_80215C84(&s, param_2, lbl_803638D0, 2, 0);
    if (iVar1 != 0) {
        fn_80060E30(iVar1, lbl_803638D4, param_2, lbl_803638D0);
    }
    fn_80106834(param_1, *(int *)((char *)&s + 0x2c));
    fn_80215BFC(&s);
}
