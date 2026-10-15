/* Functions from 0x80116794 to 0x80116810, found by decomp-toolkit. */
#include "common.h"

s32 fn_80116794(char* dst, s32* src) {
    s32 word;
    u32 i;

    if ((u32)*src > 0xFF) {
        word = 0;
        i = 3;
        do {
            if (i == 3) {
                word = *src++;
            }
            *dst = word >> (i * 8);
            i = (i + 3) & 3;
        } while (*dst++ != 0);
    } else {
        while (*src != 0) {
            *dst++ = *src++;
        }
        *dst = 0;
    }
    return 0;
}
