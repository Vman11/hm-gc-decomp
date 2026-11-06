// fn_801718AC: polygon clipper (Sutherland-Hodgman, 6 planes) + fan emitter.
// NonMatching draft: SDIFF 28 / DIFF 770 (structure matches; Code() z-term/or
// scheduling, stage-loop tail order and callee-saved register colouring differ).
#include "common.h"
struct V { f32 x, y, z; };
struct CS {
    u8 pad0[0x8c];
    u32 max;
    V verts[32];
    V *pos[32];
    V clip[32];
    u8 pad410[0x610 - 0x410];
    u32 codes[32];
    u32 f690;
    f32 *vb;
    f32 *uv;
    u32 count;
};
struct P {
    u8 pad0[0x14];
    s32 vstride;
    u8 pad18[0x60 - 0x18];
    s32 uvstride;
    u8 pad64[0xcc - 0x64];
    u8 fcc[0x10];
    void *fdc;
};

extern "C" {
extern CS lbl_8032F028;
extern f32 lbl_80364740;
extern f32 lbl_80364744;
s32 fn_8013F5E0(P *, s32, void *, void *);
void **fn_8013F394(P *, u32 *);
void fn_8013F1F8(P *, u32);
void fn_8013F0E8(P *);
void fn_80101624(f32, V *, V *, V *);

static inline u32 Code(V *v) {
    u32 x = *(u32 *)&v->x;
    u32 y = *(u32 *)&v->y;
    u32 z = *(u32 *)&v->z;
    u32 c = ((x >> 29) & 4) | ((y >> 31) << 4);
    u32 h = (((0x3f800000 - x) >> 31) << 3) | (((0x3f800000 - y) >> 31) << 5);
    c |= (z >> 31);
    h |= (((0x3f800000 - z) >> 31) << 1);
    return c | (h & ~(c << 1));
}

static inline void Put(CS *s, P *p, u32 i) {
    *(V *)s->vb = *lbl_8032F028.pos[i];
    s->vb = (f32 *)((u8 *)s->vb + p->vstride);
    lbl_8032F028.uv[0] = lbl_8032F028.clip[i].x;
    lbl_8032F028.uv[1] = lbl_80364740 - lbl_8032F028.clip[i].y;
    lbl_8032F028.uv = (f32 *)((u8 *)lbl_8032F028.uv + p->uvstride);
}

#pragma inline_max_size(4000)
#pragma always_inline on
static inline void Emit(P *p, u32 a, u32 b, u32 c) {
    CS *s = &lbl_8032F028;
    if (!s->vb) {
        void **q;
        if (!fn_8013F5E0(p, 0, p->fdc, p->fcc)) return;
        lbl_8032F028.max = 0;
        q = fn_8013F394(p, &lbl_8032F028.max);
        if (!q) return;
        lbl_8032F028.count = 0;
        s->vb = (f32 *)q[0];
        lbl_8032F028.uv = (f32 *)q[0xc];
    }
    Put(s, p, a);
    Put(s, p, b);
    Put(s, p, c);
    if (++lbl_8032F028.count >= lbl_8032F028.max) {
        fn_8013F1F8(p, lbl_8032F028.count);
        fn_8013F0E8(p);
        s->vb = 0;
    }
}

#pragma always_inline off
#define STAGEBODY(bit, ax, hi) { \
    u32 i, prev = n - 1; \
    u32 pc = lbl_8032F028.codes[in[prev]] & bit; \
    for (i = 0; i < n; i++) { \
        u32 cc = lbl_8032F028.codes[in[i]] & bit; \
        if (pc ^ cc) { \
            f32 t; \
            V *nv; \
            u32 code; \
            u32 pv, cv; \
            if (hi) { \
                f32 vp = ((f32 *)&lbl_8032F028.clip[in[prev]])[ax]; \
                t = (lbl_80364740 - vp) / (((f32 *)&lbl_8032F028.clip[in[i]])[ax] - vp); \
            } else { \
                f32 vp = ((f32 *)&lbl_8032F028.clip[in[prev]])[ax]; \
                t = vp / (vp - ((f32 *)&lbl_8032F028.clip[in[i]])[ax]); \
            } \
            out[cnt++] = nw; \
            cv = in[i]; \
            pv = in[prev]; \
            fn_80101624(t, lbl_8032F028.pos[nw], lbl_8032F028.pos[pv], lbl_8032F028.pos[cv]); \
            nv = &lbl_8032F028.clip[nw]; \
            fn_80101624(t, nv, &lbl_8032F028.clip[pv], &lbl_8032F028.clip[cv]); \
            code = Code(nv); \
            lbl_8032F028.codes[nw] = code; \
            all |= code; \
            nw++; \
        } \
        if (!cc) out[cnt++] = in[i]; \
        prev = i; \
        pc = cc; \
    } \
}

#define STAGE(BIT, AX, HI) \
    if (all & BIT) { \
        STAGEBODY(BIT, AX, HI) \
        { u32 *tmp = in; in = out; out = tmp; } \
        if (!cnt) return; \
        n = cnt; \
        cnt = 0; \
    }

void fn_801718AC(P *p, u32 a, u32 b, u32 c) {
    CS *s = &lbl_8032F028;
    u32 *codes = s->codes;
    u32 all;
    u32 bufA[16];
    u32 bufB[16];
    u32 *in, *out;
    u32 n, cnt, nw;

    if (codes[a] & codes[b] & codes[c]) return;
    all = codes[a] | codes[b] | codes[c];
    if (!all) {
        if ((lbl_8032F028.clip[b].x - lbl_8032F028.clip[c].x) * (lbl_8032F028.clip[a].y - lbl_8032F028.clip[c].y) - (lbl_8032F028.clip[a].x - lbl_8032F028.clip[c].x) * (lbl_8032F028.clip[b].y - lbl_8032F028.clip[c].y) <= lbl_80364744) return;
        Emit(p, a, b, c);
        return;
    }
    bufA[0] = a;
    bufA[1] = b;
    bufA[2] = c;
    in = bufA;
    out = bufB;
    nw = 11;
    n = 3;
    cnt = 0;
    STAGE(1, 2, 0)
    STAGE(2, 2, 1)
    STAGE(4, 0, 0)
    STAGE(8, 0, 1)
    STAGE(0x10, 1, 0)
    STAGE(0x20, 1, 1)
    if ((lbl_8032F028.clip[in[1]].x - lbl_8032F028.clip[in[2]].x) * (lbl_8032F028.clip[in[0]].y - lbl_8032F028.clip[in[2]].y) - (lbl_8032F028.clip[in[0]].x - lbl_8032F028.clip[in[2]].x) * (lbl_8032F028.clip[in[1]].y - lbl_8032F028.clip[in[2]].y) <= lbl_80364744) return;
    {
        u32 i;
        for (i = 1; i < n - 1; i++) {
            Emit(p, in[0], in[i], in[i + 1]);
        }
    }
}
}
