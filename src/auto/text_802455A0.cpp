/* Functions from 0x802455A0 to 0x802455E0, found by decomp-toolkit. */
#include "common.h"

extern "C" {

extern f32 lbl_80366250;

f32 fn_802455A0(void* arg0) {
    u32 count = *(u32*)((u8*)arg0 + 0xc);
    if (count != 0) {
        if (*(s32*)((u8*)arg0 + 0x10) != 0) {
            return **(f32**)((u8*)arg0 + 0x3c);
        }
        return (*(f32**)((u8*)arg0 + 0x3c))[count - 1];
    }
    return lbl_80366250;
}

} /* extern "C" */
