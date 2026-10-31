/* RAD Bink: 0x802878C0-0x8028B134 */
#include "bink_common.h"

void fn_80287EC0(s32 count) {
    extern u32 lbl_80300460[];
    u8 *p0;
    u8 *base;
    u8 *p1;
    s32 w;
    u32 y0;
    u32 y1;
    u32 stride;
    u32 *d0;
    u32 *d1;
    u32 *s0;
    u32 *s1;
    u32 *tbl;
    p0 = lbl_80300860[0];
    base = lbl_80300860[18];
    p1 = lbl_80300860[1];
    w = (s32)lbl_80300860[17];
    y0 = (s32)(p0 - base) / w;
    y1 = (s32)(p1 - base) / w;
    lbl_80300860[0] = p0 + count * 16;
    lbl_80300860[1] = p1 + count * 16;
    stride = (w * 4 + 63) & ~63;
    s1 = (u32 *)lbl_80300860[3];
    s0 = (u32 *)lbl_80300860[2];
    tbl = lbl_80300460;
    d0 = (u32 *)(base + stride * (y0 >> 2) + (y0 & 3) * 8 + (p0 - (base + y0 * w)) * 4);
    d1 = (u32 *)(base + stride * (y1 >> 2) + (y1 & 3) * 8 + (p1 - (base + y1 * w)) * 4);
    do {
        u32 a = *s0++;
        u32 b = *s1++;
        u32 c0 = tbl[a >> 24];
        u32 c1 = tbl[(a >> 16) & 0xFF];
        u32 c2 = tbl[(a >> 8) & 0xFF];
        u32 c3 = tbl[a & 0xFF];
        d0[0] = (c0 & 0xFFFF0000) | (c1 >> 16);
        d0[8] = (c0 << 16) | (c1 & 0xFFFF);
        d0[9] = (c2 << 16) | (c3 & 0xFFFF);
        d0[1] = (c2 & 0xFFFF0000) | (c3 >> 16);
        d0 += 16;
        c0 = tbl[b >> 24];
        c1 = tbl[(b >> 16) & 0xFF];
        c2 = tbl[(b >> 8) & 0xFF];
        c3 = tbl[b & 0xFF];
        d1[0] = (c0 & 0xFFFF0000) | (c1 >> 16);
        d1[1] = (c2 & 0xFFFF0000) | (c3 >> 16);
        d1[8] = (c0 << 16) | (c1 & 0xFFFF);
        d1[9] = (c2 << 16) | (c3 & 0xFFFF);
        d1 += 16;
    } while (--count);
    lbl_80300860[3] = (u8 *)s1;
    lbl_80300860[2] = (u8 *)s0;
}

void fn_80288990(s32 count) {
    u8 *s0 = lbl_80300860[0];
    u8 *base = lbl_80300860[18];
    u8 *s1 = lbl_80300860[1];
    s32 width = (s32)lbl_80300860[17];
    u32 n = count;
    s32 row0, row1;
    u8 *d0, *d1;
    u32 *src0, *src1;
    u32 a, b;
    s32 stride;

    row0 = (s0 - base) / width;
    row1 = (s1 - base) / width;
    lbl_80300860[0] = s0 + count * 8;
    lbl_80300860[1] = s1 + count * 8;
    src0 = (u32 *)lbl_80300860[2];
    src1 = (u32 *)lbl_80300860[3];
    stride = (width * 4 + 31) & ~31;
    d0 = base + stride * ((u32)row0 >> 2);
    d0 += (row0 & 3) * 8;
    d0 += (s0 - (base + row0 * width)) * 4;
    d1 = base + stride * ((u32)row1 >> 2);
    d1 += (row1 & 3) * 8;
    d1 += (s1 - (base + row1 * width)) * 4;
    do {
        a = *src0++;
        b = *src1++;
        ((u32 *)d0)[0] = ((u16)((u32 *)lbl_802FFC60)[(a >> 16) >> 8] << 16) | (u16)((u32 *)lbl_802FFC60)[(a >> 16) & 0xFF];
        ((u32 *)d1)[0] = ((u16)((u32 *)lbl_802FFC60)[(b >> 16) >> 8] << 16) | (u16)((u32 *)lbl_802FFC60)[(b >> 16) & 0xFF];
        ((u32 *)d0)[1] = ((u16)((u32 *)lbl_802FFC60)[(a & 0xFFFF) >> 8] << 16) | (u16)((u32 *)lbl_802FFC60)[a & 0xFF];
        d0 += 32;
        ((u32 *)d1)[1] = ((u16)((u32 *)lbl_802FFC60)[(b & 0xFFFF) >> 8] << 16) | (u16)((u32 *)lbl_802FFC60)[b & 0xFF];
        d1 += 32;
    } while (--n != 0);
    lbl_80300860[3] = (u8 *)src1;
    lbl_80300860[2] = (u8 *)src0;
}

void fn_8028A7A0(void) {

}

void fn_8028A7A4(void) {

}

void fn_8028A7A8(void) {

}

void fn_8028A7AC(void) {

}

void fn_8028A7B0(void) {
}

void fn_8028A7B4(void) {
}

void fn_8028A7B8(void) {
}

void fn_8028A7BC(void) {
}

u8 *fn_8028A7C0(u8 *addr, s32 pitch) {
    u8 *base = lbl_80300860[18];
    s32 row = (addr - base) / (s32)lbl_80300860[17];
    return base + pitch * ((u32)row >> 2) + ((row & 3) << 3) + ((addr - (base + row * (s32)lbl_80300860[17])) << 2);
}

void fn_8028AEAC(s32 n) {
    u32 *dst = (u32 *)lbl_80300860[0];
    u32 *src = (u32 *)lbl_80300860[2];
    s32 i = n;
    while (--i != -1) {
        u32 v = *src++;
        *dst++ = (v & 0xFF000000) + ((v >> 8) & 0xFF00) + 0x800080;
        *dst++ = ((v << 16) & 0xFF000000) + ((v & 0xFF) << 8) + 0x800080;
    }
    dst = (u32 *)lbl_80300860[1];
    src = (u32 *)lbl_80300860[3];
    i = n;
    while (--i != -1) {
        u32 v = *src++;
        *dst++ = (v & 0xFF000000) + ((v >> 8) & 0xFF00) + 0x800080;
        *dst++ = ((v << 16) & 0xFF000000) + ((v & 0xFF) << 8) + 0x800080;
    }
    lbl_80300860[0] += n * 8;
    lbl_80300860[1] += n * 8;
    lbl_80300860[2] += n * 4;
    lbl_80300860[3] += n * 4;
}

void fn_8028AFB8(s32 n) {
    u32 *dst = (u32 *)lbl_80300860[0];
    u32 *src = (u32 *)lbl_80300860[2];
    s32 i = n;
    while (--i != -1) {
        u32 v = *src++;
        *dst++ = (v & 0xFF000000) + ((v & 0xFF000000) >> 16) + 0x800080;
        *dst++ = ((v & 0xFF0000) << 8) + ((v & 0xFF0000) >> 8) + 0x800080;
        *dst++ = ((v & 0xFF00) << 16) + (v & 0xFF00) + 0x800080;
        *dst++ = ((v & 0xFF) << 24) + ((v & 0xFF) << 8) + 0x800080;
    }
    dst = (u32 *)lbl_80300860[1];
    src = (u32 *)lbl_80300860[3];
    i = n;
    while (--i != -1) {
        u32 v = *src++;
        *dst++ = (v & 0xFF000000) + ((v & 0xFF000000) >> 16) + 0x800080;
        *dst++ = ((v & 0xFF0000) << 8) + ((v & 0xFF0000) >> 8) + 0x800080;
        *dst++ = ((v & 0xFF00) << 16) + (v & 0xFF00) + 0x800080;
        *dst++ = ((v & 0xFF) << 24) + ((v & 0xFF) << 8) + 0x800080;
    }
    lbl_80300860[0] += n * 16;
    lbl_80300860[1] += n * 16;
    lbl_80300860[2] += n * 4;
    lbl_80300860[3] += n * 4;
}
