/* RAD Bink: 0x80276970-0x8027ABEC */
#include "bink_common.h"

u8 *fn_80276970(u8 *s, u32 size) {
    *(s32 *)(s + 0x2a8) += fn_80287804() + size;
    return wC_fn_80287810(size);
}

void fn_802769B8(s32 arg0) {
    strcpy(lbl_80357FC0, arg0);
}

u8 *fn_802769E4(void) {
    return lbl_80357FC0;
}

s32 fn_802769F0(void *fn, void *arg) {
    s32 r;
    if (fn == 0) {
        return 0;
    }
    if (wCa_802F3850_769F0[0] == 0) {
        wCa_802F3850_769F0[0] = fn;
    }
    if (wCa_802F3850_769F0[0] != fn) {
        if (wCa_802F3858_769F0[0] != 0) {
            return 0;
        }
        wCa_802F3850_769F0[0] = fn;
    }
    r = ((s32 (*)(void *))wCa_802F3850_769F0[0])(arg);
    if (r != 0) {
        wCa_802F3854_769F0[0] = r;
    }
    return wCa_802F3854_769F0[0] != 0;
}

void fn_80276A90(s8 *dst, s16 *src, u32 len) {
    u32 n;
    for (n = len >> 1; n != 0; n--) {
        *dst++ = *src++ >> 8;
    }
}

u32 fn_80276AB8(u8 *p) {
    u32 start = *(u32 *)(p + 64);
    u32 end = *(u32 *)(p + 76);
    if (start < end) {
        u32 len = end - start;
        u32 ms = (len * 1000) / ((*(u32 *)(p + 108) * *(u32 *)(p + 112) * *(u32 *)(p + 116)) >> 3);
        u32 pos = *(u32 *)(p + 56) - len;
        u32 base;
        *(u32 *)(p + 56) = pos;
        base = *(u32 *)(p + 44);
        if (pos < base) {
            u32 wrap = base - pos;
            *(u32 *)(p + 56) = pos + *(u32 *)(p + 40);
            memset((void *)base, 0, len - wrap);
            memset(*(void **)(p + 56), 0, wrap);
        } else {
            memset((void *)pos, 0, len);
        }
        *(u32 *)(p + 64) += len;
        return ms;
    }
    return 0;
}

typedef struct BTrk {
    s32 (*ready)(struct BTrk *);
    s32 (*get)(struct BTrk *, u8 **, u32 *);
    void (*done)(struct BTrk *, u32);
    u8 pad0C[0x28 - 0x0C];
    u32 size;
    u8 *start;
    u8 *end;
    u8 *wr;
    u8 *rd;
    Fn80283750Struct *dec;
    u32 left;
    s32 cvt;
    s32 lim;
    u8 pad4C[0x54 - 0x4C];
    u32 thr;
    u32 mask;
    u8 pad5C[376 - 0x5C];
} BTrk;
#define TRK(i) (&(*(BTrk **)(b + 768))[i])
#define CVT ((u8 *(*)(u8 *, u8 *, u32))fn_80276A90)
#define CPY ((void *(*)())memcpy)
/* identity inline: its RTL pushes the loop's 3rd test past expand_end_loop's 30-insn scan, so it stays at the top */
static inline u32 pad(u32 x) { u32 a = x, c = a, d = c, e = d, f = e, g = f; return g; }
void fn_80276B84(void *bv) {
    u8 *b = bv;
    u32 i;
    u8 *buf;
    u32 size;
    if (TRK(*(u32 *)(b + 760) - 1)->ready == 0) return;
    if (fn_80283DFC(wCa_802F3860_7925C[0], b + 844) == 0) return;
    for (i = 0; i < *(u32 *)(b + 760); i++) {
        while (pad(TRK(i)->left) > TRK(i)->thr || (*(s32 *)(b + 12) > TRK(i)->lim && TRK(i)->left != 0)) {
            u32 n;
            if (TRK(i)->get(TRK(i), &buf, &size) == 0) break;
            if (TRK(i)->cvt) size += size;
            if (size > TRK(i)->left) size = TRK(i)->left;
            if (!(*(s32 *)(b + 12) > TRK(i)->lim)) size &= TRK(i)->mask << TRK(i)->cvt;
            TRK(i)->left -= size;
            n = TRK(i)->end - TRK(i)->rd;
            if (n < size) {
                if (n) {
                    if (TRK(i)->cvt) buf = CVT(buf, TRK(i)->rd, n);
                    else { CPY(buf, TRK(i)->rd, n); buf += n; }
                }
                if (TRK(i)->cvt) CVT(buf, TRK(i)->start, size - n);
                else CPY(buf, TRK(i)->start, size - n);
                TRK(i)->rd = TRK(i)->start + (size - n);
            } else {
                if (TRK(i)->cvt) CVT(buf, TRK(i)->rd, size);
                else CPY(buf, TRK(i)->rd, size);
                TRK(i)->rd += size;
            }
            if (TRK(i)->cvt) size >>= 1;
            TRK(i)->done(TRK(i), size);
            if (TRK(i)->ready(TRK(i)) == 0) break;
        }
    }
    fn_80283F38(wCa_802F3860_7925C[0], b + 844);
}
#undef TRK
#undef CVT
#undef CPY

void fn_80276E38(u8* arg0) {
    if (*(s32*)(arg0 + 0x280) == 0) {
        *(s32*)(arg0 + 0x280) = fn_802753F0();
        *(s32*)(arg0 + 0x284) = *(s32*)(arg0 + 0x270) - 1;
    }
}

void fn_80276E80(u8 *arg0, s32 arg1) {
    u32 *offsets;
    if (arg1 != 0) {
        arg1--;
    }
    *(s32 *)(arg0 + 0x308) = 0;
    if (*(s32 *)(arg0 + 0x2F8) != 0) {
        fn_80276B84(arg0);
    }
    *(s32 *)(arg0 + 0x10) = *(s32 *)(arg0 + 0xC);
    if (arg1 == 0) {
        s32 now = fn_802753F0();
        if (*(s32 *)(arg0 + 0x2F0) == 0) {
            *(s32 *)(arg0 + 0x2F0) = now;
        }
        if ((u32)(now - *(s32 *)(arg0 + 0x2F0)) > 300000) {
            *(s32 *)(arg0 + 0x2F0) = now;
            *(s32 *)(arg0 + 0x2F4) = 1;
        }
    }
    if (*(s32 *)(arg0 + 0x108) != 0) {
        u32 *o = *(u32 **)(arg0 + 0x10C);
        *(s32 *)(arg0 + 0x104) = *(s32 *)(arg0 + 0x108) + ((o[arg1] & ~1) - (o[0] & ~1));
    } else {
        offsets = *(u32 **)(arg0 + 0x10C);
        (*(void (**)(u8 *, s32, u32, s32, u32))(arg0 + 0x114))(arg0 + 0x110, arg1, offsets[arg1] & ~1, *(s32 *)(arg0 + 0x104), (offsets[arg1 + 1] & ~1) - (offsets[arg1] & ~1));
    }
    if (*(s32 *)(arg0 + 0x2F8) != 0) {
        fn_80276B84(arg0);
    }
    *(s32 *)(arg0 + 0xC) = arg1 + 1;
}

void fn_80276FA0(s32 arg0, s32 arg1) {
    lbl_802F3864[0] = arg0;
    lbl_803580C0[0] = arg1;
}

void fn_80276FB4(s32 arg0) {
    lbl_802F3868[0] = arg0;
}

void fn_80276FC0(s32 v) {
    wCa_802F3894[0] = v;
}

void fn_80276FCC(s32 v) {
    wCa_802F386C[0] = v;
}

void fn_80276FD8(u32 count, u32 *src) {
    u32 i;
    if (count > 8) {
        count = 8;
    }
    lbl_802F3870_a[0] = count;
    for (i = 0; i < count; i++) {
        lbl_802F3874[i] = src[i];
    }
}

u32 fn_80277020(s32 n, u32 *arr, s32 k, s32 *outIdx, s32 *outFlag) {
    s32 i;
    u32 max = 0;
    s32 idx = 0;
    s32 flag = 1;

    for (i = 0; i < n - k; i++) {
        u32 d = arr[i + k] - arr[i];
        if (d > max) {
            max = d;
            idx = i;
        }
    }
    if (max == 0) {
        max = fn_802752DC(arr[n] - arr[0], k, n);
    }
    for (i = 0; i < n; i++) {
        if (!(arr[i] & 1)) {
            flag = 0;
            break;
        }
    }
    *outFlag = flag;
    *outIdx = idx;
    return max;
}

void fn_80277114(u8 *p) {
    fn_80283E90(wCa_802F385C[0], p + 252);
}

void fn_80277140(u8 *p) {
    fn_80283DFC(wCa_802F385C[0], p + 252);
}

void fn_8027716C(u8 *p) {
    fn_80283F38(wCa_802F385C[0], p + 252);
}

void fn_80277198(void) { fn_8028405C(); }

s32 fn_802771B8(s32 *p, s32 b) {
    s32 v = p[-1];
    if (v != b) {
        return ~v;
    }
    return 0;
}

void fn_802771D4(u8* arg0, s32 arg1) {
    u8* p = arg0 - 0x34C;
    if (*(s32*)(p + 0x2F8) != 0) {
        fn_80276B84(p);
    }
    *(s32*)(p + 0x348) = arg1;
}

#define L(o) (*(u32 *)((u8 *)&bk + (o)))
#define B(o) (*(u32 *)(b + (o)))
#define H(o) (hdr.w[((o) - 0x398 + 8) / 4])
u8 *fn_80277218(void *name, u32 flags) {
    wDBink_77218 bk;
    wDBinkHdr_77218 hdr;
    wDBink_77218 *pbk;
    s32 notfirst;
    wDOpen_77218 openfn = wD7218_defopen;
    u8 *b;
    u32 i;
    s32 simulate;

    if (!(flags & 0x4000)) {
        wD7218_tracknum[0] = 1;
        wD7218_tracks[0] = 0;
    }
    wD7218_memset(pbk = &bk, 0, 0x38c);
    L(0x2b8) = wD7218_now();
    wD7218_err[0] = 0;
    if (flags & 0x4000000) {
        hdr = *(wDBinkHdr_77218 *)name;
    } else {
        if ((flags & 0x2000000) && wD7218_openover[0] != 0) openfn = wD7218_openover[0];
        wD7218_openover[0] = 0;
        if (!openfn((u8 *)&bk + 0x110, name, flags)) {
            if (!wD7218_err[0]) wD7218_seterr(wD7218_s0);
            return 0;
        }
        ((wDRead_77218)L(0x110))((u8 *)&bk + 0x110, 0, &hdr, 0x2c);
    }
    if (hdr.w[0] != 0x664b4942 && hdr.w[0] != 0x674b4942 && hdr.w[0] != 0x684b4942 && hdr.w[0] != 0x694b4942) {
        wD7218_seterr(wD7218_s1);
    fail:
        if (!(flags & 0x4000000)) ((wDOne_77218)L(0x124))((u8 *)&bk + 0x110);
        return 0;
    }
    if (hdr.w[2] == 0) {
        wD7218_seterr(wD7218_s2);
        goto fail;
    }
    {
        u32 w = hdr.w[5];
        u32 h = hdr.w[6];
        u32 hf = hdr.w[9];
        u32 cw = (((w + 1) >> 1) + 7) & ~7;
        u32 ch = (((h + 1) >> 1) + 7) & ~7;
        u32 f = (flags & 0x8FFFFFFF) | (hf & 0x20000);
        L(0xd0) = ch + ch;
        L(0xe0) = (cw + cw) >> 4;
        L(0x0) = w;
        L(0x4) = h;
        L(0x254) = w;
        L(0x258) = h;
        L(0x24) = hf;
        L(0xd4) = cw;
        L(0xd8) = ch;
        L(0xcc) = cw + cw;
        L(0x20) = f;
        if (!(hf & 0x100000)) L(0x20) = f & ~0x100000;
    }
    {
        u32 s = flags & 0x70000000;
        if (s != 0x70000000) {
            if (s != 0) L(0x20) |= s;
            else L(0x20) |= hdr.w[9] & 0x70000000;
            switch (L(0x20) & 0x70000000) {
            case 0x10000000:
            case 0x20000000:
                L(0x4) += L(0x4);
                break;
            case 0x30000000:
                L(0x0) += L(0x0);
                break;
            case 0x40000000:
            case 0x50000000:
                L(0x0) += L(0x0);
                L(0x4) += L(0x4);
                break;
            }
        }
    }
    if (hdr.w[0] == 0x664b4942 || hdr.w[0] == 0x674b4942) {
        L(0x20) |= 0x18000;
    } else if (hdr.w[0] == 0x684b4942) {
        L(0x20) |= 0x8000;
    }
    L(0x8) = hdr.w[2];
    L(0xec) = hdr.w[4];
    if ((flags & 0x1000) && wD7218_fpsnum[0] != -1) {
        s32 n = wD7218_fpsnum[0];
        wD7218_fpsnum[0] = -1;
        L(0x14) = n;
        L(0x18) = wD7218_fpsden[0];
    } else {
        L(0x14) = hdr.w[7];
        L(0x18) = hdr.w[8];
    }
    {
        u32 den = hdr.w[8];
        u32 num = hdr.w[7];
        L(0x28) = hdr.w[1];
        L(0xf0) = hdr.w[10];
        L(0xe8) = hdr.w[3];
        L(0x2bc) = num;
        L(0x2c0) = den;
        L(0x2c4) = (num + (den >> 1)) / den;
        L(0xe4) = ((L(0xcc) >> 4) * L(0xd0)) >> 4;
        if (L(0x2c4) == 0) L(0x2c4) = 1;
    }
    L(0x2c8) = (L(0x2c4) - 1) * 4;
    wD7218_plan((u8 *)&bk + 0xdc, L(0xe4) + 16);
    wD7218_plan((u8 *)&bk + 0x2cc, L(0x2c4) * 4);
    wD7218_plan((u8 *)&bk + 0x2d0, L(0x2c4) * 4);
    wD7218_plan((u8 *)&bk + 0x2d4, L(0x2c4) * 4);
    wD7218_plan((u8 *)&bk + 0x2d8, L(0x2c4) * 4);
    wD7218_plan((u8 *)&bk + 0x2dc, L(0x2c4) * 4);
    wD7218_plan((u8 *)&bk + 0x2e0, L(0x2c4) * 4);
    wD7218_plan((u8 *)&bk + 0x2e4, L(0x2c4) * 4);
    wD7218_plan((u8 *)&bk + 0x300, wD7218_tracknum[0] ? wD7218_tracknum[0] * 0x178 : 0x178);
    wD7218_plan((u8 *)&bk + 0x25c, wD7218_tracknum[0] * 4);
    wD7218_plan2((u8 *)&bk + 0x310, L(0xcc));
    wD7218_plan((u8 *)&bk + 0x310, L(0x310));
    wD7218_plan((u8 *)&bk + 0x314, L(0x314));
    wD7218_plan((u8 *)&bk + 0x318, L(0x318));
    wD7218_plan((u8 *)&bk + 0x31c, L(0x31c));
    wD7218_plan((u8 *)&bk + 0x320, L(0x320));
    wD7218_plan((u8 *)&bk + 0x324, L(0x324));
    wD7218_plan((u8 *)&bk + 0x328, L(0x328));
    wD7218_plan((u8 *)&bk + 0x32c, L(0x32c));
    wD7218_plan((u8 *)&bk + 0x330, L(0x330));
    if (!(flags & 0x4000000)) {
        wD7218_plan((u8 *)&bk + 0x10c, (L(0xec) + 1) * 4);
        wD7218_plan((u8 *)&bk + 0x260, L(0xf0) * 4);
        wD7218_plan((u8 *)&bk + 0x264, L(0xf0) * 4);
        wD7218_plan((u8 *)&bk + 0x268, L(0xf0) * 4);
    }
    b = wD7218_alloc((u8 *)&bk, 0x38c);
    if (b == 0) {
    nomem:
        wD7218_seterr(wD7218_s3);
        goto fail;
    }
    *(wDBink_77218 *)b = *pbk;
    B(0x128) = (u32)b;
    *(s32 *)B(0x2d0) = 0;
    *(s32 *)B(0x2d4) = 0;
    *(s32 *)B(0x2d8) = 0;
    *(s32 *)B(0x2dc) = 0;
    *(s32 *)B(0x2e0) = 0;
    *(s32 *)B(0x2e4) = 0;
    if (flags & 0x4000000) {
        u32 n = B(0xf0);
        B(0x260) = (u32)((u8 *)name + 0x2c);
        B(0x264) = (u32)((u8 *)name + (n * 4 + 0x2c));
        B(0x268) = (u32)((u8 *)name + (n * 8 + 0x2c));
        B(0x10c) = (u32)((u8 *)name + (n * 12 + 0x2c));
    } else {
        u8 *io = b + 0x110;
        ((wDRead_77218)B(0x110))(io, -1, B(0x260), B(0xf0) * 4);
        ((wDRead_77218)B(0x110))(io, -1, B(0x264), B(0xf0) * 4);
        ((wDRead_77218)B(0x110))(io, -1, B(0x268), B(0xf0) * 4);
        ((wDRead_77218)B(0x110))(io, -1, B(0x10c), (B(0xec) + 1) * 4);
    }
    B(0xf4) = wD7218_frames(B(0x8), B(0x10c), B(0x2c4), b + 0xf8, &notfirst);
    if (B(0x20) & 0x100000) {
        wD7218_plan(b + 0xc4, B(0xcc) * B(0xd0));
        if (!notfirst) wD7218_plan(b + 0xc8, B(0xcc) * B(0xd0));
    }
    if (!notfirst) wD7218_plan(b + 0xc0, B(0xcc) * B(0xd0) + B(0xd4) * B(0xd8) * 2);
    B(0xbc) = (u32)wD7218_alloc(b, B(0xcc) * B(0xd0) + B(0xd4) * B(0xd8) * 2);
    if (B(0xbc) == 0) {
    freefail:
        wD7218_free(b);
        goto nomem;
    }
    if (notfirst) {
        B(0xc0) = B(0xbc);
        B(0xc8) = B(0xc4);
    }
    if ((flags & 0x1000000) && wD7218_iosize[0] != -1) {
        B(0x250) = wD7218_iosize[0];
        wD7218_iosize[0] = -1;
    } else {
        B(0x250) = B(0xf4);
    }
    if ((flags & 0x400000) && wD7218_simulate[0] != -1) {
        simulate = wD7218_simulate[0];
        wD7218_simulate[0] = -1;
    } else {
        simulate = 0;
    }
    if (flags & 0x4000000) {
        B(0x108) = (u32)((u8 *)name + (*(u32 *)B(0x10c) & ~1));
    } else {
        u8 *io = b + 0x110;
        B(0x250) = ((wDSize_77218)B(0x118))(io, B(0x250));
        if (B(0x250) >= (B(0x28) * 9) / 10) {
            flags |= 0x2000;
            B(0x20) |= 0x2000;
        }
        if (flags & 0x2000) {
            u32 off = (*(u32 *)B(0x10c) & ~1) - 8;
            u32 sz = B(0x28) - off;
            B(0x108) = (u32)wD7218_alloc(b, sz);
            if (B(0x108) == 0) {
                wD7218_free((void *)L(0xbc));
                goto freefail;
            }
            ((wDSetBuf_77218)B(0x11c))(io, 0, 0, B(0x28) + 8, simulate);
            ((wDReadAt_77218)B(0x114))(io, 0, *(u32 *)B(0x10c) & ~1, B(0x108), sz);
            ((wDOne_77218)B(0x124))(io);
            B(0x140) = 0;
        } else {
            wD7218_plan(b + 0x104, B(0xe8));
            B(0x24c) = (u32)wD7218_alloc(b, B(0x250));
            if (B(0x24c) == 0) B(0x250) = 0;
            ((wDSetBuf_77218)B(0x11c))(io, B(0x24c), B(0x250), B(0x28) + 8, simulate);
        }
    }
    ((u8 *)B(0xdc))[B(0xe4)] = 0;
    B(0xc) = -1;
    if (B(0x14) != 0) B(0x288) = wD7218_muldiv(2000, B(0x18), B(0x14));
    else B(0x288) = 2000;
    B(0x2a4) = 1;
    wD7218_goto(b, 1);
    B(0x2b8) = wD7218_now() - B(0x2b8);
    *(s32 *)(B(0x300) + 0x68) = 0x10000;
    B(0x2f8) = 0;
    {
        u32 n;
        if (B(0xf0) != 0 && (n = wD7218_tracknum[0]) != 0)
        for (i = 0; i < n; i++) {
            s32 j;
            for (j = 0; j < (s32)B(0xf0); j++) {
                if (((s32 *)B(0x268))[j] == wD7218_tracks[i]) {
                    u32 k = B(0x2f8);
                    ((s32 *)B(0x25c))[k] = j;
                    B(0x2f8) = k + 1;
                    break;
                }
            }
        }
    }
    wD7218_tracks[0] = 0;
    wD7218_tracknum[0] = 1;
#define TRK ((u8 *)(i * 0x178 + B(0x300)))
#define FL (((u32 *)B(0x264))[((s32 *)B(0x25c))[i]])
#define T(o) (*(u32 *)(TRK + (o)))
    for (i = 0; i < B(0x2f8);) {
        u32 rate;
        T(0x2c) = 0;
        if (((s32)FL < 0 || (FL & 0x10000000)) && wD7218_sndopen[0] != 0) {
            rate = FL & 0xffff;
            if (L(0x14) != 0 && L(0x18) != 0) {
                rate = (u32)(((double)rate * (double)L(0x14) * (double)L(0x2c0)) / ((double)L(0x18) * (double)L(0x2bc)));
            }
            if (wD7218_sndopen[0]((u8 *)(B(0x300) + i * 0x178), rate, ((FL >> 27) & 8) + 8, ((FL >> 29) & 1) + 1, B(0x20), b)) {
                if (*(s32 *)(TRK + 0x58) == 0) *(s32 *)(TRK + 0x58) = -1;
                T(0x28) = (((u32 *)B(0x260))[((s32 *)B(0x25c))[i]] + 0xff) & ~0xff;
                T(0x2c) = (u32)wD7218_alloc(b, T(0x28));
                {
                u8 *p = TRK;
                if (*(u32 *)(p + 0x2c) == 0) {
                    ((wDOne_77218) * (u32 *)(p + 0x1c))(p);
                } else {
                    wD7218_sndcount[0]++;
                    *(u32 *)(p + 0x44) = (((FL >> 27) & 8) + 8) == 8;
                    T(0x30) = T(0x2c) + T(0x28);
                    T(0x34) = T(0x2c);
                    T(0x38) = T(0x2c);
                    T(0x4c) = wD7218_muldiv((rate << ((FL >> 29) & 1)) * 2, 750 - *(s32 *)(TRK + 0x64), 1000) & ~3;
                    if (T(0x4c) > T(0x28)) T(0x4c) = T(0x28);
                    T(0x3c) = wD7218_sndfmt(FL & 0xffff, ((FL >> 29) & 1) + 1, ((s32)FL >= 0 && (FL & 0x10000000)) ? 1 : 0);
                    T(0x48) = B(0x8) - (B(0x2bc) * 3) / (B(0x2c0) * 4);
                    T(0x40) = 0;
                }
                }
            }
        }
        if (*(s32 *)(TRK + 0x68) == 0) *(s32 *)(TRK + 0x68) = 0x10000;
        if (T(0x2c) == 0) {
            B(0x2f8)--;
            wD7218_memcpy((s32 *)(i * 4 + B(0x25c)), (s32 *)(i * 4 + B(0x25c)) + 1, (B(0x2f8) - i) * 4);
        } else {
            i++;
        }
    }
    if (B(0x2f8) != 0) {
        s32 tm = wD7218_timer[0];
        B(0x2a0) = 1;
        if (tm == 0) {
            wD7218_timer[0] = wD7218_timeropen(-13);
            wD7218_timerinit();
        }
        wD7218_timeradd(wD7218_timer[0], b + 0x34c, (void *)wD7218_802771B8, (void *)wD7218_802771D4);
    }
    B(0x204) = (u32)wD7218_8027716C;
    B(0x1fc) = (u32)wD7218_80277114;
    B(0x200) = (u32)wD7218_80277140;
    B(0x208) = (u32)wD7218_80277198;
    if (B(0x108) == 0 && !(flags & 0x200000)) {
        while (((wDOne_77218)B(0x120))(b + 0x110) != 0) {
        }
    }
    return b;
}
#undef L
#undef B
#undef H

s32 fn_802781F4(u8 *b, u8 *dest, s32 pitch, u32 height, u32 a7, u32 a8, u32 flags) {
    return fn_80278234(b, dest, pitch, height, a7, a8, 0, 0, ((u32 *)b)[0], ((u32 *)b)[1], flags);
}

#define F(o) (*(u32 *)(b + (o)))
s32 fn_80278234(u8 *b, u8 *dest, s32 pitch, u32 height, u32 a7, u32 a8, u32 sx, u32 sy, u32 w, u32 h, u32 flags) {
    s32 skipped = 0;
    if (b == 0 || dest == 0) {
        return 0;
    }
    sx = wC_802752DC_78234(sx, F(596), F(0));
    w = wC_802752DC_78234(w, F(596), F(0));
    sy = wC_802752DC_78234(sy, F(600), F(4));
    h = wC_802752DC_78234(h, F(600), F(4));
    if (sx >= F(596)) {
        sx = F(596);
    }
    if (sy >= F(600)) {
        sy = F(600);
    }
    if (sx + w > F(596)) {
        w = F(596) - sx;
    }
    if (sy + h > F(600)) {
        h = F(600) - sy;
    }
    if (w == 0 || h == 0 || F(776) != 0) {
        return F(776);
    }
    F(312) = 1;
    flags |= F(32) & 0x70030000;
    wC_8027D050_78234(flags & 15);
    if (pitch < 0) {
        dest += -pitch * (height - a8 - 1);
        a8 = 0;
    }
    if (F(760) != 0 && F(20) != 0 && F(252) == 0) {
        u32 t, r;
        wC_80276E38_78234(b);
        t = wC_802753F0_78234();
        r = wC_802752DC_78234((F(624) - F(644)) * 1000, F(24), F(20));
        r = wC_80275394_78234(r, *(u32 *)(*(u8 **)(b + 768) + 104), 16);
        t -= F(640) + F(824);
        if (t >= r) {
            t -= r;
            if (t > F(648)) {
                if (++F(820) > 3) {
                    F(820) = skipped;
                    goto draw;
                }
                if ((flags & 0x80000) || (F(32) & 0x80000)) {
                    skipped = 1;
                    goto draw;
                }
                F(312) = 0;
                F(772) = 1;
                F(780)++;
                return 1;
            }
            F(820) = skipped;
        }
        F(772) = 0;
    }
draw:
    if (F(264) == 0 && F(304) == 0 && ((F(344) + 1) * 100) / (F(340) + 1) <= 74) {
        if (wC_80283DFC_78234(wCa_802F385C_78234[0], b + 524) != 0) {
            (*(void (**)(u8 *))(b + 288))(b + 272);
            wC_80283F38_78234(wCa_802F385C_78234[0], b + 524);
        } else if (!(F(32) & 0x8000000)) {
            wC_8028405C_78234();
        }
    }
    F(744) = flags;
    if ((s32)flags < 0) {
    sw1:
        switch (flags & 15) {
        case 5:
            if (F(196) != 0) {
                wC_8027F738_78234((u32)dest, a7, a8, pitch, ((wCB_78234 *)b)->a188[((wCB_78234 *)b)->x184], sx, sy, w, h, F(204), F(208), ((wCB_78234 *)b)->a196[((wCB_78234 *)b)->x184], flags);
                break;
            }
        case 3:
            wC_8027E5FC_78234((u32)dest, a7, a8, pitch, ((wCB_78234 *)b)->a188[((wCB_78234 *)b)->x184], sx, sy, w, h, F(204), F(208), flags);
            break;
        case 7:
            if (F(196) != 0) {
                wC_80281DAC_78234((u32)dest, a7, a8, pitch, ((wCB_78234 *)b)->a188[((wCB_78234 *)b)->x184], sx, sy, w, h, F(204), F(208), ((wCB_78234 *)b)->a196[((wCB_78234 *)b)->x184], flags);
                break;
            }
        case 9:
        case 10:
        case 11:
        case 12:
            wC_80280860_78234((u32)dest, a7, a8, pitch, ((wCB_78234 *)b)->a188[((wCB_78234 *)b)->x184], sx, sy, w, h, F(204), F(208), flags);
            break;
        case 13:
            wC_8028290C_78234((u32)dest, a7, a8, pitch, ((wCB_78234 *)b)->a188[((wCB_78234 *)b)->x184], sx, sy, w, h, F(204), F(208), flags);
            break;
        }
    } else {
        if (wC_strlen_78234(*(char **)(b + 220)) >= F(228)) {
            goto sw1;
        }
        switch (flags & 15) {
        case 5:
            if (F(196) != 0) {
                wC_80282A30_78234((u32)dest, a7, a8, pitch, F(220), F(224), ((wCB_78234 *)b)->a188[((wCB_78234 *)b)->x184], sx, sy, w, h, F(204), F(208), ((wCB_78234 *)b)->a196[((wCB_78234 *)b)->x184], flags);
                break;
            }
        case 3:
            wC_802829C4_78234((u32)dest, a7, a8, pitch, F(220), F(224), ((wCB_78234 *)b)->a188[((wCB_78234 *)b)->x184], sx, sy, w, h, F(204), F(208), flags);
            break;
        case 7:
            if (F(196) != 0) {
                wC_80282B08_78234((u32)dest, a7, a8, pitch, F(220), F(224), ((wCB_78234 *)b)->a188[((wCB_78234 *)b)->x184], sx, sy, w, h, F(204), F(208), ((wCB_78234 *)b)->a196[((wCB_78234 *)b)->x184], flags);
                break;
            }
        case 9:
        case 10:
        case 11:
        case 12:
            wC_80282A9C_78234((u32)dest, a7, a8, pitch, F(220), F(224), ((wCB_78234 *)b)->a188[((wCB_78234 *)b)->x184], sx, sy, w, h, F(204), F(208), flags);
            break;
        case 13:
            wC_80282B74_78234((u32)dest, a7, a8, pitch, F(220), F(224), ((wCB_78234 *)b)->a188[((wCB_78234 *)b)->x184], sx, sy, w, h, F(204), F(208), flags);
            break;
        }
    }
    F(312) = 0;
    return skipped;
}
#undef F

#define K8(i) ((BTrk *)((i) * 376 + BB(768)))
#define BB(o) (*(u32 *)(b + (o)))
extern void *k_385C[] asm("lbl_802F385C");
void *memmove(void *, const void *, u32);
#define CPY ((void *(*)())memcpy)
s32 fn_80278920(u8 *b) {
    s32 locked = 0;
    u8 *p;
    s32 i;
    s32 j;
    u32 t;
    if (b == 0 || *(s32 *)(b + 748) == *(s32 *)(b + 12)) return 0;
    if (BB(756) != 0) {
        BB(756) = locked;
        if (BB(672) != 0) {
            fn_8027AA78(b, 0);
            fn_8027AA78(b, 1);
        }
        BB(640) = locked;
        BB(824) = locked;
    }
    BB(776) = 0;
    BB(312) = 1;
    BB(632) = fn_802753F0();
    memmove((u32 *)BB(716) + 1, (u32 *)BB(716), BB(712));
    memmove((u32 *)BB(724) + 1, (u32 *)BB(724), BB(712));
    memmove((u32 *)BB(720) + 1, (u32 *)BB(720), BB(712));
    memmove((u32 *)BB(728) + 1, (u32 *)BB(728), BB(712));
    memmove((u32 *)BB(732) + 1, (u32 *)BB(732), BB(712));
    memmove((u32 *)BB(736) + 1, (u32 *)BB(736), BB(712));
    memmove((u32 *)BB(740) + 1, (u32 *)BB(740), BB(712));
    *(u32 *)BB(716) = BB(632);
    *(u32 *)BB(724) = BB(684);
    *(u32 *)BB(720) = BB(688);
    *(u32 *)BB(728) = BB(692);
    { u32 x = BB(320); *(u32 *)BB(732) = x; }
    { u32 x = BB(324); *(u32 *)BB(736) = x; }
    *(u32 *)BB(740) = BB(328);
    j = BB(628);
    if (j == 0) {
        ((u32 *)BB(716))[1] = BB(632) - fn_802752DC(1000, BB(704), BB(700));
        BB(324) = j;
        BB(328) = j;
        BB(628) = BB(632);
    } else if (BB(760) != 0) {
        fn_80276B84(b);
    }
    BB(652) = BB(632);
    p = (u8 *)BB(260);
    if (BB(300) != 0) BB(28) = 1;
    if (BB(28) != 0) return 1;
    for (i = 0; i < *(s32 *)(b + 240); i++) {
        u32 size = *(u32 *)p;
        u8 *next;
        p += 4;
        for (j = 0; j < *(s32 *)(b + 760); j++) {
            if (((s32 *)BB(604))[j] == i) goto found;
        }
        j = -1;
    found:
        if (j == -1) { next = p + size; goto skip; }
        next = p + size;
        if (size != 0) {
            s16 *buf;
            s32 len;
            u8 *src;
            u32 rem;
            src = p;
            rem = *(u32 *)p;
            src = p + 4;
            if (locked == 0) {
                locked = 1;
                fn_80283E90(wCa_802F3860_7925C[0], b + 844);
            }
            while (rem != 0) {
                BTrk *k = K8(j);
                u32 space = k->size - k->left;
                fn_80283750(k->dec, &buf, &len, (s32)src, (s32 *)&src);
                if ((u32)len > rem) len = rem;
                rem -= len;
                if ((u32)len > space) {
                    space = len - space;
                    K8(j)->rd += space;
                    K8(j)->left -= space;
                    if (K8(j)->rd > K8(j)->end) K8(j)->rd -= K8(j)->size;
                }
                K8(j)->left += len;
                space = K8(j)->end - K8(j)->wr;
                if (space < (u32)len) {
                    if (space != 0) {
                        CPY(K8(j)->wr, buf, space);
                        len -= space;
                        buf = (s16 *)((u8 *)buf + space);
                    }
                    CPY(K8(j)->start, buf, len);
                    K8(j)->wr = K8(j)->start + len;
                } else {
                    CPY(K8(j)->wr, buf, len);
                    K8(j)->wr += len;
                }
            }
        }
    skip:
        p = next;
    }
    if (locked != 0) fn_80283F38(wCa_802F3860_7925C[0], b + 844);
    t = fn_802753F0();
    if (BB(676) != 0) {
        u32 k;
        u8 **y, **a;
        if (BB(772) == 0) memset((void *)BB(220), 0, (BB(204) >> 4) * (BB(208) >> 4));
        if (BB(264) == 0 && BB(304) == 0 && (BB(344) + 1) * 100 / (BB(340) + 1) <= 74) {
            if (fn_80283DFC((s32)k_385C[0], b + 524) != 0) {
                (*(void (**)(u8 *))(b + 288))(b + 272);
                fn_80283F38(k_385C[0], b + 524);
            } else if (!(BB(32) & 0x08000000)) {
                fn_8028405C();
            }
        }
        y = (u8 **)(b + 188);
        a = (u8 **)(b + 196);
        k = BB(184);
        fn_80287540(*(u8 **)((u8 *)y + ((k ^ 1) << 2)), *(u8 **)((u8 *)y + (k << 2)), *(u8 **)((u8 *)a + ((k ^ 1) << 2)), *(u8 **)((u8 *)a + (k << 2)),
                    BB(220), BB(596), BB(600), BB(204), BB(208), p, ((u32 *)BB(268))[BB(12) - 1] & 1, (u32)(b + 784), BB(32), BB(36));
        BB(184) ^= 1;
    }
    if (BB(760) != 0) fn_80276B84(b);
    *(s32 *)(b + 180) = -1;
    BB(624)++;
    fn_80276E38(b);
    {
        u32 now = fn_802753F0();
        BB(688) += t - BB(632);
        BB(684) += now - t;
        BB(748) = BB(12);
        BB(16) = BB(12);
        BB(636) = now;
        BB(312) = 0;
    }
    return 0;
}
#undef CPY
#undef K8
#undef BB

void fn_80278F28(void *arg0, s32 arg1) {
    s32 old = *(s32 *)((u8 *)arg0 + 0x27C);
    if (old != 0) {
        s32 value = *(s32 *)((u8 *)arg0 + 0x2B4) + (arg1 - old);
        *(s32 *)((u8 *)arg0 + 0x27C) = 0;
        *(s32 *)((u8 *)arg0 + 0x2B4) = value;
    }
}

void fn_80278F54(u8 *b) {
    s32 found = 0;
    u32 i;
    if (b == 0) {
        return;
    }
    *(volatile s32 *)(b + 312) = 1;
    *(volatile s32 *)(b + 312) = found;
    for (i = 0; i < *(u32 *)(b + 760); i++) {
        u8 *e = (u8 *)(i * 376 + *(s32 *)(b + 768));
        if (*(s32 *)(e + 92) != 0) {
            u32 cnt;
            *(s32 *)(e + 92) = 0;
            cnt = *(u32 *)(b + 12);
            if (cnt > 1 && (s32)cnt <= *(s32 *)((u8 *)(i * 376 + *(s32 *)(b + 768)) + 72)) {
                found = 1;
            }
        }
    }
    if (found != 0) {
        {
            s32 l1 = wCa_802F3860_78F54[0];
            s32 l2 = wCa_802F385C_78F54[0];
            (*(s32 *)(b + 764))++;
            wC_80283EFC_78F54(l1, b + 844, l2, b + 524);
        }
        wC_8027AA78_78F54(b, 0);
        while ((*(u32 *)(b + 344) + 1) * 100 / (*(u32 *)(b + 340) + 1) <= 89 &&
               (*(s32 (**)(void *))(b + 288))(b + 272) != 0) {
        }
        *(s32 *)(b + 640) = 0;
        *(s32 *)(b + 824) = 0;
        wC_8027AA78_78F54(b, 1);
        fn_80283F38(wCa_802F3860_78F54[0], b + 844);
        fn_80283F38(wCa_802F385C_78F54[0], b + 524);
    }
    *(s32 *)(b + 312) = 1;
    if (*(s32 *)(b + 760) != 0) {
        fn_80276B84(b);
    }
    fn_80278F28(b, fn_802753F0());
    {
        u32 cnt = *(u32 *)(b + 12);
        s32 next = 1;
        if (cnt < *(u32 *)(b + 8)) {
            next = cnt + 1;
        }
        fn_80276E80(b, next);
    }
    *(s32 *)(b + 312) = 0;
}

u32 fn_80279100(u8 *p, u32 pos, u32 flags) {
    s32 i;
    u32 j;

    if (p == NULL) {
        return 0;
    }
    if (!(flags & 0x80) && ((*(u32 **)(p + 0x10C))[pos - 1] & 1)) {
        return pos;
    }
    switch ((s32)(flags & 0x7F)) {
    case 0:
        for (i = pos - 2; i > 0; i--) {
            if ((*(u32 **)(p + 0x10C))[i] & 1) {
                break;
            }
        }
        return i + 1;
    case 1:
        for (j = pos; j < *(u32 *)(p + 8);) {
            if ((*(u32 **)(p + 0x10C))[j++] & 1) {
                return j;
            }
        }
        break;
    case 2:
        i = pos - 2;
        j = pos;
        for (;; i--) {
            if (i >= 0) {
                if ((*(u32 **)(p + 0x10C))[i] & 1) {
                    return i + 1;
                }
                if (j < *(u32 *)(p + 8) && ((*(u32 **)(p + 0x10C))[j++] & 1)) {
                    return j;
                }
            } else {
                if (j >= *(u32 *)(p + 8)) {
                    return 0;
                }
                if ((*(u32 **)(p + 0x10C))[j++] & 1) {
                    return j;
                }
            }
        }
    }
    return 0;
}

void fn_8027925C(u8 *b, u32 frame, u32 flags) {
    u32 start;
    u32 key;
    s32 saved;

    if (b == 0) {
        return;
    }
    if (frame == 0) {
        frame = 1;
    }
    *(s32 *)(b + 312) = 1;
    if (frame > *(u32 *)(b + 8)) {
        frame = *(u32 *)(b + 8);
    }
    if ((flags & 2) || *(s32 *)(b + 760) == 0) {
        start = frame;
    } else {
        start = (*(u32 *)(b + 20) + (*(u32 *)(b + 24) - 1)) / *(u32 *)(b + 24);
        if (start >= frame) {
            start = 1;
        } else {
            start = frame - start;
        }
    }
    if (*(u32 *)(b + 12) != frame) {
        if ((flags & 3) != 3) {
            if (!(flags & 1)) {
                key = fn_80279100(b, frame, 0);
            } else {
                key = frame;
            }
            if (key > start) {
                saved = *(s32 *)(b + 676);
                fn_8027AA64(b, 0);
            } else {
                start = key;
                saved = 0;
            }
            if (frame < *(u32 *)(b + 12) || start > *(u32 *)(b + 12)) {
                fn_80276E80(b, start);
                if (start == frame) {
                    goto done;
                }
            }
            {
                s32 snd;
                fn_80283E90(wCa_802F3860_7925C[0], b + 844);
                snd = *(s32 *)(b + 672);
                if (snd != 0) {
                    fn_8027AA78(b, 0);
                }
                if (*(s32 *)(b + 12) != *(s32 *)(b + 748)) {
                    wC_fn_80278920_7925C(b);
                    *(s32 *)(b + 772) = 1;
                }
                fn_80278F54(b);
                while (*(u32 *)(b + 12) != frame) {
                    if (saved != 0 && *(u32 *)(b + 12) == key) {
                        fn_8027AA64(b, 1);
                        saved = 0;
                    }
                    wC_fn_80278920_7925C(b);
                    *(s32 *)(b + 772) = 1;
                    fn_80278F54(b);
                }
                *(s32 *)(b + 640) = 0;
                if (saved != 0) {
                    fn_8027AA64(b, 1);
                }
                fn_80283F38(wCa_802F3860_7925C[0], b + 844);
                if (snd != 0) {
                    fn_8027AA78(b, 1);
                }
            }
        } else {
            fn_80276E80(b, frame);
        }
    }
done:
    *(s32 *)(b + 312) = 0;
}

void fn_80279498(u8 *b) {
    u32 i;
    if (b == 0) {
        return;
    }
    fn_80279868(b, 1);
    {
        s32 l0 = (!(*(u32 *)(b + 32) & 0x8000000) && *(s32 *)(b + 264) == 0) ? wCa_802F385C_79498[0] : 0;
        s32 l1 = *(s32 *)(b + 760) != 0 ? wCa_802F3860_79498[0] : 0;
        switch (wC_80283C38_79498(l0, b + 524, l1, b + 844, 1)) {
    case 1:
        wCa_802F385C_79498[0] = 0;
        break;
    case 2:
        wCa_802F3860_79498[0] = 0;
        break;
    case 3:
        wCa_802F385C_79498[0] = 0;
        wCa_802F3860_79498[0] = 0;
        break;
        }
    }
    for (i = 0; i < *(u32 *)(b + 760); i++) {
        u8 *e = (u8 *)(i * 376 + *(s32 *)(b + 768));
        (*(void (**)(u8 *))(e + 28))(e);
        fn_8028389C(*(void **)((u8 *)(i * 376 + *(s32 *)(b + 768)) + 60));
        if (*(void **)((u8 *)(i * 376 + *(s32 *)(b + 768)) + 44) != 0) {
            fn_8027B790(*(void **)((u8 *)(i * 376 + *(s32 *)(b + 768)) + 44));
        }
    }
    fn_8027B86C();
    if (*(void **)(b + 264) != 0) {
        if (!(*(u32 *)(b + 32) & 0x4000000)) {
            fn_8027B790(*(void **)(b + 264));
        }
    } else {
        (*(void (**)(u8 *))(b + 292))(b + 272);
        fn_8027B790(*(void **)(b + 588));
    }
    if (*(void **)(b + 188) != 0) {
        fn_8027B790(*(void **)(b + 188));
    }
    wC_memset_79498(b, 0, 908);
    fn_8027B790(b);
}

void fn_8027964C(u8 *arg0, u32 arg1) {
    s32 start = *(s32 *)(arg0 + 0x28C);
    u32 max;
    u32 prev;
    if (start != 0) {
        arg1 -= start;
        max = *(u32 *)(arg0 + 0x290);
        *(u32 *)(arg0 + 0x28C) = 0;
        if (arg1 > max) {
            *(u32 *)(arg0 + 0x298) = max;
            *(u32 *)(arg0 + 0x29C) = *(u32 *)(arg0 + 0x294);
            *(u32 *)(arg0 + 0x290) = arg1;
            *(u32 *)(arg0 + 0x294) = *(u32 *)(arg0 + 0xC);
        } else if (arg1 > *(u32 *)(arg0 + 0x298)) {
            *(u32 *)(arg0 + 0x298) = arg1;
            *(u32 *)(arg0 + 0x29C) = *(u32 *)(arg0 + 0xC);
        }
    }
}

s32 fn_802796A8(u8 *b) {
    s32 adj, t, d, r;
    if (b == 0) {
        return 0;
    }
    if (*(s32 *)(b + 624) == 0 && *(s32 *)(b + 252) == 0) {
        return 0;
    }
    if (*(s32 *)(b + 28) != 0) {
        return 0;
    }
    adj = *(s32 *)(b + 640);
    if (adj == 0) {
        fn_80276E38(b);
        adj = *(s32 *)(b + 640);
    }
    if (*(s32 *)(b + 760) != 0) {
        fn_80276B84(b);
    }
    t = fn_802753F0();
    fn_80278F28(b, t);
    fn_8027964C(b, t);
    if (*(s32 *)(b + 252) != 0) {
        goto skip;
    }
    if (*(s32 *)(b + 760) != 0 && *(s32 *)(b + 672) == 0) {
        goto skip;
    }
    if (*(u32 *)(b + 20) == 0) {
        return 0;
    }
    r = fn_802752DC((*(s32 *)(b + 624) - *(s32 *)(b + 644)) * 1000, *(u32 *)(b + 24), *(u32 *)(b + 20));
    r = fn_80275394(r, *(u32 *)(*(u8 **)(b + 768) + 104), 16);
    d = t - (adj + *(s32 *)(b + 824));
    if (d < r) {
        goto skip;
    }
    d -= r;
    if (d > *(s32 *)(b + 648)) {
        if (*(s32 *)(b + 760) == 0) {
            *(s32 *)(b + 640) = t;
            *(s32 *)(b + 644) = *(s32 *)(b + 624) - 1;
        } else {
            *(s32 *)(b + 824) = d;
            *(u32 *)(b + 828) = fn_802752DC(d, *(u32 *)(b + 24), *(u32 *)(b + 20));
        }
    }
    if (*(u32 *)(b + 824) < *(u32 *)(b + 828)) {
        *(u32 *)(b + 824) = 0;
    } else {
        *(u32 *)(b + 824) -= *(u32 *)(b + 828);
    }
    return 0;
skip:
    if (*(s32 *)(b + 264) == 0) {
        if (fn_80283DFC(wCa_802F385C_796A8[0], b + 524) != 0) {
            (*(void (**)(u8 *))(b + 288))(b + 272);
            fn_80283F38(wCa_802F385C_796A8[0], b + 524);
        }
    }
    return 1;
}

s32 fn_80279868(u8 *p, s32 v) {
    s32 t;
    u32 i;
    if (p == 0) {
        return 0;
    }
    t = fn_802753F0();
    fn_80278F28(p, t);
    fn_8027964C(p, t);
    if (v == 0 && *(s32 *)(p + 252) != 0) {
        *(s32 *)(p + 640) = v;
        *(s32 *)(p + 824) = v;
    }
    *(s32 *)(p + 252) = v;
    for (i = 0; i < *(u32 *)(p + 760); i++) {
        u8 *e = (u8 *)(i * 376 + *(s32 *)(p + 768));
        (*(void (**)(u8 *, s32))(e + 20))(e, v);
    }
    if (*(s32 *)(p + 624) != 0 && *(s32 *)(p + 760) != 0) {
        fn_80276B84(p);
    }
    return *(s32 *)(p + 252);
}

void fn_80279948(u8 *arg0, s32 *arg1) {
    s32 now;
    u32 len;

    if (arg0 != NULL && arg1 != NULL) {
        now = fn_802753F0();
        fn_80278F28(arg0, now);
        fn_8027964C(arg0, now);
        ((void *(*)())memset)(arg1, 0, 124);
        arg1[5] = *(s32 *)(arg0 + 0x14);
        arg1[6] = *(s32 *)(arg0 + 0x18);
        arg1[11] = *(s32 *)(arg0 + 0x30C);
        arg1[12] = *(s32 *)(arg0 + 0x2FC);
        arg1[3] = *(s32 *)(arg0 + 0x2BC);
        arg1[4] = *(s32 *)(arg0 + 0x2C0);
        arg1[8] = *(s32 *)(arg0 + 0x8);
        arg1[9] = *(s32 *)(arg0 + 0x270);
        arg1[2] = fn_802753F0() - *(s32 *)(arg0 + 0x274);
        arg1[7] = *(s32 *)(arg0 + 0x2B8);
        arg1[16] = *(s32 *)(arg0 + 0x2B0);
        arg1[15] = *(s32 *)(arg0 + 0x2AC);
        arg1[13] = *(s32 *)(arg0 + 0x2B4);
        arg1[26] += *(s32 *)(arg0 + 0x2A8);
        arg1[27] = *(s32 *)(arg0 + 0x250);
        arg1[19] = fn_802752DC(*(u32 *)(arg0 + 0x134), 1000, *(u32 *)(arg0 + 0x13C) + 1);
        arg1[14] = *(s32 *)(arg0 + 0x140);
        arg1[17] = *(s32 *)(arg0 + 0x144);
        arg1[18] = *(s32 *)(arg0 + 0x148);
        len = *(u32 *)(arg0 + 0x28) - (**(u32 **)(arg0 + 0x10C) & ~1);
        arg1[24] = fn_802752DC(len, *(u32 *)(arg0 + 0x2BC), *(u32 *)(arg0 + 0x2C0) * *(u32 *)(arg0 + 0x8));
        arg1[25] = len / *(u32 *)(arg0 + 0x8);
        arg1[29] = *(s32 *)(arg0 + 0xF4);
        arg1[30] = *(s32 *)(arg0 + 0xF8) + 1;
        arg1[0] = *(s32 *)(arg0 + 0x0);
        arg1[1] = *(s32 *)(arg0 + 0x4);
        arg1[20] = *(s32 *)(arg0 + 0x290);
        arg1[21] = *(s32 *)(arg0 + 0x298);
        arg1[22] = *(s32 *)(arg0 + 0x294);
        arg1[23] = *(s32 *)(arg0 + 0x29C);
        arg1[27] = *(s32 *)(arg0 + 0x14C);
        arg1[28] = *(s32 *)(arg0 + 0x150);
    }
}

#define D(o, k) (*(u32 **)(b + (o)))[0] - (*(u32 **)(b + (o)))[k]
void fn_80279AFC(u8 *b, u32 *o, u32 frames) {
    s32 t = fn_802753F0();
    fn_80278F28(b, t);
    wC_8027964C_79AFC(b, t);
    if (frames == 0 || frames >= *(u32 *)(b + 708)) {
        frames = *(u32 *)(b + 708) - 1;
    }
    if (frames > *(u32 *)(b + 12)) {
        frames = *(u32 *)(b + 12) - 1;
        if (frames == 0) {
            frames = 1;
        }
    }
    o[0] = *(u32 *)(b + 16);
    o[1] = *(u32 *)(b + 20);
    o[2] = *(u32 *)(b + 20);
    o[11] = *(u32 *)(b + 340);
    o[12] = *(u32 *)(b + 344);
    o[13] = fn_802752DC((*(u32 **)(b + 268))[*(u32 *)(b + 12)] - (*(u32 **)(b + 268))[*(u32 *)(b + 12) - frames],
                        *(u32 *)(b + 700), frames * *(u32 *)(b + 704));
    o[3] = frames;
    o[4] = D(716, frames);
    if (o[4] == 0) {
        o[4] = 1;
    }
    o[5] = D(724, frames);
    o[6] = D(720, frames);
    o[10] = D(728, frames);
    o[7] = D(732, frames);
    o[8] = D(736, frames);
    o[9] = D(740, frames);
}
#undef D

s32 fn_80279C80(s32 *out, u8 *map, s32 pitch, s32 *r) {
    s32 bw;
    s32 bh;
    s32 i;
    s32 j;
    s32 x;
    s32 w;
    s32 h;
    u8 *p;
    map += r[0] / 16;

    map += (r[1] / 16) * pitch;
    bh = r[3] / 16;
    bw = r[2] / 16;
    for (j = 0, p = map; j < bh; j++, p += pitch) {
        for (i = 0; i < bw; i++)
            if (p[i]) break;
        if (i < bw) goto top;
    }
    return 0;
top:
    map += pitch * j;
    bh -= j;
    j *= 16;
    out[1] = j + r[1];
    out[3] = r[3] - j;
    if (out[3] > 1) {
        for (j = 0, p = map + (bh - 1) * pitch; j < bh; j++, p -= pitch)
            for (i = 0; i < bw; i++)
                if (p[i]) goto bot;
    bot:
        bh -= j;
        out[3] = out[3] - j * 16;
    }
    x = r[0];
    for (i = 0; i < bw; i++)
        for (j = 0, p = map + i; j < bh; j++, p += pitch)
            if (*p) goto left;
left:
    bw -= i;
    map += i;
    i *= 16;
    out[0] = i + x;
    out[2] = r[2] - i;
    if (out[2] > 1) {
        for (i = bw - 1, bw = i; i >= 0; i--)
            for (j = 0, p = map + i; j < bh; j++, p += pitch)
                if (*p) goto right;
    right:
        out[2] = out[2] - (bw - i) * 16;
    }
    return 1;
}

typedef struct BRect { s32 x, y, w, h; } BRect;
s32 fn_80279C80(s32 *out, u8 *map, s32 pitch, s32 *r);
s32 fn_80279E90(BRect *o1, BRect *o2, BRect *r, u8 *map, s32 pitch) {
    BRect a, b, t;
    s32 best, s;
    if (r->w > 31) {
        t = *r;
        best = (t.w / 2 + 15) & ~15;
        t.w = best;
        fn_80279C80((s32 *)o1, map, pitch, (s32 *)&t);
        t = *r;
        t.w -= best;
        t.x += best;
        fn_80279C80((s32 *)o2, map, pitch, (s32 *)&t);
        best = r->w * r->h - o1->w * o1->h - o2->w * o2->h;
    } else {
        best = 0;
    }
    if (r->h > 31) {
        t = *r;
        s = (t.h / 2 + 15) & ~15;
        t.h = s;
        fn_80279C80((s32 *)&a, map, pitch, (s32 *)&t);
        t = *r;
        t.h -= s;
        t.y += s;
        fn_80279C80((s32 *)&b, map, pitch, (s32 *)&t);
        s = r->w * r->h - a.w * a.h - b.w * b.h;
        if (s > best) {
            *o1 = a;
            *o2 = b;
            return s;
        }
    }
    return best;
}

#define RC(i) (((BRect *)(b + 52))[i])
#define NR (*(s32 *)(b + 180))
s32 fn_8027A0D0(u8 *b, u32 flags) {
    BRect a[8], o1[8], o2[8];
    s32 area[8];
    s32 i, j, best, max, k;
    if (!(flags & 0x4000000)) {
        if (!(flags & 0x80000) && !(*(u32 *)(b + 32) & 0x80000) && *(s32 *)(b + 772) != 0) return 0;
    } else if (NR != -1) {
        goto done;
    }
    a[0].w = *(s32 *)(b + 204);
    a[0].x = 0;
    a[0].h = *(s32 *)(b + 208);
    a[0].y = 0;
    NR = fn_80279C80((s32 *)(b + 52), *(u8 **)(b + 220), *(s32 *)(b + 224), (s32 *)a);
    if (!(flags & 0x8000000) && NR != 0) {
        a[0] = RC(0);
        area[0] = fn_80279E90(&o1[0], &o2[0], &a[0], *(u8 **)(b + 220), *(s32 *)(b + 224));
        for (;;) {
            best = -1;
            max = 0;
            for (i = 0; i < NR; i++) {
                if (area[i] > max) {
                    max = area[i];
                    best = i;
                }
            }
            if (best == -1) break;
            a[best] = o1[best];
            a[NR] = o2[best];
            if (++NR == 8) break;
            area[best] = fn_80279E90(&o1[best], &o2[best], &a[best], *(u8 **)(b + 220), *(s32 *)(b + 224));
            best = NR - 1;
            area[best] = fn_80279E90(&o1[best], &o2[best], &a[best], *(u8 **)(b + 220), *(s32 *)(b + 224));
        }
    }
    for (i = 0; i < NR; i++) {
        u32 min = 0x7FFF0000;
        s32 m = 0;
        u32 f = *(u32 *)(b + 744);
        for (j = 0; j < NR; j++) {
            u32 key = (a[j].y << 16) + a[j].x;
            if (key < min) {
                min = key;
                m = j;
            }
        }
        switch (f & 0x70000000) {
        case 0x10000000:
        case 0x20000000:
            a[m].y *= 2;
            a[m].h *= 2;
            break;
        case 0x30000000:
            a[m].x *= 2;
            a[m].w *= 2;
            break;
        case 0x40000000:
        case 0x50000000:
            a[m].x *= 2;
            a[m].w *= 2;
            a[m].y *= 2;
            a[m].h *= 2;
            break;
        }
        if ((u32)(a[m].x + a[m].w) > *(u32 *)(b + 0)) a[m].w -= a[m].x + a[m].w - *(u32 *)(b + 0);
        if ((u32)(a[m].y + a[m].h) > *(u32 *)(b + 4)) a[m].h -= a[m].y + a[m].h - *(u32 *)(b + 4);
        RC(i) = a[m];
        a[m].x = 0;
        a[m].y = 0x7FFFFFFF;
    }
done:
    return NR;
}
#undef RC
#undef NR

void fn_8027A4BC(u8 *p) {
    if (*(s32 *)(p + 760) != 0) {
        fn_80276B84(p);
    }
}

s32 fn_8027A4E8(u8 *arg0, s32 arg1) {
    s32 i;

    for (i = 0; i < *(s32 *)(arg0 + 0x2F8); i++) {
        if ((*(s32 **)(arg0 + 0x268))[(*(s32 **)(arg0 + 0x25C))[i]] == arg1) {
            return i;
        }
    }
    return -1;
}

void fn_8027A538(u8 *b, s32 id, s32 a0) {
    if (b != 0 && *(s32 *)(b + 760) != 0) {
        s32 i = fn_8027A4E8(b, id);
        if (i != -1) {
            u8 *e = (u8 *)(i * 376 + *(s32 *)(b + 768));
            void (*f)(u8 *, s32) = *(void (**)(u8 *, s32))(e + 12);
            if (f != 0) {
                f(e, a0);
            }
        }
    }
}

void fn_8027A5A8(u8 *b, s32 id, s32 a0, s32 a1) {
    if (b != 0 && *(s32 *)(b + 760) != 0) {
        s32 i = fn_8027A4E8(b, id);
        if (i != -1) {
            u8 *e = (u8 *)(i * 376 + *(s32 *)(b + 768));
            void (*f)(u8 *, s32, s32) = *(void (**)(u8 *, s32, s32))(e + 32);
            if (f != 0) {
                f(e, a0, a1);
            }
        }
    }
}

void fn_8027A620(u8 *b, s32 id, s32 a0, s32 a1, s32 a2) {
    if (b != 0 && *(s32 *)(b + 760) != 0) {
        s32 i = fn_8027A4E8(b, id);
        if (i != -1) {
            u8 *e = (u8 *)(i * 376 + *(s32 *)(b + 768));
            void (*f)(u8 *, s32, s32, s32) = *(void (**)(u8 *, s32, s32, s32))(e + 36);
            if (f != 0) {
                f(e, a0, a1, a2);
            }
        }
    }
}

void fn_8027A6A0(u8 *b, s32 id, s32 a0) {
    if (b != 0 && *(s32 *)(b + 760) != 0) {
        s32 i = fn_8027A4E8(b, id);
        if (i != -1) {
            u8 *e = (u8 *)(i * 376 + *(s32 *)(b + 768));
            void (*f)(u8 *, s32) = *(void (**)(u8 *, s32))(e + 16);
            if (f != 0) {
                f(e, a0);
            }
        }
    }
}

u8 *fn_8027A710(void) {
    return lbl_802F3898;
}

s32 fn_8027A71C(u8 *p, s32 i) {
    if (p != 0) {
        return (*(s32 **)(p + 612))[i];
    }
    return 0;
}

s32 fn_8027A73C(u8 *p, s32 i) {
    if (p != 0) {
        return (*(s32 **)(p + 608))[i];
    }
    return 0;
}

u32 fn_8027A75C(u8 *p, s32 i) {
    if (p != 0) {
        return (*(u32 **)(p + 616))[i];
    }
    return 0;
}

typedef struct SndTrk { u32 rate; u32 bits; u32 chans; u32 size; u8 *b; void *snd; u32 idx; } SndTrk;
u8 *fn_8027A77C(u8 *b, u32 idx) {
    void *snd;
    SndTrk *o;
    u32 f;
    if (b == 0 || idx >= *(u32 *)(b + 240)) return 0;
    f = ((volatile u32 *)*(u32 **)(b + 612))[idx];
    if ((s32)f >= 0 && !(f & 0x10000000)) return 0;
    {
    u32 g = (*(u32 **)(b + 612))[idx];
    snd = (void *)wD7218_sndfmt(g & 0xFFFF, ((g >> 29) & 1) + 1, ((s32)g >= 0 && (g & 0x10000000)) ? 1 : 0);
    }
    if (snd == 0) return 0;
    o = (SndTrk *)fn_80276970(b, 28);
    if (o == 0) { fn_8028389C(snd); goto fail; }
    wD7218_memset(o, 0, 28);
    o->snd = snd;
    o->b = b;
    o->rate = (*(u32 **)(b + 612))[idx] & 0xFFFF;
    o->bits = (((*(u32 **)(b + 612))[idx] >> 27) & 8) + 8;
    o->chans = (((*(u32 **)(b + 612))[idx] >> 29) & 1) + 1;
    o->size = ((*(u32 **)(b + 608))[idx] + 3) & ~3;
    if (o->bits == 8) o->size >>= 1;
    o->idx = idx;
    return (u8 *)o;
fail:
    return 0;
}

void fn_8027A8BC(u8 *p) {
    if (p != 0) {
        if (*(void **)(p + 20) != 0) {
            fn_8028389C(*(void **)(p + 20));
            *(void **)(p + 20) = 0;
        }
        fn_8027B790(p);
    }
}

typedef struct { u8 pad[0xF0]; s32 nF0; u8 pad2[0x10]; s32 *p104; } A908H;
s32 fn_8027A908(void *arg0, s8 *arg1) {
    s32 *sp10;
    s32 spC;
    s16 *sp8;
    s32 i;
    s32 size;
    s32 remaining;
    s32 total;
    u32 j;
    s16 *src;
    s8 *dst;

    if (arg0 != NULL) {
        sp10 = M2C_FIELD(arg0, A908H **, 0x10)->p104;
        for (i = 0; i < M2C_FIELD(arg0, A908H **, 0x10)->nF0; i++) {
            s32 cur = M2C_FIELD(arg0, s32 *, 0x18);
            size = *sp10++;
            if (i == cur && size != 0) {
                remaining = *sp10++;
                total = 0;
                while (remaining != 0) {
                    fn_80283750(M2C_FIELD(arg0, Fn80283750Struct **, 0x14), &sp8, &spC, (s32)sp10, (s32 *)&sp10);
                    if ((u32)spC > (u32)remaining) {
                        spC = remaining;
                    }
                    remaining -= spC;
                    if (M2C_FIELD(arg0, s32 *, 4) == 0x10) {
                        memcpy_np(arg1, sp8, spC);
                    } else {
                        spC = (u32)spC >> 1;
                        dst = arg1;
                        src = sp8;
                        for (j = 0; j < (u32)spC; j++) {
                            s32 v = *src++ >> 8;
                            v += 0x80;
                            *dst++ = v;
                        }
                    }
                    arg1 += spC;
                    total += spC;
                }
                return total;
            }
            sp10 = (s32 *)((u8 *)sp10 + size);
        }
    }
    return 0;
}

s32 fn_8027AA64(u8 *p, s32 v) {
    if (p != 0) {
        *(s32 *)(p + 676) = v;
    }
    return v;
}

#define TB ((u8 *)(off + *(s32 *)(b + 768)))
s32 fn_8027AA78(u8 *b, s32 on) {
    s32 r = 0;
    s32 locked;
    u32 i;
    if (b == 0) {
        goto end;
    }
    locked = 0;
    for (i = 0; i < *(u32 *)(b + 760); i++) {
        s32 off = i * 376;
        if (*(s32 *)(TB + 24) == 0) {
            continue;
        }
        if (locked == 0) {
            locked = 1;
            wC_80283E90_7AA78(wCa_802F3860_7AA78[0], b + 844);
        }
        if ((*(s32 (**)(u8 *, s32))(TB + 24))(TB, on != 0 ? 1 : 0) != 0) {
            r = 1;
            goto chk;
        }
        if (*(s32 *)(b + 672) != 0) {
            *(u32 *)(TB + 52) = *(u32 *)(TB + 44);
            *(u32 *)(TB + 56) = *(u32 *)(TB + 44);
            *(u32 *)(TB + 64) = 0;
            if (*(s32 *)(b + 12) != 1 || *(s32 *)(b + 748) == 1) {
                wC_80276AB8_7AA78((u8 *)(*(s32 *)(b + 768) + off));
            }
            *(s32 *)(b + 672) = 0;
        }
        continue;
    chk:
        if (*(s32 *)(b + 672) == 0) {
            *(s32 *)(b + 672) = 1;
            *(s32 *)(b + 640) = 0;
            *(s32 *)(b + 824) = 0;
        }
    }
    if (locked != 0) {
        wC_80283F38_7AA78(wCa_802F3860_7AA78[0], b + 844);
    }
end:
    return r;
}
#undef TB
