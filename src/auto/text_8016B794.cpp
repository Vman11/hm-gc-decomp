// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern s32 lbl_802A0318[];
void fn_800D9A04(u8, s32, u8);

void fn_8016B794(u8 *p, s32 i) {
    s32 v = lbl_802A0318[i];
    if (*(s32 *)(p + 9212) != v) {
        *(s32 *)(p + 9212) = v;
        fn_800D9A04(p[9208], *(s32 *)(p + 9212), p[9216]);
    }
    *(s32 *)(p + 162296) = i;
}

} /* extern "C" */
