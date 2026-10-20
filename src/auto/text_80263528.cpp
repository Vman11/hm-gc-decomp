// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_80366B18;
void fn_80263384(void *, s32, s32);
void fn_80245F08(void *, void *, void *);

void fn_80263528(u8 *p, void *a) {
    if (*(void **)(*(u8 **)(p + 244) + 12) != NULL) {
        *(void **)(p + 240) = a;
    *(s32 *)(p + 248) = 0;
    *(s32 *)(p + 256) = 0;
        if (*(void **)(p + 156) != NULL) {
            fn_80263384(p, 0, 1);
        }
        if (a != NULL) {
            fn_80245F08(*(void **)(p + 244), a, p + 224);
        } else {
            *(f32 *)(p + 224) = lbl_80366B18;
        }
    *(s32 *)(p + 192) = 1;
    }
}

} /* extern "C" */
