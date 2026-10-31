/* RAD Bink: 0x8028B134-0x8028B6F4 */
#include "bink_common.h"

void fn_8028B134(s32 count, u32 *dst, u32 *src, u32 *p3, u32 *p4) {
    s32 n = (count >> 1) - 1;
    if (count >> 1) do {
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
    } while (n-- != 0);
    if (count & 1) {
        u32 a = *src;
        u16 b = *(u16 *)p3;
        u16 c = *(u16 *)p4;
        dst[1] = ((a << 16) & 0xFF000000) + ((b & 0xFF) << 16) + ((a << 8) & 0xFF00) + (c & 0xFF);
        dst[0] = (a & 0xFF000000) + ((b << 8) & 0xFF0000) + ((a >> 8) & 0xFF00) + (c >> 8);
    }
}

void fn_8028B264(s32 n, u32* dst, u32* y, u32* u, u32* v) {
    s32 i;
    u32 uu, vv, yy, c;

    i = n >> 1;
    while (i--) {
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

void fn_8028B510(BitBuf *dst, BitBuf *src, u32 n) {
    for (; n > 7; n -= 8) {
        BitBuf_Write(dst, BitBuf_Read(src, 8), 8);
    }
    if (n == 0) {
        return;
    }
    BitBuf_Write(dst, BitBuf_Read(src, n), n);
}
