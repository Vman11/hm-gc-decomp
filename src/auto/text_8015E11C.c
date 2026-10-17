/* Functions from 0x8015E11C to 0x8015E158, found by decomp-toolkit. */
#include "common.h"
extern s32 lbl_8035AD08;
extern u8 lbl_802E21D0[];
extern u8 lbl_802E6F00[];
extern u8 lbl_802E6F28[];

static inline void **fn_8015E11C_base(void **arg0) {
    arg0[0] = lbl_802E21D0;
    return arg0;
}

static inline void **fn_8015E11C_mid(void **arg0) {
    fn_8015E11C_base(arg0);
    arg0[0] = lbl_802E6F00;
    return arg0;
}

void fn_8015E11C(void **arg0) {
    fn_8015E11C_mid(arg0);
    arg0[0] = lbl_802E6F28;
    arg0[1] = 0;
    arg0[2] = 0;
}

void fn_8015E150(s32 arg0) {
    lbl_8035AD08 = arg0;
}
