/* RAD Bink: 0x80290650-0x80293ED8 */
#include "bink_common.h"

void fn_80290650(s32 *data, u8 *in) {
    s32 tmp0, tmp1, tmp2, tmp3, tmp4, tmp5, tmp6, tmp7;
    s32 tmp10, tmp11, tmp12, tmp13;
    s32 z1, z2, z3, z4, z5, z11, z13;
    s32 *p = data;
    int i;

    for (i = 8; i > 0; i--) {
        tmp0 = (in[0] + in[7]) << 8;
        tmp7 = (in[0] - in[7]) << 8;
        tmp1 = (in[1] + in[6]) << 8;
        tmp6 = (in[1] - in[6]) << 8;
        tmp2 = (in[2] + in[5]) << 8;
        tmp5 = (in[2] - in[5]) << 8;
        tmp3 = (in[3] + in[4]) << 8;
        tmp4 = (in[3] - in[4]) << 8;
        tmp10 = tmp0 + tmp3;
        tmp13 = tmp0 - tmp3;
        tmp11 = tmp1 + tmp2;
        tmp12 = tmp1 - tmp2;
        p[0] = tmp10 + tmp11;
        p[4] = tmp10 - tmp11;
        z1 = ((tmp12 + tmp13) * 1448) >> 11;
        p[2] = tmp13 + z1;
        p[6] = tmp13 - z1;
        tmp10 = tmp4 + tmp5;
        tmp11 = tmp5 + tmp6;
        tmp12 = tmp6 + tmp7;
        z5 = ((tmp10 - tmp12) * 784) >> 11;
        z2 = ((tmp10 * 1108) >> 11) + z5;
        z4 = ((tmp12 * 2676) >> 11) + z5;
        z3 = (tmp11 * 1448) >> 11;
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
        tmp0 = p[0] + p[56];
        tmp7 = p[0] - p[56];
        tmp1 = p[8] + p[48];
        tmp6 = p[8] - p[48];
        tmp2 = p[16] + p[40];
        tmp5 = p[16] - p[40];
        tmp3 = p[24] + p[32];
        tmp4 = p[24] - p[32];
        tmp10 = tmp0 + tmp3;
        tmp13 = tmp0 - tmp3;
        tmp11 = tmp1 + tmp2;
        tmp12 = tmp1 - tmp2;
        p[0] = tmp10 + tmp11;
        p[32] = tmp10 - tmp11;
        z1 = ((tmp12 + tmp13) * 1448) >> 11;
        p[16] = tmp13 + z1;
        p[48] = tmp13 - z1;
        tmp10 = tmp4 + tmp5;
        tmp11 = tmp5 + tmp6;
        tmp12 = tmp6 + tmp7;
        z5 = ((tmp10 - tmp12) * 784) >> 11;
        z2 = ((tmp10 * 1108) >> 11) + z5;
        z4 = ((tmp12 * 2676) >> 11) + z5;
        z3 = (tmp11 * 1448) >> 11;
        z11 = tmp7 + z3;
        z13 = tmp7 - z3;
        p[40] = z13 + z2;
        p[24] = z13 - z2;
        p[8] = z11 + z4;
        p[56] = z11 - z4;
        p++;
    }
}

void fn_8029086C(s32 *data, s8 *in) {
    s32 tmp0, tmp1, tmp2, tmp3, tmp4, tmp5, tmp6, tmp7;
    s32 tmp10, tmp11, tmp12, tmp13;
    s32 z1, z2, z3, z4, z5, z11, z13;
    s32 *p = data;
    int i;

    for (i = 8; i > 0; i--) {
        tmp0 = (in[0] + in[7]) << 8;
        tmp7 = (in[0] - in[7]) << 8;
        tmp1 = (in[1] + in[6]) << 8;
        tmp6 = (in[1] - in[6]) << 8;
        tmp2 = (in[2] + in[5]) << 8;
        tmp5 = (in[2] - in[5]) << 8;
        tmp3 = (in[3] + in[4]) << 8;
        tmp4 = (in[3] - in[4]) << 8;
        tmp10 = tmp0 + tmp3;
        tmp13 = tmp0 - tmp3;
        tmp11 = tmp1 + tmp2;
        tmp12 = tmp1 - tmp2;
        p[0] = tmp10 + tmp11;
        p[4] = tmp10 - tmp11;
        z1 = ((tmp12 + tmp13) * 1448) >> 11;
        p[2] = tmp13 + z1;
        p[6] = tmp13 - z1;
        tmp10 = tmp4 + tmp5;
        tmp11 = tmp5 + tmp6;
        tmp12 = tmp6 + tmp7;
        z5 = ((tmp10 - tmp12) * 784) >> 11;
        z2 = ((tmp10 * 1108) >> 11) + z5;
        z4 = ((tmp12 * 2676) >> 11) + z5;
        z3 = (tmp11 * 1448) >> 11;
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
        tmp0 = p[0] + p[56];
        tmp7 = p[0] - p[56];
        tmp1 = p[8] + p[48];
        tmp6 = p[8] - p[48];
        tmp2 = p[16] + p[40];
        tmp5 = p[16] - p[40];
        tmp3 = p[24] + p[32];
        tmp4 = p[24] - p[32];
        tmp10 = tmp0 + tmp3;
        tmp13 = tmp0 - tmp3;
        tmp11 = tmp1 + tmp2;
        tmp12 = tmp1 - tmp2;
        p[0] = tmp10 + tmp11;
        p[32] = tmp10 - tmp11;
        z1 = ((tmp12 + tmp13) * 1448) >> 11;
        p[16] = tmp13 + z1;
        p[48] = tmp13 - z1;
        tmp10 = tmp4 + tmp5;
        tmp11 = tmp5 + tmp6;
        tmp12 = tmp6 + tmp7;
        z5 = ((tmp10 - tmp12) * 784) >> 11;
        z2 = ((tmp10 * 1108) >> 11) + z5;
        z4 = ((tmp12 * 2676) >> 11) + z5;
        z3 = (tmp11 * 1448) >> 11;
        z11 = tmp7 + z3;
        z13 = tmp7 - z3;
        p[40] = z13 + z2;
        p[24] = z13 - z2;
        p[8] = z11 + z4;
        p[56] = z11 - z4;
        p++;
    }
}

void fn_80293258(s8 *out, BitBuf *bs, s32 limit);
int abs(int);
extern u8 lbl_802AF340[];
#define MX(a, b) ((a) < (b) ? (b) : (a))
#define MXE(q, e) { u8 x_ = (e); if (q < x_) q = x_; }
#define ONE(L, K) \
    b = (K) ? *++bp : *bp; \
    e = b | ((pos << 10) + 0x300); \
    if ((e & 0xFF) != (L)) *--head = e; \
    else cnt += (L); \
    pos++;
#define PASS(L) \
    for (p = head; p < end;) { \
        v = *p; \
        if (v == 0) { p++; continue; } \
        cnt++; \
        if ((u8)v != (L)) { p++; continue; } \
        switch (v & 0x300) { \
        case 0x000: \
            pos = v >> 10; \
            k = pos >> 4; \
            *p = h[k] + ((pos + 4) << 10) + 0x100; \
            goto C##L; \
        case 0x100: \
            pos = v >> 10; \
            k = pos >> 2; \
            *p = g[k - 1] + (pos << 10) + 0x200; \
            *end++ = g[k] + ((pos + 4) << 10) + 0x200; \
            *end++ = g[k + 1] + ((pos + 8) << 10) + 0x200; \
            *end++ = g[k + 2] + ((pos + 12) << 10) + 0x200; \
            break; \
        case 0x200: \
            *p = 0; \
            pos = v >> 10; \
            p++; \
        C##L: \
            cnt += 4; \
            bp = bits + pos; ONE(L, 0) ONE(L, 1) ONE(L, 2) ONE(L, 3) \
            break; \
        case 0x300: \
            *p = 0; \
            cnt += (L); \
            p++; \
            break; \
        default: \
            p++; \
        } \
    }

u32 fn_80290AAC(s16 *in) {
    u16 list[132];
    u8 bits[64];
    u8 g[16];
    u8 h[4];
    u16 *head, *end, *p;
    u8 *bp;
    u32 cnt;
    u8 mx, lvl; u32 b, m;
    u16 v, pos, k; u32 e;
    s32 i;
    mx = 0;
    for (i = 1; i < 64; i++) {
        u8 t = 32 - cntlzw_inline((u16)abs(in[lbl_802AF340[i]]));
        if (t > mx) mx = t;
        bits[i] = t;
    }
    for (i = 4; i < 64; i += 4) {
        u8 q = bits[i];
        q = MX(q, bits[i + 1]);
        q = MX(q, bits[i + 2]);
        q = MX(q, bits[i + 3]);
        g[i / 4 - 1] = q;
    }
    m = MX(g[1], g[2]); m = MX(m, g[3]); h[0] = MX(m, g[4]);
    m = MX(g[6], g[7]); m = MX(m, g[8]); h[1] = MX(m, g[9]);
    m = MX(g[11], g[12]); m = MX(m, g[13]); h[2] = MX(m, g[14]);
    cnt = 4;
    head = &list[68];
    head[0] = (h[0] > g[0] ? h[0] : g[0]) | (4 << 10);
    head[1] = (h[1] > g[5] ? h[1] : g[5]) | (24 << 10);
    head[2] = (h[2] > g[10] ? h[2] : g[10]) | (44 << 10);
    head[3] = bits[1] + 0x700;
    head[4] = bits[2] + 0xB00;
    head[5] = bits[3] + 0xF00;
    end = head + 6;
    for (lvl = mx; lvl > 1; lvl--) {
        PASS(lvl)
    }
    if (mx != 0) {
        PASS(1)
    }
    return cnt;
}
#undef MX
#undef MXE
#undef ONE
#undef PASS

#define GB1(q) (bb.bits != 0 ? ({ u32 w_ = bb.buf; bb.bits--; bb.buf = w_ >> 1; w_ & 1; }) \
                             : ({ u32 w_ = *bb.ptr; bb.ptr++; bb.bits = 31; bb.buf = w_ >> 1; w_ & 1; }))
#define RQ(K) \
    if (GB1(q)) { \
        *--head = (c << 2) + 3; \
    } else { \
        nzl[nz++] = c; \
        out[c] = GB1(q) ? -mask : mask; \
        if (n++ == limit) goto done; \
    }
void fn_80293258(s8 *out, BitBuf *bs, s32 limit) {
    u8 list[136];
    u8 nzl[64];
    BitBuf bb;
    u8 *head, *end, *p;
    u32 q;
    u8 nb, c, lvl;
    s32 mask;
    s32 nz, i, n;
    bb = *bs;
    n = 0;
    memset(out, 0, 64);
    {
        u32 bits = bb.bits;
        if (bits > 2) {
            c = bb.buf & 7;
            bb.bits = bits - 3;
            bb.buf >>= 3;
        } else {
            u32 *pp = bb.ptr;
            u32 w = *pp;
            c = (bb.buf | (w << bits)) & 7;
            bb.bits = bits + 32 - 3;
            bb.ptr = pp + 1;
            bb.buf = w >> (3 - bits);
        }
    }
    c = c + 1;
    head = list + 68;
    head[0] = 0x10;
    head[1] = 0x60;
    head[2] = 0xB0;
    head[3] = 2;
    mask = (s8)(1 << (c - 1));
    end = head + 4;
    nz = 0;
    for (lvl = c; lvl != 0; lvl--, mask >>= 1) {
        for (i = 0; i < nz; i++) {
            if (GB1(q)) {
                out[nzl[i]] += out[nzl[i]] < 0 ? -mask : mask;
                if (n++ == limit) goto done;
            }
        }
        p = head;
        while (p < end) {
            c = *p;
            if (c != 0 && GB1(q)) {
                switch (c & 3) {
                case 0:
                    c >>= 2;
                    *p = ((c + 4) << 2) + 1;
                    goto four;
                case 1:
                    c >>= 2;
                    *p = (c << 2) + 2;
                    *end++ = ((c + 4) << 2) + 2;
                    *end++ = ((c + 8) << 2) + 2;
                    *end++ = ((c + 12) << 2) + 2;
                    continue;
                case 2:
                    *p = 0;
                    c >>= 2;
                    p++;
                four:
                    RQ(0) c++;
                    RQ(1) c++;
                    RQ(2) c++;
                    RQ(3)
                    continue;
                case 3:
                    c >>= 2;
                    nzl[nz++] = c;
                    out[c] = GB1(q) ? -mask : mask;
                    if (n++ == limit) goto done;
                    *p = 0;
                    break;
                }
            }
            p++;
        }
    }
done:
    *bs = bb;
}

void fn_80293964(u16 *dst) {
    u16 t[32];
    u16 *d;
    u16 a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16;
    d = dst;
    ((void (*)(u16 *))fn_80293258)(t);
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
void fn_80293A94(u8 *dst, s32 pitch, s32 a, s32 b, u8 *add) {
    u8 t[64];
    u8 *d = dst;
    ((void (*)(u8 *, s32, s32))fn_80293258)(t, a, b);
    d[0] = t[0] + add[0];
    d[1] = t[1] + add[1];
    d[2] = t[4] + add[2];
    d[3] = t[5] + add[3];
    d[4] = t[8] + add[4];
    d[5] = t[9] + add[5];
    d[6] = t[12] + add[6];
    d[7] = t[13] + add[7];
    d += pitch;
    d[0] = t[2] + add[8];
    d[1] = t[3] + add[9];
    d[2] = t[6] + add[10];
    d[3] = t[7] + add[11];
    d[4] = t[10] + add[12];
    d[5] = t[11] + add[13];
    d[6] = t[14] + add[14];
    d[7] = t[15] + add[15];
    d += pitch;
    d[0] = t[24] + add[16];
    d[1] = t[25] + add[17];
    d[2] = t[44] + add[18];
    d[3] = t[45] + add[19];
    d[4] = t[16] + add[20];
    d[5] = t[17] + add[21];
    d[6] = t[20] + add[22];
    d[7] = t[21] + add[23];
    d += pitch;
    d[0] = t[26] + add[24];
    d[1] = t[27] + add[25];
    d[2] = t[46] + add[26];
    d[3] = t[47] + add[27];
    d[4] = t[18] + add[28];
    d[5] = t[19] + add[29];
    d[6] = t[22] + add[30];
    d[7] = t[23] + add[31];
    d += pitch;
    d[0] = t[28] + add[32];
    d[1] = t[29] + add[33];
    d[2] = t[32] + add[34];
    d[3] = t[33] + add[35];
    d[4] = t[48] + add[36];
    d[5] = t[49] + add[37];
    d[6] = t[52] + add[38];
    d[7] = t[53] + add[39];
    d += pitch;
    d[0] = t[30] + add[40];
    d[1] = t[31] + add[41];
    d[2] = t[34] + add[42];
    d[3] = t[35] + add[43];
    d[4] = t[50] + add[44];
    d[5] = t[51] + add[45];
    d[6] = t[54] + add[46];
    d[7] = t[55] + add[47];
    d += pitch;
    d[0] = t[36] + add[48];
    d[1] = t[37] + add[49];
    d[2] = t[40] + add[50];
    d[3] = t[41] + add[51];
    d[4] = t[56] + add[52];
    d[5] = t[57] + add[53];
    d[6] = t[60] + add[54];
    d[7] = t[61] + add[55];
    d += pitch;
    d[0] = t[38] + add[56];
    d[1] = t[39] + add[57];
    d[2] = t[42] + add[58];
    d[3] = t[43] + add[59];
    d[4] = t[58] + add[60];
    d[5] = t[59] + add[61];
    d[6] = t[62] + add[62];
    d[7] = t[63] + add[63];
}
