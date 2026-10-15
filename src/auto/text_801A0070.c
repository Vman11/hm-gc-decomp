/* Functions from 0x801A0070 to 0x801A0098, found by decomp-toolkit. */
#include "common.h"

void fn_801A0070(f32 *arg0, f32 *arg1) {
    extern f32 lbl_80364D80;
    extern f32 lbl_80364D84;
    f32 first = lbl_80364D80;
    f32 value = arg0[5];
    arg1[0] = first;
    value = -value;
    arg1[1] = lbl_80364D80;
    arg1[2] = lbl_80364D84;
    arg1[3] = value;
}
