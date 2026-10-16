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
    u8 pad190[0x6D0 - 0x190];
    s32 wt[3];
} ImgDec;

typedef struct ImgPix {
    u8 pad0[0x5C];
    u32 shr[4];
    u32 shl[4];
    u8 pad7C[0x9C - 0x7C];
    s32 count;
    u8 padA0[0xB4 - 0xA0];
    u8 *out;
    u8 padB8[0x188 - 0xB8];
    u8 *src;
    u8 *px;
    u8 *mask;
} ImgPix;

void fn_80140A78(ImgPix *p) {
    u8 *s = p->src;
    u8 *e = s + p->count * 4;
    u8 *m = p->mask;
    do {
        if (*m != 0) {
            p->out[0] = s[3];
            p->out[1] = s[0];
            p->out[2] = s[1];
            p->out[3] = s[2];
        }
        s += 4;
        m++;
        p->out += 4;
    } while (s < e);
}

void fn_80140C14(ImgPix *p) {
    u8 *s = p->src;
    u8 *e = s + p->count * 4;
    u8 *m = p->mask;
    do {
        if (*m != 0) {
            p->out[0] = s[2];
            p->out[1] = s[1];
            p->out[2] = s[0];
        }
        s += 4;
        m++;
        p->out += 3;
    } while (s < e);
}

void fn_80140C78(ImgPix *p) {
    u8 *s = p->src;
    u8 *e = s + p->count * 4;
    u8 *m = p->mask;
    do {
        if (*m != 0) {
            p->out[0] = s[0];
            p->out[1] = s[1];
            p->out[2] = s[2];
        }
        s += 4;
        m++;
        p->out += 3;
    } while (s < e);
}

void fn_80140CDC(ImgPix *p) {
    u8 *s = p->src;
    u8 *e = s + p->count * 4;
    u8 *m = p->mask;
    u16 *d = (u16 *)p->out;
    do {
        if (*m != 0) {
            u16 v;
            v = ((u32)s[0] >> p->shr[0]) << p->shl[0];
            v |= ((u32)s[1] >> p->shr[1]) << p->shl[1];
            v |= ((u32)s[2] >> p->shr[2]) << p->shl[2];
            v |= ((u32)s[3] >> p->shr[3]) << p->shl[3];
            *d = v;
        }
        s += 4;
        d++;
        m++;
    } while (s < e);
    p->out += p->count * 2;
}

void fn_80140D98(ImgPix *p) {
    u8 *s = p->src;
    u8 *m = p->mask;
    u16 *d = (u16 *)p->out;
    u8 *e = s + p->count * 4;
    do {
        if (*m != 0) {
            u16 v;
            v = ((u32)s[0] >> p->shr[0]) << p->shl[0];
            v |= ((u32)s[1] >> p->shr[1]) << p->shl[1];
            v |= ((u32)s[2] >> p->shr[2]) << p->shl[2];
            *d = v;
        }
        s += 4;
        d++;
        m++;
    } while (s < e);
    p->out += p->count * 2;
}

void fn_80140E38(ImgPix *p) {
    u8 *s = p->px;
    u8 *e = s + p->count;
    u8 *m = p->mask;
    do {
        if (*m != 0) {
            *p->out = *s;
        }
        s++;
        m++;
        p->out++;
    } while (s < e);
}

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

void fn_801414D4(ImgDec *p) {
    u8 *d = p->dst;
    u8 *e = d + p->count * 4;
    do {
        d[2] = p->src[0];
        d[1] = p->src[1];
        d[0] = p->src[2];
        d[3] = 0xFF;
        d += 4;
        p->src += 4;
    } while (d < e);
}

void fn_8014152C(ImgDec *p) {
    u8 *d = p->dst;
    u8 *e = d + p->count * 4;
    do {
        d[0] = p->src[0];
        d[1] = p->src[1];
        d[2] = p->src[2];
        d[3] = 0xFF;
        d += 4;
        p->src += 4;
    } while (d < e);
}

void fn_8014164C(ImgDec *p) {
    u8 *d = p->dst;
    u8 *e = d + p->count * 4;
    do {
        d[2] = p->src[0];
        d[1] = p->src[1];
        d[0] = p->src[2];
        d[3] = 0xFF;
        d += 4;
        p->src += 3;
    } while (d < e);
}

void fn_801416A4(ImgDec *p) {
    u8 *d = p->dst;
    u8 *e = d + p->count * 4;
    do {
        d[0] = p->src[0];
        d[1] = p->src[1];
        d[2] = p->src[2];
        d[3] = 0xFF;
        d += 4;
        p->src += 3;
    } while (d < e);
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
    u8 *d;
    u8 *e;
    d = p->buf;
    e = (u8 *)p + p->count;
    e += 0x138;
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

void fn_80141A08(ImgDec *p) {
    u8 *d;
    s32 n;
    n = p->count;
    d = p->buf;
    do {
        d[0] = *p->src >> 4;
        p->src++;
        if (--n == 0) return;
        d[1] = *p->src & 0xF;
        d += 2;
    } while (--n != 0);
}

void fn_80141A54(ImgDec *p) {
    u8 *d;
    s32 n;
    n = p->count;
    d = p->buf;
    do {
        d[0] = *p->src & 0xF;
        if (--n == 0) return;
        d[1] = *p->src >> 4;
        d += 2;
        p->src++;
    } while (--n != 0);
}

void fn_80141AA0(ImgDec *p) {
    u8 *d = p->buf;
    u8 *e = d + ((u32)p->count >> 1);
    do {
        *d = *p->src;
        d++;
        p->src++;
    } while (d < e);
}

void fn_801425D4(ImgDec *p) {
    u8 *s = p->px;
    u8 *e = s + 0x20;
    do {
        p->out[0] = s[0];
        p->out[1] = s[1];
        p->out[2] = s[2];
        p->out[3] = s[3];
        s += 4;
        p->out += 4;
    } while (s < e);
}

void fn_80142628(ImgDec *p) {
    u32 *d;
    u32 *s;
    u32 *e;
    s = (u32 *)p->px;
    d = (u32 *)p->out;
    e = s + 8;
    do {
        d[0] = s[0];
        d[1] = s[1];
        d[2] = s[2];
        d[3] = s[3];
        s += 4;
        d += 4;
    } while (s < e);
    p->out += 0x20;
}

void fn_80142674(ImgDec *p) {
    u8 *s = p->px;
    u8 *e = s + 0x20;
    do {
        p->out[0] = s[0] | (p->out[0] & 0xF0);
        p->out[1] = s[2] | (s[1] << 4);
        p->out[2] = s[4] | (s[3] << 4);
        p->out[3] = s[6] | (s[5] << 4);
        p->out[4] = (s[7] << 4) | (p->out[4] & 0xF);
        s += 8;
        p->out += 4;
    } while (s < e);
}

void fn_80142710(ImgDec *p) {
    u8 *s = p->px;
    u8 *e = s + 0x20;
    do {
        p->out[0] = s[1] | (s[0] << 4);
        p->out[1] = s[3] | (s[2] << 4);
        p->out[2] = s[5] | (s[4] << 4);
        p->out[3] = s[7] | (s[6] << 4);
        s += 8;
        p->out += 4;
    } while (s < e);
}

void fn_80142794(ImgDec *p) {
    u8 *s = p->px;
    u8 *e = s + 0x20;
    do {
        p->out[0] = (p->out[0] & 0xF) | (s[0] << 4);
        p->out[1] = s[1] | (s[2] << 4);
        p->out[2] = s[3] | (s[4] << 4);
        p->out[3] = s[5] | (s[6] << 4);
        p->out[4] = s[7] | (p->out[4] & 0xF0);
        s += 8;
        p->out += 4;
    } while (s < e);
}

void fn_80142830(ImgDec *p) {
    u8 *s = p->px;
    u8 *e = s + 0x20;
    do {
        p->out[0] = s[0] | (s[1] << 4);
        p->out[1] = s[2] | (s[3] << 4);
        p->out[2] = s[4] | (s[5] << 4);
        p->out[3] = s[6] | (s[7] << 4);
        s += 8;
        p->out += 4;
    } while (s < e);
}

void fn_801428B4(ImgDec *p) {
    u32 *d = (u32 *)p->out;
    u32 *s = (u32 *)p->px;
    u32 *e = s + 4;
    do {
        d[0] = s[0];
        d[1] = s[1];
        d[2] = s[2];
        d[3] = s[3];
        s += 4;
        d += 4;
    } while (s < e);
    p->out += 0x10;
}

void fn_80142900(ImgDec *p) {
    u8 *d = p->dst;
    u8 *e = d + p->count * 4;
    for (; d < e; d += 4) {
        s32 v = (d[0] * 2 - 0xFF) * p->wt[0] + (d[1] * 2 - 0xFF) * p->wt[1] + (d[2] * 2 - 0xFF) * p->wt[2];
        if (v < 0) v = 0;
        d[0] = (u32)v >> 8;
        d[1] = (u32)v >> 8;
        d[2] = (u32)v >> 8;
    }
}

