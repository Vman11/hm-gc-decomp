// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct O { u8 p0[0xB0]; u32 b0, b4; u8 pB8[0x130 - 0xB8]; f32 f130; u8 p134[4]; f32 f138, f13C, f140, f144; u8 p148[0x154 - 0x148]; u32 s154; } O;
extern f32 lbl_80366E98, lbl_80366E9C, lbl_80366EA0, lbl_80366EA4, lbl_80366EA8;
void fn_80261AD4(O *);
void fn_80271A0C(O *o) {
    o->s154 = 0; o->b0 = 0;
    o->f130 = lbl_80366E98; o->f140 = lbl_80366E9C; o->f144 = lbl_80366EA0; o->f13C = lbl_80366EA4; o->f138 = lbl_80366EA8;
    o->b4 = 0;
    fn_80261AD4(o);
}

} /* extern "C" */
