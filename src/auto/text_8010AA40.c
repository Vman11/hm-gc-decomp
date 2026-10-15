/* Functions from 0x8010AA40 to 0x8010AA58, found by decomp-toolkit. */
#include "common.h"

BOOL fn_8010AA40(void* arg0, void* arg1) {
    return *(s32*)((u8*)arg0 + 0xC) == *(s32*)((u8*)arg1 + 0xC);
}
