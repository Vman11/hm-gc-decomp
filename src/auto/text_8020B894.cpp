// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

s32 fn_800D339C(u32, u32, void *);

#pragma optimization_level 1
s32 fn_8020B894(u32 *param_1) {
    s32 r;
    s32 n;
    u32 i;
    u8 buf[116];

    n = 0;
    i = n;
    do {
        do {
            r = fn_800D339C(*param_1, i, buf);
        } while (r == -1);
        if (r == 0) {
            n++;
        }
        i++;
    } while (i < 0x7f);
    return 0x7f - n;
}
#pragma optimization_level reset

} /* extern "C" */
