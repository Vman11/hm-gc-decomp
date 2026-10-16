/* Functions from 0x80139604 to 0x801397FC, found by decomp-toolkit. */
#include "common.h"

typedef struct { f32 x, y; } Unk80139604V2;
typedef struct { f32 x, y, z; } Unk80139604V3;
typedef struct { f32 x, y, z, w; } Unk80139604V4;

static inline void CopyVec2(f32 *__restrict d, const f32 *__restrict s) {
    d[0] = s[0];
    d[1] = s[1];
}

static inline void CopyVec3(f32 *__restrict d, const f32 *__restrict s) {
    d[0] = s[0];
    d[1] = s[1];
    d[2] = s[2];
}

static inline void CopyVec4(f32 *__restrict d, const f32 *__restrict s) {
    d[0] = s[0];
    d[1] = s[1];
    d[2] = s[2];
    d[3] = s[3];
}

static inline void CopyFloats(f32 *__restrict d, const f32 *__restrict s, u32 n) {
    u32 i;
    for (i = 0; i < n; i++) {
        d[i] = s[i];
    }
}

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

void fn_80139604(Unk80139604A *arg0, s32 idx, Unk80139604B *__restrict src, Unk80139604C *dst) {
    f32 *out;
    u32 i;
    u32 n;
    u32 max;
    u32 cnt;

    if ((arg0->flags & 0x40) && (src->flags & 0x40)) {
        out = (f32 *)(dst->data0 + idx * dst->stride0);
        out[0] = src->v[0];
        out[1] = src->v[1];
    } else if ((arg0->flags & 0x80) && (src->flags & 0x80)) {
        out = (f32 *)(dst->data0 + idx * dst->stride0);
        out[0] = src->v[0];
        out[1] = src->v[1];
        out[2] = src->v[2];
    } else if ((arg0->flags & 0x100) && (src->flags & 0x100)) {
        out = (f32 *)(dst->data0 + idx * dst->stride0);
        out[0] = src->v[0];
        out[1] = src->v[1];
        out[2] = src->v[2];
        out[3] = src->v[3];
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
        out[0] = src->w[4];
        out[1] = src->w[5];
        out[2] = src->w[6];
    }
}
