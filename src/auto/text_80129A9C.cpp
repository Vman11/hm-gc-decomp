// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 __vt__9C80129A9C[];
extern u8 lbl_802E4368[];
extern f32 lbl_80363E60, lbl_80363E64, lbl_80363E68, lbl_80363E6C, lbl_80363E70, lbl_80363E74, lbl_80363E78, lbl_80363E7C;

double fn_800F03E4(double);
struct C80105074 { u8 pad[0x24]; void *vt; C80105074(); ~C80105074(); };
struct C80105818 : C80105074 { C80105818() { vt = __vt__9C80129A9C; } ~C80105818(); };
struct C80129A9C : C80105818 {
    s32 x28, x2c, x30; f32 x34, x38, x3c, x40, x44, x48, x4c, x50, x54, x58, x5c, x60; s32 x64, x68;
    C80129A9C();
};
C80129A9C::C80129A9C() {
    vt = lbl_802E4368;
    x28 = 0; x2c = 0; x30 = 0;
    x34 = lbl_80363E64; x38 = lbl_80363E68; x4c = lbl_80363E6C; x50 = lbl_80363E70;
    x54 = lbl_80363E74; x58 = lbl_80363E78; x5c = lbl_80363E7C; x60 = lbl_80363E7C;
    x68 = 0; x64 = 0;
    f32 b; f32 a; f32 t = fn_800F03E4(lbl_80363E60 * x34); a = t * x4c; b = x38 * a; x3c = -b; x44 = b; x40 = -a; x48 = a;
}

} /* extern "C" */
