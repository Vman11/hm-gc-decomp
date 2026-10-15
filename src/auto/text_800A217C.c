/* Functions from 0x800A217C to 0x800A2198, found by decomp-toolkit. */
#include "common.h"

void fn_800A217C(u8* arg0) {
    *(f32*)(arg0 + 0x1A8) = **(f32**)(arg0 + 0x118);
    **(f32**)(arg0 + 0x14C) = *(f32*)(arg0 + 0x1AC);
}
