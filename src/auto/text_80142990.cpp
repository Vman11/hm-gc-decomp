#include "common.h"
struct C80121E80 {
    u8 b[4];
    C80121E80();
};
namespace m80142990 {
struct V3 { f32 x, y, z; };
struct C4 { u8 r, g, b, a; };
struct P;
typedef void (P::*PMF)();
struct P {
    u8 pad0[140];
    void *o140;
    u8 pad144[12];
    s32 n156;
    void *o160;
    u8 pad164[224];
    u8 *buf388;
    u8 pad392[1336];
    u8 *a1728;
    u8 *a1732;
    C4 c1736;
    f32 f1740;
    u8 pad1744[36];
    PMF pmf;
};
extern "C" {
void fn_80101820(V3 *);
void fn_80142990(P *p) {
    C4 loc;
    u8 *q;
    u8 *end;
    u8 a;
    V3 v;
    if (p->o160) {
        if (p->o160 == p->o140) {
            u8 *s = p->buf388;
            p->c1736.r = s[0];
            p->c1736.g = s[1];
            p->c1736.b = s[2];
            p->c1736.a = s[3];
            p->a1732 = p->a1728;
        }
        {
            s32 sn;
            u8 *sb = p->buf388;
            p->buf388 = (u8 *)&loc;
            sn = p->n156;
            p->n156 = 1;
            (p->*(p->pmf))();
            p->buf388 = sb;
            p->n156 = sn;
        }
    } else {
        loc.r = p->c1736.r;
        loc.g = p->c1736.g;
        loc.b = p->c1736.b;
        loc.a = p->c1736.a;
    }
    q = p->buf388;
    end = (u8 *)&((u32 *)q)[p->n156] - 4;
    for (; q < end; q += 4) {
        a = q[3];
        v.x = (f32)(s32)a - (f32)(s32)q[7];
        v.y = (f32)(s32)*p->a1732 - (f32)(s32)a;
        v.z = p->f1740;
        fn_80101820(&v);
        q[0] = (s32)(127.5f * (1.0f + v.x));
        q[1] = (s32)(127.5f * (1.0f + v.y));
        q[2] = (s32)(127.5f * (1.0f + v.z));
        *p->a1732 = a;
        p->a1732++;
    }
    a = q[3];
    v.x = (f32)(s32)a - (f32)(s32)loc.a;
    v.y = (f32)(s32)*p->a1732 - (f32)(s32)a;
    v.z = p->f1740;
    fn_80101820(&v);
    q[0] = (s32)(127.5f * (1.0f + v.x));
    q[1] = (s32)(127.5f * (1.0f + v.y));
    q[2] = (s32)(127.5f * (1.0f + v.z));
    *p->a1732 = a;
    p->a1732++;
}
}

} /* namespace m80142990 */

namespace m80142C7C {
#pragma exceptions off
extern "C" {
/* Functions from 0x80142C7C to 0x80144B64, found by decomp-toolkit. */
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

typedef struct Img_80142C7C {
    u8 pad0[0x9c];
    s32 n;
    u8 padA0[4];
    s32 m;
    u8 padA8[0x158 - 0xa8];
    u8 buf2[0x28];
    u8 *d180;
} Img_80142C7C;
void fn_80142C7C(Img_80142C7C *p) {
    s32 m = p->m;
    s32 n = p->n;
    s32 m2 = m * 2;
    s32 e = m2 - n;
    s32 k = (m - n) * 2;
    u8 *d;
    u8 *s;
    u8 *send;
    s = p->buf2;
    d = p->d180;
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
void fn_80142CD0(Img_80142C7C *p) {
    s32 n = p->n;
    s32 m = p->m;
    s32 e;
    s32 n2 = n * 2;
    s32 k;
    u8 *s;
    u8 *d;
    u8 *dend;
    e = n2 - m;
    k = (n - m) * 2;
    s = p->buf2;
    d = p->d180;
    dend = d + m;
    do {
        *d = *s;
        if (e <= 0) { e += n2; d++; }
        else { e += k; s++; d++; }
    } while (d < dend);
}

void fn_80142D28(Img *p) {
    s32 m = p->m;
    s32 n = p->n;
    s32 m2 = m * 2;
    s32 e = m2 - n;
    s32 k = (m - n) * 2;
    u8 *d;
    u8 *s;
    u8 *send;
    s = p->px;
    d = *(u8 **)((u8 *)p + 0x178);
    send = s + n * 4;
    do {
        if (e <= 0) { e += m2; }
        else {
            e += k;
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
    s32 e;
    s32 n2 = n * 2;
    s32 k;
    u8 *s;
    u8 *d;
    u8 *dend;
    e = n2 - m;
    k = (n - m) * 2;
    s = p->px;
    d = *(u8 **)((u8 *)p + 0x178);
    dend = d + m * 4;
    do {
        d[0] = s[0]; d[1] = s[1]; d[2] = s[2]; d[3] = s[3];
        if (e <= 0) { e += n2; d += 4; }
        else { e += k; s += 4; d += 4; }
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
    s32 e;
    s32 n2 = n * 2;
    s32 k;
    u8 *s;
    u8 *d;
    u8 *dend;
    e = n2 - m;
    k = (n - m) * 2;
    s = p->buf;
    d = p->dst;
    dend = d + m;
    do {
        *d = *s;
        if (e <= 0) { e += n2; d++; }
        else { e += k; s++; d++; }
    } while (d < dend);
}

typedef struct Img_80142EB8 {
    u8 pad0[0x9c];
    s32 n;
    u8 padA0[0x184 - 0xa0];
    u8 *px;
    u8 pad188[0x594 - 0x188];
    u8 *tab;
} Img_80142EB8;
void fn_80142EB8(Img_80142EB8 *p) {
    u8 *q = p->px;
    u8 *end = q + p->n * 4;
    for (; q < end; q += 4) {
        q[0] = (u8)p->tab[q[0]];
        q[1] = (u8)p->tab[q[1] + 256];
        q[2] = (u8)p->tab[q[2] + 512];
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

void fn_80143548(Img *p) {
    u32 *s;
    u8 *d = p->px;
    u8 *e;
    u32 v;
    s = (u32 *)p->src;
    e = d + 0x80;
    do {
        v = s[0] >> p->rsh[0];
        d[0] = (v << p->lsh[0]) | (v & p->mask[0]);
        v = s[0] >> p->rsh[1];
        d[1] = (v << p->lsh[1]) | (v & p->mask[1]);
        v = s[0] >> p->rsh[2];
        d[2] = (v << p->lsh[2]) | (v & p->mask[2]);
        v = s[0] >> p->alphaShift;
        d[3] = (v << p->alphaLeftShift) | (v & p->mask[3]);
        v = s[1] >> p->rsh[0];
        d[4] = (v << p->lsh[0]) | (v & p->mask[0]);
        v = s[1] >> p->rsh[1];
        d[5] = (v << p->lsh[1]) | (v & p->mask[1]);
        v = s[1] >> p->rsh[2];
        d[6] = (v << p->lsh[2]) | (v & p->mask[2]);
        v = s[1] >> p->alphaShift;
        d[7] = (v << p->alphaLeftShift) | (v & p->mask[3]);
        v = s[2] >> p->rsh[0];
        d[8] = (v << p->lsh[0]) | (v & p->mask[0]);
        v = s[2] >> p->rsh[1];
        d[9] = (v << p->lsh[1]) | (v & p->mask[1]);
        v = s[2] >> p->rsh[2];
        d[10] = (v << p->lsh[2]) | (v & p->mask[2]);
        v = s[2] >> p->alphaShift;
        d[11] = (v << p->alphaLeftShift) | (v & p->mask[3]);
        v = s[3] >> p->rsh[0];
        d[12] = (v << p->lsh[0]) | (v & p->mask[0]);
        v = s[3] >> p->rsh[1];
        d[13] = (v << p->lsh[1]) | (v & p->mask[1]);
        v = s[3] >> p->rsh[2];
        d[14] = (v << p->lsh[2]) | (v & p->mask[2]);
        v = s[3] >> p->alphaShift;
        s += 4;
        d[15] = (v << p->alphaLeftShift) | (v & p->mask[3]);
        d += 16;
    } while (d < e);
    p->src += 0x80;
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

void fn_80143D8C(Img *p) {
    u8 *d = p->px;
    u8 *e = d + 0x80;
    u32 c;
    u32 v;
    do {
        c = p->src[0];
        c |= p->src[1] << 8;
        c |= p->src[2] << 16;
        p->src += 3;
        v = c >> p->rsh[0];
        d[0] = (v << p->lsh[0]) | (v & p->mask[0]);
        v = c >> p->rsh[1];
        d[1] = (v << p->lsh[1]) | (v & p->mask[1]);
        v = c >> p->rsh[2];
        d[2] = (v << p->lsh[2]) | (v & p->mask[2]);
        v = c >> p->alphaShift;
        d[3] = (v << p->alphaLeftShift) | (v & p->mask[3]);
        c = p->src[0];
        c |= p->src[1] << 8;
        c |= p->src[2] << 16;
        p->src += 3;
        v = c >> p->rsh[0];
        d[4] = (v << p->lsh[0]) | (v & p->mask[0]);
        v = c >> p->rsh[1];
        d[5] = (v << p->lsh[1]) | (v & p->mask[1]);
        v = c >> p->rsh[2];
        d[6] = (v << p->lsh[2]) | (v & p->mask[2]);
        v = c >> p->alphaShift;
        d[7] = (v << p->alphaLeftShift) | (v & p->mask[3]);
        c = p->src[0];
        c |= p->src[1] << 8;
        c |= p->src[2] << 16;
        p->src += 3;
        v = c >> p->rsh[0];
        d[8] = (v << p->lsh[0]) | (v & p->mask[0]);
        v = c >> p->rsh[1];
        d[9] = (v << p->lsh[1]) | (v & p->mask[1]);
        v = c >> p->rsh[2];
        d[10] = (v << p->lsh[2]) | (v & p->mask[2]);
        v = c >> p->alphaShift;
        d[11] = (v << p->alphaLeftShift) | (v & p->mask[3]);
        c = p->src[0];
        c |= p->src[1] << 8;
        c |= p->src[2] << 16;
        p->src += 3;
        v = c >> p->rsh[0];
        d[12] = (v << p->lsh[0]) | (v & p->mask[0]);
        v = c >> p->rsh[1];
        d[13] = (v << p->lsh[1]) | (v & p->mask[1]);
        v = c >> p->rsh[2];
        d[14] = (v << p->lsh[2]) | (v & p->mask[2]);
        v = c >> p->alphaShift;
        d[15] = (v << p->alphaLeftShift) | (v & p->mask[3]);
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

void fn_8014445C(Img *p) {
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
        d[3] = (v << p->alphaLeftShift) | (v & p->mask[3]);
        v = (u32)s[1] >> p->rsh[0];
        d[4] = (v << p->lsh[0]) | (v & p->mask[0]);
        v = (u32)s[1] >> p->rsh[1];
        d[5] = (v << p->lsh[1]) | (v & p->mask[1]);
        v = (u32)s[1] >> p->rsh[2];
        d[6] = (v << p->lsh[2]) | (v & p->mask[2]);
        v = (u32)s[1] >> p->alphaShift;
        d[7] = (v << p->alphaLeftShift) | (v & p->mask[3]);
        v = (u32)s[2] >> p->rsh[0];
        d[8] = (v << p->lsh[0]) | (v & p->mask[0]);
        v = (u32)s[2] >> p->rsh[1];
        d[9] = (v << p->lsh[1]) | (v & p->mask[1]);
        v = (u32)s[2] >> p->rsh[2];
        d[10] = (v << p->lsh[2]) | (v & p->mask[2]);
        v = (u32)s[2] >> p->alphaShift;
        d[11] = (v << p->alphaLeftShift) | (v & p->mask[3]);
        v = (u32)s[3] >> p->rsh[0];
        d[12] = (v << p->lsh[0]) | (v & p->mask[0]);
        v = (u32)s[3] >> p->rsh[1];
        d[13] = (v << p->lsh[1]) | (v & p->mask[1]);
        v = (u32)s[3] >> p->rsh[2];
        d[14] = (v << p->lsh[2]) | (v & p->mask[2]);
        v = (u32)s[3] >> p->alphaShift;
        s += 4;
        d[15] = (v << p->alphaLeftShift) | (v & p->mask[3]);
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

}
#pragma exceptions reset
} /* namespace m80142C7C */

namespace m80144B64 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

/* QV=2.0p1 */
} /* extern "C" */
struct C80144B64;
typedef void (C80144B64::*PMF80144B64)();
struct C80144B64 {
    u8 pad0[140];
    u32 m140;
    u8 pad144[12];
    u32 m156;
    u32 m160;
    u32 m164;
    u32 m168;
    u32 m172;
    u8 pad176[1260];
    u32 m1436;
    PMF80144B64 m1440[26];
    u32 pad1752;
    PMF80144B64 m1756;
    PMF80144B64 m1768;
    PMF80144B64 m1780;
    PMF80144B64 m1792;
};
extern "C" {

void fn_80144B64(C80144B64 *p) {
    u8 *q;
    u32 i;
    u32 n;
    p->m160 = p->m140;
    while (p->m160 >= 32) {
        p->m156 = 32;
        p->m164 = p->m168;
        (p->*(p->m1756))();
        for (i = 0, q = (u8 *)p; i < p->m1436; q += 12, i++) (p->*(((C80144B64 *)q)->m1440[0]))();
        n = p->m168;
        while (n >= 32) {
            (p->*(p->m1768))();
            n -= 32;
        }
        if (n != 0) {
            p->m156 = n;
            (p->*(p->m1792))();
        }
        p->m160 -= 32;
    }
    if (p->m160 != 0) {
        p->m156 = p->m160;
        p->m164 = p->m172;
        (p->*(p->m1780))();
        for (i = 0, q = (u8 *)p; i < p->m1436; q += 12, i++) (p->*(((C80144B64 *)q)->m1440[0]))();
        p->m156 = 32;
        n = p->m172;
        while (n >= 32) {
            (p->*(p->m1768))();
            n -= 32;
        }
        if (n != 0) {
            p->m156 = n;
            (p->*(p->m1792))();
        }
    }
}

} /* extern "C" */

} /* namespace m80144B64 */

namespace m80144CEC {

extern "C" {
void *memset(void *, int, u32);
void fn_800604C4(int, int, int, int);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
}
struct Heap { u8 pad[0x18]; u32 f18; u32 f1c; };
extern "C" Heap *lbl_8035AC98;
struct Rc { s32 x0, y0, x1, y1; };
struct C80144CEC {
    u32 f0;
    u8 pad4[0x16 - 4];
    u16 f16;
    u8 pad18[0x28 - 0x18];
    u16 f28;
    u16 f2a;
    u8 pad2c[0x8c - 0x2c];
    u32 f8c;
    s32 f90;
    u32 f94;
    s32 f98;
    u32 f9c;
    u32 fa0;
    u8 pada4[0xa8 - 0xa4];
    u32 fa8;
    u32 fac;
    u8 *fb0;
    u8 *fb4;
    u8 bb8[0x80];
    u8 b138[0x20];
    u8 b158[0x20];
    C80121E80 *f178;
    u8 *f17c;
    u8 *f180;
    u8 *f184;
    C80121E80 *f188;
    u8 *f18c;
    u8 *f190;
};
extern "C" {
void fn_80146610(C80144CEC *);
void fn_80144B64(C80144CEC *);

void fn_80144CEC(C80144CEC *t, u8 *dst, s32 dpitch, const Rc *d, u8 *src, s32 spitch, const Rc *r) {
    u32 sh, dh;
    s32 err, d2;
    s32 dx0, dx1, dy0, x0, dy1, x1, y0, y1;
    s32 step;
    u8 *sp;
    u8 *e;
    u8 *dp;
    if ((y1 = r->y1) <= (y0 = r->y0) || (x1 = r->x1) <= (x0 = r->x0) || (dy1 = d->y1) <= (dy0 = d->y0) || (dx1 = d->x1) <= (dx0 = d->x0)) return;
    t->f8c = x1 - x0;
    t->f94 = dx1 - dx0;
    dh = dy1 - dy0;
    sh = y1 - y0;
    dp = dst + dy0 * dpitch + ((u32)(dx0 * t->f2a) >> 3);
    sp = src + ((u32)(x0 * t->f16) >> 3);
    if (t->f0 & 0x40) {
        step = -spitch;
        e = sp + (y0 - 1) * spitch;
        sp = sp + (y1 - 1) * spitch;
    } else {
        step = spitch;
        e = sp + y1 * spitch;
        sp = sp + y0 * spitch;
    }
    t->fb0 = sp;
    t->fb4 = dp;
    {
        s32 v = r->x0;
        t->f90 = v;
        t->f98 = v;
    }
    {
        Heap *h = lbl_8035AC98;
        if (h->f18 >= 2) h->f1c = h->f18; else h->f1c = 2;
    }
    if (t->f28 & 1) {
        if (!lbl_8035AC98) fn_800604C4(-2, 0, 0, 0);
        fn_800F7EC0(lbl_8035AC98);
        t->f178 = new C80121E80[t->f94];
        fn_800F7E98();
        if (!t->f178) fn_800604C4(-4, 0, 0, 0);
    }
    if (t->f28 & 4) {
        if (!lbl_8035AC98) fn_800604C4(-2, 0, 0, 0);
        fn_800F7EC0(lbl_8035AC98);
        t->f17c = new u8[t->f94];
        fn_800F7E98();
        if (!t->f17c) fn_800604C4(-4, 0, 0, 0);
    }
    if (!lbl_8035AC98) fn_800604C4(-2, 0, 0, 0);
    fn_800F7EC0(lbl_8035AC98);
    t->f180 = new u8[t->f94];
    fn_800F7E98();
    if (!t->f180) fn_800604C4(-4, 0, 0, 0);
    {
        Heap *h = lbl_8035AC98;
        h->f1c = h->f18;
    }
    fn_80146610(t);
    if (!(t->f0 & 6)) memset(t->f180, 0xff, t->f94);
    t->f184 = t->bb8;
    t->f188 = t->f178;
    t->f18c = t->f17c;
    t->f190 = t->f180;
    t->fa8 = (s32)(32.0f * ((f32)(s32)t->f94 / (f32)(s32)t->f8c));
    if (t->fa8 == 0) t->fac = t->f94; else t->fac = t->f94 % t->fa8;
    if (sh > dh) {
        d2 = dh * 2;
        err = d2 - sh;
        do {
            if (err <= 0) {
                err += d2;
            } else {
                t->fb0 = sp;
                t->fb4 = dp;
                fn_80144B64(t);
                dp += dpitch;
            }
            sp += step;
        } while (sp != e);
    } else {
        s32 s2, sd;
        u8 *de;
        d2 = sh * 2;
        sd = (sh - dh) * 2;
        de = dp + dh * dpitch;
        err = d2 - dh;
        do {
            t->fb4 = dp;
            fn_80144B64(t);
            if (err <= 0) {
                err += d2;
            } else {
                sp += step;
                err += sd;
                t->fb0 = sp;
            }
            dp += dpitch;
        } while (dp < de);
    }
    if (t->f180) {
        delete[] t->f180;
        t->f180 = 0;
    }
    if (t->f17c) {
        delete[] t->f17c;
        t->f17c = 0;
    }
    if (t->f178) {
        delete[] t->f178;
        t->f178 = 0;
    }
}
}

} /* namespace m80144CEC */
