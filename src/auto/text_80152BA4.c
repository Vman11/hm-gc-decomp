/* Functions from 0x80152BA4 to 0x80153420, found by decomp-toolkit. */
#include "common.h"

typedef struct { f32 m[4][4]; } MtxA_;
typedef struct { f32 m[4][4]; } MtxB_;

void fn_80152BA4(void) {

}

u8 fn_80152E38(f32 *a, f32 *b) {
    return a[0] == b[0] && a[1] == b[1] && a[2] == b[2] && a[3] == b[3] &&
           a[4] == b[4] && a[5] == b[5] && a[6] == b[6] && a[7] == b[7] &&
           a[8] == b[8] && a[9] == b[9] && a[10] == b[10] && a[11] == b[11] &&
           a[12] == b[12] && a[13] == b[13] && a[14] == b[14] && a[15] == b[15];
}

void fn_8015304C(f32 *__restrict dst, f32 *__restrict src) {
    dst[0] -= src[0];
    dst[1] -= src[1];
    dst[2] -= src[2];
    dst[3] -= src[3];
    dst[4] -= src[4];
    dst[5] -= src[5];
    dst[6] -= src[6];
    dst[7] -= src[7];
    dst[8] -= src[8];
    dst[9] -= src[9];
    dst[10] -= src[10];
    dst[11] -= src[11];
    dst[12] -= src[12];
    dst[13] -= src[13];
    dst[14] -= src[14];
    dst[15] -= src[15];
}

void fn_80153358(f32 *__restrict dst, f32 *__restrict src) {
    dst[1] = src[4];
    dst[2] = src[8];
    dst[3] = src[12];
    dst[4] = src[1];
    dst[6] = src[9];
    dst[7] = src[13];
    dst[8] = src[2];
    dst[9] = src[6];
    dst[11] = src[14];
    dst[12] = src[3];
    dst[13] = src[7];
    dst[14] = src[11];
}

void fn_801533BC(void *arg0) {
    f32 temp_f1;
    f32 temp_f2;
    f32 temp_f3;
    f32 temp_f4;
    f32 temp_f5;
    f32 temp_f6;

    temp_f1 = M2C_FIELD(arg0, f32 *, 4);
    temp_f2 = M2C_FIELD(arg0, f32 *, 8);
    temp_f3 = M2C_FIELD(arg0, f32 *, 0xC);
    temp_f4 = M2C_FIELD(arg0, f32 *, 0x18);
    temp_f5 = M2C_FIELD(arg0, f32 *, 0x1C);
    temp_f6 = M2C_FIELD(arg0, f32 *, 0x2C);
    M2C_FIELD(arg0, f32 *, 4) = (f32) M2C_FIELD(arg0, f32 *, 0x10);
    M2C_FIELD(arg0, f32 *, 8) = (f32) M2C_FIELD(arg0, f32 *, 0x20);
    M2C_FIELD(arg0, f32 *, 0xC) = (f32) M2C_FIELD(arg0, f32 *, 0x30);
    M2C_FIELD(arg0, f32 *, 0x10) = temp_f1;
    M2C_FIELD(arg0, f32 *, 0x18) = (f32) M2C_FIELD(arg0, f32 *, 0x24);
    M2C_FIELD(arg0, f32 *, 0x1C) = (f32) M2C_FIELD(arg0, f32 *, 0x34);
    M2C_FIELD(arg0, f32 *, 0x20) = temp_f2;
    M2C_FIELD(arg0, f32 *, 0x24) = temp_f4;
    M2C_FIELD(arg0, f32 *, 0x2C) = (f32) M2C_FIELD(arg0, f32 *, 0x38);
    M2C_FIELD(arg0, f32 *, 0x30) = temp_f3;
    M2C_FIELD(arg0, f32 *, 0x34) = temp_f5;
    M2C_FIELD(arg0, f32 *, 0x38) = temp_f6;
}

