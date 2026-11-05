/* RAD Bink: 0x8027B7EC-0x8027D75C */
#include "bink_common.h"

void fn_8027B7EC(u32 size) {
    u32 aligned = (size + 0x1F) & ~0x1F;
    u32 total = aligned * 2;
    if (total > lbl_803018F8[0]) {
        if (lbl_803018FC[0] != 0) {
            fn_8027B790(lbl_803018FC[0]);
            lbl_803018FC[0] = 0;
        }
        lbl_803018FC[0] = fn_8027B6D4(total);
        lbl_803018F8[0] = total;
    }
    lbl_80301900[0] = lbl_803018FC[0] + aligned;
}

void fn_8027B86C(void) {
    if (lbl_803018FC[0] != 0) {
        fn_8027B790(lbl_803018FC[0]);
        lbl_803018FC[0] = 0;
        lbl_803018F8[0] = 0;
    }
}

void fn_8027B8B4(void *arg0) {
 u8 *s1=lbl_80300860[1], *s0=lbl_80300860[0];
 u8 *s2=lbl_80300860[2], *s3=lbl_80300860[3];
 u8 *s6=lbl_80300860[6], *s7=lbl_80300860[7];
 u8 *s4=lbl_80300860[4], *s5=lbl_80300860[5];
 s32 d;
 ((void (*)(void *))wCa_803590CC_8027B8B4[0])(arg0);
 lbl_80300860[2]=s2; lbl_80300860[3]=s3;
 lbl_80300860[6]=s6; lbl_80300860[7]=s7;
 lbl_80300860[4]=s4; lbl_80300860[5]=s5;
 lbl_80300860[0]=s0+(s32)lbl_80300860[17];
 d=lbl_80300860[1]-s1;
 lbl_80300860[1]=s1+(s32)lbl_80300860[17];
 ((void (*)(void *))wCa_803590CC_8027B8B4[0])(arg0);
 lbl_80300860[0]=s0+d; lbl_80300860[1]=s1+d;
}

void fn_8027B968(void *arg0) {
 u8 *s1=lbl_80300860[1], *s0=lbl_80300860[0];
 u8 *s2=lbl_80300860[2], *s3=lbl_80300860[3];
 u8 *s6=lbl_80300860[6], *s7=lbl_80300860[7];
 u8 *s4=lbl_80300860[4], *s5=lbl_80300860[5];
 s32 d;
 ((void (*)(void *))wCa_803590D0_8027B968[0])(arg0);
 lbl_80300860[2]=s2; lbl_80300860[3]=s3;
 lbl_80300860[6]=s6; lbl_80300860[7]=s7;
 lbl_80300860[4]=s4; lbl_80300860[5]=s5;
 lbl_80300860[0]=s0+(s32)lbl_80300860[17];
 d=lbl_80300860[1]-s1;
 lbl_80300860[1]=s1+(s32)lbl_80300860[17];
 ((void (*)(void *))wCa_803590D0_8027B968[0])(arg0);
 lbl_80300860[0]=s0+d; lbl_80300860[1]=s1+d;
}

typedef void (*ExpFn2)(u32, u32);
typedef u32 (*ExpFnR)(u32, u32);
typedef void (*ExpFn1)(u32);
extern ExpFn1 lbl_803590C4;
extern ExpFn1 lbl_803590C8;
extern ExpFn2 lbl_803590D4;
extern ExpFnR lbl_803590D8;
extern u32 lbl_803590E0;
extern u32 lbl_803008A8;
typedef struct { u32 d[0x400]; } ExpT4K;
typedef struct { u32 d[0x100]; } ExpT1K;
extern u32 lbl_803590E4;
extern u32 lbl_803590DC;
extern u32 lbl_803590E8;
extern s32 lbl_803008A4;
extern s32 lbl_803018F0;
extern void *lbl_803590D0;
extern u32 lbl_803008C0[];
extern u32 lbl_80300CC0[];
extern u32 lbl_803010C0[];
extern u32 lbl_803014C0[];
extern u32 lbl_803580C4[];
extern u32 lbl_803584C4[];
extern u32 lbl_803588C4[];
extern u32 lbl_80358CC4[];
typedef struct {
    u32 f0;
    u32 f1;
    void * f2;
    u32 f3;
    void * f4;
    u32 f5;
    void * f6;
    u32 f7;
    void * f8;
    u32 f9;
    void * f10;
    u32 f11;
    void * f12;
    ExpFn2 f13;
    ExpFnR f14;
    ExpFn2 f15;
    ExpFnR f16;
    ExpFn2 f17;
    ExpFnR f18;
    ExpFn2 f19;
    ExpFnR f20;
    ExpFn2 f21;
    ExpFnR f22;
    ExpFn2 f23;
    ExpFnR f24;
    ExpFn2 f25;
    ExpFnR f26;
    ExpFn2 f27;
    ExpFnR f28;
} ExpFmt;
void fn_8027BA1C(u32 flags, s32 *pitch, u32 w, u32 h, ExpFmt *fmt, s32 *adv) {
    u32 mode;
    lbl_803590E8 = 0;
    lbl_803008A4 = *pitch;
    if (flags & 0x10000) {
        if (lbl_803018F0 != 1) {
            lbl_803018F0 = 1;
            *(ExpT1K *)lbl_803014C0 = *(ExpT1K *)lbl_803580C4;
            *(ExpT1K *)lbl_80300CC0 = *(ExpT1K *)lbl_803588C4;
            *(ExpT1K *)lbl_803010C0 = *(ExpT1K *)lbl_803584C4;
            *(ExpT1K *)lbl_803008C0 = *(ExpT1K *)lbl_80358CC4;
        }
    } else {
        if (lbl_803018F0 != 0) {
            lbl_803018F0 = 0;
            *(ExpT4K *)lbl_803008C0 = *(ExpT4K *)lbl_803580C4;
        }
    }
    mode = flags & 0x70000000;
    if (mode == 0x10000000) {
        fn_8027B7EC(w * fmt->f0);
        *pitch += *pitch;
        *adv = *pitch - w * fmt->f0;
        if (flags & 0x20000) {
            lbl_803590C4 = (ExpFn1)fn_8027B8B4;
            lbl_803590C8 = (ExpFn1)fn_8027B968;
            lbl_803590D4 = fmt->f23;
            lbl_803590D8 = fmt->f24;
            lbl_803590D0 = fmt->f6;
            lbl_803590CC = fmt->f6;
            lbl_803590E4 = fmt->f5;
        } else {
            lbl_803590C4 = (ExpFn1)fn_8027B8B4;
            lbl_803590C8 = (ExpFn1)fn_8027B968;
            lbl_803590D4 = fmt->f21;
            lbl_803590D8 = fmt->f22;
            lbl_803590CC = fmt->f2;
            lbl_803590D0 = fmt->f4;
            lbl_803590E4 = fmt->f3 < fmt->f1 ? fmt->f1 : fmt->f3;
        }
    } else if (mode == 0x30000000 || mode == 0x50000000) {
        *adv = *pitch - w * fmt->f0 * 2;
        if (flags & 0x20000) {
            lbl_803590D4 = fmt->f19;
            lbl_803590D8 = fmt->f20;
            lbl_803590C8 = fmt->f12;
            lbl_803590C4 = fmt->f12;
            lbl_803590E4 = fmt->f11;
        } else {
            lbl_803590D4 = fmt->f17;
            lbl_803590D8 = fmt->f18;
            lbl_803590C4 = fmt->f8;
            lbl_803590C8 = fmt->f10;
            lbl_803590E4 = fmt->f9 < fmt->f7 ? fmt->f7 : fmt->f9;
        }
    } else if (mode == 0x40000000) {
        fn_8027B7EC(w * fmt->f0 * 2);
        *pitch += *pitch;
        *adv = *pitch - w * fmt->f0 * 2;
        if (flags & 0x20000) {
            lbl_803590C4 = (ExpFn1)fn_8027B8B4;
            lbl_803590C8 = (ExpFn1)fn_8027B968;
            lbl_803590D4 = fmt->f27;
            lbl_803590D8 = fmt->f28;
            lbl_803590D0 = fmt->f12;
            lbl_803590CC = fmt->f12;
            lbl_803590E4 = fmt->f11;
        } else {
            lbl_803590C4 = (ExpFn1)fn_8027B8B4;
            lbl_803590C8 = (ExpFn1)fn_8027B968;
            lbl_803590D4 = fmt->f25;
            lbl_803590D8 = fmt->f26;
            lbl_803590CC = fmt->f8;
            lbl_803590D0 = fmt->f10;
            lbl_803590E4 = fmt->f9 < fmt->f7 ? fmt->f7 : fmt->f9;
        }
    } else {
        *adv = *pitch - w * fmt->f0;
        if (flags & 0x20000) {
            lbl_803590D4 = fmt->f15;
            lbl_803590D8 = fmt->f16;
            lbl_803590C8 = fmt->f6;
            lbl_803590C4 = fmt->f6;
            lbl_803590E4 = fmt->f5;
        } else {
            lbl_803590D4 = fmt->f13;
            lbl_803590D8 = fmt->f14;
            lbl_803590C4 = fmt->f2;
            lbl_803590C8 = fmt->f4;
            lbl_803590E4 = fmt->f3 < fmt->f1 ? fmt->f1 : fmt->f3;
        }
    }
    lbl_803590DC = 1 << lbl_803590E4;
    lbl_803590E0 = (1 << lbl_803590E4) - 1;
}

void wEM_BFB8(u32 x, u32 y, s32 a2, s32 pitch, u8 *a4, u32 a5, u32 a6, u32 w, u32 h, u32 a9, u32 a10, u32 flags, u8 *a12, ExpFmt *fmt) asm("fn_8027BFB8");
void wEM_BFB8(u32 x, u32 y, s32 a2, s32 p, u8 *a4, u32 a5, u32 a6, u32 w, u32 h, u32 a9, u32 a10, u32 flags, u8 *a12, ExpFmt *fmt) {
    s32 pitch;
    s32 adv;
    u32 n, cnt, q, rem, src;
    s32 row, end, d, dh;
    pitch = p;
    if ((flags & 0x70000000) == 0x60000000) {
        p = pitch + pitch;
        a6 >>= 1;
        h >>= 1;
        a10 >>= 1;
        a9 += a9;
    }
    lbl_80300860[18] = (u8 *)x;
    if (fmt->f0 == 2) {
        if ((x & 3) == 2) {
            y++;
            x &= ~3;
        }
    } else if (fmt->f0 == 3) {
        if (((x - 3) & 3) == 0) {
            x -= 3;
            y++;
        } else if (((x - 6) & 3) == 0) {
            x -= 6;
            y += 2;
        } else if (((x - 9) & 3) == 0) {
            x -= 9;
            y += 3;
        }
    }
    lbl_80300860[0] = (u8 *)(x + (a2 * pitch + y * fmt->f0));
    if ((flags & 0x70000000) == 0x20000000 || (flags & 0x70000000) == 0x50000000) {
        p += p;
    }
    fn_8027BA1C(flags, &p, w, h, fmt, &adv);
    lbl_80300860[2] = a4 + a5 + a6 * a9;
    lbl_80300860[1] = lbl_80300860[0] + p;
    lbl_80300860[6] = a12 + a5 + a6 * a9;
    lbl_80300860[3] = lbl_80300860[2] + a9;
    lbl_80300860[7] = lbl_80300860[6] + a9;
    dh = (a9 >> 1) - (w >> 1);
    d = a9 - w;
    if ((w & 1) && (a5 & 1)) { dh--; }
    if (flags & 0x10000) { lbl_80300860[4] = a4 + a9 * a10; lbl_80300860[5] = lbl_80300860[4] + (a9 >> 1) * (a10 >> 1); } else { lbl_80300860[5] = a4 + a9 * a10; lbl_80300860[4] = lbl_80300860[5] + (a9 >> 1) * (a10 >> 1); }
    lbl_80300860[4] = lbl_80300860[4] + (a5 >> 1) + (a6 >> 1) * (a9 >> 1);
    lbl_80300860[5] = lbl_80300860[5] + (a5 >> 1) + (a6 >> 1) * (a9 >> 1);
    row = a6;
    end = row + h - 1;
    if ((row & 1) && row <= end) {
        row++;
        lbl_803590D4(a5, w);
        lbl_80300860[2] += d;
        lbl_80300860[6] += d;
        lbl_80300860[3] = lbl_80300860[2] + a9;
        lbl_80300860[7] = lbl_80300860[6] + a9;
        lbl_80300860[4] += dh;
        lbl_80300860[5] += dh;
        lbl_80300860[0] += adv;
        lbl_80300860[1] = lbl_80300860[0] + p;
    }
    n = (4 - (y & 3)) & 3;
    if (n > w) n = w;
    while (row < end) {
        cnt = w;
        src = a5;
        if (n != 0) {
            cnt = w - n;
            src = lbl_803590D8(n, a5);
        }
        rem = cnt;
        q = (rem & ~lbl_803590E0) >> 2;
        rem -= q * 4;
        if (q != 0) {
            if (src & 1) lbl_803590C8(q);
            else lbl_803590C4(q);
        }
        src += q * 4;
        if (rem != 0) lbl_803590D8(rem, src);
        row += 2;
        lbl_80300860[2] = lbl_80300860[3] + d;
        lbl_80300860[6] = lbl_80300860[7] + d;
        lbl_80300860[0] = lbl_80300860[1] + adv;
        lbl_80300860[3] = lbl_80300860[2] + a9;
        lbl_80300860[7] = lbl_80300860[6] + a9;
        lbl_80300860[4] += dh;
        lbl_80300860[5] += dh;
        lbl_80300860[1] = lbl_80300860[0] + p;
    }
    if (row <= end) lbl_803590D4(a5, w);
}

typedef struct { u32 d[19]; } ExpSave;
void wEQ_C408(u32 x, u32 y, u32 a2, u32 pitch, u8 *mk, u32 a5, u8 *a6, s32 a7, u32 a8, u32 w, u32 h, u32 st, u32 a12, u32 flags, u8 *a14, ExpFmt *fmt) asm("fn_8027C408");
void wEQ_C408(u32 x, u32 y, u32 a2, u32 pitch, u8 *mk, u32 a5, u8 *a6, s32 a7, u32 a8, u32 w, u32 h, u32 st, u32 a12, u32 flags, u8 *a14, ExpFmt *fmt) {
    s32 p16, adv16, p, adv32;
    u32 madv;
    s32 dh16, yadv, uvadv, dadv;
    u32 pt, st0, h0, a120, bpp;
    s32 lastrow, lastcol, row;
    u32 off, bpb, n, r, t;
    s32 k;
    s32 d16, d32, dh8, col, ncol, step;
    u8 *m, *nm;
    ExpSave save;
    pt = pitch;
    p = pt;
    st0 = st;
    h0 = h;
    a120 = a12;
    if ((flags & 0x70000000) == 0x60000000) {
        p = pt + pt;
        a8 >>= 1;
        h >>= 1;
        a12 >>= 1;
        st += st;
        off = a5;
        a5 += a5;
    } else {
        off = 0;
    }
    lbl_80300860[18] = (u8 *)x;
    lbl_80300860[0] = (u8 *)(x + (a2 * pt + y * fmt->f0));
    if ((flags & 0x70000000) == 0x20000000 || (flags & 0x70000000) == 0x50000000) {
        p += p;
    }
    madv = a5 - (w >> 4);
    p16 = p;
    fn_8027BA1C(flags, &p16, 16, h, fmt, &adv16);
    fn_8027BA1C(flags, &p, 32, h, fmt, &adv32);
    if ((flags & 0x70000000) == 0x30000000 || (flags & 0x70000000) == 0x50000000 ||
        (flags & 0x70000000) == 0x30000000 || (flags & 0x70000000) == 0x40000000) {
        bpp = 2;
    } else {
        bpp = 1;
    }
    bpb = (fmt->f0 * bpp) << 4;
    d16 = st - 16;
    dh16 = (st >> 1) - 16;
    d32 = st - 32;
    lbl_80300860[2] = a6 + a7 + a8 * st;
    lbl_80300860[6] = a14 + a7 + a8 * st;
    lbl_80300860[3] = lbl_80300860[2] + st;
    lbl_80300860[7] = lbl_80300860[6] + st;
    p16 = st - w;
    yadv = p16 + (w & 15) + st * 14;
    uvadv = (st >> 1) - (w >> 1) + ((w & 15) >> 1) + (st >> 1) * 7;
    dadv = p - w * (bpb >> 4) + (w & 15) * (bpb >> 4) + p * 14;
    if (flags & 0x10000) { lbl_80300860[4] = a6 + st * a12; lbl_80300860[5] = lbl_80300860[4] + (st >> 1) * (a12 >> 1); } else { lbl_80300860[5] = a6 + st * a12; lbl_80300860[4] = lbl_80300860[5] + (st >> 1) * (a12 >> 1); }
    dh8 = (st >> 1) - 8;
    lbl_80300860[4] = lbl_80300860[4] + (a7 >> 1) + (a8 >> 1) * (st >> 1);
    lbl_80300860[5] = lbl_80300860[5] + (a7 >> 1) + (a8 >> 1) * (st >> 1);
    lastrow = h + a8 - 1;
    lastcol = w + a7 - 1;
    m = mk + a5 * (a8 >> 4) + a7 / 16;
    lbl_80300860[1] = lbl_80300860[0] + p;
    row = a8;
    while (row + 15 <= lastrow) {
        row += 16;
        col = a7;
        while (col + 31 <= lastcol) {
            k = (m[1] ? 2 : 0) + (m[0] != 0);
            if (off != 0) {
                s32 k2 = k | (m[off + 1] ? 2 : 0) + (m[off] != 0);
                k = k2;
            }
            switch (k) {
            default:
                nm = m + 2;
                ncol = col + 32;
                step = bpb + bpb;
                break;
            case 1:
                nm = m + 2;
                ncol = col + 32;
                step = bpb + bpb;
                save = *(ExpSave *)lbl_80300860;
                for (n = 8; n != 0; n--) {
                    lbl_803590C4(4);
                    lbl_80300860[2] = lbl_80300860[3] + d16;
                    lbl_80300860[6] = lbl_80300860[7] + d16;
                    lbl_80300860[0] = lbl_80300860[1] + adv16;
                    lbl_80300860[3] = lbl_80300860[2] + st;
                    lbl_80300860[7] = lbl_80300860[6] + st;
                    lbl_80300860[4] += dh8;
                    lbl_80300860[5] += dh8;
                    lbl_80300860[1] = lbl_80300860[0] + p;
                }
                *(ExpSave *)lbl_80300860 = save;
                break;
            case 2:
                nm = m + 2;
                ncol = col + 32;
                step = bpb + bpb;
                save = *(ExpSave *)lbl_80300860;
                lbl_80300860[2] += 16;
                lbl_80300860[3] += 16;
                lbl_80300860[6] += 16;
                lbl_80300860[7] += 16;
                lbl_80300860[4] += 8;
                lbl_80300860[5] += 8;
                lbl_80300860[0] += bpb;
                lbl_80300860[1] += bpb;
                for (n = 8; n != 0; n--) {
                    lbl_803590C4(4);
                    lbl_80300860[2] = lbl_80300860[3] + d16;
                    lbl_80300860[6] = lbl_80300860[7] + d16;
                    lbl_80300860[0] = lbl_80300860[1] + adv16;
                    lbl_80300860[3] = lbl_80300860[2] + st;
                    lbl_80300860[7] = lbl_80300860[6] + st;
                    lbl_80300860[4] += dh8;
                    lbl_80300860[5] += dh8;
                    lbl_80300860[1] = lbl_80300860[0] + p;
                }
                *(ExpSave *)lbl_80300860 = save;
                break;
            case 3:
                nm = m + 2;
                ncol = col + 32;
                step = bpb + bpb;
                save = *(ExpSave *)lbl_80300860;
                for (n = 8; n != 0; n--) {
                    lbl_803590C4(8);
                    lbl_80300860[2] = lbl_80300860[3] + d32;
                    lbl_80300860[6] = lbl_80300860[7] + d32;
                    lbl_80300860[0] = lbl_80300860[1] + adv32;
                    lbl_80300860[3] = lbl_80300860[2] + st;
                    lbl_80300860[7] = lbl_80300860[6] + st;
                    lbl_80300860[4] += dh16;
                    lbl_80300860[5] += dh16;
                    lbl_80300860[1] = lbl_80300860[0] + p;
                }
                *(ExpSave *)lbl_80300860 = save;
                break;
            }
            lbl_80300860[2] += 32;
            lbl_80300860[3] += 32;
            lbl_80300860[6] += 32;
            lbl_80300860[7] += 32;
            lbl_80300860[4] += 16;
            lbl_80300860[5] += 16;
            lbl_80300860[0] += step;
            lbl_80300860[1] += step;
            col = ncol;
            m = nm;
        }
        if (col + 15 <= lastcol) {
            k = m[0];
            if (off != 0) k |= m[off];
            m++;
            if (k != 0) {
                save = *(ExpSave *)lbl_80300860;
                for (n = 8; n != 0; n--) {
                    lbl_803590C4(4);
                    lbl_80300860[2] = lbl_80300860[3] + d16;
                    lbl_80300860[6] = lbl_80300860[7] + d16;
                    lbl_80300860[0] = lbl_80300860[1] + adv16;
                    lbl_80300860[3] = lbl_80300860[2] + st;
                    lbl_80300860[7] = lbl_80300860[6] + st;
                    lbl_80300860[4] += dh8;
                    lbl_80300860[5] += dh8;
                    lbl_80300860[1] = lbl_80300860[0] + p;
                }
                *(ExpSave *)lbl_80300860 = save;
            }
            lbl_80300860[2] += 16;
            lbl_80300860[3] += 16;
            lbl_80300860[6] += 16;
            lbl_80300860[7] += 16;
            lbl_80300860[4] += 8;
            lbl_80300860[5] += 8;
            lbl_80300860[0] += bpb;
            lbl_80300860[1] += bpb;
        }
        lbl_80300860[2] = lbl_80300860[3] + yadv;
        lbl_80300860[6] = lbl_80300860[7] + yadv;
        lbl_80300860[0] = lbl_80300860[1] + dadv;
        lbl_80300860[3] = lbl_80300860[2] + st;
        lbl_80300860[7] = lbl_80300860[6] + st;
        lbl_80300860[4] += uvadv;
        lbl_80300860[5] += uvadv;
        lbl_80300860[1] = lbl_80300860[0] + p;
        m += madv;
    }
    if (w & 15) {
        t = w & ~15;
        wEM_BFB8(x, t * bpp + y, a2, pt, a6, t, a8, w - t, h0, st0, a120, flags, a14, fmt);
    }
    if (h & 15) {
        n = h0 - 1;
        r = fn_802752DC(h & ~15, h0, h);
        wEM_BFB8(x, y, fn_802752DC(r, p * st0, pt * st) + a2, pt, a6, a7, r, w, n - r + 1, st0, a120, flags, a14, fmt);
    }
}

extern s32 eT72A0[] asm("lbl_802F72A0");
extern s32 eT76C0[] asm("lbl_802F76C0");
extern u32 *eAE0[] asm("lbl_802F7AE0");
extern u32 eF00[3][256] asm("lbl_802F7F00");
extern u32 eA[] asm("lbl_802F8B20");
extern u32 eR[] asm("lbl_802F8F40");
extern u32 eG[] asm("lbl_802F9B60");
extern u32 eB[] asm("lbl_802FA780");
extern u32 eR2[] asm("lbl_802FB3A0");
extern u32 eG2[] asm("lbl_802FBFC0");
extern u32 eB2[] asm("lbl_802FCBE0");
extern u32 eR3[] asm("lbl_802FD800");
extern u32 eG3[] asm("lbl_802FE420");
extern u32 eB3[] asm("lbl_802FF040");
extern u32 eFC60[] asm("lbl_802FFC60");
extern u32 e0060[] asm("lbl_80300060");
extern u32 e0460[] asm("lbl_80300460");
extern s32 eE[4][256] asm("lbl_803008C0");
extern u32 eFmt[] asm("lbl_803018C0");
extern s32 lbl_803018F4;
extern s32 lbl_80301904;

void fn_8027D050(s32 mode) {
    unsigned int n;
    s32 i, k;
    u32 rs, gb, gs, bb, bs, rb;
    u32 rl, gl, bl, rm, gm, bm, white, white2, v, c;
    if (lbl_80301904 == 0) {
        for (i = 0, n = 0x100; n != 0; n--, i++) {
            eT72A0[i] = i > 16 ? (i <= 234 ? ((i - 16) * 0x950a) / 32768 : 0xfe) : 0;
            eT76C0[i] = eT72A0[i] << 2;
            k = i - 128;
            eE[1][i] = -((k * 0x680f) / 32768);
            eE[2][i] = -((k * 0x3225) / 32768);
            eE[3][i] = (k * 0xcc4b) / 32768;
            eE[0][i] = (k * 0x10235) / 32768;
        }
        for (i = 0, n = 0x100; n != 0; n--, i++) {
            eF00[0][i] = 0;
            eF00[1][i] = i;
            eF00[2][i] = 0xff;
            eAE0[i] = &eF00[1][eT72A0[i]];
        }
        lbl_80301904 = 1;
        *(ExpT4K *)lbl_803580C4 = *(ExpT4K *)lbl_803008C0;
    }
    if (lbl_803018F4 != mode && mode != -1) {
    lbl_803018F4 = mode;
    switch (mode) {
    case 10: rb = 5; rs = 0; gb = 6; gs = 5; bb = 5; bs = 11; break;
    case 8: case 9: gb = 5; rb = 5; rs = 0; gs = 5; bb = 5; bs = 10; break;
    case 7: gb = 4; rb = 4; rs = 0; gs = 4; bb = 4; bs = 8; break;
    case 12: gb = 6; rb = 6; rs = 0; gs = 6; bb = 4; bs = 12; break;
    case 11: rb = 6; rs = 0; gb = 5; gs = 6; bb = 5; bs = 11; break;
    default: gb = 0; rb = 0; gs = 0; rs = 0; bb = 0; bs = 0; break;
    }
#define rl (8 - rb)
#define gl (8 - gb)
#define bl (8 - bb)
#define white ((0xff >> rl) | ((0xff >> gl) << gs) | ((0xff >> bl) << bs))
#define white2 (white | (white << 16))
    eFmt[0] = rs;
    eFmt[1] = 0;
    eFmt[2] = gs;
    eFmt[3] = 0;
    eFmt[4] = bs;
    eFmt[5] = 0;
    eFmt[6] = 8 - rb;
    eFmt[7] = 0;
    eFmt[8] = 8 - gb;
    eFmt[9] = 0;
    eFmt[10] = 8 - bb;
    eFmt[11] = 0;
    rm = (1 << rb) - 1;
    gm = ((1 << gb) - 1) << gs;
    bm = ((1 << bb) - 1) << bs;
    for (i = 0, n = 0x100; n != 0; n--, i++) {
        if (i <= 16) {
            eFC60[i] = 0;
            e0060[i] = 0;
            e0460[i] = 0;
        } else if (i > 234) {
            eFC60[i] = white;
            e0060[i] = white2;
            e0460[i] = 0xffffff;
        } else {
            v = ((i - 16) * 255) / 219;
            c = (v >> rl) | ((v >> gl) << gs) | ((v >> bl) << bs);
            e0060[i] = c | (c << 16);
            e0460[i] = (v << 16) | (v << 8) | v;
            eFC60[i] = c;
        }
        eR[i] = 0;
        eG[i] = 0;
        eG3[i] = 0;
        eB[i] = 0;
        eR[i + 256] = i >> rl;
        eG[i + 256] = (i >> gl) << gs;
        eB[i + 256] = (i >> bl) << bs;
        eR[i + 512] = rm;
        eG[i + 512] = gm;
        eB[i + 512] = bm;
        eR2[i] = eR[i] << 16;
        eG2[i] = eG[i] << 16;
        eR3[i] = 0;
        eG3[i + 256] = ((i >> gl) << gs) + (((i >> gl) << gs) << 16);
        eR3[i + 256] = (i >> rl) + ((i >> rl) << 16);
        eB3[i + 256] = ((i >> bl) << bs) + (((i >> bl) << bs) << 16);
        eB3[i] = 0;
        eR2[i + 256] = eR[i + 256] << 16;
        eG2[i + 256] = eG[i + 256] << 16;
        eB2[i] = eB[i] << 16;
        eA[i] = (i >> 5) << 12;
        eB2[i + 256] = eB[i + 256] << 16;
        eR3[i + 512] = rm + (rm << 16);
        eG3[i + 512] = gm + (gm << 16);
        eB3[i + 512] = bm + (bm << 16);
        eR2[i + 512] = rm << 16;
        eG2[i + 512] = gm << 16;
        eB2[i + 512] = bm << 16;
    }
    }
}
#undef rl
#undef gl
#undef bl
#undef white
#undef white2
#undef rm
#undef gm
#undef bm
