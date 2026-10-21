// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct Sub8020C8D8 {
    u8 pad[4];
    virtual void v0();
    virtual void v1();
    virtual s32 v2(u32 pos);
};
struct S8020C8D8 {
    s32 f0;
    u32 limit;
    volatile u32 flags;
    u8 pad0c[8];
    u8 *f20;
    Sub8020C8D8 sub;
    u8 pad20[40 - 32];
    u32 base;
};
extern u32 lbl_80365808;
s32 fn_80208964(Sub8020C8D8 *s, u32 pos, s32 c);

static inline u32 alignDown(u32 v, u32 a) {
    u32 n;
    n = v / a;
    if (n * a > v) {
        n--;
    }
    n *= a;
    return n;
}

static inline Sub8020C8D8 *find(S8020C8D8 *p, u32 pos) {
    if (fn_80208964(&p->sub, pos, 0)) return &p->sub;
    if (fn_80208964(&p->sub, pos, 0)) return &p->sub;
    return 0;
}

s32 fn_8020C8D8(S8020C8D8 *p, s32 off) {
    u32 pos = off + p->base;
    s32 r;
    if (p->f20 == 0 || !(p->flags & 0x10000)) return 2;
    if (pos >= p->limit) {
        p->flags |= lbl_80365808;
        return 8;
    }
    p->flags &= ~0x20000;
    if (find(p, pos) != 0) {
        p->f0 = off;
        return 0;
    }
    r = p->sub.v2(alignDown(pos, M2C_FIELD(p->f20, u32 *, 1716)));
    if (r == 0) p->f0 = off;
    return r;
}

} /* extern "C" */
