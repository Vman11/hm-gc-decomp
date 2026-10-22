// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern char lbl_802B6D48[];
extern char lbl_80359240[8];
extern f32 lbl_8035D5E4;
#pragma opt_propagation off
void fn_8004D88C(u8 *p) {
    char *s = lbl_802B6D48;
    M2C_FIELD(p, s32*, 84) = 39;
    M2C_FIELD(p, s32*, 44) = 36;
    M2C_FIELD(p, s32*, 104) = 13;
    M2C_FIELD(p, s32*, 92) = 7;
    M2C_FIELD(p, s32*, 128) = 4;
    M2C_FIELD(p, s32*, 124) = 7;
    M2C_FIELD(p, s32*, 132) = 3;
    M2C_FIELD(p, s32*, 136) = 9;
    M2C_FIELD(p, s32*, 140) = 1;
    M2C_FIELD(p, s32*, 148) = 1;
    M2C_FIELD(p, char **, 88) = s + 1004;
    M2C_FIELD(p, char **, 40) = s + 1160;
    M2C_FIELD(p, char **, 48) = s + 1592;
    M2C_FIELD(p, char **, 108) = s + 952;
    M2C_FIELD(p, char **, 120) = s + 820;
    M2C_FIELD(p, char **, 196) = s + 540;
    M2C_FIELD(p, char **, 200) = s + 556;
    M2C_FIELD(p, char **, 204) = s + 640;
    M2C_FIELD(p, char **, 244) = s + 676;
    M2C_FIELD(p, char **, 252) = lbl_80359240;
    M2C_FIELD(p, char **, 268) = s + 932;
    M2C_FIELD(p, s32*, 280) = 0;
    M2C_FIELD(p, s32*, 296) = 0;
    M2C_FIELD(p, s32*, 300) = 0;
    M2C_FIELD(p, s32*, 304) = 0;
    M2C_FIELD(p, s32*, 308) = 0;
    M2C_FIELD(p, s32*, 312) = 0;
    M2C_FIELD(p, s32*, 316) = 0;
    M2C_FIELD(p, s32*, 320) = 0;
    M2C_FIELD(p, s32*, 324) = 0;
    M2C_FIELD(p, s32*, 328) = 0;
    M2C_FIELD(p, s32*, 332) = 0;
    M2C_FIELD(p, s32*, 336) = 0;
    M2C_FIELD(p, s32*, 340) = 0;
    M2C_FIELD(p, s32*, 344) = 0;
    M2C_FIELD(p, s32*, 348) = 0;
    M2C_FIELD(p, s32*, 352) = 0;
    M2C_FIELD(p, s32*, 356) = 0;
    M2C_FIELD(p, s32*, 360) = 0;
    M2C_FIELD(p, s32*, 364) = 0;
    M2C_FIELD(p, s32*, 368) = 0;
    M2C_FIELD(p, s32*, 372) = 0;
    M2C_FIELD(p, f32*, 376) = lbl_8035D5E4;
    M2C_FIELD(p, f32*, 380) = lbl_8035D5E4;
}
#pragma opt_propagation reset

} /* extern "C" */
