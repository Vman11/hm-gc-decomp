/* Functions from 0x80072944 to 0x80072988, found by decomp-toolkit. */
#include "common.h"

void fn_80072944(u8* arg0) {
    u32 flags = **(u32**)(arg0 + 0x50C);

    if (flags & 0x40) {
        arg0[0x6B4] = 6;
    } else if (flags & 8) {
        arg0[0x6B4] = 3;
    } else {
        arg0[0x6B4] = 0;
    }
    arg0[0x6B5] = 0;
}
