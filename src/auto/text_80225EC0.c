/* Functions from 0x80225EC0 to 0x80225FC0, found by decomp-toolkit. */
#include "common.h"

void fn_80225EC0(void *arg0, u32 arg1, f32 *arg2)
{
    s8 *cursor = arg0;
    s32 i;
    for (i = 0; i < 0x296; cursor += 0x10, i++) {
        u32 key = *(u32 *)(cursor + 4);
        if (key == arg1) {
            s8 *entry = (s8 *)arg0 + i * 0x10;
            *(f32 *)(entry + 8) += arg2[0];
            *(f32 *)(entry + 12) += arg2[1];
            *(f32 *)(entry + 16) += arg2[2];
            return;
        }
        if (key == 0) {
            s8 *entry = (s8 *)arg0 + i * 0x10;
            *(u32 *)(entry + 4) = arg1;
            *(f32 *)(entry + 8) = arg2[0];
            *(f32 *)(entry + 12) = arg2[1];
            *(f32 *)(entry + 16) = arg2[2];
            return;
        }
    }
}

void fn_80225F58(void *arg0, u32 arg1)
{
    s32 offset = 0;
    s32 count = 0x14B;
    do {
        void **entry = (void **)(*(s8 **)((s8 *)arg0 + 0x2978) + offset);
        void *first = entry[0];
        void *second;
        if ((first != NULL && *(u32 *)((s8 *)first + 0x3C) == arg1) ||
            ((second = entry[1]) != NULL && *(u32 *)((s8 *)second + 0x3C) == arg1)) {
            entry[0] = NULL;
            *(void **)(*(s8 **)((s8 *)arg0 + 0x2978) + offset + 4) = NULL;
        }
        offset += 8;
    } while (--count != 0);
}
