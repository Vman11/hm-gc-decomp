/* Functions from 0x801F3990 to 0x801F3A88, found by decomp-toolkit. */
#include "common.h"

void fn_801F3990(void *arg0, u8 *dst, u32 rows, u32 cols) {
    u32 offset = 0;
    u32 i;
    u32 j;
    u32 k;

    for (i = 0; i < rows; i++) {
        k = offset;
        for (j = cols; j > 0; j--) {
            *dst++ = (*(u8 **)((u8 *)arg0 + 0x3C))[k++];
        }
        offset += *(u32 *)((u8 *)arg0 + 0x34) * *(u32 *)((u8 *)arg0 + 0x10) * 8;
    }
}
