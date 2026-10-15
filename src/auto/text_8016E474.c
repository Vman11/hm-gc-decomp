/* Functions from 0x8016E474 to 0x8016E4D4, found by decomp-toolkit. */
#include "common.h"

u32 fn_8016E474(u32 *arg0, u32 *arg1, u32 arg2, u32 *arg3) {
    if (*arg0 == 0) {
        return 0;
    }
    if (arg1 == NULL || *arg3 >= arg2) {
        return *arg0;
    }
    if (arg1[*arg3] == 0) {
        (*arg3)++;
        return *arg0;
    }
    return arg1[(*arg3)++];
}
