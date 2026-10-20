// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

u8 *fn_80252510(void *);
s32 fn_8011DC28(void *, void *);

s32 fn_80253664(u8 *p) {
    if (*(s32 *)(p + 20) != 0) {
        return fn_8011DC28(*(void **)(p + 8), *(void **)(fn_80252510(*(void **)(p + 12)) + 4));
    }
    return 0;
}

} /* extern "C" */
