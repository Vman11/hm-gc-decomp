/* RAD Bink: 0x80284068-0x802876F8 */
#include "bink_common.h"

void fn_80284068(int a, int *p, int c, unsigned int d, int e, int f, int g) {
    unsigned int z = (d >> 3) * f - 1;
    unsigned int n;
    p[2] = e;
    p[0] = 0;
    p[1] = 0;
    {
        unsigned short h = c + z;
        asm("cntlzw %0,%1" : "=r"(n) : "r"((unsigned int)h));
    }
    p[10] = 32 - n;
    if (g) {
        p[3] = 1 << (e - 1);
    } else {
        p[3] = g;
    }
    p[11] = a;
}

void fn_802840C0(BitStream *bs, u8 *dst, u8 *a, u8 *b, s32 n) {
    s32 nb = n;
    s32 na = n;
    u32 v;

    do {
        if (bs->count != 0 ? ({ u32 w = bs->bits; bs->count--; bs->bits = w >> 1; w & 1; })
                           : (v = *bs->ptr, bs->ptr++, bs->count = 31, bs->bits = v >> 1, v & 1)) {
            *dst = *b;
            nb--;
            b++;
        } else {
            *dst = *a;
            na--;
            a++;
        }
        dst++;
    } while (na != 0 && nb != 0);

    if (na != 0) {
        do {
            *dst++ = *a++;
        } while (--na != 0);
        return;
    }
    while (nb != 0) {
        *dst++ = *b++;
        nb--;
    }
}

void fn_802846B0(s32 arg0, s32 arg1) {
    extern void fn_80284194(s32, s32, s32, s32);
    fn_80284194(arg1, arg0 + 0x24, arg0 + 0x20, arg0 + 0x10);
}

void fn_802846E4(u8 *a, void *b, u8 *c) {
    u8 *p = c;
    u8 *q = c + 256;
    u8 *r = c + 320;
    do {
        wC_80284194_846E4(b, r, q, p);
        p += 16;
        q += 4;
        r += 4;
    } while (p <= c + 240);
    wC_80284194_846E4(b, a + 36, a + 32, a + 16);
    *(s32 *)(c + 384) = 0;
}

typedef struct BBundle {
    u8 *cur;
    u8 *end;
    u8 pad8[8];
    u8 map[16];
    u32 hbits;
    u8 *tab;
    u32 nbits;
    u8 *data;
} BBundle;
#define HUFF(S) \
    if (bs->bits >= hbits) { \
        u32 e = tab[bs->buf & (~0u >> (32 - hbits))]; \
        S = map[e & 15]; \
        e >>= 4; \
        bs->buf >>= e; \
        bs->bits -= e; \
    } else { \
        u32 w = *bs->ptr, c = bs->bits; \
        u32 b0 = bs->buf; \
        u32 e = tab[(b0 | (w << c)) & (~0u >> (32 - hbits))]; \
        S = map[e & 15]; \
        e >>= 4; \
        if (c >= e) { \
            bs->buf = b0 >> e; \
            bs->bits = c - e; \
        } else { \
            bs->buf = w >> (e - c); \
            bs->bits = c + 32 - e; \
            bs->ptr++; \
        } \
    }
extern u8 lbl_802AAFC8[];
void fn_80284768(BBundle *t, BitBuf *bs) {
    unsigned int v;
    if (t->cur != t->end) return;
    if (bs->bits >= t->nbits) {
        unsigned int b0 = bs->buf, m = ~0u >> (32 - t->nbits);
        bs->buf = b0 >> t->nbits;
        bs->bits -= t->nbits;
        v = b0 & m;
    } else {
        unsigned int *p = bs->ptr, c = bs->bits, b0 = bs->buf, w = *p, m = ~0u >> (32 - t->nbits);
        bs->buf = w >> (t->nbits - c);
        bs->bits = c + 32 - t->nbits;
        bs->ptr = ++p;
        v = (b0 | (w << c)) & m;
    }
    if (v != 0) {
        t->cur = t->data;
        t->end = t->data + v;
        if (!(bs->bits != 0 ? ({ unsigned int w = bs->buf; bs->bits--; bs->buf = w >> 1; w & 1; })
                           : ({ unsigned int w = *bs->ptr++; bs->bits = 31; bs->buf = w >> 1; w & 1; }))) {
            u8 *map = t->map;
            unsigned int prev = 0;
            u8 *out = t->data;
            u8 hbits = t->hbits;
            u8 *tab = t->tab;
            while (v != 0) {
                unsigned int e, sym;
                if (bs->bits >= hbits) {
                    e = tab[bs->buf & (~0u >> (32 - hbits))];
                    sym = map[e & 15];
                    e >>= 4;
                    bs->buf >>= e;
                    bs->bits -= e;
                } else {
                    unsigned int w = *bs->ptr, c = bs->bits, b0 = bs->buf;
                    e = tab[(b0 | (w << c)) & (~0u >> (32 - hbits))];
                    sym = map[e & 15];
                    e >>= 4;
                    if (c >= e) {
                        bs->buf = b0 >> e;
                        bs->bits = c - e;
                    } else {
                        bs->buf = w >> (e - c);
                        bs->bits = c + 32 - e;
                        bs->ptr++;
                    }
                }
                if (sym > 11) {
                    u8 n = lbl_802AAFC8[sym - 12];
                    unsigned int wd = prev | (prev << 8);
                    wd |= wd << 16;
                    v -= n;
                    do {
                        *(u32 *)out = wd;
                        out += 4;
                        n -= 4;
                    } while (n);
                } else {
                    *out++ = sym;
                    prev = sym;
                    v--;
                }
            }
        } else {
            u8 x;
            if (bs->bits > 3) {
                unsigned int w = bs->buf;
                bs->bits -= 4;
                x = bs->buf & 15;
                bs->buf = w >> 4;
            } else {
                unsigned int *p = bs->ptr, c = bs->bits, w = *p;
                bs->bits = c + 28;
                bs->ptr = ++p;
                x = (bs->buf | (w << c)) & 15;
                bs->buf = w >> (4 - c);
            }
            memset(t->data, x, v);
        }
    } else {
        t->end = t->data;
        t->cur = t->data + 4;
    }
}
typedef struct BCtx {
    u8 map[256];
    u32 hbits[16];
    u8 *tab[16];
    u32 prev;
} BCtx;
void fn_80284A30(BBundle *t, BitBuf *bs, BCtx *ctx) {
    unsigned int v;
    if (t->cur != t->end) return;
    if (bs->bits >= t->nbits) {
        unsigned int b0 = bs->buf, m = ~0u >> (32 - t->nbits);
        bs->buf = b0 >> t->nbits;
        bs->bits -= t->nbits;
        v = b0 & m;
    } else {
        unsigned int *p = bs->ptr, c = bs->bits, b0 = bs->buf, w = *p, m = ~0u >> (32 - t->nbits);
        bs->buf = w >> (t->nbits - c);
        bs->bits = c + 32 - t->nbits;
        bs->ptr = ++p;
        v = (b0 | (w << c)) & m;
    }
    if (v != 0) {
        u8 *out;
        unsigned int prev;
        u8 *map = t->map;
        unsigned int hbits = t->hbits;
        u8 *tab;
        t->cur = t->data;
        t->end = t->data + v;
        out = t->data;
        tab = t->tab;
        prev = ctx->prev;
        if (bs->bits != 0 ? ({ unsigned int w = bs->buf; bs->bits--; bs->buf = w >> 1; w & 1; })
                            : ({ unsigned int w = *bs->ptr++; bs->bits = 31; bs->buf = w >> 1; w & 1; }))
            v = -20 - v;
        {
            do {
                unsigned int e, hi, lo, hb = ctx->hbits[prev];
                if (bs->bits >= hb) {
                    e = ctx->tab[prev][bs->buf & (~0u >> (32 - hb))];
                    hi = ctx->map[(e & 15) + prev * 16];
                    e >>= 4;
                    bs->bits -= e;
                    bs->buf >>= e;
                } else {
                    unsigned int w = *bs->ptr, c = bs->bits, b0 = bs->buf;
                    e = ctx->tab[prev][(b0 | (w << c)) & (~0u >> (32 - hb))];
                    hi = ctx->map[(e & 15) + prev * 16];
                    e >>= 4;
                    if (c >= e) {
                        bs->buf = b0 >> e;
                        bs->bits = c - e;
                    } else {
                        bs->buf = w >> (e - c);
                        bs->bits = c + 32 - e;
                        bs->ptr++;
                    }
                }
                if (bs->bits >= hbits) {
                    e = tab[bs->buf & (~0u >> (32 - hbits))];
                    lo = map[e & 15];
                    e >>= 4;
                    bs->buf >>= e;
                    bs->bits -= e;
                } else {
                    unsigned int w = *bs->ptr, c = bs->bits, b0 = bs->buf;
                    e = tab[(b0 | (w << c)) & (~0u >> (32 - hbits))];
                    lo = map[e & 15];
                    e >>= 4;
                    if (c >= e) {
                        bs->buf = b0 >> e;
                        bs->bits = c - e;
                    } else {
                        bs->buf = w >> (e - c);
                        bs->bits = c + 32 - e;
                        bs->ptr++;
                    }
                }
                lo |= (hi << 4) & 0xF0;
                prev = hi;
                *out++ = (lo & 0x80) ? -128 - (s32)(lo & 0x7F) : (lo | 0x80);
            } while ((s32)--v > 0);
            if ((s32)v < -22) memset(t->data, t->data[0], -((s32)v + 21));
        }
        ctx->prev = prev;
    } else {
        t->end = t->data;
        t->cur = t->data + 4;
    }
}
void fn_80285068(BBundle *t, BitBuf *bs) {
    unsigned int v;
    if (t->cur != t->end) return;
    if (bs->bits >= t->nbits) {
        unsigned int b0 = bs->buf, m = ~0u >> (32 - t->nbits);
        bs->buf = b0 >> t->nbits;
        bs->bits -= t->nbits;
        v = b0 & m;
    } else {
        unsigned int *p = bs->ptr, c = bs->bits, b0 = bs->buf, w = *p, m = ~0u >> (32 - t->nbits);
        bs->buf = w >> (t->nbits - c);
        bs->bits = c + 32 - t->nbits;
        bs->ptr = ++p;
        v = (b0 | (w << c)) & m;
    }
    if (v != 0) {
        t->cur = t->data;
        t->end = t->data + v;
        if (!(bs->bits != 0 ? ({ unsigned int w = bs->buf; bs->bits--; bs->buf = w >> 1; w & 1; })
                           : ({ unsigned int w = *bs->ptr++; bs->bits = 31; bs->buf = w >> 1; w & 1; }))) {
            u8 *out = t->data;
            u8 *tab = t->tab;
            unsigned int hbits = t->hbits;
            u8 *map = t->map;
            while (v--) {
                if (bs->bits >= hbits) {
                    unsigned int e = tab[bs->buf & (~0u >> (32 - hbits))];
                    *out++ = map[e & 15];
                    e >>= 4;
                    bs->buf >>= e;
                    bs->bits -= e;
                } else {
                    unsigned int w = *bs->ptr, c = bs->bits;
                    unsigned int e = tab[(bs->buf | (w << c)) & (~0u >> (32 - hbits))];
                    *out++ = map[e & 15];
                    e >>= 4;
                    c = bs->bits;
                    if (c >= e) {
                        bs->bits = c - e;
                        bs->buf >>= e;
                    } else {
                        bs->buf = w >> (e - c);
                        bs->bits = c + 32 - e;
                        bs->ptr++;
                    }
                }
            }
        } else {
            unsigned int x;
            if (bs->bits > 3) {
                unsigned int w = bs->buf;
                bs->bits -= 4;
                bs->buf = w >> 4;
                x = w & 15;
            } else {
                unsigned int *p = bs->ptr, c = bs->bits, b0 = bs->buf, w = *p;
                bs->bits = c + 28;
                bs->ptr = ++p;
                bs->buf = w >> (4 - c);
                x = (b0 | (w << c)) & 15;
            }
            memset(t->data, x, v);
        }
    } else {
        t->end = t->data;
        t->cur = t->data + 4;
    }
}
void fn_802852FC(BBundle *t, BitBuf *bs) {
    unsigned int v;
    if (t->cur != t->end) return;
    if (bs->bits >= t->nbits) {
        unsigned int b0 = bs->buf, m = ~0u >> (32 - t->nbits);
        bs->buf = b0 >> t->nbits;
        bs->bits -= t->nbits;
        v = b0 & m;
    } else {
        unsigned int *p = bs->ptr, c = bs->bits, b0 = bs->buf, w = *p, m = ~0u >> (32 - t->nbits);
        bs->buf = w >> (t->nbits - c);
        bs->bits = c + 32 - t->nbits;
        bs->ptr = ++p;
        v = (b0 | (w << c)) & m;
    }
    if (v != 0) {
        t->cur = t->data;
        t->end = t->data + v;
        {
            u8 *out = t->data;
            u8 *tab = t->tab;
            u8 *map = t->map;
            unsigned int hbits = t->hbits;
            while (v--) {
                u32 lo, hi;
                HUFF(lo)
                HUFF(hi)
                *out++ = lo | (hi << 4);
            }
        }
    } else {
        t->end = t->data;
        t->cur = t->data + 4;
    }
}
#undef HUFF

u32 fn_80285CE0(u32 arg0, u32 arg1, u32 arg2, u32 arg3) {
    if (arg2 <= 8) {
        arg2 = 8;
    } else if (arg2 <= 15) {
        arg2 = 16;
    }
    return ((arg0 * arg2 >> 3) + ((arg1 >> 3) * arg3 * arg2 >> 3) + 3) & ~3;
}

void fn_80285D24(u32 *arg0, u32 arg1) {
    arg0[0] = fn_80285CE0(0x200, arg1, 4, 1);
    arg0[1] = fn_80285CE0(0x200, arg1 >> 1, 4, 1);
    arg0[2] = fn_80285CE0(0x200, arg1, 8, 0x40);
    arg0[3] = fn_80285CE0(0x200, arg1, 8, 8);
    arg0[4] = fn_80285CE0(0x200, arg1, 5, 1);
    arg0[5] = fn_80285CE0(0x200, arg1, 5, 1);
    arg0[6] = fn_80285CE0(0x200, arg1, 0xB, 1);
    arg0[7] = fn_80285CE0(0x200, arg1, 0xB, 1);
    arg0[8] = fn_80285CE0(0x200, arg1, 4, 0x30);
}

void fn_80287540(u8 *y0, u8 *y1, u8 *a0, u8 *a1, u32 p7, u32 w, u32 h, u32 pitch, u32 ph, u8 *data, u32 a11, u32 a12, u32 flags, u32 flags0) {
    u8 *r;
    u32 skip;
    if (flags0 & 0x100000) {
        if (flags & 0x100000) {
            wC_80285E24_87540(a0, a1, (w + 7) & ~7, (h + 7) & ~7, pitch, data + 4, a11, p7, 1, a12, flags);
        }
        data += *(s32 *)data;
    }
    skip = flags & 0x8000;
    if (!skip) {
        data += 4;
    }
    r = wC_80285E24_87540(y0, y1, (w + 7) & ~7, (h + 7) & ~7, pitch, data, a11, p7, 1, a12, flags);
    if (!skip) {
        r = data + *(s32 *)(data - 4) - 4;
    }
    if (!(flags & 0x20000)) {
        y0 += pitch * ph;
        y1 += pitch * ph;
        w = (((w + 1) >> 1) + 7) & ~7;
        h = (((h + 1) >> 1) + 7) & ~7;
        pitch >>= 1;
        ph >>= 1;
        r = wC_80285E24_87540(y0, y1, w, h, pitch, r, a11, p7, 2, a12, flags);
        wC_80285E24_87540(y0 + pitch * ph, y1 + pitch * ph, w, h, pitch, r, a11, p7, 2, a12, flags);
    }
}
