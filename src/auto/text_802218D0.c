// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

void fn_802215DC(void *, f32 *);

void fn_802218D0(u8 *p) {
    if (*(u32 *)(p + 0x4C) & 2) {
        f32 v[4];
        v[0] = *(s32 *)(p + 8);
        v[1] = *(s32 *)(p + 0xC);
        v[2] = *(s32 *)(p + 0x10);
        v[3] = *(s32 *)(p + 0x14);
        fn_802215DC(p, v);
    }
}
