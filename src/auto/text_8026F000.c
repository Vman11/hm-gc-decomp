/* Functions from 0x8026F000 to 0x8026F020, found by decomp-toolkit. */
#include "common.h"

u8 fn_8026F000(void* arg0) {
    return *(s32*)((u8*)arg0 + 0x18) == 0;
}
