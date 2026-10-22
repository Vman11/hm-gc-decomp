/* MSL_C rand.c */
#include "common.h"
extern s32 lbl_803596A0;
void srand(s32 arg0);
s32 rand(void);

#pragma push
#pragma dont_inline on
#pragma use_lmw_stmw on
void srand(s32 arg0) {
    lbl_803596A0 = arg0;
}
#pragma pop

#pragma push
#pragma dont_inline on
#pragma use_lmw_stmw on
s32 rand(void) {
    u32 temp_r0;

    temp_r0 = (lbl_803596A0 * 0x41C64E6D) + 0x3039;
    lbl_803596A0 = temp_r0;
    return (temp_r0 >> 0x10U) & 0x7FFF;
}
#pragma pop
