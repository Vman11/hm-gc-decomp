/* Functions from 0x8014AAC8 to 0x8014AB2C, found by decomp-toolkit. */
#include "common.h"

extern f32 lbl_8036445C;
extern f32 lbl_80364458;
void fn_8014AAC8(void *arg0) {
    ((s32*)arg0)[0] = 0;
    ((s32*)arg0)[1] = 0;
    ((s32*)arg0)[2] = 0;
    ((s16*)arg0)[6] = 0;
    ((s16*)arg0)[7] = 0;
}

void fn_8014AAE4(f32 *arg0) {
    arg0[0] = lbl_80364458;
    arg0[1] = lbl_80364458;
    arg0[2] = lbl_80364458;
    arg0[3] = lbl_8036445C;
}

void fn_8014AB08(f32 *arg0) {
    arg0[0] = lbl_8036445C;
    arg0[1] = lbl_8036445C;
    arg0[2] = lbl_8036445C;
    arg0[3] = lbl_8036445C;
}
