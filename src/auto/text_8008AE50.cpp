/* Functions from 0x8008AE50 to 0x8008AEFC, found by decomp-toolkit. */
#include "common.h"

extern "C" {

extern char lbl_802C65E0[];
extern char lbl_80359340[8];
#pragma opt_propagation off
void fn_8008AE50(u8 *p) {
    char *s = lbl_802C65E0;
    M2C_FIELD(p, s32*, 84) = 7;
    M2C_FIELD(p, s32*, 44) = 7;
    M2C_FIELD(p, s32*, 104) = 2;
    M2C_FIELD(p, s32*, 92) = 1;
    M2C_FIELD(p, s32*, 128) = 0;
    M2C_FIELD(p, s32*, 124) = 0;
    M2C_FIELD(p, s32*, 132) = 0;
    M2C_FIELD(p, s32*, 136) = 0;
    M2C_FIELD(p, s32*, 140) = 0;
    M2C_FIELD(p, s32*, 148) = 0;
    M2C_FIELD(p, char **, 88) = s + 556;
    M2C_FIELD(p, char **, 40) = s + 584;
    M2C_FIELD(p, char **, 48) = s + 668;
    M2C_FIELD(p, char **, 108) = lbl_80359340;
    M2C_FIELD(p, char **, 120) = s + 540;
    M2C_FIELD(p, s32*, 196) = 0;
    M2C_FIELD(p, s32*, 200) = 0;
    M2C_FIELD(p, s32*, 204) = 0;
    M2C_FIELD(p, s32*, 244) = 0;
    M2C_FIELD(p, s32*, 252) = 0;
    M2C_FIELD(p, s32*, 268) = 0;
    M2C_FIELD(p, s32*, 280) = 0;
    M2C_FIELD(p, s32*, 284) = 0;
    M2C_FIELD(p, s32*, 288) = 0;
    M2C_FIELD(p, s32*, 292) = 0;
    M2C_FIELD(p, s32*, 296) = 0;
    M2C_FIELD(p, s32*, 300) = 1;
    M2C_FIELD(p, s32*, 320) = 0;
    M2C_FIELD(p, s32*, 324) = 0;
    M2C_FIELD(p, s32*, 328) = 0;
    M2C_FIELD(p, s32*, 332) = 0;
}
#pragma opt_propagation reset

} /* extern "C" */
