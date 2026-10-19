// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_803286D0[];
extern u32 lbl_8035F3F0;
void fn_80190C98(void *);

void fn_80076C00(u8 *p, void *a) {
    u8 *q = *(u8 **)(p + 0x30);
    if (q != NULL) {
        (*(void (**)(void *, void *))(lbl_803286D0 + 0xC))(*(void **)(q + 0x10), a);
        *(u32 *)(q + 0x20) |= lbl_8035F3F0;
        fn_80190C98(p);
    }
}

} /* extern "C" */
