/* Functions from 0x8014C6F4 to 0x8014C734, found by decomp-toolkit. */
#include "common.h"

u8 fn_8014C6F4(u32 *arg0, u32 *arg1) {
    BOOL result = FALSE;
    if (arg1[0] == arg0[0] && arg1[3] == arg0[3] && arg1[1] == arg0[1]) {
        result = TRUE;
    }
    return result;
}
