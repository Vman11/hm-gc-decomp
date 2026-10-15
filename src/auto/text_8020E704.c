/* Functions from 0x8020E704 to 0x8020E738, found by decomp-toolkit. */
#include "common.h"

void* fn_8020E704(void* arg0, u32 arg1, u32 arg2) {
    if (arg1 == 0 && arg2 < 2) {
        return (void*)((u8*)arg0 + arg2 * 0xA944 + 4);
    }
    return 0;
}
