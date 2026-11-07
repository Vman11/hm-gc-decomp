// NonMatching draft (wPF): DIFF 10 / SDIFF 10 - loop in Loop(q,n,&i) inline (late vreg -> i in r31). Left: stack-param lwz scheduled interleaved with the mr block (target: after it).
#include "common.h"

extern "C" {

struct C80152B64 { u8 b[0x4c]; C80152B64(); };
struct Fmt { u8 b[0x1c]; };
struct Flg { u8 pad[8]; u32 f8; };
struct Dl {
    u8 pad[0x1c];
    Flg *f1c;
    void (*f20)(void *, void *, Fmt *);
    void (*f24)(void *, void *, u32, void *, u32, void *, void *, s32, void *);
};
struct Idx { u8 pad[0x18]; u16 *f18; };
struct Q {
    u8 pad[0x1f44];
    u8 f1f44[0x1fb0 - 0x1f44];
    u32 f1fb0[(0x275c - 0x1fb0) / 4];
    u32 f275c;
    u8 pad2760[0x2a78 - 0x2760];
    u32 f2a78;
    u8 pad2a7c[0x2aa0 - 0x2a7c];
    u32 f2aa0;
    u8 pad2aa4[0x279f4 - 0x2aa4];
    u32 f279f4;
    u8 pad279f8[0x27a0c - 0x279f8];
    u8 f27a0c[4];
};
extern u8 lbl_803286D0[];
#define T174 (*(void (**)(C80152B64 *, u32))(lbl_803286D0 + 0x174))
extern const u32 lbl_802A0C60[];
extern u8 lbl_8032F718[];
void fn_8014CA08(Fmt *);
void fn_800D9E98(u32);
void fn_800D9DF8(C80152B64 *, u32);
u32 fn_80155F9C(Fmt *);
u32 fn_80155F60(Fmt *);
void *fn_8021820C(void *, u32, u32);
u32 fn_802181F8(void *);
void DCFlushRange(void *, u32);
u32 fn_80157DD4(void *, Fmt *, void *, void *, void *);
void fn_800D6B8C(u32, u32, u16);
void fn_800D65A8(u32);

static inline void Loop(Q *q, u32 n, u32 *pi) {
    for (*pi = 0; *pi < n; (*pi)++) {
        u32 id = lbl_802A0C60[*pi];
        u32 v = q->f2a78;
        C80152B64 o;
        T174(&o, v);
        fn_800D9DF8(&o, id);
        q->f1fb0[id] = v;
    }
}
void fn_8016AB80(Q *q, Dl *d, void *a, void *b, u32 n, void *c, u32 *prims, void *e,
                 s32 stride, Idx *x, u32 start, u32 cnt, void *g) {
    Fmt fmt;
    u32 i;
    u32 sz;
    u32 m;
    u32 total;
    void *buf;
    u32 tok;
    u16 *p;
    u16 *end;
    u32 h;
    u32 j;
    fn_8014CA08(&fmt);
    if (!(d->f1c->f8 & 1)) {
        if (q->f275c != 3) {
            q->f275c = 3;
            fn_800D9E98(q->f275c);
        }
        Loop(q, n, &i);
    }
    d->f20(a, b, &fmt);
    sz = fn_80155F9C(&fmt);
    m = fn_80155F60(&fmt);
    total = stride * sz;
    buf = fn_8021820C(q->f27a0c, total, sz);
    d->f24(a, b, n, c, q->f2aa0, lbl_8032F718, e, stride, buf);
    tok = fn_802181F8(q->f27a0c);
    DCFlushRange(buf, total);
    h = fn_80157DD4(q->f1f44, &fmt, e, g, q->f27a0c);
    p = x->f18 + start;
    end = p + cnt;
    fn_800D6B8C(prims[q->f279f4], h, cnt);
    for (; p < end; p++) {
        for (j = 0; j < m; j++) {
            *(volatile u16 *)0xCC008000 = *p;
        }
    }
    fn_800D65A8(tok);
}

}
