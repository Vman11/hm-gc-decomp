// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802CA050[];
extern char lbl_80359380[8];

#pragma opt_propagation off
void fn_80092BD8(u8 *p) {
    u8 *base = lbl_802CA050;
    M2C_FIELD(p, s32 *, 84) = 15;
    M2C_FIELD(p, s32 *, 44) = 15;
    M2C_FIELD(p, s32 *, 104) = 4;
    M2C_FIELD(p, s32 *, 92) = 2;
    M2C_FIELD(p, s32 *, 128) = 1;
    M2C_FIELD(p, s32 *, 124) = 0;
    M2C_FIELD(p, s32 *, 132) = 1;
    M2C_FIELD(p, s32 *, 136) = 4;
    M2C_FIELD(p, s32 *, 140) = 0;
    M2C_FIELD(p, s32 *, 148) = 2;
    M2C_FIELD(p, u8 **, 88) = base + 696;
    M2C_FIELD(p, u8 **, 40) = base + 756;
    M2C_FIELD(p, u8 **, 48) = base + 936;
    M2C_FIELD(p, u8 **, 108) = base + 680;
    M2C_FIELD(p, u8 **, 120) = base + 608;
    M2C_FIELD(p, char **, 196) = lbl_80359380;
    M2C_FIELD(p, s32 *, 200) = 0;
    M2C_FIELD(p, u8 **, 204) = base + 540;
    M2C_FIELD(p, u8 **, 244) = base + 552;
    M2C_FIELD(p, s32 *, 252) = 0;
    M2C_FIELD(p, u8 **, 268) = base + 640;
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
    M2C_FIELD(p, s32 *, 332) = 0;
    M2C_FIELD(p, s32 *, 336) = 1;
    M2C_FIELD(p, s32 *, 340) = 0;
    M2C_FIELD(p, s32 *, 344) = 0;
    M2C_FIELD(p, s32 *, 348) = 0;
    M2C_FIELD(p, s32 *, 352) = 1;
    M2C_FIELD(p, s32 *, 356) = 0;
    M2C_FIELD(p, s32 *, 360) = 1;
    M2C_FIELD(p, s32 *, 364) = 0;
    M2C_FIELD(p, s32 *, 368) = 0;
}
#pragma opt_propagation reset

} /* extern "C" */
