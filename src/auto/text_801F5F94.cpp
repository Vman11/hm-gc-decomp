// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802EEA28[];
extern u8 lbl_802EEA50[];
extern u8 lbl_802EE9B8[];
void fn_801F3738(u8 *p);

u8 *fn_801F5F94(u8 *p, s16 flag)
{
    if (flag) {
        *(u8 **)(p + 36) = p + 16;
        *(u8 **)(p + 48) = p + 36;
        *(u8 **)(p + 0) = p + 48;
        fn_801F3738(p + 16);
        *(u8 **)(p + 40) = lbl_802EEA28;
        **(u8 ***)(p + 36) = lbl_802EEA28 + 12;
        *(s32 *)(*(u8 **)(p + 36) + 16) = (p + 44) - *(u8 **)(p + 36);
        *(u8 **)(p + 52) = lbl_802EEA50;
        *(u8 **)(*(u8 **)(p + 48) + 4) = lbl_802EEA50 + 64;
        **(u8 ***)(*(u8 **)(p + 48)) = lbl_802EEA50 + 36;
        *(s32 *)(**(u8 ***)(p + 48) + 16) = (p + 68) - **(u8 ***)(p + 48);
        *(s32 *)(*(u8 **)(p + 48) + 8) = (p + 88) - *(u8 **)(p + 48);
    }
    *(u8 **)(p + 12) = lbl_802EE9B8;
    *(u8 **)(*(u8 **)(p + 0) + 4) = lbl_802EE9B8 + 76;
    *(u8 **)(**(u8 ***)(p + 0) + 4) = lbl_802EE9B8 + 64;
    ****(u8 *****)(p + 0) = lbl_802EE9B8 + 36;
    *(s32 *)(***(u8 ****)(p + 0) + 16) = (p + 16) - ***(u8 ****)(p + 0);
    *(s32 *)(**(u8 ***)(p + 0) + 8) = (p + 36) - **(u8 ***)(p + 0);
    *(s32 *)(*(u8 **)(p + 0) + 20) = (p + 48) - *(u8 **)(p + 0);
    *(u32 *)(p + 4) = 0;
    *(u32 *)(***(u8 ****)(p + 0) + 4) = 0;
    *(u32 *)(***(u8 ****)(p + 0) + 8) = 0;
    *(u32 *)(p + 8) = 0;
    return p;
}

} /* extern "C" */
