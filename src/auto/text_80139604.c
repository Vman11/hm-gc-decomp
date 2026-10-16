/* Functions from 0x80139604 to 0x801397FC, found by decomp-toolkit. */
#include "common.h"

typedef struct { f32 x, y; } Unk80139604V2;
typedef struct { f32 x, y, z; } Unk80139604V3;
typedef struct { f32 x, y, z, w; } Unk80139604V4;

typedef struct {
    u8 pad[0x10];
    u32 flags;
    u32 count;
} Unk80139604A;

typedef struct {
    u32 flags;
    u32 count;
    f32 v[4];
    f32 w[8];
} Unk80139604B;

typedef struct {
    u8 *data0;
    u32 stride0;
    u8 *data1;
    u32 stride1;
} Unk80139604C;

void fn_80139604(Unk80139604A *arg0, s32 idx, Unk80139604B *src, Unk80139604C *dst) {
    f32 *out;
    u32 n;
    u32 i;
    u32 cnt;
    u32 max;
    f32 w, z, y, x;

    if ((arg0->flags & 0x40) && (src->flags & 0x40)) {
        out = (f32 *)(dst->data0 + idx * dst->stride0);
        x = src->v[0];
        y = src->v[1];
        out[0] = x;
        out[1] = y;
    } else if ((arg0->flags & 0x80) && (src->flags & 0x80)) {
        out = (f32 *)(dst->data0 + idx * dst->stride0);
        x = src->v[0];
        y = src->v[1];
        z = src->v[2];
        out[0] = x;
        out[1] = y;
        out[2] = z;
    } else if ((arg0->flags & 0x100) && (src->flags & 0x100)) {
        out = (f32 *)(dst->data0 + idx * dst->stride0);
        x = src->v[0];
        y = src->v[1];
        z = src->v[2];
        w = src->v[3];
        out[0] = x;
        out[1] = y;
        out[2] = z;
        out[3] = w;
    }
    if ((arg0->flags & 0x200) && (src->flags & 0x200)) {
        max = arg0->count;
        cnt = src->count;
        n = max;
        if (cnt < max) {
            n = cnt;
        }
        out = (f32 *)(dst->data1 + idx * dst->stride1);
        for (i = 0; i < n; i++) {
            out[i] = src->w[i];
        }
    }
    if ((arg0->flags & 0x800) && (src->flags & 0x800)) {
        out = (f32 *)(dst->data0 + idx * dst->stride0);
        x = src->w[4];
        y = src->w[5];
        z = src->w[6];
        out[0] = x;
        out[1] = y;
        out[2] = z;
    }
}
