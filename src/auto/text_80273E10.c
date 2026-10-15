/* Functions from 0x80273E10 to 0x80293ED8, found by decomp-toolkit. */
#include "common.h"

void fn_80275C64(void);
void fn_80275F98(void);
void fn_80276058(void *);
void fn_8027564C(void *, int);
void fn_802756B8(void *, int, int, int);

extern s32 lbl_8035B854;
s32 fn_80273EAC(void) {
    return lbl_8035B854;
}

extern s32 lbl_8035B850;
s32 fn_80273EB4(void) {
    return lbl_8035B850;
}

extern s32 lbl_80359F08;
s32 fn_80273EBC(void) {
    return lbl_80359F08;
}

extern s32 lbl_8035B884;
void fn_802749D4(s32 arg0) {
    lbl_8035B884 = arg0;
}

void fn_80274E0C(void) {

}

u32 fn_80275578(u32 hi, u32 lo, u32 d) {
    u64 n;
    u32 inv;
    u32 d16;
    u32 q;
    s32 s;
    s32 sh;
    s32 mask;

    if ((d & (d - 1)) == 0) {
        s = __cntlzw(d);
        return (lo >> (31 - s)) | (hi << (s + 1));
    }
    inv = 0xFFFFFFFF / d;
    d16 = (d + 0xFFFF) >> 16;
    q = 0;
    n = ((u64)hi << 32) | lo;
    if (d16 != 0) {
        s = __cntlzw(hi);
        q = (hi << s) / d16;
        sh = 16 - s;
        mask = sh >> 31;
        q = (q >> (-sh & mask)) << (sh & ~mask);
        n -= (u64)q * d;
    }
    while ((u32)(n >> 32) != 0) {
        u32 t = inv * (u32)(n >> 32);
        n -= (u64)t * d;
        q += t;
    }
    return q + (u32)n / d;
}

s64 OSGetTime(void);
extern s64 lbl_802F3840;
void fn_800C9A0C(s32, int);
void fn_8027564C(void *arg0, int arg1) {
    if (*(s32 *)((u8 *)arg0 + 0x50) != 0) {
        fn_800C9A0C(*(s32 *)((u8 *)arg0 + 0x50), arg1);
    }
    if (*(s32 *)((u8 *)arg0 + 0x54) != 0) {
        fn_800C9A0C(*(s32 *)((u8 *)arg0 + 0x54), arg1);
    }
}

s32 fn_80287804();
void fn_80287810(s32);
f32 fn_800F051C(f32, f32);
void fn_80275844(void *);
void *memcpy();
void fn_80275FC0(void *);
s32 fn_802762FC(u8 *arg0, u32 arg1) {
    u32 pos = *(u32 *)(arg0 + 0xF0);
    u32 end = pos + arg1;
    if (end >= *(u32 *)(arg0 + 0xDC)) {
        memcpy(*(u8 **)(arg0 + 0xE4) + pos, *(u8 **)(arg0 + 0xEC), *(u32 *)(arg0 + 0xDC) - pos);
        memcpy(*(u8 **)(arg0 + 0xE4), *(u8 **)(arg0 + 0xEC) + *(u32 *)(arg0 + 0xDC) - *(u32 *)(arg0 + 0xF0), end - *(u32 *)(arg0 + 0xDC));
        *(u32 *)(arg0 + 0xF0) = end - *(u32 *)(arg0 + 0xDC);
    } else {
        memcpy(*(u8 **)(arg0 + 0xE4) + pos, *(u8 **)(arg0 + 0xEC), arg1);
        *(u32 *)(arg0 + 0xF0) = end;
    }
    *(s32 *)(arg0 + 0x100) += arg1;
    fn_80275FC0(arg0);
    return 1;
}

s32 fn_802766C8(u8 *arg0, s32 arg1) {
    if (arg1 != 0) {
        if (*(s32 *)(arg0 + 0x60) == 0) {
            *(s32 *)(arg0 + 0x60) = 1;
            *(s32 *)(arg0 + 0xF8) = 0;
            *(s32 *)(arg0 + 0xF4) = 0;
            *(s32 *)(arg0 + 0x108) = *(s32 *)(arg0 + 0x104);
            *(s32 *)(arg0 + 0x100) = 0;
            *(s32 *)(arg0 + 0xF0) = 0;
            fn_802756B8(arg0 + 0x78, *(s32 *)(arg0 + 0x70), 1, *(s32 *)(arg0 + 0x104));
        }
    } else if (*(s32 *)(arg0 + 0x60) == 1) {
        fn_8027564C(arg0 + 0x78, 0);
        *(s32 *)(arg0 + 0x60) = arg1;
    }
    return *(s32 *)(arg0 + 0x60);
}

s32 fn_80276758(u8 *arg0, s32 arg1) {
    if (arg1 != 0) {
        if (*(s32 *)(arg0 + 0xFC) == 0) {
            *(s32 *)(arg0 + 0xFC) = 1;
            fn_80275F98();
        }
    } else if (*(s32 *)(arg0 + 0xFC) == 1) {
        *(s32 *)(arg0 + 0xFC) = arg1;
        fn_80276058(arg0);
    }
    return *(s32 *)(arg0 + 0xFC);
}

void fn_80275C64(void);
s32 fn_802753F0(void);
void fn_80276B84(void* arg0);
void fn_80275F98(void);
void fn_80276058(void *);
void fn_8027564C(void *, int);
void fn_802756B8(void *, int, int, int);
extern unsigned int lbl_802F3848[2];
void fn_802767E0(void);
void fn_802767C0(void)
{
    fn_80275C64();
}

void *fn_80276930(u32 *arg0)
{
    if (arg0 == 0) {
        lbl_802F3848[0] = 0;
        lbl_802F3848[1] = 0;
    } else {
        lbl_802F3848[0] = arg0[0];
        lbl_802F3848[1] = arg0[1];
    }
    return (void *)fn_802767E0;
}

extern u8 lbl_80357FC0[];
void fn_800EB764(void *, s32);
void fn_802769B8(s32 arg0) {
    fn_800EB764(lbl_80357FC0, arg0);
}

u8 *fn_802769E4(void) {
    return lbl_80357FC0;
}

#pragma push
#pragma opt_unroll_loops off
void fn_80276A90(s8 *dst, s16 *src, u32 len) {
    u32 n;
    for (n = len >> 1; n != 0; n--) {
        *dst++ = *src++ >> 8;
    }
}

void fn_80276E38(u8* arg0) {
    if (*(s32*)(arg0 + 0x280) == 0) {
        *(s32*)(arg0 + 0x280) = fn_802753F0();
        *(s32*)(arg0 + 0x284) = *(s32*)(arg0 + 0x270) - 1;
    }
}

#pragma pop
extern s32 lbl_802F3864;
extern s32 lbl_803580C0;
extern s32 lbl_802F3868;
extern u32 lbl_802F3870;
extern u32 lbl_802F3874[];
extern s32 lbl_802F385C;
void fn_80283E90(s32, void *);
void fn_80276FA0(s32 arg0, s32 arg1) {
    lbl_802F3864 = arg0;
    lbl_803580C0 = arg1;
}

void fn_80276FB4(s32 arg0) {
    lbl_802F3868 = arg0;
}

void fn_80276FD8(u32 count, u32 *src) {
    u32 i;
    if (count > 8) {
        count = 8;
    }
    lbl_802F3870 = count;
    for (i = 0; i < count; i++) {
        lbl_802F3874[i] = src[i];
    }
}

void fn_80277114(u8 *arg0) {
    fn_80283E90(lbl_802F385C, arg0 + 0xFC);
}

u32 fn_802771B8(u32* arg0, u32 arg1) {
    u32 v = arg0[-1];
    if (v == arg1) {
        return 0;
    }
    return ~v;
}

void fn_802771D4(u8* arg0, s32 arg1) {
    u8* p = arg0 - 0x34C;
    if (*(s32*)(p + 0x2F8) != 0) {
        fn_80276B84(p);
    }
    *(s32*)(p + 0x348) = arg1;
}

extern u8 lbl_802F3898[];
u8 *fn_8027A710(void) {
    return lbl_802F3898;
}

extern u8 *lbl_80300860[6];
void fn_802827BC(s32 arg0, s32 n) {
    while ((n -= 2) >= 0) {
        *(u32 *)lbl_80300860[0] = lbl_80300860[2][0] | (*lbl_80300860[4]++ << 8) | (lbl_80300860[2][1] << 16) | (*lbl_80300860[5]++ << 24);
        lbl_80300860[2] += 2;
        lbl_80300860[0] += 4;
    }
}

s32 fn_80284060(void) {
    return 0x1C;
}

extern f32 lbl_802AB290;
extern f32 lbl_802AB294;
extern f32 lbl_802AD300[][64];
void fn_8028F9D8(s32 n, f32 *a, s32 nc, f32 *c);
void fn_8028F720(f32 *a) {
    f32 x0r, x0i, x1r, x1i, x2r, x2i, x3r, x3i;

    x0r = a[0] + a[4];
    x0i = a[1] + a[5];
    x1r = a[0] - a[4];
    x1i = a[1] - a[5];
    x2r = a[2] + a[6];
    x2i = a[3] + a[7];
    x3r = a[2] - a[6];
    x3i = a[3] - a[7];
    a[4] = x0r - x2r;
    a[5] = x0i - x2i;
    a[6] = x1r - x3i;
    a[7] = x1i + x3r;
    a[0] = x0r + x2r;
    a[1] = x0i + x2i;
    a[2] = x1r + x3i;
    a[3] = x1i - x3r;
}

void fn_8028F7A4(f32 *a) {
    f32 x0r, x0i;

    x0r = a[0] - a[2];
    x0i = a[1] - a[3];
    a[0] += a[2];
    a[1] += a[3];
    a[2] = x0r;
    a[3] = x0i;
}

#pragma push
#pragma opt_unroll_loops off
void fn_8028F7D8(s32 n, f32 *a, s32 nc, f32 *c) {
    s32 j, k, kk, ks, m;
    f32 wkr, wki, xr, xi, yr, yi;

    m = n >> 1;
    ks = 2 * nc / m;
    kk = 0;
    for (j = 2; j < m; j += 2) {
        k = n - j;
        kk += ks;
        wkr = lbl_802AB290 - c[nc - kk];
        wki = c[kk];
        xr = a[j] - a[k];
        xi = a[j + 1] + a[k + 1];
        yr = wkr * xr - wki * xi;
        yi = wkr * xi + wki * xr;
        a[j] -= yr;
        a[j + 1] -= yi;
        a[k] += yr;
        a[k + 1] -= yi;
    }
}
#pragma pop
void fn_8028F890(s32 n, f32 *a, s32 nc, f32 *c) {
    s32 j, ks, m;
    f32 wkr, wki, xr, xi, yr, yi;
    f32 *p, *q, *c1, *c2;

    m = n >> 1;
    ks = 2 * nc / m;
    p = a + 2;
    q = a + n - 2;
    c1 = c;
    c2 = c + nc;
    for (j = 2; j < m; j += 2) {
        c1 += ks;
        c2 -= ks;
        wkr = lbl_802AB294 - *c2;
        wki = *c1;
        xr = p[0] - q[0];
        xi = p[1] + q[1];
        yr = wkr * xr + wki * xi;
        yi = wkr * xi - wki * xr;
        p[0] -= yr;
        p[1] -= yi;
        q[0] += yr;
        q[1] -= yi;
        p += 2;
        q -= 2;
    }
}

#pragma push
#pragma opt_unroll_loops off
void fn_8028F948(s32 n, f32 *a, s32 nc, f32 *c) {
    s32 j, k, kk, ks, m;
    f32 wkr, wki, xr;

    m = n >> 1;
    ks = nc / n;
    kk = 0;
    for (j = 1; j < m; j++) {
        k = n - j;
        kk += ks;
        wkr = c[kk] - c[nc - kk];
        wki = c[kk] + c[nc - kk];
        xr = wki * a[j] - wkr * a[k];
        a[j] = wkr * a[j] + wki * a[k];
        a[k] = xr;
    }
    a[m] *= c[0];
}
#pragma pop
void fn_80290190(s32 n, f32 *a, s32 nc, s32 idx) {
    f32 *c = lbl_802AD300[idx];
    fn_8028F9D8(n, a, nc, c);
}

