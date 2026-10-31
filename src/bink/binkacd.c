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
