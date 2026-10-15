/* Functions from 0x80040570 to 0x8004058C, found by decomp-toolkit. */
#include "common.h"

void fn_80040570(void *arg0) {
    void *temp_r4 = *(void **)((char *)arg0 + 0xE0);
    f32 temp_f0 = *(f32 *)((char *)arg0 + 0x158);
    f32 *temp_r3 = *(f32 **)((char *)temp_r4 + 0x1C0);
    if (temp_r3 != NULL) {
        *temp_r3 = temp_f0;
    }
}
