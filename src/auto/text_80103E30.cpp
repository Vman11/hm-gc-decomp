// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_803286D0[];
void fn_80104870(void *, void *);

void fn_80103E30(u8 *p, void *q) {
    fn_80104870(p, q);
    (*(void (**)(void *, void *))lbl_803286D0)(q, *(void **)(p + 20));
}

} /* extern "C" */
