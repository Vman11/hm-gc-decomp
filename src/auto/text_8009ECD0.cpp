// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802CEA98[];
extern char lbl_803593C0[8];
extern f32 lbl_80361948;

#pragma opt_propagation off
void fn_8009ECD0(u8 *p) {
    u8 *base = lbl_802CEA98;
    M2C_FIELD(p, s32 *, 84) = 15;
    M2C_FIELD(p, s32 *, 44) = 15;
    M2C_FIELD(p, s32 *, 104) = 4;
    M2C_FIELD(p, s32 *, 92) = 1;
    M2C_FIELD(p, s32 *, 128) = 3;
    M2C_FIELD(p, s32 *, 124) = 0;
    M2C_FIELD(p, s32 *, 132) = 2;
    M2C_FIELD(p, s32 *, 136) = 1;
    M2C_FIELD(p, s32 *, 140) = 1;
    M2C_FIELD(p, s32 *, 148) = 0;
    M2C_FIELD(p, u8 **, 88) = base + 628;
    M2C_FIELD(p, u8 **, 40) = base + 688;
    M2C_FIELD(p, u8 **, 48) = base + 868;
    M2C_FIELD(p, u8 **, 108) = base + 612;
    M2C_FIELD(p, u8 **, 120) = base + 596;
    M2C_FIELD(p, u8 **, 196) = base + 540;
    M2C_FIELD(p, s32 *, 200) = 0;
    M2C_FIELD(p, u8 **, 204) = base + 552;
    M2C_FIELD(p, u8 **, 244) = base + 576;
    M2C_FIELD(p, char **, 252) = lbl_803593C0;
    M2C_FIELD(p, s32 *, 268) = 0;
    M2C_FIELD(p, s32 *, 280) = 0;
    M2C_FIELD(p, s32 *, 284) = 0;
    M2C_FIELD(p, s32 *, 288) = 0;
    M2C_FIELD(p, s32 *, 292) = 0;
    M2C_FIELD(p, s32 *, 296) = 0;
    M2C_FIELD(p, s32 *, 300) = 0;
    M2C_FIELD(p, s32 *, 304) = 0;
    M2C_FIELD(p, s32 *, 308) = 0;
    M2C_FIELD(p, s32 *, 312) = 0;
    M2C_FIELD(p, s32 *, 316) = 0;
    M2C_FIELD(p, s32 *, 320) = 0;
    M2C_FIELD(p, s32 *, 324) = 0;
    M2C_FIELD(p, s32 *, 328) = 0;
    M2C_FIELD(p, f32 *, 332) = lbl_80361948;
    M2C_FIELD(p, s32 *, 396) = 1;
    M2C_FIELD(p, s32 *, 400) = 0;
    M2C_FIELD(p, s32 *, 404) = 1;
    M2C_FIELD(p, s32 *, 408) = 0;
    M2C_FIELD(p, s32 *, 412) = 0;
    M2C_FIELD(p, s32 *, 416) = 0;
    M2C_FIELD(p, s32 *, 420) = 0;
}
#pragma opt_propagation reset

} /* extern "C" */
