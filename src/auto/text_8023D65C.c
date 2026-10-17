/* Functions from 0x8023D65C to 0x8023D6BC, found by decomp-toolkit. */
#include "common.h"
extern u8 lbl_802F19F8[];
extern f32 lbl_803660D8;
extern f32 lbl_803660E0;
extern f32 lbl_803660E4;

void fn_8023D65C(u8* p) {
    *(void**)(p + 0x28) = lbl_802F19F8;
    *(s32*)(p + 0) = 0;
    *(f32*)(p + 0x10) = lbl_803660D8;
    *(f32*)(p + 8) = lbl_803660E0;
    *(f32*)(p + 4) = lbl_803660E0;
    *(f32*)(p + 0xC) = lbl_803660E0;
    *(f32*)(p + 0x14) = lbl_803660E0;
    *(f32*)(p + 0x18) = lbl_803660E4;
    *(f32*)(p + 0x1C) = lbl_803660D8;
    *(f32*)(p + 0x20) = lbl_803660E0;
    *(f32*)(p + 0x24) = lbl_803660D8;
}
