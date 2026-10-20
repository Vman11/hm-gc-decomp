// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_80365420;
void fn_801EB7B0(void *);
void __dla__FPv(void *);

void fn_801ED980(u8 *p) {
    fn_801EB7B0(p);
    if (*(void **)(p + 40) != NULL) {
        __dla__FPv(*(void **)(p + 40));
    }
    if (*(void **)(p + 44) != NULL) {
        __dla__FPv(*(void **)(p + 44));
    }
    *(s32 *)(p + 24) = 0;
    *(s32 *)(p + 40) = 0;
    *(s32 *)(p + 44) = 0;
    *(s32 *)(p + 28) = 0;
    *(s32 *)(p + 32) = 0;
    *(f32 *)(p + 36) = lbl_80365420;
    *(s32 *)(p + 36) = 0;
    *(s32 *)(p + 36) = 0;
    *(s32 *)(p + 48) = 0;
}

} /* extern "C" */
