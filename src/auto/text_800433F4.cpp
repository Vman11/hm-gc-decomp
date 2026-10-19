// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_802490E0(void *, s32, f32);
void fn_8004058C(void *, f32);

void fn_800433F4(u8 *p, f32 f) {
    if (*(s32 *)(p + 0x19C) == 0) {
        s32 s = *(s32 *)(p + 0x60);
        if (s == 1 && *(s32 *)(p + 0x1A0) == 0 && *(s32 *)(p + 0x1A8) != 0 && *(s32 *)(p + 0x1AC) != 0) {
            *(s32 *)(p + 0x1A0) = 1;
            fn_802490E0(p, 0, **(f32 **)(p + 0x17C));
        } else if (s == 3 && *(s32 *)(p + 0x1A4) == 0) {
            *(s32 *)(p + 0x1A4) = 1;
            fn_802490E0(p, 1, **(f32 **)(p + 0x180));
        }
    }
    fn_8004058C(p, f);
}

} /* extern "C" */
