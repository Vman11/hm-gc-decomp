/* Functions from 0x80242198 to 0x802421C0, found by decomp-toolkit. */
#include "common.h"

int fn_80242198(void *arg0, u32 arg1) {
    u32 ret = 0;
    void *temp = *(void **)((u8 *)arg0 + 0xe4);
    if (temp != NULL && (*(u32 *)((u8 *)temp + 0x228) & arg1)) {
        ret = 1;
    }
    return (u8)ret;
}
