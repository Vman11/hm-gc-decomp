/* Functions from 0x800FAB98 to 0x800FADA8, found by decomp-toolkit. */
#include "common.h"

void fn_800FAD08(void *arg0, void *arg1) {
    s32 i;
    s8 *src = (s8 *)arg0 + 0x14;
    s8 *dst = (s8 *)arg1;
    for (i = 0; i < 8; i++) {
        dst[i] = src[i];
        if (src[i] == 0) {
            break;
        }
    }
}
