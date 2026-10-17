/* Functions from 0x80142C7C to 0x80144B64, found by decomp-toolkit. */
#include "common.h"
typedef struct Img {
    u8 pad0[4];
    u32 key;
    u32 val;
    u8 c[4];
    u8 r[4];
    u8 pad14[0x3c - 0x14];
    u32 rsh[3];
    u32 alphaShift;
    u32 lsh[3];
    u32 alphaLeftShift;
    u8 pad5C[0x7c - 0x5c];
    u32 mask[4];
    u8 pad8C[0x9c - 0x8c];
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

void fn_80142C7C(Img *p) {
    s32 m = p->m;
    u8 *s = p->buf + 0x20;
    s32 n = p->n;
    s32 n2 = m * 2;
    u8 *d = *(u8 **)((u8 *)p + 0x180);
    u8 *send = s + n;
    s32 e = n2 - n;
    do {
        if (e <= 0) {
            e += n2;
        } else {
            e += (m - n) * 2;
            *d = *s;
            d++;
        }
        s++;
    } while (s < send);
}

void fn_80142CD0(Img *p) {
    s32 n = p->n;
    u8 *s = p->buf + 0x20;
    s32 m = p->m;
    u8 *d = *(u8 **)((u8 *)p + 0x180);
    s32 n2 = n * 2;
    s32 e = n2 - m;
    u8 *dend = d + m;
    do {
        *d = *s;
        if (e <= 0) {
            e += n2;
            d++;
        } else {
            e += (n - m) * 2;
            s++;
            d++;
        }
    } while (d < dend);
}

void fn_80142D28(Img *p) {
    s32 m = p->m;
    s32 n = p->n;
    s32 m2 = m * 2;
    u8 *s = p->px;
    u8 *d = *(u8 **)((u8 *)p + 0x178);
    s32 e = m2 - n;
    u8 *send = s + n * 4;
    do {
        if (e <= 0) {
            e += m2;
        } else {
            e += (m - n) * 2;
            d[0] = s[0];
            d[1] = s[1];
            d[2] = s[2];
            d[3] = s[3];
            d += 4;
        }
        s += 4;
    } while (s < send);
}

void fn_80142D98(Img *p) {
    s32 n = p->n;
    s32 m = p->m;
    s32 n2 = n * 2;
    u8 *d = *(u8 **)((u8 *)p + 0x178);
    u8 *s = p->px;
    s32 e = n2 - m;
    u8 *dend = d + m * 4;
    do {
        d[0] = s[0];
        d[1] = s[1];
        d[2] = s[2];
        d[3] = s[3];
        if (e <= 0) {
            e += n2;
            d += 4;
        } else {
            e += (n - m) * 2;
            s += 4;
            d += 4;
        }
    } while (d < dend);
}

void fn_80142E0C(Img *p) {
    s32 m = p->m;
    s32 n = p->n;
    s32 m2 = m * 2;
    s32 e = m2 - n;
    s32 k = (m - n) * 2;
    u8 *d;
    u8 *s;
    u8 *send;
    s = p->buf;
    d = p->dst;
    send = s + n;
    do {
        if (e <= 0) {
            e += m2;
        } else {
            e += k;
            *d = *s;
            d++;
        }
        s++;
    } while (s < send);
}

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

void fn_80142EB8(Img *p) {
    u8 *q = p->px;
    u8 *end = q + p->n * 4;
    for (; q < end; q += 4) {
        q[0] = (*(u8 **)((u8 *)p + 0x594))[q[0]];
        q[1] = (*(u8 **)((u8 *)p + 0x594))[q[1] + 0x100];
        q[2] = (*(u8 **)((u8 *)p + 0x594))[q[2] + 0x200];
    }
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

void fn_801430C0(Img *p) {
    u8 *q = p->px;
    u8 *d = p->buf + 0x20;
    u8 *end = q + p->n * 4;
    for (; q < end; q += 4) {
        *d = (q[0] != p->c[0]) | (q[1] != p->c[1]) | (q[2] != p->c[2]);
        d++;
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

void fn_80143258(Img *p) {
    u8 *q = p->buf;
    u8 *d = p->buf + 0x20;
    u8 *end = q + p->n;
    for (; q < end; q++) {
        *d = *q != p->key;
        d++;
    }
}

void fn_80143334(Img *p) {
    u8 *q = p->buf;
    u8 *d = p->px;
    u8 *end = q + p->n;
    for (; q < end; q++) {
        u8 *c = (u8 *)p + 0x194 + *q * 4;
        d[0] = c[0];
        d[1] = c[1];
        d[2] = c[2];
        d[3] = c[3];
        d += 4;
    }
}

void fn_80143474(Img *p) {
    u8 *q = p->buf;
    u8 *end = q + p->n;
    for (; q < end; q++) {
        *q = (*(u8 **)((u8 *)p + 0x598))[*q];
    }
}

void fn_801437B4(Img *p) {
    u8 *d = p->px;
    u8 *e = d + 0x80;
    do {
        d[2] = p->src[0];
        d[1] = p->src[1];
        d[0] = p->src[2];
        d[3] = p->src[3];
        p->src += 4;
        d[6] = p->src[0];
        d[5] = p->src[1];
        d[4] = p->src[2];
        d[7] = p->src[3];
        p->src += 4;
        d[10] = p->src[0];
        d[9] = p->src[1];
        d[8] = p->src[2];
        d[11] = p->src[3];
        p->src += 4;
        d[14] = p->src[0];
        d[13] = p->src[1];
        d[12] = p->src[2];
        d[15] = p->src[3];
        p->src += 4;
        d += 16;
    } while (d < e);
}

void fn_801438BC(Img *p) {
    u8 *d = p->px;
    u8 *e = d + 0x80;
    do {
        d[0] = p->src[0];
        d[1] = p->src[1];
        d[2] = p->src[2];
        d[3] = p->src[3];
        p->src += 4;
        d[4] = p->src[0];
        d[5] = p->src[1];
        d[6] = p->src[2];
        d[7] = p->src[3];
        p->src += 4;
        d[8] = p->src[0];
        d[9] = p->src[1];
        d[10] = p->src[2];
        d[11] = p->src[3];
        p->src += 4;
        d[12] = p->src[0];
        d[13] = p->src[1];
        d[14] = p->src[2];
        d[15] = p->src[3];
        p->src += 4;
        d += 16;
    } while (d < e);
}

void fn_801439C4(Img *p) {
    u32 *s = (u32 *)p->src;
    u8 *d = p->px;
    u8 *e = d + 0x80;
    u32 v;
    do {
        v = s[0] >> p->rsh[0]; d[0] = (v << p->lsh[0]) | (v & p->mask[0]);
        v = s[0] >> p->rsh[1]; d[1] = (v << p->lsh[1]) | (v & p->mask[1]);
        v = s[0] >> p->rsh[2]; d[2] = (v << p->lsh[2]) | (v & p->mask[2]);
        d[3] = 0xFF;
        v = s[1] >> p->rsh[0]; d[4] = (v << p->lsh[0]) | (v & p->mask[0]);
        v = s[1] >> p->rsh[1]; d[5] = (v << p->lsh[1]) | (v & p->mask[1]);
        v = s[1] >> p->rsh[2]; d[6] = (v << p->lsh[2]) | (v & p->mask[2]);
        d[7] = 0xFF;
        v = s[2] >> p->rsh[0]; d[8] = (v << p->lsh[0]) | (v & p->mask[0]);
        v = s[2] >> p->rsh[1]; d[9] = (v << p->lsh[1]) | (v & p->mask[1]);
        v = s[2] >> p->rsh[2]; d[10] = (v << p->lsh[2]) | (v & p->mask[2]);
        d[11] = 0xFF;
        v = s[3] >> p->rsh[0]; d[12] = (v << p->lsh[0]) | (v & p->mask[0]);
        v = s[3] >> p->rsh[1]; d[13] = (v << p->lsh[1]) | (v & p->mask[1]);
        v = s[3] >> p->rsh[2]; d[14] = (v << p->lsh[2]) | (v & p->mask[2]);
        s += 4;
        d[15] = 0xFF;
        d += 16;
    } while (d < e);
    p->src += 0x80;
}

void fn_80143BB4(Img *p) {
    u8 *d = p->px;
    u8 *e = d + 0x80;
    do {
        d[2] = p->src[0];
        d[1] = p->src[1];
        d[0] = p->src[2];
        d[3] = 0xFF;
        p->src += 4;
        d[6] = p->src[0];
        d[5] = p->src[1];
        d[4] = p->src[2];
        d[7] = 0xFF;
        p->src += 4;
        d[10] = p->src[0];
        d[9] = p->src[1];
        d[8] = p->src[2];
        d[11] = 0xFF;
        p->src += 4;
        d[14] = p->src[0];
        d[13] = p->src[1];
        d[12] = p->src[2];
        d[15] = 0xFF;
        d += 0x10;
        p->src += 4;
    } while (d < e);
}

void fn_80143CA0(Img *p) {
    u8 *d = p->px;
    u8 *e = d + 0x80;
    do {
        d[0] = p->src[0];
        d[1] = p->src[1];
        d[2] = p->src[2];
        d[3] = 0xFF;
        p->src += 4;
        d[4] = p->src[0];
        d[5] = p->src[1];
        d[6] = p->src[2];
        d[7] = 0xFF;
        p->src += 4;
        d[8] = p->src[0];
        d[9] = p->src[1];
        d[10] = p->src[2];
        d[11] = 0xFF;
        p->src += 4;
        d[12] = p->src[0];
        d[13] = p->src[1];
        d[14] = p->src[2];
        d[15] = 0xFF;
        p->src += 4;
        d += 16;
    } while (d < e);
}

void fn_80144044(Img *p) {
    u8 *d = p->px;
    u8 *e = d + 0x80;
    do {
        d[2] = p->src[0];
        d[1] = p->src[1];
        d[0] = p->src[2];
        d[3] = 0xFF;
        p->src += 3;
        d[6] = p->src[0];
        d[5] = p->src[1];
        d[4] = p->src[2];
        d[7] = 0xFF;
        p->src += 3;
        d[10] = p->src[0];
        d[9] = p->src[1];
        d[8] = p->src[2];
        d[11] = 0xFF;
        p->src += 3;
        d[14] = p->src[0];
        d[13] = p->src[1];
        d[12] = p->src[2];
        d[15] = 0xFF;
        d += 16;
        p->src += 3;
    } while (d < e);
}

void fn_80144130(Img *p) {
    u8 *d = p->px;
    u8 *e = d + 0x80;
    do {
        d[0] = p->src[0];
        d[1] = p->src[1];
        d[2] = p->src[2];
        d[3] = 0xFF;
        p->src += 3;
        d[4] = p->src[0];
        d[5] = p->src[1];
        d[6] = p->src[2];
        d[7] = 0xFF;
        p->src += 3;
        d[8] = p->src[0];
        d[9] = p->src[1];
        d[10] = p->src[2];
        d[11] = 0xFF;
        p->src += 3;
        d[12] = p->src[0];
        d[13] = p->src[1];
        d[14] = p->src[2];
        d[15] = 0xFF;
        p->src += 3;
        d += 16;
    } while (d < e);
}

void fn_8014421C(Img *p) {
    u16 *s;
    u8 *d = p->px;
    u8 *e;
    u32 v;
    s = (u16 *)p->src;
    e = d + 0x80;
    do {
        v = (u32)s[0] >> p->rsh[0];
        d[0] = (v << p->lsh[0]) | (v & p->mask[0]);
        v = (u32)s[0] >> p->rsh[1];
        d[1] = (v << p->lsh[1]) | (v & p->mask[1]);
        v = (u32)s[0] >> p->rsh[2];
        d[2] = (v << p->lsh[2]) | (v & p->mask[2]);
        v = (u32)s[0] >> p->alphaShift;
        d[3] = ~(v & 1) + 1;
        v = (u32)s[1] >> p->rsh[0];
        d[4] = (v << p->lsh[0]) | (v & p->mask[0]);
        v = (u32)s[1] >> p->rsh[1];
        d[5] = (v << p->lsh[1]) | (v & p->mask[1]);
        v = (u32)s[1] >> p->rsh[2];
        d[6] = (v << p->lsh[2]) | (v & p->mask[2]);
        v = (u32)s[1] >> p->alphaShift;
        d[7] = ~(v & 1) + 1;
        v = (u32)s[2] >> p->rsh[0];
        d[8] = (v << p->lsh[0]) | (v & p->mask[0]);
        v = (u32)s[2] >> p->rsh[1];
        d[9] = (v << p->lsh[1]) | (v & p->mask[1]);
        v = (u32)s[2] >> p->rsh[2];
        d[10] = (v << p->lsh[2]) | (v & p->mask[2]);
        v = (u32)s[2] >> p->alphaShift;
        d[11] = ~(v & 1) + 1;
        v = (u32)s[3] >> p->rsh[0];
        d[12] = (v << p->lsh[0]) | (v & p->mask[0]);
        v = (u32)s[3] >> p->rsh[1];
        d[13] = (v << p->lsh[1]) | (v & p->mask[1]);
        v = (u32)s[3] >> p->rsh[2];
        d[14] = (v << p->lsh[2]) | (v & p->mask[2]);
        v = (u32)s[3] >> p->alphaShift;
        s += 4;
        d[15] = ~(v & 1) + 1;
        d += 16;
    } while (d < e);
    p->src += 0x40;
}

void fn_801446C8(Img *p) {
    u16 *s;
    u8 *d = p->px;
    u8 *e;
    u32 v;
    s = (u16 *)p->src;
    e = d + 0x80;
    do {
        v = (u32)s[0] >> p->rsh[0];
        d[0] = (v << p->lsh[0]) | (v & p->mask[0]);
        v = (u32)s[0] >> p->rsh[1];
        d[1] = (v << p->lsh[1]) | (v & p->mask[1]);
        v = (u32)s[0] >> p->rsh[2];
        d[2] = (v << p->lsh[2]) | (v & p->mask[2]);
        d[3] = 0xFF;
        v = (u32)s[1] >> p->rsh[0];
        d[4] = (v << p->lsh[0]) | (v & p->mask[0]);
        v = (u32)s[1] >> p->rsh[1];
        d[5] = (v << p->lsh[1]) | (v & p->mask[1]);
        v = (u32)s[1] >> p->rsh[2];
        d[6] = (v << p->lsh[2]) | (v & p->mask[2]);
        d[7] = 0xFF;
        v = (u32)s[2] >> p->rsh[0];
        d[8] = (v << p->lsh[0]) | (v & p->mask[0]);
        v = (u32)s[2] >> p->rsh[1];
        d[9] = (v << p->lsh[1]) | (v & p->mask[1]);
        v = (u32)s[2] >> p->rsh[2];
        d[10] = (v << p->lsh[2]) | (v & p->mask[2]);
        d[11] = 0xFF;
        v = (u32)s[3] >> p->rsh[0];
        d[12] = (v << p->lsh[0]) | (v & p->mask[0]);
        v = (u32)s[3] >> p->rsh[1];
        d[13] = (v << p->lsh[1]) | (v & p->mask[1]);
        v = (u32)s[3] >> p->rsh[2];
        s += 4;
        d[14] = (v << p->lsh[2]) | (v & p->mask[2]);
        d[15] = 0xFF;
        d += 16;
    } while (d < e);
    p->src += 0x40;
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

void fn_80144A38(Img *p) {
    u8 *d = p->buf;
    u8 *e = d + 0x20;
    do {
        d[0] = *p->src >> 4;
        p->src++;
        d[1] = *p->src & 0xF;
        d[2] = *p->src >> 4;
        p->src++;
        d[3] = *p->src & 0xF;
        d += 4;
    } while (d < e);
}

void fn_80144AA8(Img *p) {
    u8 *d = p->buf;
    u8 *e = d + 0x20;
    do {
        d[0] = *p->src & 0xF;
        d[1] = *p->src >> 4;
        p->src++;
        d[2] = *p->src & 0xF;
        d[3] = *p->src >> 4;
        d += 4;
        p->src++;
    } while (d < e);
}

void fn_80144B18(Img *p) {
    u32 *d = (u32 *)p->buf;
    u32 *e = d + 4;
    u32 *s = (u32 *)p->src;
    do {
        d[0] = s[0];
        d[1] = s[1];
        d[2] = s[2];
        d[3] = s[3];
        s += 4;
        d += 4;
    } while (d < e);
    p->src += 0x10;
}

