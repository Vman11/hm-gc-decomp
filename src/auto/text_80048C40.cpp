/* Functions from 0x80048C40 to 0x80048D10, found by decomp-toolkit. */
#include "common.h"

extern "C" {

extern u8 lbl_802B5970[];
extern f32 lbl_8035D184;

#pragma opt_propagation off
void fn_80048C40(u8 *p) {
    u8 *base = lbl_802B5970;
    M2C_FIELD(p, s32 *, 84) = 12;
    M2C_FIELD(p, s32 *, 44) = 12;
    M2C_FIELD(p, s32 *, 104) = 3;
    M2C_FIELD(p, s32 *, 92) = 0;
    M2C_FIELD(p, s32 *, 128) = 0;
    M2C_FIELD(p, s32 *, 124) = 0;
    M2C_FIELD(p, s32 *, 132) = 0;
    M2C_FIELD(p, s32 *, 136) = 0;
    M2C_FIELD(p, s32 *, 140) = 0;
    M2C_FIELD(p, s32 *, 148) = 0;
    M2C_FIELD(p, u8 **, 88) = base + 552;
    M2C_FIELD(p, u8 **, 40) = base + 600;
    M2C_FIELD(p, u8 **, 48) = base + 744;
    M2C_FIELD(p, u8 **, 108) = base + 540;
    M2C_FIELD(p, s32 *, 120) = 0;
    M2C_FIELD(p, s32 *, 196) = 0;
    M2C_FIELD(p, s32 *, 200) = 0;
    M2C_FIELD(p, s32 *, 204) = 0;
    M2C_FIELD(p, s32 *, 244) = 0;
    M2C_FIELD(p, s32 *, 252) = 0;
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
    M2C_FIELD(p, f32 *, 336) = lbl_8035D184;
    M2C_FIELD(p, s32 *, 368) = 0;
    M2C_FIELD(p, s32 *, 372) = 0;
    M2C_FIELD(p, s32 *, 392) = 0;
    M2C_FIELD(p, s32 *, 396) = 0;
    M2C_FIELD(p, s32 *, 420) = 0;
    M2C_FIELD(p, s32 *, 424) = 0;
    M2C_FIELD(p, s32 *, 428) = 0;
    M2C_FIELD(p, s32 *, 432) = 0;
}
#pragma opt_propagation reset

} /* extern "C" */
