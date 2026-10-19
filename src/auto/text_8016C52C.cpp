// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_803286D0[];
void fn_8012951C(void *);

void fn_8016C52C(u8 *p, u8 *q) {
    fn_8012951C(q);
    (*(void (**)(void *, void *))(lbl_803286D0 + 0x0))(*(void **)(p + 0x2A84), *(void **)(q + 0x2C));
    fn_8012951C(q);
    (*(void (**)(void *, void *))(lbl_803286D0 + 0x174))(*(void **)(p + 0x2A88), *(void **)(q + 0x2C));
    *(s32 *)(p + 0x2A94) = 0;
    *(s32 *)(p + 0x279D8) += 1;
}

} /* extern "C" */
