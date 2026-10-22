// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802D0D58[];
extern char lbl_80359450[8];
extern char lbl_80359458[8];

#pragma opt_propagation off
void fn_800A6868(u8 *p) {
    u8 *base = lbl_802D0D58;
    M2C_FIELD(p, s32 *, 84) = 7;
    M2C_FIELD(p, s32 *, 44) = 7;
    M2C_FIELD(p, s32 *, 104) = 5;
    M2C_FIELD(p, s32 *, 92) = 0;
    M2C_FIELD(p, s32 *, 128) = 2;
    M2C_FIELD(p, s32 *, 124) = 1;
    M2C_FIELD(p, s32 *, 132) = 0;
    M2C_FIELD(p, s32 *, 136) = 1;
    M2C_FIELD(p, s32 *, 140) = 2;
    M2C_FIELD(p, s32 *, 148) = 0;
    M2C_FIELD(p, u8 **, 88) = base + 592;
    M2C_FIELD(p, u8 **, 40) = base + 620;
    M2C_FIELD(p, u8 **, 48) = base + 704;
    M2C_FIELD(p, u8 **, 108) = base + 572;
    M2C_FIELD(p, s32 *, 120) = 0;
    M2C_FIELD(p, char **, 196) = lbl_80359450;
    M2C_FIELD(p, u8 **, 200) = base + 540;
    M2C_FIELD(p, s32 *, 204) = 0;
    M2C_FIELD(p, u8 **, 244) = base + 552;
    M2C_FIELD(p, char **, 252) = lbl_80359458;
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
    M2C_FIELD(p, s32 *, 320) = -1;
}
#pragma opt_propagation reset

} /* extern "C" */
