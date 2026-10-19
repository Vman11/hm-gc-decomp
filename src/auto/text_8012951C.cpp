// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_803286D0[];
void fn_80103E30(void *, void *);

void fn_8012951C(u8 *p) {
    fn_80103E30(p, *(void **)(p + 0x2C));
    (*(void (**)(void *))(lbl_803286D0 + 0x108))(*(void **)(p + 0x2C));
}

} /* extern "C" */
