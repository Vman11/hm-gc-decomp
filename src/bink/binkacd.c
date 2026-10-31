/* RAD Bink: 0x80282BE0-0x8028389C */
#include "bink_common.h"

f32 fn_80282BE0(s32 arg0) {
    f32 result = (f32)((((u32)arg0 & 0xEFFFFFFF) >> 5) * lbl_80301C18[arg0 & 31]);
    if (arg0 & 0x10000000) result = -result;
    return result;
}

void fn_80282C34(s16 *dst, f32 *src, s32 count, f32 scale) {
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

void fn_80282C94(s16 *dst, f32 *src, s32 count, f32 scale) {
 s32 remain = count - 1;
 if(count != 0) {
 do {
 s32 v = (s32)(*src * scale);
 s32 out;
 if(v <= 0x7FFE) { out = -0x8000; if(v > -0x8000) out = v; }
 else out = 0x7FFF;
 *dst++ = out;
 v = (s32)(src[count] * scale);
 if(v <= 0x7FFE) { out = -0x8000; if(v > -0x8000) out = v; }
 else out = 0x7FFF;
 *dst++ = out;
 src++;
 } while(remain-- != 0);
 }
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
    o->flags = flags;
    o->p4 = p4;
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
    u32 j;

    ret = fn_802830B4(arg0->unk0, arg0->unk4, arg0->unk10, arg0->unk30, arg0->unk24, arg0->unk28, arg0->unk14, arg3, arg0->unk1C, arg0->unk20);
    if (arg0->unk18 != 0) {
        arg0->unk18 = 0;
    } else {
        half = arg0->unkC >> 1;
        for (i = 0, j = half; i < half; i++, j--) {
            arg0->unk14[i] = (arg0->unk14[i] * i + arg0->unk2C[i] * j) / half;
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
