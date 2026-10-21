// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_8021BFD8(u32 *, s32, s32, s32, s32, s32, s32);
extern volatile u32 lbl_80365998;
void fn_8021E18C(u32 *__restrict p, u32 *__restrict q, u32 base) {
    fn_8021BFD8(p, 0, 0, 0, 0, 0, 0);
    p[3] = q[18];
    p[10] = base + q[19];
    p[5] = q[20];
    p[11] = base + q[21];
    p[6] = q[22];
    p[12] = base + q[23];
    p[7] = q[24];
    p[13] = base + q[25];
    p[8] = q[26];
    p[14] = base + q[27];
    p[9] = q[28];
    p[15] = base + q[29];
    *(volatile u32 *)p |= q[4];
    *(volatile u32 *)p |= lbl_80365998;
    p[16] = q[5];
    p[17] = q[6];
}

} /* extern "C" */
