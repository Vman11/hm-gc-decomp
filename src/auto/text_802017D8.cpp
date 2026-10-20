// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u32 lbl_80365710;
void fn_802031E0(void *);
void fn_80200C20(void *);

void fn_802017D8(u8 *p) {
    u32 f = *(u32 *)(p + 8);
    if (f & 4) {
        if (f & 0x400) {
            if (!(f & 0x80) && *(void **)(p + 36) != NULL) {
                fn_802031E0(*(void **)(p + 36));
            }
        } else if (f & 0x200) {
            if (*(void **)(p + 36) != NULL) {
                fn_80200C20(*(void **)(p + 36));
            }
        }
        *(u32 *)(p + 8) &= ~4;
        *(u32 *)(p + 8) |= lbl_80365710;
    }
}

} /* extern "C" */
