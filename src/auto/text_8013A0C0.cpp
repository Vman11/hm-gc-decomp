// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern volatile f32 lbl_803641D0;
void fn_800FC36C(void *);

void fn_8013A0C0(u8 *p) {
    fn_800FC36C(p);
    *(u16 *)(p + 0x40) = 0;
    *(f32 *)(p + 0x2C) = lbl_803641D0;
    *(f32 *)(p + 0x30) = lbl_803641D0;
    *(f32 *)(p + 0x34) = lbl_803641D0;
    p[0x38] = 0;
}

} /* extern "C" */
