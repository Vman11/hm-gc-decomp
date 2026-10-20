// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_80366590;
u8 *fn_80252510(void *);
f32 fn_8011DB5C(void *, void *);

f32 fn_80253610(u8 *p) {
    if (*(s32 *)(p + 20) != 0) {
        return fn_8011DB5C(*(void **)(p + 8), *(void **)(fn_80252510(*(void **)(p + 12)) + 4));
    }
    return lbl_80366590;
}

} /* extern "C" */
