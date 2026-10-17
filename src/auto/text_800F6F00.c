/* Functions from 0x800F6F00 to 0x800F6F68, found by decomp-toolkit. */
#include "common.h"

extern u8 lbl_803636D8;

s32 fn_800F6F00(s8 *arg0, s8 *arg1) {
    u32 count = 8;
    if (arg0 == NULL) arg0 = (s8 *)&lbl_803636D8;
    if (arg1 == NULL) arg1 = (s8 *)&lbl_803636D8;
    while (count--) {
        s8 left = *arg0;
        s8 right = *arg1;
        if (left == right) {
            if (left == 0) break;
            arg0++;
            arg1++;
        } else {
            return left - right;
        }
    }
    return 0;
}
