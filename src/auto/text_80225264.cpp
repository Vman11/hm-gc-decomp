// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern char lbl_80365AE4[8];
extern f32 lbl_80365C0C;
extern f32 lbl_80365A70;
extern f32 lbl_80365C10;
extern f32 lbl_80365C14;
extern f32 lbl_80365B10;
extern f32 lbl_80365C18;
extern f32 lbl_80365A90;
extern f32 lbl_80365A80;
extern f32 lbl_80365A78;
void fn_800F6E88(void *, char *);

void fn_80225264(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x308) = 0;
    fn_800F6E88((u8 *)arg0 + 0x30c, lbl_80365AE4);
    M2C_FIELD(arg0, f32 *, 0x25c) = lbl_80365C0C;
    M2C_FIELD(arg0, f32 *, 0x258) = lbl_80365C0C;
    M2C_FIELD(arg0, f32 *, 0x254) = lbl_80365C0C;
    M2C_FIELD(arg0, f32 *, 0x28c) = lbl_80365C0C;
    M2C_FIELD(arg0, f32 *, 0x264) = lbl_80365A70;
    M2C_FIELD(arg0, f32 *, 0x268) = lbl_80365C10;
    M2C_FIELD(arg0, f32 *, 0x2b8) = lbl_80365C14;
    M2C_FIELD(arg0, f32 *, 0x2c0) = lbl_80365B10;
    M2C_FIELD(arg0, f32 *, 0x2d8) = lbl_80365A70;
    M2C_FIELD(arg0, f32 *, 0x2dc) = lbl_80365A70;
    M2C_FIELD(arg0, f32 *, 0x2e0) = lbl_80365A70;
    M2C_FIELD(arg0, f32 *, 0x2e4) = lbl_80365A70;
    M2C_FIELD(arg0, s32 *, 0x2e8) = 0;
    M2C_FIELD(arg0, s32 *, 0x284) = 0;
    M2C_FIELD(arg0, f32 *, 0x290) = lbl_80365A70;
    M2C_FIELD(arg0, f32 *, 0x294) = lbl_80365A70;
    M2C_FIELD(arg0, s32 *, 0x298) = 0;
    M2C_FIELD(arg0, s32 *, 0x29c) = 0;
    M2C_FIELD(arg0, s32 *, 0x2a0) = 0;
    M2C_FIELD(arg0, f32 *, 0x2ec) = lbl_80365A70;
    M2C_FIELD(arg0, s32 *, 0x314) = 0;
    M2C_FIELD(arg0, f32 *, 0x318) = lbl_80365A70;
    M2C_FIELD(arg0, s32 *, 0x324) = 0;
    M2C_FIELD(arg0, f32 *, 0x288) = lbl_80365C18;
    M2C_FIELD(arg0, f32 *, 0x26c) = lbl_80365A90;
    M2C_FIELD(arg0, f32 *, 0x270) = lbl_80365A80;
    M2C_FIELD(arg0, f32 *, 0x278) = lbl_80365A70;
    M2C_FIELD(arg0, f32 *, 0x274) = lbl_80365A70;
    M2C_FIELD(arg0, s32 *, 0x27c) = 0;
    M2C_FIELD(arg0, s32 *, 0x280) = 1;
    M2C_FIELD(arg0, s32 *, 0x2f0) = 0;
    M2C_FIELD(arg0, f32 *, 0x2f4) = lbl_80365A78;
    M2C_FIELD(arg0, s32 *, 0x2f8) = 0;
    M2C_FIELD(arg0, f32 *, 0x2fc) = lbl_80365A70;
    M2C_FIELD(arg0, s32 *, 0x300) = 0;
    M2C_FIELD(arg0, f32 *, 0x304) = lbl_80365A90;
    M2C_FIELD(arg0, s32 *, 0x328) = 0;
    M2C_FIELD(arg0, s32 *, 0x32c) = 0;
    M2C_FIELD(arg0, s32 *, 0x2a4) = 0;
}

} /* extern "C" */
