/* Functions from 0x80104068 to 0x801040E0, found by decomp-toolkit. */
#include "common.h"

extern f32 lbl_80363874;
void fn_80104068(u8 *arg0, u8 *arg1) {
 u8 *p = *(u8 **)(arg0 + 8);
 u8 **prev = (u8 **)(arg0 + 8);
 while (p != NULL) {
 if (p == arg1) {
 *prev = *(u8 **)(p + 4);
 *(u8 **)(p + 4) = NULL;
 *(u8 **)p = NULL;
 *(u32 *)(arg1 + 0x20) = 0x2B;
 return;
 }
 prev = (u8 **)(p + 4);
 p = *(u8 **)(p + 4);
 }
}

void fn_801040B0(u8 *arg0, u8 *arg1) {
 if (*(u8 **)arg1 != arg0) {
 *(u8 **)arg1 = arg0;
 *(u8 **)(arg1 + 4) = *(u8 **)(arg0 + 8);
 *(u8 **)(arg0 + 8) = arg1;
 *(u32 *)(arg1 + 0x20) = 0x2B;
 }
}

f32 fn_801040D8(void) {
    return lbl_80363874;
}
