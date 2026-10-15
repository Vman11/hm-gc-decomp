/* Functions from 0x801D46D4 to 0x801D4734, found by decomp-toolkit. */
#include "common.h"
extern f32 lbl_803651AC;

s32 fn_801D46D4(void* arg0, f32 farg0, f32 farg1) {
    void* temp_r4 = *(void**)((char*)arg0 + 0x74);
    if (farg1 > *(f32*)((char*)temp_r4 + 0x11C) * lbl_803651AC) {
        *(s32*)((char*)temp_r4 + 0x1C) = 1;
    } else {
        *(s32*)((char*)temp_r4 + 0x1C) = 2;
    }
    temp_r4 = *(void**)((char*)arg0 + 0x74);
    if (farg0 > *(f32*)((char*)temp_r4 + 0x118) * lbl_803651AC) {
        *(s32*)((char*)temp_r4 + 0x20) = 1;
    } else {
        *(s32*)((char*)temp_r4 + 0x20) = 2;
    }
    return 1;
}
