// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern volatile f32 lbl_80364A38;
void fn_801A1444(void *);

void fn_8018AA1C(u8 *p) {
    *(f32 *)(p + 0x14) = lbl_80364A38;
    *(f32 *)(p + 0x24) = lbl_80364A38;
    fn_801A1444(p);
}

} /* extern "C" */
