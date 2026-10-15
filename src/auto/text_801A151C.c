/* Functions from 0x801A151C to 0x801A1538, found by decomp-toolkit. */
#include "common.h"

u32 fn_801A151C(u8* arg0) {
    u32 r = *(u32*)(arg0 + 0x30);
    if (r != 0) {
        return r;
    }
    return *(u32*)(arg0 + 0x78);
}
