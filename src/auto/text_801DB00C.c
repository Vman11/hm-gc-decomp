/* Functions from 0x801DB00C to 0x801DB01C, found by decomp-toolkit. */
#include "common.h"

void fn_801DB00C(void* arg0, void* arg1) {
    if (arg1 != NULL) {
        *(void**)((u8*)arg0 + 0x11C) = arg1;
    }
}
