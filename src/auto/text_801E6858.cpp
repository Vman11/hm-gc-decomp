// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_80365318;
extern f32 lbl_8036531C;
void fn_801EB738(void *);

void fn_801E6858(u8 *p) {
    fn_801EB738(p);
    *(f32 *)(p + 0x38) = lbl_80365318;
    *(u32 *)(p + 0x34) &= ~0x18;
    *(s32 *)(p + 0x24) = 0;
    *(f32 *)(p + 0x20) = lbl_8036531C;
}

} /* extern "C" */
