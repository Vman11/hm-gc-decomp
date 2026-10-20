// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern volatile f32 lbl_80364ED8;
void fn_801B3110(void *);

void fn_801AF058(u8 *p) {
    fn_801B3110(p);
    *(f32 *)(p + 356) = lbl_80364ED8;
    *(f32 *)(p + 360) = lbl_80364ED8;
    *(f32 *)(p + 364) = lbl_80364ED8;
    *(f32 *)(p + 368) = lbl_80364ED8;
}

} /* extern "C" */
