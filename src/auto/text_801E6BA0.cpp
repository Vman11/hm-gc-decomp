// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_8036531C;
void __dla__FPv(void *);
void fn_801EB7B0(void *);
void fn_801071A0(void *);

void fn_801E6BA0(u8 *p) {
    if (*(void **)(p + 24) != NULL) {
        __dla__FPv(*(void **)(p + 24));
    }
    fn_801EB7B0(p);
    fn_801071A0(p + 52);
    *(s32 *)(p + 24) = 0;
    *(s32 *)(p + 28) = 0;
    *(s32 *)(p + 40) = 0;
    *(s32 *)(p + 44) = 0;
    *(s32 *)(p + 48) = 0;
    *(s32 *)(p + 36) = 0;
    *(f32 *)(p + 32) = lbl_8036531C;
}

} /* extern "C" */
