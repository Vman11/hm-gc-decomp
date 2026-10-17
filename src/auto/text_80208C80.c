/* Functions from 0x80208C80 to 0x80208CB0, found by decomp-toolkit. */
#include "common.h"

extern u8 lbl_802EF934[];
extern u8 lbl_802EFC40[];
extern u8 lbl_802EF968[];

void fn_80208C80(volatile unsigned int* arg0) {
    arg0[0] = (unsigned int)lbl_802EF934;
    arg0[0] = (unsigned int)lbl_802EFC40;
    arg0[0] = (unsigned int)lbl_802EF968;
    arg0[0x10] = 0;
}
