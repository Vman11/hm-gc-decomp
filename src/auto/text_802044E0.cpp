/* Functions from 0x802044E0 to 0x80204504, found by decomp-toolkit. */
#include "common.h"

extern "C" {

extern s32 lbl_8035B188;

void __ct__9C802044E0Fv(u8* arg0) {
    *(s32*)(arg0 + 0x0) = 0;
    *(s32*)(arg0 + 0x10) = 0;
    *(s32*)(arg0 + 0x8) = 0;
    *(u8*)(arg0 + 0xC) = 0;
    *(s32*)(arg0 + 0x4) = 0;
}

void fn_802044FC(s32 arg0) {
    lbl_8035B188 = arg0;
}

} /* extern "C" */
