// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern volatile f32 lbl_8036536C;
u8 *fn_8019547C(void *);
void fn_80196688(void *);

void fn_801EAF70(u8 *p) {
    if (*(u32 *)(p + 36) & 2) {
        u8 *r = fn_8019547C(*(void **)(p + 44) ? *(void **)(p + 44) : *(void **)(p + 40));
        *(f32 *)(r + 156) = lbl_8036536C;
        *(u32 *)(r + 152) &= ~6;
        *(f32 *)(r + 172) = lbl_8036536C;
        fn_80196688(r);
    }
}

} /* extern "C" */
