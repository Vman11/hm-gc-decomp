/* Functions from 0x802181D0 to 0x8021820C, found by decomp-toolkit. */
#include "common.h"

extern "C" {

extern s32 lbl_8035B220;
void fn_802181D0(void* arg0) {
    *(s32*)((u8*)arg0 + 4) = 0;
    *(s32*)((u8*)arg0 + 8) = 0;
    *(u16*)((u8*)arg0 + 2) = 0;
    *((u8*)arg0 + 1) = 0;
    *(u8*)arg0 = 0;
    *(s32*)((u8*)arg0 + 12) = 0;
}

void fn_802181F0(s32 arg0) {
    lbl_8035B220 = arg0;
}

u16 fn_802181F8(void* arg0) {
    u16 value = *(u16*)((u8*)arg0 + 0x1B0);
    *(u16*)((u8*)arg0 + 0x1B0) = value + 1;
    return value;
}

} /* extern "C" */
