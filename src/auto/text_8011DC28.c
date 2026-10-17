/* Functions from 0x8011DC28 to 0x8011DC84, found by decomp-toolkit. */
#include "common.h"

static inline u32 fn_8011DC28_find(u8 *obj, s32 id) {
    u32 i;
    for (i = 0; i < *(u32 *)(obj + 0xA8); i++) {
        if (((s32 *)*(u8 **)(obj + 0x4C))[i * 2] == id) {
            return i;
        }
    }
    return -1;
}

void *fn_8011DC28(u8 *obj, s32 id) {
    u32 n = *(u32 *)(obj + 0xA8);
    u32 i;
    for (i = 0; i < n; i++) {
        if (((s32 *)*(u8 **)(obj + 0x4C))[i * 2] == id) {
            goto found;
        }
    }
    i = -1;
found:
    if (i < n) {
        return (*(void ***)(obj + 0x78))[i];
    }
    return 0;
}
