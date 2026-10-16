/* Functions from 0x80152BA4 to 0x80153420, found by decomp-toolkit. */
#include "common.h"

typedef struct { f32 m[4][4]; } MtxA_;
typedef struct { f32 m[4][4]; } MtxB_;

void fn_80152BA4(void) {

}

void fn_80153358(f32 *dst, f32 *src) {
    f32 a = src[4];
    f32 b = src[8];
    f32 c = src[12];
    f32 d = src[1];
    f32 e = src[9];
    f32 f = src[13];
    f32 g = src[2];
    f32 h = src[6];
    f32 i = src[14];
    f32 j = src[3];
    f32 k = src[7];
    f32 l = src[11];
    dst[1] = a;
    dst[2] = b;
    dst[3] = c;
    dst[4] = d;
    dst[6] = e;
    dst[7] = f;
    dst[8] = g;
    dst[9] = h;
    dst[11] = i;
    dst[12] = j;
    dst[13] = k;
    dst[14] = l;
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

