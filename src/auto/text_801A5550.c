/* Functions from 0x801A5550 to 0x801A5560, found by decomp-toolkit. */
#include "common.h"

u8* fn_801A5550(u8* arg0, s32 arg1) {
    return *(u8**)(arg0 + 0x50) + arg1 * 0x44;
}
