/* Functions from 0x8011D8A4 to 0x8011D8E0, found by decomp-toolkit. */
#include "common.h"

void fn_8011D8A4(void *arg0, u32 arg1, s32 arg2) {
    u32 *entries;
    u32 *values;
    u32 index;

    if (arg1 >= *(u32 *)((u8 *)arg0 + 0xA8)) {
        return;
    }

    entries = *(u32 **)((u8 *)arg0 + 0x78);
    index = arg1;
    if ((s32)entries[index] == arg2) {
        return;
    }

    entries[index] = arg2;
    values = *(u32 **)((u8 *)arg0 + 0x80);
    values[index] = *(u32 *)((u8 *)arg0 + 0xB0) + *(u32 *)((u8 *)arg0 + 0xB8);
}
