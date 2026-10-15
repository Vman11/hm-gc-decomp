/* Functions from 0x801A717C to 0x801A73D8, found by decomp-toolkit. */
#include "common.h"

extern f32 lbl_80364E80;
s32 fn_801A717C(void* arg0, f32 farg0, f32 farg1) {
    void* temp_r4 = *(void**)((char*)arg0 + 0x74);
    if (farg1 > *(f32*)((char*)temp_r4 + 0x11C) * lbl_80364E80) {
        *(s32*)((char*)temp_r4 + 0x1C) = 1;
    } else {
        *(s32*)((char*)temp_r4 + 0x1C) = 2;
    }
    temp_r4 = *(void**)((char*)arg0 + 0x74);
    if (farg0 > *(f32*)((char*)temp_r4 + 0x118) * lbl_80364E80) {
        *(s32*)((char*)temp_r4 + 0x20) = 1;
    } else {
        *(s32*)((char*)temp_r4 + 0x20) = 2;
    }
    return 1;
}
