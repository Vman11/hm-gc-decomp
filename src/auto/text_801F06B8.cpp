// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_80365458;
void fn_801EB738(void *);

void fn_801F06B8(u8 *p) {
    fn_801EB738(p);
    *(f32 *)(p + 0x1C) = lbl_80365458;
    *(s32 *)(p + 0x28) = 0;
}

} /* extern "C" */
