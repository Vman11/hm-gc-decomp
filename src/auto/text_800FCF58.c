/* Functions from 0x800FCF58 to 0x800FCF74, found by decomp-toolkit. */
#include "common.h"

u8* fn_800FCF58(u8* arg0) {
    return *(u8**)(arg0 + 4) + (*(s32*)(arg0 + 0x14))++ * 0x90;
}
