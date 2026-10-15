/* Functions from 0x801C3D84 to 0x801C3DD8, found by decomp-toolkit. */
#include "common.h"

void fn_801C3D84(void *arg0, u32 arg1) {
    u8 *base;
    u8 *cursor;
    u32 count;
    u32 value;
    u32 i;

    base = *(u8 **)((u8 *)arg0 + 0x64);
    if (base == 0) {
        return;
    }
    count = *(u32 *)((u8 *)arg0 + 0x68);
    cursor = base;
    for (i = 0; i < count; i++) {
        value = *(u32 *)cursor;
        if (value == 0) {
            *(u32 *)(base + i * 4) = arg1;
            return;
        }
        if (value == arg1) {
            return;
        }
        cursor += 4;
    }
}
