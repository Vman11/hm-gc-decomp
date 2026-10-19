// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u32 lbl_80363DB4;
void fn_800FA5D8(void *, void *);
void *fn_80215424(void *, s32);
void fn_800FA69C(void *, void *);

static inline s32 find_8011D8E0(u8 *p, s32 k) {
    u32 i;
    for (i = 0; i < *(u32 *)(p + 0xA8); i++) {
        if (k == (*(s32 **)(p + 0x4C))[i * 2]) {
            return i;
        }
    }
    return -1;
}

void fn_8011D8E0(u8 *p, s32 k, void *r) {
    void *s;
    fn_800FA5D8(r, &lbl_80363DB4);
    if (*(void **)(p + 0x20) != NULL) {
        s = fn_80215424(*(void **)(p + 0x20), find_8011D8E0(p, k));
        if (s != NULL) {
            fn_800FA69C(r, s);
        }
    }
}

} /* extern "C" */
