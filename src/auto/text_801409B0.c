/* Functions from 0x801409B0 to 0x80142990, found by decomp-toolkit. */
#include "common.h"

typedef struct ImgDec {
    u8 pad0[0x3C];
    u32 shr[3];
    u8 pad48[4];
    u32 shl[3];
    u8 pad58[0x7C - 0x58];
    u32 mask[3];
    u8 pad88[0x9C - 0x88];
    s32 count;
    u8 padA0[0xB0 - 0xA0];
    u8 *src;
    u8 *out;
    u8 padB8[0x138 - 0xB8];
    u8 buf[0x184 - 0x138];
    u8 *dst;
    u8 pad188[4];
    u8 *px;
} ImgDec;

void fn_80141268(ImgDec *p) {
    u8 *s = p->px;
    u8 *e = s + ((u32)p->count >> 1);
    do {
        u8 v = *s;
        s++;
        *p->out = v;
        p->out++;
    } while (s < e);
}

void fn_8014136C(ImgDec *p) {
    u8 *d = p->dst;
    u8 *e = d + p->count * 4;
    do {
        d[2] = p->src[0];
        d[1] = p->src[1];
        d[0] = p->src[2];
        d[3] = p->src[3];
        d += 4;
        p->src += 4;
    } while (d < e);
}

void fn_801413C8(ImgDec *p) {
    u8 *d = p->dst;
    u8 *e = d + p->count * 4;
    do {
        d[0] = p->src[0];
        d[1] = p->src[1];
        d[2] = p->src[2];
        d[3] = p->src[3];
        d += 4;
        p->src += 4;
    } while (d < e);
}

void fn_80141424(ImgDec *p) {
    u32 *s = (u32 *)p->src;
    u8 *d = p->dst;
    u8 *e = d + p->count * 4;
    do {
        u32 v;
        v = *s >> p->shr[0];
        d[0] = (v << p->shl[0]) | (v & p->mask[0]);
        v = *s >> p->shr[1];
        d[1] = (v << p->shl[1]) | (v & p->mask[1]);
        v = *s >> p->shr[2];
        s++;
        d[2] = (v << p->shl[2]) | (v & p->mask[2]);
        d[3] = 0xFF;
        d += 4;
    } while (d < e);
    p->src += p->count * 4;
}

void fn_8014188C(ImgDec *p) {
    u8 *e;
    u16 *s;
    u8 *d;
    u32 v;
    d = p->dst;
    s = (u16 *)p->src;
    e = d + p->count * 4;
    do {
        v = (u32)*s >> p->shr[0];
        d[0] = (v << p->shl[0]) | (v & p->mask[0]);
        v = (u32)*s >> p->shr[1];
        d[1] = (v << p->shl[1]) | (v & p->mask[1]);
        v = (u32)*s >> p->shr[2];
        s++;
        d[2] = (v << p->shl[2]) | (v & p->mask[2]);
        d[3] = 0xFF;
        d += 4;
    } while (d < e);
    p->src += p->count * 2;
}

void fn_8014193C(ImgDec *p) {
    u8 *e = (u8 *)p + p->count;
    u8 *d = p->buf;
    e = e + 0x138;
    do {
        *d = *p->src++;
        d++;
    } while (d < e);
}

void fn_80141970(ImgDec *p) {
    u8 *d;
    s32 n;
    n = p->count;
    d = p->buf;
    do {
        d[0] = *p->src & 0xF;
        p->src++;
        if (--n == 0) return;
        d[1] = *p->src >> 4;
        d += 2;
    } while (--n != 0);
}

void fn_801419BC(ImgDec *p) {
    u8 *d;
    s32 n;
    n = p->count;
    d = p->buf;
    do {
        d[0] = *p->src >> 4;
        if (--n == 0) return;
        d[1] = *p->src & 0xF;
        d += 2;
        p->src++;
    } while (--n != 0);
}

