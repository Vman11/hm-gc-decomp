// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_801FDC30(void *, void *);
void fn_801FBE28(void *);

void fn_801FF6A8(u8 *p) {
    void *a = *(void **)(p + 4);
    *(s32 *)(p + 92) = 0;
    *(s32 *)(p + 100) = 0;
    *(s32 *)(p + 96) = 0;
    *(s32 *)(p + 104) = 0;
    *(s32 *)(p + 108) = 0;
    fn_801FDC30(a, p);
    fn_801FBE28(p);
}

} /* extern "C" */
