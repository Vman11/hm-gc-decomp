// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V2 { f32 x, y; V2 &operator=(const V2 &o) { x = o.x; y = o.y; return *this; } };
struct V3 { f32 x, y, z; V3 &operator=(const V3 &o) { x = o.x; y = o.y; z = o.z; return *this; } };
struct V4 { f32 x, y, z, w; V4 &operator=(const V4 &o) { x = o.x; y = o.y; z = o.z; w = o.w; return *this; } };
typedef struct { u8 pad[0x10]; u32 flags; u32 count; } A;
typedef struct { u32 flags; u32 count; V4 v4; f32 w[8]; } B;
typedef struct { u8 *data0; u32 stride0; u8 *data1; u32 stride1; } C;
void fn_80139604(A *arg0, s32 idx, B *__restrict src, C *dst) {
    f32 *__restrict out;
    u32 i;
    u32 n;
    u32 max;
    u32 cnt;
    if ((arg0->flags & 0x40) && (src->flags & 0x40)) {
        *(V2 *)(dst->data0 + idx * dst->stride0) = *(V2 *)&src->v4;
    } else if ((arg0->flags & 0x80) && (src->flags & 0x80)) {
        *(V3 *)(dst->data0 + idx * dst->stride0) = *(V3 *)&src->v4;
    } else if ((arg0->flags & 0x100) && (src->flags & 0x100)) {
        *(V4 *)(dst->data0 + idx * dst->stride0) = src->v4;
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
        *(V3 *)(dst->data0 + idx * dst->stride0) = *(V3 *)&src->w[4];
    }
}

} /* extern "C" */
