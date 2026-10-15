/* Functions from 0x8012E39C to 0x8012E3F4, found by decomp-toolkit. */
#include "common.h"

s32 fn_8012E39C(s32 arg0, u32 min, u32 max, u32 total, s32 arg4, u32* out) {
    s32 n = 0;
    u32 size;
    u32 next;

    if (min < 4) {
        min = 4;
    }
    size = min;
    while (size < total) {
        next = size * 2;
        if (next > max) {
            out[n++] = size;
            next = min;
            total -= size;
        }
        size = next;
    }
    out[n++] = size;
    return n;
}
