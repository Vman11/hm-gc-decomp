/* Functions from 0x8025AEC4 to 0x8025AEE8, found by decomp-toolkit. */
#include "common.h"
extern f32 lbl_803667B4;

void fn_8025AEC4(void* arg0) {
    *(s32*)((u8*)arg0 + 0xB0) = 0;
    *(s32*)((u8*)arg0 + 0xB4) = 0;
    *(s32*)((u8*)arg0 + 0xB8) = 0;
    *(s32*)((u8*)arg0 + 0xBC) = 0;
    *(s32*)((u8*)arg0 + 0xC0) = 0;
    *(f32*)((u8*)arg0 + 0xC4) = lbl_803667B4;
}
