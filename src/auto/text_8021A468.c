// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern u8 lbl_80356DC8[];
extern u8 lbl_802F01C8[];
void fn_802195F0(void *);

void fn_8021A468(void) {
    fn_802195F0(lbl_80356DC8);
    *(void **)(lbl_80356DC8 + 0x24) = lbl_802F01C8;
    *(s32 *)(lbl_80356DC8 + 0x1C) = -1;
    *(s32 *)(lbl_80356DC8 + 0x20) = 0;
    *(s32 *)(lbl_80356DC8 + 0x18) = 2;
    *(s32 *)(lbl_80356DC8 + 0x28) = 0;
}
