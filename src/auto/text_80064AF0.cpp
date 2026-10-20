// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern volatile f32 lbl_8035E708;
void fn_8026102C(void *);

void fn_80064AF0(u8 *p) {
    u8 *q;
    fn_8026102C(p);
    q = *(u8 **)(p + 252);
    *(f32 *)(q + 1392) = *(f32 *)(q + 1380);
    *(f32 *)(q + 1396) = *(f32 *)(q + 1384);
    *(f32 *)(q + 1400) = *(f32 *)(q + 1388);
    *(f32 *)(q + 1380) = *(f32 *)(q + 68);
    *(f32 *)(q + 1384) = *(f32 *)(q + 72);
    *(f32 *)(q + 1388) = *(f32 *)(q + 76);
    *(f32 *)(q + 1380) = lbl_8035E708 * *(f32 *)(q + 44) + *(f32 *)(q + 1380);
    *(f32 *)(q + 1384) = lbl_8035E708 * *(f32 *)(q + 48) + *(f32 *)(q + 1384);
    *(f32 *)(q + 1388) = lbl_8035E708 * *(f32 *)(q + 52) + *(f32 *)(q + 1388);
}

} /* extern "C" */
