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
    u32 bit;
    u32 v;

    while (nb != 0) {
        if (bs->count != 0) {
            v = bs->bits;
            bs->count--;
            bs->bits = v >> 1;
        } else {
            v = *bs->ptr;
            bs->ptr++;
            bs->count = 31;
            bs->bits = v >> 1;
        }
        if (v & 1) {
            *dst = *b;
            nb--;
            b++;
        } else {
            *dst = *a;
            na--;
            a++;
        }
        dst++;
        if (na == 0) {
            break;
        }
    }

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
