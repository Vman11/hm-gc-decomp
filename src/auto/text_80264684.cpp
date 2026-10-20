// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern volatile f32 lbl_80366B18;
void fn_80244D3C(void *);

void fn_80264684(u8 *p) {
    *(f32 *)(p + 224) = lbl_80366B18;
    *(f32 *)(p + 228) = lbl_80366B18;
    *(s32 *)(p + 256) = 0;
    *(f32 *)(p + 252) = lbl_80366B18;
    if (*(void **)(p + 244) != NULL) {
        fn_80244D3C(*(void **)(p + 244));
    }
}

} /* extern "C" */
