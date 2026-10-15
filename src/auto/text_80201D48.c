/* Functions from 0x80201D48 to 0x80201D58, found by decomp-toolkit. */
#include "common.h"

s32 *fn_80201D48(void *arg0, s32 arg1) {
    return (s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1C)) + arg1 * 0x34);
}
