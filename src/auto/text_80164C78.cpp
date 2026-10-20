// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u32 lbl_802A0BE0[];
void fn_800D7CA4(s32, u8, s32, u32, u32, u32, u32);

void fn_80164C78(u8 *p, u32 n) {
    if (n != *(u32 *)(p + 6804)) {
        if (n > 8) {
            n = 8;
        }
        if (*(u32 *)(p + 12) & 2) {
            u8 *s = *(u8 **)(p + 6456);
            u32 v = lbl_802A0BE0[n];
            if (*(u32 *)(s + 1148) != v) {
                *(u32 *)(s + 1148) = v;
                fn_800D7CA4(0, s[1132], 0, *(u32 *)(s + 1144), *(u32 *)(s + 1148), *(u32 *)(s + 1152), *(u32 *)(s + 1156));
            }
        }
        *(u32 *)(p + 6804) = n;
    }
}

} /* extern "C" */
