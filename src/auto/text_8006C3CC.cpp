// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_8035F1C8;
extern u8 *lbl_8035B488;
void fn_800746A4(void *, void *);

void fn_8006C3CC(u8 *p) {
    *(f32 *)(lbl_8035B488 + 0x27EC) = lbl_8035F1C8;
    if (*(void **)(p + 0xE0) != NULL && *(s32 *)(p + 0x254) != 0) {
        fn_800746A4(*(void **)(p + 0xE0), p + 0x244);
    }
}

} /* extern "C" */
