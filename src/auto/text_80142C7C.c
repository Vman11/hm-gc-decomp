/* Functions from 0x80142C7C to 0x80144B64, found by decomp-toolkit. */
#include "common.h"
typedef struct Img {
    u8 pad0[4];
    u32 key;
    u32 val;
    u8 c[4];
    u8 r[4];
    u8 pad14[0x9c - 0x14];
    s32 n;
    u8 padA0[4];
    s32 m;
    u8 padA8[8];
    u8 *src;
    u8 padB4[0x138 - 0xb4];
    u8 buf[0x44];
    u8 *dst;
    u8 pad180[4];
    u8 *px;
} Img;

void fn_80142E60(Img *p) {
    s32 n = p->n;
    s32 m = p->m;
    u8 *s = p->buf;
    u8 *d = p->dst;
    s32 e = n * 2 - m;
    u8 *dend = d + m;
    do {
        *d = *s;
        if (e <= 0) {
            e += n * 2;
            d++;
        } else {
            e += (n - m) * 2;
            s++;
            d++;
        }
    } while (d < dend);
}

void fn_80142FB0(Img *p) {
    u8 f;
    u8 *q = p->px;
    u8 *end = q + p->n * 4;
    for (; q < end; q += 4) {
        f = 0;
        if (p->c[0] == q[0] && p->c[1] == q[1] && p->c[2] == q[2]) {
            f = 1;
        }
        if (f) {
            q[3] = 0;
        }
    }
}

void fn_8014302C(Img *p) {
    u8 f;
    u8 *q = p->px;
    u8 *end = q + p->n * 4;
    for (; q < end; q += 4) {
        f = 0;
        if (p->c[0] == q[0] && p->c[1] == q[1] && p->c[2] == q[2]) {
            f = 1;
        }
        if (f) {
            q[0] = p->r[0];
            q[1] = p->r[1];
            q[2] = p->r[2];
            q[3] = p->r[3];
        }
    }
}

void fn_80143218(Img *p) {
    u8 *q = p->buf;
    u8 *end = q + p->n;
    for (; q < end; q++) {
        if (*q == p->key) {
            *q = p->val;
        }
    }
}

void fn_801448B8(Img *p) {
    u8 *d = p->buf;
    u8 *e = d + 0x20;
    do {
        d[0] = p->src[0];
        d[1] = p->src[1];
        d[2] = p->src[2];
        d[3] = p->src[3];
        d += 4;
        p->src += 4;
    } while (d < e);
}

void fn_8014490C(Img *p) {
    u32 *s = (u32 *)p->src;
    u32 *d = (u32 *)p->buf;
    u32 *e = d + 8;
    do {
        d[0] = s[0];
        d[1] = s[1];
        d[2] = s[2];
        d[3] = s[3];
        s += 4;
        d += 4;
    } while (d < e);
    p->src += 0x20;
}

void fn_80144958(Img *p) {
    u8 *d = p->buf;
    u8 *e = d + 0x20;
    do {
        d[0] = *p->src & 0xF;
        p->src++;
        d[1] = *p->src >> 4;
        d[2] = *p->src & 0xF;
        p->src++;
        d[3] = *p->src >> 4;
        d += 4;
    } while (d < e);
}

void fn_801449C8(Img *p) {
    u8 *d = p->buf;
    u8 *e = d + 0x20;
    do {
        d[0] = *p->src >> 4;
        d[1] = *p->src & 0xF;
        p->src++;
        d[2] = *p->src >> 4;
        d[3] = *p->src & 0xF;
        d += 4;
        p->src++;
    } while (d < e);
}

