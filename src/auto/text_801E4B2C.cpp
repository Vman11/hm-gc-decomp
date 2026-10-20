// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_803652F8;
void fn_801EB7B0(void *);
void __dla__FPv(void *);
void fn_8011D060(void *);
void fn_801E475C(void *);

void fn_801E4B2C(u8 *p) {
    fn_801EB7B0(p);
    if (*(void **)(p + 136) != NULL) {
        __dla__FPv(*(void **)(p + 136));
    }
    fn_8011D060(p + 28);
    fn_801E475C(p + 108);
    *(s32 *)(p + 116) = 0;
    *(s32 *)(p + 120) = 0;
    *(s32 *)(p + 124) = -1;
    *(s32 *)(p + 128) = 0;
    *(s32 *)(p + 136) = 0;
    *(f32 *)(p + 132) = lbl_803652F8;
    *(s32 *)(p + 140) = 0;
}

} /* extern "C" */
