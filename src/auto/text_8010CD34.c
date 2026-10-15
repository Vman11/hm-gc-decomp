/* Functions from 0x8010CD34 to 0x8010CD58, found by decomp-toolkit. */
#include "common.h"

s32 fn_8010CD34(void *arg0) {
    return *(s32 *)((u8 *)arg0 + 0x1C);
}

s32 fn_8010CD3C(void **arg0) {
    void *temp = *arg0;
    if (temp != 0) {
        return *(s32 *)((u8 *)temp + 4);
    }
    return 0;
}

