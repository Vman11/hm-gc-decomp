// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern char lbl_802CF438[];
extern char lbl_803593F8[8];
extern char lbl_80359400[8];
extern f32 lbl_80361B2C;
extern f32 lbl_80361B74;
#pragma opt_propagation off
void fn_800A0920(u8 *p) {
    char *s = lbl_802CF438;
    M2C_FIELD(p, s32*, 84) = 15;
    M2C_FIELD(p, s32*, 44) = 15;
    M2C_FIELD(p, s32*, 104) = 5;
    M2C_FIELD(p, s32*, 92) = 0;
    M2C_FIELD(p, s32*, 128) = 2;
    M2C_FIELD(p, s32*, 124) = 4;
    M2C_FIELD(p, s32*, 132) = 4;
    M2C_FIELD(p, s32*, 136) = 31;
    M2C_FIELD(p, s32*, 140) = 1;
    M2C_FIELD(p, s32*, 148) = 0;
    M2C_FIELD(p, char **, 88) = s + 1036;
    M2C_FIELD(p, char **, 40) = s + 1096;
    M2C_FIELD(p, char **, 48) = s + 1276;
    M2C_FIELD(p, char **, 108) = s + 1016;
    M2C_FIELD(p, s32*, 120) = 0;
    M2C_FIELD(p, char **, 196) = lbl_803593F8;
    M2C_FIELD(p, char **, 200) = s + 540;
    M2C_FIELD(p, char **, 204) = s + 588;
    M2C_FIELD(p, char **, 244) = s + 636;
    M2C_FIELD(p, char **, 252) = lbl_80359400;
    M2C_FIELD(p, s32*, 268) = 0;
    M2C_FIELD(p, s32*, 332) = 0;
    M2C_FIELD(p, s32*, 336) = 0;
    M2C_FIELD(p, s32*, 340) = 0;
    M2C_FIELD(p, s32*, 344) = 0;
    M2C_FIELD(p, s32*, 348) = 0;
    M2C_FIELD(p, f32*, 352) = lbl_80361B2C;
    M2C_FIELD(p, f32*, 356) = lbl_80361B74;
    M2C_FIELD(p, s32*, 360) = 0;
    M2C_FIELD(p, s32*, 364) = 0;
    M2C_FIELD(p, s32*, 368) = 0;
    M2C_FIELD(p, s32*, 372) = 0;
    M2C_FIELD(p, s32*, 376) = 0;
    M2C_FIELD(p, s32*, 380) = 0;
    M2C_FIELD(p, s32*, 384) = 0;
    M2C_FIELD(p, s32*, 396) = 0;
    M2C_FIELD(p, s32*, 400) = 0;
}
#pragma opt_propagation reset

} /* extern "C" */
