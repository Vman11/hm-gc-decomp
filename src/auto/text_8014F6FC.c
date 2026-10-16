/* Functions from 0x8014F6FC to 0x8014F8EC, found by decomp-toolkit. */
#include "common.h"

void fn_8014F6FC(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x10) = (s32) (M2C_FIELD(arg0, s32 *, 0x10) ^ 0x80000000);
    M2C_FIELD(arg0, s32 *, 0x14) = (s32) (M2C_FIELD(arg0, s32 *, 0x14) ^ 0x80000000);
    M2C_FIELD(arg0, s32 *, 0x18) = (s32) (M2C_FIELD(arg0, s32 *, 0x18) ^ 0x80000000);
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (M2C_FIELD(arg0, s32 *, 0x1C) ^ 0x80000000);
    M2C_FIELD(arg0, s32 *, 0x20) = (s32) (M2C_FIELD(arg0, s32 *, 0x20) ^ 0x80000000);
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) (M2C_FIELD(arg0, s32 *, 0x24) ^ 0x80000000);
    M2C_FIELD(arg0, s32 *, 0x28) = (s32) (M2C_FIELD(arg0, s32 *, 0x28) ^ 0x80000000);
    M2C_FIELD(arg0, s32 *, 0x2C) = (s32) (M2C_FIELD(arg0, s32 *, 0x2C) ^ 0x80000000);
}

void fn_8014F760(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x10) = (s32) (M2C_FIELD(arg0, s32 *, 0x10) ^ 0x80000000);
    M2C_FIELD(arg0, s32 *, 0x14) = (s32) (M2C_FIELD(arg0, s32 *, 0x14) ^ 0x80000000);
    M2C_FIELD(arg0, s32 *, 0x18) = (s32) (M2C_FIELD(arg0, s32 *, 0x18) ^ 0x80000000);
    M2C_FIELD(arg0, s32 *, 0x20) = (s32) (M2C_FIELD(arg0, s32 *, 0x20) ^ 0x80000000);
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) (M2C_FIELD(arg0, s32 *, 0x24) ^ 0x80000000);
    M2C_FIELD(arg0, s32 *, 0x28) = (s32) (M2C_FIELD(arg0, s32 *, 0x28) ^ 0x80000000);
}

void fn_8014F7AC(f32 *__restrict dst, f32 *__restrict src) {
    dst[0] = src[0];
    dst[1] = src[1];
    dst[2] = src[2];
    dst[3] = src[3];
    dst[4] = -src[4];
    dst[5] = -src[5];
    dst[6] = -src[6];
    dst[7] = -src[7];
    dst[8] = -src[8];
    dst[9] = -src[9];
    dst[10] = -src[10];
    dst[11] = -src[11];
    dst[12] = src[12];
    dst[13] = src[13];
    dst[14] = src[14];
    dst[15] = src[15];
}

void fn_8014F850(f32 *__restrict dst, f32 *__restrict src) {
    dst[0] = src[0];
    dst[1] = src[1];
    dst[2] = src[2];
    dst[3] = src[3];
    dst[4] = -src[4];
    dst[5] = -src[5];
    dst[6] = -src[6];
    dst[7] = src[7];
    dst[8] = -src[8];
    dst[9] = -src[9];
    dst[10] = -src[10];
    dst[11] = src[11];
    dst[12] = src[12];
    dst[13] = src[13];
    dst[14] = src[14];
    dst[15] = src[15];
}

