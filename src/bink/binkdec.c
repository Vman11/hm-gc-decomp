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

void fn_80284194(BitBuf *bs, u32 *tabp, u32 *bitsp, u8 *map) {
    extern u32 lbl_80301CE0[];
    extern u8 lbl_802AAFB8[];
    unsigned int n, q, i;
    if (bs->bits > 3) {
        unsigned int w = bs->buf;
        bs->bits -= 4;
        bs->buf = w >> 4;
        n = w & 15;
    } else {
        unsigned int *p = bs->ptr, c = bs->bits, b0 = bs->buf, w = *p;
        bs->bits = c + 28;
        bs->ptr = ++p;
        n = (b0 | (w << c)) & 15;
        bs->buf = w >> (4 - c);
    }
    { u32 a = lbl_80301CE0[n]; u32 b = lbl_802AAFB8[n]; *tabp = a; *bitsp = b; }
    if (n == 0) {
        for (i = 0; i < 16; i++) map[i] = i;
        return;
    }
    if (!(bs->bits != 0 ? ({ unsigned int w = bs->buf; bs->bits--; bs->buf = w >> 1; w & 1; })
                      : ({ unsigned int w = *bs->ptr++; bs->bits = 31; bs->buf = w >> 1; w & 1; }))) {
        unsigned int depth;
        if (bs->bits > 1) {
            unsigned int w = bs->buf;
            bs->bits -= 2;
            bs->buf = w >> 2;
            depth = w & 3;
        } else {
            unsigned int *p = bs->ptr, c = bs->bits, b0 = bs->buf, w = *p;
            bs->bits = c + 30;
            bs->ptr = ++p;
            depth = (b0 | (w << c)) & 3;
            bs->buf = w >> (2 - c);
        }
        if (depth == 0) {
            u8 *o = map;
            for (i = 0; i < 16; i += 2) {
                if (bs->bits != 0 ? ({ unsigned int w = bs->buf; bs->bits--; bs->buf = w >> 1; w & 1; })
                                  : ({ unsigned int w = *bs->ptr++; bs->bits = 31; bs->buf = w >> 1; w & 1; })) {
                    o[1] = i;
                    o[0] = i + 1;
                } else {
                    o[0] = i;
                    o[1] = i + 1;
                }
                o += 2;
            }
        } else {
            u8 tmp2[16];
            u8 tmp[16];
            for (i = 0; i < 16; i += 2) {
                if (bs->bits != 0 ? ({ unsigned int w = bs->buf; bs->bits--; bs->buf = w >> 1; w & 1; })
                                  : (q = *bs->ptr, bs->ptr++, bs->bits = 31, bs->buf = q >> 1, q & 1)) {
                    tmp[i] = i + 1;
                    tmp[i + 1] = i;
                } else {
                    tmp[i] = i;
                    tmp[i + 1] = i + 1;
                }
            }
            if (depth == 1) {
                fn_802840C0((BitStream *)bs, map, tmp, tmp + 2, 2);
                fn_802840C0((BitStream *)bs, map + 4, tmp + 4, tmp + 6, 2);
                fn_802840C0((BitStream *)bs, map + 8, tmp + 8, tmp + 10, 2);
                fn_802840C0((BitStream *)bs, map + 12, tmp + 12, tmp + 14, 2);
            } else {
                fn_802840C0((BitStream *)bs, tmp2, tmp, tmp + 2, 2);
                fn_802840C0((BitStream *)bs, tmp2 + 4, tmp + 4, tmp + 6, 2);
                fn_802840C0((BitStream *)bs, tmp2 + 8, tmp + 8, tmp + 10, 2);
                fn_802840C0((BitStream *)bs, tmp2 + 12, tmp + 12, tmp + 14, 2);
                if (depth == 2) {
                    fn_802840C0((BitStream *)bs, map, tmp2, tmp2 + 4, 4);
                    fn_802840C0((BitStream *)bs, map + 8, tmp2 + 8, tmp2 + 12, 4);
                } else {
                    fn_802840C0((BitStream *)bs, tmp, tmp2, tmp2 + 4, 4);
                    fn_802840C0((BitStream *)bs, tmp + 8, tmp2 + 8, tmp2 + 12, 4);
                    fn_802840C0((BitStream *)bs, map, tmp, tmp + 8, 8);
                }
            }
        }
    } else {
        unsigned int len, mask;
        if (bs->bits > 2) {
            unsigned int w = bs->buf;
            bs->bits -= 3;
            bs->buf = w >> 3;
            len = w & 7;
        } else {
            unsigned int *p = bs->ptr, c = bs->bits, b0 = bs->buf, w = *p;
            bs->bits = c + 29;
            bs->ptr = ++p;
            len = (b0 | (w << c)) & 7;
            bs->buf = w >> (3 - c);
        }
        mask = 0xFFFF;
        for (i = 0; i <= len; i++) {
            unsigned int s;
            if (bs->bits > 3) {
                unsigned int w = bs->buf;
                bs->bits -= 4;
                bs->buf = w >> 4;
                s = w & 15;
            } else {
                unsigned int *p = bs->ptr, c = bs->bits, b0 = bs->buf, w = *p;
                bs->bits = c + 28;
                s = (b0 | (w << c)) & 15;
                bs->buf = w >> (4 - c);
                bs->ptr = ++p;
            }
            map[i] = s;
            mask &= ~(1 << s);
        }
        i = 0;
        do {
            if (mask & 1) map[++len] = i;
            i++;
        } while (mask >>= 1);
    }
}

void fn_802846B0(s32 arg0, s32 arg1) {
    fn_80284194((BitBuf *)arg1, (u32 *)(arg0 + 0x24), (u32 *)(arg0 + 0x20), (u8 *)(arg0 + 0x10));
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
    unsigned int q;
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
        u8 hbits;
        t->cur = t->data;
        t->end = t->data + v;
        if (!(bs->bits != 0 ? ({ unsigned int w = bs->buf; bs->bits--; bs->buf = w >> 1; w & 1; })
                           : (q = *bs->ptr, bs->ptr++, bs->bits = 31, bs->buf = q >> 1, q & 1))) {
            u8 *map, *out, *tab;
            unsigned int prev;
            hbits = t->hbits;
            out = t->data;
            prev = 0;
            tab = t->tab;
            map = t->map;
            while (v != 0) {
                unsigned int e;
                u8 sym;
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
                    unsigned int wd = prev | (prev << 8);
                    sym = lbl_802AAFC8[sym - 12];
                    wd |= wd << 16;
                    v -= sym;
                    do {
                        *(u32 *)out = wd;
                        out += 4;
                        sym -= 4;
                    } while (sym);
                } else {
                    *out++ = sym;
                    prev = sym;
                    v--;
                }
            }
        } else {
            if (bs->bits > 3) {
                unsigned int w = bs->buf;
                bs->bits -= 4;
                hbits = bs->buf & 15;
                bs->buf = w >> 4;
            } else {
                unsigned int *p = bs->ptr, c = bs->bits, w = *p;
                bs->bits = c + 28;
                bs->ptr = ++p;
                hbits = (bs->buf | (w << c)) & 15;
                bs->buf = w >> (4 - c);
            }
            memset(t->data, hbits, v);
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
    unsigned int q;
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
                            : (q = *bs->ptr, bs->ptr++, bs->bits = 31, bs->buf = q >> 1, q & 1))
            v = -20 - v;
        {
            do {
                unsigned int e, f, hi, lo, hb = ctx->hbits[prev];
                if (bs->bits >= hb) {
                    e = ctx->tab[prev][bs->buf & (~0u >> (32 - hb))];
                    hi = ctx->map[(e & 15) + prev * 16];
                    e >>= 4;
                    bs->buf >>= e;
                    bs->bits -= e;
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
                    f = tab[bs->buf & (~0u >> (32 - hbits))];
                    lo = map[f & 15];
                    f >>= 4;
                    bs->buf >>= f;
                    bs->bits -= f;
                } else {
                    unsigned int w = *bs->ptr, c = bs->bits, b0 = bs->buf;
                    f = tab[(b0 | (w << c)) & (~0u >> (32 - hbits))];
                    lo = map[f & 15];
                    f >>= 4;
                    if (c >= f) {
                        bs->buf = b0 >> f;
                        bs->bits = c - f;
                    } else {
                        bs->buf = w >> (f - c);
                        bs->bits = c + 32 - f;
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
void fn_80284D5C(BBundle *t, BitBuf *bs, BCtx *ctx) {
    unsigned int v;
    unsigned int q;
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
                            : (q = *bs->ptr, bs->ptr++, bs->bits = 31, bs->buf = q >> 1, q & 1))
            v = -20 - v;
        {
            do {
                unsigned int e, f, hi, lo, hb = ctx->hbits[prev];
                if (bs->bits >= hb) {
                    e = ctx->tab[prev][bs->buf & (~0u >> (32 - hb))];
                    hi = ctx->map[(e & 15) + prev * 16];
                    e >>= 4;
                    bs->buf >>= e;
                    bs->bits -= e;
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
                prev = hi;
                if (bs->bits >= hbits) {
                    f = tab[bs->buf & (~0u >> (32 - hbits))];
                    lo = map[f & 15];
                    f >>= 4;
                    bs->buf >>= f;
                    bs->bits -= f;
                } else {
                    unsigned int w = *bs->ptr, c = bs->bits, b0 = bs->buf;
                    f = tab[(b0 | (w << c)) & (~0u >> (32 - hbits))];
                    lo = map[f & 15];
                    f >>= 4;
                    if (c >= f) {
                        bs->buf = b0 >> f;
                        bs->bits = c - f;
                    } else {
                        bs->buf = w >> (f - c);
                        bs->bits = c + 32 - f;
                        bs->ptr++;
                    }
                }
                *out++ = lo | (hi << 4);
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
    unsigned int q;
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
        unsigned int hbits, e, c;
        t->cur = t->data;
        t->end = t->data + v;
        if (!(bs->bits != 0 ? ({ unsigned int w = bs->buf; bs->bits--; bs->buf = w >> 1; w & 1; })
                           : (q = *bs->ptr, bs->ptr++, bs->bits = 31, bs->buf = q >> 1, q & 1))) {
            u8 *map, *out, *tab;
            hbits = t->hbits;
            out = t->data;
            tab = t->tab;
            map = t->map;
            while (v--) {
                if (bs->bits >= hbits) {
                    e = tab[bs->buf & (~0u >> (32 - hbits))];
                    *out++ = map[e & 15];
                    e >>= 4;
                    bs->buf >>= e;
                    bs->bits -= e;
                } else {
                    unsigned int w = *bs->ptr; c = bs->bits;
                    e = tab[(bs->buf | (w << c)) & (~0u >> (32 - hbits))];
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
            if (bs->bits > 3) {
                unsigned int w = bs->buf;
                bs->bits -= 4;
                bs->buf = w >> 4;
                hbits = w & 15;
            } else {
                unsigned int *p = bs->ptr, c = bs->bits, b0 = bs->buf, w = *p;
                bs->bits = c + 28;
                bs->ptr = ++p;
                hbits = (b0 | (w << c)) & 15;
                bs->buf = w >> (4 - c);
            }
            memset(t->data, hbits, v);
        }
    } else {
        t->end = t->data;
        t->cur = t->data + 4;
    }
}
void fn_80285558(BBundle *t, BitBuf *bs) {
    unsigned int v;
    unsigned int q;
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
        unsigned int hbits, e, c;
        s8 x;
        t->cur = t->data;
        t->end = t->data + v;
        if (!(bs->bits != 0 ? ({ unsigned int w = bs->buf; bs->bits--; bs->buf = w >> 1; w & 1; })
                           : (q = *bs->ptr, bs->ptr++, bs->bits = 31, bs->buf = q >> 1, q & 1))) {
            u8 *map, *out, *tab;
            hbits = t->hbits;
            out = t->data;
            tab = t->tab;
            map = t->map;
            while (v--) {
                c = bs->bits;
                if (c >= hbits) {
                    unsigned int b0 = bs->buf;
                    e = tab[b0 & (~0u >> (32 - hbits))];
                    x = map[e & 15];
                    e >>= 4;
                    bs->buf = b0 >> e;
                    bs->bits = c - e;
                } else {
                    unsigned int w = *bs->ptr, b0 = bs->buf;
                    e = tab[(b0 | (w << c)) & (~0u >> (32 - hbits))];
                    x = map[e & 15];
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
                if (x) {
                    if (bs->bits != 0 ? ({ unsigned int w = bs->buf; bs->bits--; bs->buf = w >> 1; w & 1; })
                                      : ({ unsigned int w = *bs->ptr++; bs->bits = 31; bs->buf = w >> 1; w & 1; }))
                        x = -x;
                }
                *out++ = x;
            }
        } else {
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
            if (x) {
                if (bs->bits != 0 ? ({ unsigned int w = bs->buf; bs->bits--; bs->buf = w >> 1; w & 1; })
                                  : (q = *bs->ptr, bs->ptr++, bs->bits = 31, bs->buf = q >> 1, q & 1))
                    x = -x;
            }
            memset(t->data, x, v);
        }
    } else {
        t->end = t->data;
        t->cur = t->data + 4;
    }
}
#define NB(t) (*(u32 *)&(t)->pad8[0])
#define FL(t) (*(u32 *)&(t)->pad8[4])
void fn_802858A4(BBundle *t, BitBuf *bs) {
    unsigned int v;
    unsigned int q;
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
        u16 *out = (u16 *)t->data;
        u16 x;
        if (FL(t)) {
            unsigned int c = bs->bits;
            if (c >= NB(t) - 1) {
                x = bs->buf & (~0u >> (33 - NB(t)));
                bs->buf >>= NB(t) - 1;
                bs->bits = c - (NB(t) - 1);
            } else {
                unsigned int *p = bs->ptr, w = *p;
                x = (bs->buf | (w << c)) & (~0u >> (33 - NB(t)));
                bs->buf = w >> (NB(t) - 1 - c);
                bs->bits = c + 33 - NB(t);
                bs->ptr = ++p;
            }
            if (x != 0) {
                if (bs->bits != 0 ? ({ unsigned int w = bs->buf; bs->bits--; bs->buf = w >> 1; w & 1; })
                                  : (q = *bs->ptr, bs->ptr++, bs->bits = 31, bs->buf = q >> 1, q & 1))
                    x = -x;
            }
        } else {
            unsigned int c = bs->bits;
            if (c >= NB(t)) {
                x = bs->buf & (~0u >> (32 - NB(t)));
                bs->buf >>= NB(t);
                bs->bits = c - NB(t);
            } else {
                unsigned int *p = bs->ptr, w = *p;
                x = (bs->buf | (w << c)) & (~0u >> (32 - NB(t)));
                bs->buf = w >> (NB(t) - c);
                bs->bits = c + 32 - NB(t);
                bs->ptr = ++p;
            }
        }
        *out++ = x;
        t->cur = t->data;
        t->end = t->data + v * 2;
        v--;
        while (v != 0) {
            unsigned int chunk = v > 8 ? 8 : v;
            unsigned int nb;
            {
                unsigned int c = bs->bits;
                if (c > 3) {
                    unsigned int w = bs->buf;
                    bs->bits = c - 4;
                    bs->buf = w >> 4;
                    nb = w & 15;
                } else {
                    unsigned int *p = bs->ptr, b0 = bs->buf, w = *p;
                    bs->bits = c + 28;
                    nb = (b0 | (w << c)) & 15;
                    bs->buf = w >> (4 - c);
                    bs->ptr = ++p;
                }
            }
            if (nb != 0) {
                unsigned int n = chunk;
                while (n--) {
                    s16 d;
                    unsigned int c = bs->bits;
                    if (c >= nb) {
                        d = bs->buf & (~0u >> (32 - nb));
                        bs->bits = c - nb;
                        bs->buf >>= nb;
                    } else {
                        unsigned int *p = bs->ptr, w = *p;
                        d = (bs->buf | (w << c)) & (~0u >> (32 - nb));
                        bs->bits = c + 32 - nb;
                        bs->buf = w >> (nb - c);
                        bs->ptr = ++p;
                    }
                    if (d != 0) {
                        if (bs->bits != 0 ? ({ unsigned int w = bs->buf; bs->bits--; bs->buf = w >> 1; w & 1; })
                                          : ({ unsigned int w = *bs->ptr++; bs->bits = 31; bs->buf = w >> 1; w & 1; }))
                            d = -d;
                    }
                    x += d;
                    *out++ = x;
                }
            } else {
                fn_802753B4((u32 *)out, x, chunk * 2);
                out += chunk;
            }
            v -= chunk;
        }
    } else {
        t->end = t->data;
        t->cur = t->data + 4;
    }
}
#define HUFF3(S) \
    c = bs->bits; \
    if (c >= hbits) { \
        e = tab[bs->buf & (~0u >> (32 - hbits))]; \
        S = map[e & 15]; \
        e >>= 4; \
        bs->buf >>= e; \
        bs->bits = c - e; \
    } else { \
        u32 w = *bs->ptr; \
        u32 b0 = bs->buf; \
        e = tab[(b0 | (w << c)) & (~0u >> (32 - hbits))]; \
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
                u32 lo, hi, c, e;
                HUFF3(lo)
                HUFF3(hi)
                *out++ = lo | (hi << 4);
            }
        }
    } else {
        t->end = t->data;
        t->cur = t->data + 4;
    }
}
#undef HUFF
#undef HUFF3

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
