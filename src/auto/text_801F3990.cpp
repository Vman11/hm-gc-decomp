/* Functions from 0x801F3990 to 0x801F3A88, found by decomp-toolkit. */
#include "common.h"

extern "C" {

void fn_801F3990(u8 *obj, u8 *dst, u32 rows, u32 cols) {
    u32 off = 0;
    u32 i;
    u32 j;
    u32 k;
    u32 zero = 0;

    for (i = 0; i < rows; i++) {
        k = off;
        for (j = cols; j > zero; j--) {
            *dst++ = (*(u8 **)(obj + 0x3C))[k++];
        }
        off += *(u32 *)(obj + 0x34) * *(u32 *)(obj + 0x10) * 8;
    }
}

} /* extern "C" */
