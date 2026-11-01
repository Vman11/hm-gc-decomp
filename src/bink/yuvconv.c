/* RAD Bink: 0x8028B134-0x8028B6F4 */
#include "bink_common.h"

/* .rodata 0x802AB0C0-0x802AB240 */
asm(
    ".section .rodata\n"
    ".balign 4\n"
    ".globl lbl_802AB0C0\n"
    "lbl_802AB0C0:\n"
    ".long 0x00000000, 0x00000001, 0x00000003\n"
    ".globl lbl_802AB0CC\n"
    "lbl_802AB0CC:\n"
    ".long 0x00000007\n"
    ".globl lbl_802AB0D0\n"
    "lbl_802AB0D0:\n"
    ".long 0x0000000F, 0x0000001F, 0x0000003F, 0x0000007F\n"
    ".long 0x000000FF, 0x000001FF, 0x000003FF, 0x000007FF\n"
    ".long 0x00000FFF, 0x00001FFF, 0x00003FFF, 0x00007FFF\n"
    ".long 0x0000FFFF, 0x0001FFFF, 0x0003FFFF, 0x0007FFFF\n"
    ".long 0x000FFFFF, 0x001FFFFF, 0x003FFFFF, 0x007FFFFF\n"
    ".long 0x00FFFFFF, 0x01FFFFFF, 0x03FFFFFF, 0x07FFFFFF\n"
    ".long 0x0FFFFFFF, 0x1FFFFFFF, 0x3FFFFFFF, 0x7FFFFFFF\n"
    ".long 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000\n"
    ".long 0x00000000, 0x00000000, 0x00000000, 0x00000000\n"
    ".long 0x00000000, 0x00000000, 0x00000000, 0x00000000\n"
    ".long 0x00000000, 0x00000000, 0x00000000, 0x00000000\n"
    ".long 0x00010202, 0x03030303, 0x04040404, 0x04040404\n"
    ".long 0x05050505, 0x05050505, 0x05050505, 0x05050505\n"
    ".long 0x06060606, 0x06060606, 0x06060606, 0x06060606\n"
    ".long 0x06060606, 0x06060606, 0x06060606, 0x06060606\n"
    ".long 0x07070707, 0x07070707, 0x07070707, 0x07070707\n"
    ".long 0x07070707, 0x07070707, 0x07070707, 0x07070707\n"
    ".long 0x07070707, 0x07070707, 0x07070707, 0x07070707\n"
    ".long 0x07070707, 0x07070707, 0x07070707, 0x07070707\n"
    ".long 0x08000000, 0x00000000, 0x00000000, 0x00000000\n"
    ".long 0x00000000, 0x00000000, 0x00000000, 0x00000000\n"
    ".long 0x00000000, 0x00000000, 0x00000000, 0x00000000\n"
    ".long 0x00000000, 0x00000000, 0x00000000, 0x00000000\n"
    ".text\n"
);

void fn_8028B134(s32 count, u32 *dst, u32 *src, u32 *p3, u32 *p4) {
    s32 n = count >> 1;
    while (--n != -1) {
        u32 a = *src;
        u32 b = *p3;
        u32 c = *p4;
        *dst = (a & 0xFF000000) + ((b >> 8) & 0xFF0000) + ((a >> 8) & 0xFF00) + (c >> 24);
        *++dst = ((a << 16) & 0xFF000000) + (b & 0xFF0000) + ((a << 8) & 0xFF00) + ((c >> 16) & 0xFF);
        a = *++src;
        p3++;
        p4++;
        *++dst = (a & 0xFF000000) + ((b << 8) & 0xFF0000) + ((a >> 8) & 0xFF00) + ((c >> 8) & 0xFF);
        *++dst = ((a << 16) & 0xFF000000) + ((b << 16) & 0xFF0000) + ((a << 8) & 0xFF00) + (c & 0xFF);
        src++;
        dst++;
    }
    if (count & 1) {
        u32 a = *src;
        u16 b = *(u16 *)p3;
        u16 c = *(u16 *)p4;
        u32 x0 = (a & 0xFF000000) + ((b << 8) & 0xFF0000) + ((a >> 8) & 0xFF00) + (c >> 8);
        dst[1] = ((a << 16) & 0xFF000000) + ((b & 0xFF) << 16) + ((a << 8) & 0xFF00) + (c & 0xFF);
        dst[0] = x0;
    }
}

void fn_8028B264(s32 n, u32* dst, u32* y, u32* u, u32* v) {
    s32 i;
    u32 uu, vv, yy, c;

    i = n >> 1;
    while (--i != -1) {
        uu = *u++;
        vv = *v++;
        yy = *y++;
        c = ((uu >> 8) & 0xFF0000) + (vv >> 24);
        *dst++ = (yy & 0xFF000000) + ((yy & 0xFF000000) >> 16) + c;
        *dst++ = ((yy & 0xFF0000) << 8) + ((yy & 0xFF0000) >> 8) + c;
        c = (uu & 0xFF0000) + ((vv >> 16) & 0xFF);
        *dst++ = ((yy & 0xFF00) << 16) + (yy & 0xFF00) + c;
        *dst++ = ((yy & 0xFF) << 24) + ((yy & 0xFF) << 8) + c;
        yy = *y++;
        c = ((uu << 8) & 0xFF0000) + ((vv >> 8) & 0xFF);
        *dst++ = (yy & 0xFF000000) + ((yy & 0xFF000000) >> 16) + c;
        *dst++ = ((yy & 0xFF0000) << 8) + ((yy & 0xFF0000) >> 8) + c;
        c = ((uu & 0xFF) << 16) + (vv & 0xFF);
        *dst++ = ((yy & 0xFF00) << 16) + (yy & 0xFF00) + c;
        *dst++ = ((yy & 0xFF) << 24) + ((yy & 0xFF) << 8) + c;
    }
    if (n & 1) {
        u16 uh = *(u16*)u;
        u16 vh = *(u16*)v;
        u32 c, yy;
        yy = *y;
        c = ((uh << 8) & 0xFF0000) + (vh >> 8);
        *dst++ = (yy & 0xFF000000) + ((yy & 0xFF000000) >> 16) + c;
        *dst++ = ((yy & 0xFF0000) << 8) + ((yy & 0xFF0000) >> 8) + c;
        c = ((uh & 0xFF) << 16) + (vh & 0xFF);
        *dst++ = ((yy & 0xFF00) << 16) + (yy & 0xFF00) + c;
        *dst = ((yy & 0xFF) << 24) + ((yy & 0xFF) << 8) + c;
    }
}

void fn_8028B428(s32 n, u32 *dst, u32 *src) {
    while (--n != -1) {
        u32 v = *src++;
        *dst++ = (v & 0xFF000000) + ((v >> 8) & 0xFF00) + 0x800080;
        *dst++ = ((v << 16) & 0xFF000000) + ((v & 0xFF) << 8) + 0x800080;
    }
}

void fn_8028B480(s32 n, u32 *dst, u32 *src) {
    while (--n != -1) {
        u32 v = *src++;
        u32 t0 = v & 0xFF000000;
        u32 t1 = v & 0xFF0000;
        u32 t2 = v & 0xFF00;
        u32 t3 = v & 0xFF;
        *dst++ = t0 + (t0 >> 16) + 0x800080;
        *dst++ = (t1 << 8) + (t1 >> 8) + 0x800080;
        *dst++ = (t2 << 16) + t2 + 0x800080;
        *dst++ = (t3 << 24) + (t3 << 8) + 0x800080;
    }
}

#define WR(bs, N, v) { \
    u32 bits_ = (bs)->bits; \
    if (bits_ >= (N)) { \
        u32 buf_ = (bs)->buf; \
        (bs)->buf = buf_ >> (N); \
        (bs)->bits = bits_ - (N); \
        v = buf_ & (0xFFFFFFFF >> (32 - (N))); \
    } else { \
        u32 *p_ = (bs)->ptr; \
        u32 buf_ = (bs)->buf; \
        u32 w_ = *p_; \
        u32 t_ = (N) - 32; \
        v = (buf_ | (w_ << bits_)) & (0xFFFFFFFF >> (32 - (N))); \
        (bs)->buf = w_ >> ((N) - bits_); \
        (bs)->bits = bits_ - t_; \
        (bs)->ptr = p_ + 1; \
    } \
}

static inline void wW(BitBuf *bs, u32 v, u32 n) {
    u32 bits = bs->bits;
    u32 buf;
    u32 nb;
    v &= lbl_802AB0C0[n];
    buf = bs->buf | (v << bits);
    nb = bits + n;
    bs->buf = buf;
    bs->bits = nb;
    if (nb > 31) {
        *bs->ptr = buf;
        bs->ptr++;
        bs->bits -= 32;
        if (bs->bits != 0) {
            n -= bs->bits;
            bs->buf = v >> n;
        } else {
            bs->buf = 0;
        }
    }
}
void fn_8028B510(BitBuf *dst, BitBuf *src, u32 n) {
    u32 v;
    for (; n > 7; n -= 8) {
        WR(src, 8, v);
        wW(dst, v, 8);
    }
    if (n == 0) {
        return;
    }
    WR(src, n, v);
    wW(dst, v, n);
}
