// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_801DAEE4(void *, f32, f32);
s32 fn_801BDAD0(void *, f32, f32);
void fn_801D5084(void *, void *, f32, f32, f32, f32);

s32 fn_801D4F88(u8 *p, f32 x, f32 y) {
    fn_801DAEE4(p, x, y);
    if (!(*(u32 *)(p + 0x6C) & 2)) {
        return 0;
    }
    if (fn_801BDAD0(p, x, y) != 0) {
        *(s32 *)(p + 0x308) = 0;
        *(s32 *)(p + 0x30C) = 0;
        *(s32 *)(p + 0x2F0) = 0;
        *(s32 *)(p + 0x2F4) = 0;
        fn_801D5084(p, *(void **)(p + 0x2EC), x, y, *(f32 *)(p + 0x338) + (*(f32 *)(p + 0x48) + *(f32 *)(p + 0x340)), *(f32 *)(p + 0x4C) + *(f32 *)(p + 0x33C));
        *(s32 *)(p + 0x308) = *(s32 *)(p + 0x2F0);
        if (*(u32 *)(p + 0x308) == 0 && *(u32 *)(p + 0x2F4) != 0) {
            *(s32 *)(p + 0x30C) = *(s32 *)(p + 0x2F4);
        }
    } else {
        *(s32 *)(p + 0x308) = 0;
    }
    return 0;
}

} /* extern "C" */
