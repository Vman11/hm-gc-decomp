/* RAD Bink: 0x80290650-0x80293ED8 */
#include "bink_common.h"

void fn_8029086C(s32* data, s8* in) {
    s32 tmp0, tmp1, tmp2, tmp3, tmp4, tmp5, tmp6, tmp7;
    s32 tmp10, tmp11, tmp12, tmp13;
    s32 z1, z2, z3, z4, z5, z11, z13;
    s32* p;
    int i;

    p = data;
    for (i = 8; i > 0; i--) {
        tmp0 = in[0] + in[7];
        tmp7 = in[0] - in[7];
        tmp1 = in[1] + in[6];
        tmp6 = in[1] - in[6];
        tmp2 = in[2] + in[5];
        tmp5 = in[2] - in[5];
        tmp3 = in[3] + in[4];
        tmp4 = in[3] - in[4];
        tmp0 <<= 8;
        tmp1 <<= 8;
        tmp2 <<= 8;
        tmp3 <<= 8;
        tmp4 <<= 8;
        tmp5 <<= 8;
        tmp6 <<= 8;
        tmp7 <<= 8;

        tmp10 = tmp0 + tmp3;
        tmp13 = tmp0 - tmp3;
        tmp11 = tmp1 + tmp2;
        tmp12 = tmp1 - tmp2;

        p[0] = tmp10 + tmp11;
        p[4] = tmp10 - tmp11;

        z1 = ((tmp12 + tmp13) * 0x5A8) >> 11;
        p[2] = tmp13 + z1;
        p[6] = tmp13 - z1;

        tmp10 = tmp4 + tmp5;
        tmp11 = tmp5 + tmp6;
        tmp12 = tmp6 + tmp7;

        z5 = ((tmp10 - tmp12) * 0x310) >> 11;
        z2 = ((tmp10 * 0x454) >> 11) + z5;
        z4 = ((tmp12 * 0xA74) >> 11) + z5;
        z3 = (tmp11 * 0x5A8) >> 11;

        z11 = tmp7 + z3;
        z13 = tmp7 - z3;

        p[5] = z13 + z2;
        p[3] = z13 - z2;
        p[1] = z11 + z4;
        p[7] = z11 - z4;

        p += 8;
        in += 8;
    }

    p = data;
    for (i = 8; i > 0; i--) {
        tmp0 = p[8 * 0] + p[8 * 7];
        tmp7 = p[8 * 0] - p[8 * 7];
        tmp1 = p[8 * 1] + p[8 * 6];
        tmp6 = p[8 * 1] - p[8 * 6];
        tmp2 = p[8 * 2] + p[8 * 5];
        tmp5 = p[8 * 2] - p[8 * 5];
        tmp3 = p[8 * 3] + p[8 * 4];
        tmp4 = p[8 * 3] - p[8 * 4];

        tmp10 = tmp0 + tmp3;
        tmp13 = tmp0 - tmp3;
        tmp11 = tmp1 + tmp2;
        tmp12 = tmp1 - tmp2;

        p[8 * 0] = tmp10 + tmp11;
        p[8 * 4] = tmp10 - tmp11;

        z1 = ((tmp12 + tmp13) * 0x5A8) >> 11;
        p[8 * 2] = tmp13 + z1;
        p[8 * 6] = tmp13 - z1;

        tmp10 = tmp4 + tmp5;
        tmp11 = tmp5 + tmp6;
        tmp12 = tmp6 + tmp7;

        z5 = ((tmp10 - tmp12) * 0x310) >> 11;
        z2 = ((tmp10 * 0x454) >> 11) + z5;
        z4 = ((tmp12 * 0xA74) >> 11) + z5;
        z3 = (tmp11 * 0x5A8) >> 11;

        z11 = tmp7 + z3;
        z13 = tmp7 - z3;

        p[8 * 5] = z13 + z2;
        p[8 * 3] = z13 - z2;
        p[8 * 1] = z11 + z4;
        p[8 * 7] = z11 - z4;

        p++;
    }
}

void fn_80293964(u16 *dst) {
    u16 t[32];
    u16 *d;
    u16 a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16;
    d = dst;
    a0 = t[0]; a1 = t[2]; a2 = t[4]; a3 = t[6];
    a4 = t[1]; a5 = t[3]; a6 = t[5]; a7 = t[7];
    a8 = t[12]; a9 = t[22]; a10 = t[8]; a11 = t[10];
    a12 = t[13]; a13 = t[23]; a14 = t[9]; a15 = t[11];
    a16 = t[14];
    d[0] = a0; d[1] = a1; d[2] = a2; d[3] = a3;
    d[4] = a4; d[5] = a5; d[6] = a6; d[7] = a7;
    d[8] = a8; d[9] = a9; d[10] = a10; d[11] = a11;
    d[12] = a12; d[13] = a13; d[14] = a14; d[15] = a15;
    d[16] = a16;
    a0 = t[16]; a1 = t[24]; a2 = t[26]; a3 = t[15];
    a4 = t[17]; a5 = t[25]; a6 = t[27]; a7 = t[18];
    a8 = t[20]; a9 = t[28]; a10 = t[30]; a11 = t[19];
    a12 = t[21]; a13 = t[29]; a14 = t[31];
    d[17] = a0; d[18] = a1; d[19] = a2; d[20] = a3;
    d[21] = a4; d[22] = a5; d[23] = a6; d[24] = a7;
    d[25] = a8; d[26] = a9; d[27] = a10; d[28] = a11;
    d[29] = a12; d[30] = a13; d[31] = a14;
}
