// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802E3BE8[];
void __ct__9C8021651CFv(void *);

void *__ct__9C8011A54CFv(u8 *p) {
    *(void **)(p + 116) = lbl_802E3BE8;
    __ct__9C8021651CFv(p + 8);
    *(s32 *)p = 0;
    *(s32 *)(p + 4) = 0;
    *(s32 *)(p + 112) = 1;
    return p;
}

} /* extern "C" */
