// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_80101744(f32 *);
extern f32 lbl_80364190;
extern f32 lbl_8036418C;

void fn_80137A9C(u8 *self) {
    f32 v[3];
    fn_80101744(v);
    self[4] = (u8)(s32)(lbl_8036418C * (lbl_80364190 + v[0]));
    self[5] = (u8)(s32)(lbl_8036418C * (lbl_80364190 + v[1]));
    self[6] = (u8)(s32)(lbl_8036418C * (lbl_80364190 + v[2]));
}

} /* extern "C" */
