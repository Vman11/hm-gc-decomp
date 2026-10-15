/* Functions from 0x8015C310 to 0x8015C40C, found by decomp-toolkit. */
#include "common.h"

void fn_8015C38C(void *arg0) {
    extern u16 lbl_803645E8;
    M2C_FIELD(arg0, u16 *, 6) = (u16) (M2C_FIELD(arg0, u16 *, 6) | lbl_803645E8);
    M2C_FIELD(arg0, u16 *, 6) = (u16) (M2C_FIELD(arg0, u16 *, 6) & 0xFFFFFFF1);
}
