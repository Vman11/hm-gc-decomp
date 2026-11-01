/* RAD Bink: 0x80282BE0-0x8028389C */
#include "bink_common.h"

f32 fn_80282BE0(s32 arg0) {
    f32 result = (f32)((((u32)arg0 & 0xEFFFFFFF) >> 5) * lbl_80301C18[arg0 & 31]);
    if (arg0 & 0x10000000) result = -result;
    return result;
}

void fn_80282C34(s16 *dst, f32 *src, f32 scale, s32 count) {
    s32 i;
    for (i = count; i != 0; i--) {
        s32 n = (s32)(*src * scale);
        s16 *out = dst++;
        s32 v;
        if (n <= 0x7FFE) {
            if (n > -0x8000) v = n;
            else v = -0x8000;
        } else v = 0x7FFF;
        *out = v;
        src++;
    }
}

void fn_80282C94(s16 *dst, f32 *src, f32 scale, s32 count) {
    s32 i = count - 1;
    if (count != 0) do {
        s32 n;
        s16 *out;
        s32 v;
        s16 *o2 = dst++;
        n = (s32)(*src * scale);
        if (n <= 0x7FFE) {
            if (n > -0x8000) v = n;
            else v = -0x8000;
        } else v = 0x7FFF;
        *o2 = v;
        n = (s32)(src[count] * scale);
        out = dst++;
        if (n <= 0x7FFE) {
            if (n > -0x8000) v = n;
            else v = -0x8000;
        } else v = 0x7FFF;
        *out = v;
        src++;
        i--;
    } while (i + 1 != 0);
}

extern u8 lbl_80301BA0[];
#define GETBIT(bs) ((bs)->bits ? ({ u32 c_ = (bs)->buf; (bs)->bits--; (bs)->buf = c_ >> 1; c_ & 1; }) \
    : ({ u32 *p_ = (bs)->ptr; u32 w_ = *p_; (bs)->bits = 31; (bs)->ptr = p_ + 1; (bs)->buf = w_ >> 1; w_ & 1; }))
#define GETBITS(bs, n) ((bs)->bits >= n ? ({ u32 c_ = (bs)->buf; (bs)->bits -= n; (bs)->buf = c_ >> n; c_ & ((1 << n) - 1); }) \
    : ({ u32 *p_ = (bs)->ptr; u32 b_ = (bs)->bits; u32 c_ = (bs)->buf; u32 w_ = *p_; (bs)->bits = b_ + (32 - n); (bs)->ptr = p_ + 1; (bs)->buf = w_ >> (n - b_); w_ <<= b_; (c_ | w_) & ((1 << n) - 1); }))
static inline u32 rdn(BitBuf *bs, u32 n, u32 m, u32 t_) {
    u32 bits = bs->bits;
    u32 v;
    if (bits >= n) {
        u32 buf = bs->buf;
        bs->bits = bits - n;
        v = buf & m;
        bs->buf = buf >> n;
    } else {
        u32 *p = bs->ptr;
        u32 buf = bs->buf;
        u32 w = *p;
        bs->bits = bits - t_;
        bs->ptr = p + 1;
        bs->buf = w >> (n - bits);
        w <<= bits;
        v = (buf | w) & m;
    }
    return v;
}
void fn_80282D40(f32 *coeffs, u32 n, BitBuf *bs, f32 *quant, u32 *bands) {
    f32 q = 0.0f;
    u32 k = 0;
    u32 i, j, width;
    f32 *dst;
    while (bands[k] * 2 < 2) { q = quant[k]; k++; }
    dst = coeffs + 2;
    for (i = 2; i < n; ) {
        if (GETBIT(bs)) { j = GETBITS(bs, 4); j = i + lbl_80301BA0[j] * 8; }
        else j = i + 8;
        if (j > n) j = n;
        width = GETBITS(bs, 4);
        if (width == 0) {
            memset(dst, 0, (j - i) * 4);
            dst += j - i;
            i = j;
            while (i > bands[k] * 2) { q = quant[k]; k++; }
        } else {
            if (i < j) {
            u32 m = 0xFFFFFFFF >> (32 - width);
            u32 t_ = width - 32;
            do {
                u32 c;
                if (i == bands[k] * 2) { q = quant[k]; k++; }
                c = rdn(bs, width, m, t_);
                if (c) {
                    s32 s = -(s32)GETBIT(bs);
                    *dst = (f32)(s32)((c ^ s) - s) * q;
                } else *dst = 0.0f;
                dst++;
                i++;
            } while (i < j);
            }
        }
    }
}

void fn_8028B870(s32 n, s32 isgn, f32 *a, s32 *ip, f32 *w);
s32 fn_802830B4(s32 n, f32 scale, s32 chans, s32 flags, s32 ip, s32 w, s16 *out, s32 data, s32 nbands, s32 bands) {
    f32 quant[25];
    BitBuf bs;
    f32 coeffs[4096];
    f32 *dst;
    f32 *start;
    u32 ch, i;
    bs.unk4 = (u32)data;
    bs.ptr = (u32 *)data;
    bs.bits = 0;
    bs.buf = 0;
    if (flags & 1) GETBITS(&bs, 2);
    dst = coeffs;
    for (ch = 0; ch < (u32)chans; ch++) {
        i = GETBITS(&bs, 29);
        dst[0] = fn_80282BE0(i);
        i = GETBITS(&bs, 29);
        dst[1] = fn_80282BE0(i);
        for (i = 0; i < (u32)nbands; i++) {
            s32 v = GETBITS(&bs, 8);
            quant[i] = powf(10.0f, (f32)v * 0.664f * 0.1f);
        }
        fn_80282D40(dst, n, &bs, quant, (u32 *)bands);
        if (flags & 1) fn_8028B870(n, 1, dst, (s32 *)ip, (f32 *)w);
        else fn_8028B6F4(n, -1, dst, (s32 *)ip, (f32 *)w);
        dst += n;
    }
    if (chans == 1) fn_80282C34(out, coeffs, scale, n);
    else fn_80282C94(out, coeffs, scale, n);
    bs.bits = 0;
    return (((u32)bs.ptr - bs.unk4) * 8 - bs.bits) / 8;
}

extern u32 lbl_80301BB0[];
static inline f32 acd_sqrtf(f32 x) {
    f32 r;
    if (x > 0.0f) {
        f32 e; f64 g;
        asm("frsqrte %0,%1" : "=f"(e) : "f"(x));
        g = e;
        g = g * 0.5 * (3.0 - g * g * x);
        g = g * 0.5 * (3.0 - g * g * x);
        g = g * 0.5 * (3.0 - g * g * x);
        r = (f32)(g * x);
    } else {
        r = x;
    }
    return r;
}
typedef struct AcdState {
    u32 n;
    f32 scale;
    u32 size2;
    u32 size16;
    u32 chans;
    void *p4;
    s32 first;
    u32 bands;
    u32 *p0;
    s32 *p1;
    void *p2;
    void *p3;
    u32 flags;
} AcdState;
AcdState *fn_802833CC(u32 rate, u32 chans, u32 flags) {
    u32 n, size2, half, nh, i, bands;
    u32 *p0;
    s32 *p1;
    void *p2, *p3, *p4;
    AcdState *o;
    if (rate >= 44100) n = 2048;
    else if (rate >= 22050) n = 1024;
    else n = 512;
    size2 = n * chans * 2;
    if (!(flags & 1)) {
        rate *= chans;
        n *= chans;
        chans = 1;
    }
    half = (rate + 1) >> 1;
    nh = n >> 1;
    for (i = 0; i <= 24 && lbl_80301BB0[i] < half; i++);
    bands = i;
    fn_802876F8((u8 *)&p0, (i + 1) * 4);
    fn_802876F8((u8 *)&p1, ((u32)acd_sqrtf((f32)nh) + 2) * 4);
    if (flags & 1) fn_802876F8((u8 *)&p2, n * 5);
    else fn_802876F8((u8 *)&p2, nh * 4 - 1);
    fn_802876F8((u8 *)&p3, size2 >> 1);
    fn_802876F8((u8 *)&p4, size2);
    o = (AcdState *)wC_fn_80287810(52);
    if (o == 0) return 0;
    ((void *(*)())memset)(o, 0, 52);
    o->p0 = p0;
    o->p1 = p1;
    o->p2 = p2;
    o->p3 = p3;
    o->p4 = p4;
    o->flags = flags;
    o->chans = chans;
    o->bands = i;
    o->n = n;
    o->size2 = size2;
    o->size16 = size2 >> 4;
    o->scale = 2.0f / acd_sqrtf((f32)n);
    for (i = 0; i < bands; i++) {
        o->p0[i] = lbl_80301BB0[i] * nh / half;
        if (o->p0[i] == 0) o->p0[i] = 1;
    }
    o->p0[i] = nh;
    o->p1[0] = 0;
    o->first = 1;
    return o;
}

void fn_80283750(Fn80283750Struct *arg0, s16 **arg1, s32 *arg2, s32 arg3, s32 *arg4) {
    s32 ret;
    u32 i;
    u32 half;

    ret = fn_802830B4(arg0->unk0, arg0->unk4, arg0->unk10, arg0->unk30, arg0->unk24, arg0->unk28, arg0->unk14, arg3, arg0->unk1C, arg0->unk20);
    if (arg0->unk18 != 0) {
        arg0->unk18 = 0;
    } else {
        half = arg0->unkC >> 1;
        for (i = 0; i < half; i++) {
            arg0->unk14[i] = (arg0->unk14[i] * i + arg0->unk2C[i] * (half - i)) / half;
        }
    }
    memcpy_np(arg0->unk2C, (u8 *)arg0->unk14 + (arg0->unk8 - arg0->unkC), arg0->unkC);
    if (arg2 != NULL) {
        *arg2 = arg0->unk8 - arg0->unkC;
    }
    if (arg1 != NULL) {
        *arg1 = arg0->unk14;
    }
    if (arg4 != NULL) {
        *arg4 = arg3 + ret;
    }
}
