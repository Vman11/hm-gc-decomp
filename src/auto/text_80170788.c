/* Functions from 0x80170788 to 0x80170798, found by decomp-toolkit. */
#include "common.h"

s32 fn_80170788(void *arg0) {
    return (*(u32 *)(*(u8 **)((u8 *)arg0 + 4) + 0xC) >> 11) & 1;
}
