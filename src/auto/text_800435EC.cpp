// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802B2588[];
extern char lbl_80359218[8];

#pragma opt_propagation off
void fn_800435EC(u8 *p) {
    u8 *base = lbl_802B2588;
    M2C_FIELD(p, s32 *, 84) = 21;
    M2C_FIELD(p, s32 *, 44) = 20;
    M2C_FIELD(p, s32 *, 104) = 5;
    M2C_FIELD(p, s32 *, 92) = 2;
    M2C_FIELD(p, s32 *, 128) = 2;
    M2C_FIELD(p, s32 *, 124) = 0;
    M2C_FIELD(p, s32 *, 132) = 0;
    M2C_FIELD(p, s32 *, 136) = 12;
    M2C_FIELD(p, s32 *, 140) = 0;
    M2C_FIELD(p, s32 *, 148) = 0;
    M2C_FIELD(p, u8 **, 88) = base + 748;
    M2C_FIELD(p, u8 **, 40) = base + 832;
    M2C_FIELD(p, u8 **, 48) = base + 1072;
    M2C_FIELD(p, u8 **, 108) = base + 728;
    M2C_FIELD(p, u8 **, 120) = base + 696;
    M2C_FIELD(p, char **, 196) = lbl_80359218;
    M2C_FIELD(p, s32 *, 200) = 0;
    M2C_FIELD(p, s32 *, 204) = 0;
    M2C_FIELD(p, u8 **, 244) = base + 540;
    M2C_FIELD(p, s32 *, 252) = 0;
    M2C_FIELD(p, s32 *, 268) = 0;
    M2C_FIELD(p, s32 *, 376) = 0;
    M2C_FIELD(p, s32 *, 380) = 0;
    M2C_FIELD(p, s32 *, 384) = 0;
    M2C_FIELD(p, s32 *, 388) = 0;
    M2C_FIELD(p, s32 *, 392) = 0;
    M2C_FIELD(p, s32 *, 396) = 0;
    M2C_FIELD(p, s32 *, 400) = 0;
    M2C_FIELD(p, s32 *, 404) = 0;
    M2C_FIELD(p, s32 *, 408) = 0;
    M2C_FIELD(p, s32 *, 412) = 0;
    M2C_FIELD(p, s32 *, 416) = 0;
    M2C_FIELD(p, s32 *, 420) = 0;
    M2C_FIELD(p, s32 *, 424) = 1;
    M2C_FIELD(p, s32 *, 428) = 1;
    M2C_FIELD(p, s32 *, 432) = 0;
}
#pragma opt_propagation reset

} /* extern "C" */
