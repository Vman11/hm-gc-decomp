/* Functions from 0x8016E084 to 0x8016E0B0, found by decomp-toolkit. */
#include "common.h"

extern s32 lbl_8035ACE8;
extern u8* lbl_8035AD20;

void fn_8016E084(void) {
}

void fn_8016E088(void) {
    if (*(s32*)(lbl_8035AD20 + 0x6C) == 0 && lbl_8035ACE8 == 1) {
        lbl_8035ACE8 = 2;
    }
}

