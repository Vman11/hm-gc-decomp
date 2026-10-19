/* Functions from 0x8011DC28 to 0x8011DC84, found by decomp-toolkit. */
#include "common.h"

extern "C" {

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
    u32 i = fn_8011DC28_find(obj, id);
    if (i < *(u32 *)(obj + 0xA8)) {
        return (*(void ***)(obj + 0x78))[i];
    }
    return 0;
}

} /* extern "C" */
