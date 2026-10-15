/* Functions from 0x80126550 to 0x80126570, found by decomp-toolkit. */
#include "common.h"

u32 fn_80126550(u32* arg0) {
    return (arg0[4] >> 3) * (arg0[5] >> 2) * 16 + 8;
}
