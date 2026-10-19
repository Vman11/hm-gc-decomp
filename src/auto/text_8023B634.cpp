// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern char lbl_802A8C50[];
void __dt__9C80215F50Fv(int, int);
void fn_800E8F6C(void *, const char *, ...);
void fn_80215BFC(int);

void fn_8023B634(u32 *param_1) {
    u8 auStack_108 [256];

    if (param_1[2] != 0) {
        fn_800E8F6C(auStack_108,lbl_802A8C50, param_1[2]); /* "%d Errors Reported.  Check Error.log.\n" */
    }
    if (param_1[1] != 0) {
        fn_80215BFC((int)(param_1[1]));
        __dt__9C80215F50Fv((int)(param_1[1]), (int)(1));
    }
    param_1[2] = 0;
    *param_1 = 0;
    param_1[1] = 0;
}

} /* extern "C" */
