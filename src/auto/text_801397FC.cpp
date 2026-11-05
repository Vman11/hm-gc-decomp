#include "common.h"

struct F_97FC { u32 f0; u32 m[4]; };
struct B_97FC { u8 pad[0x20]; u8 *b0; u32 s0; u8 *b1; u32 s1; u8 *tb[8]; u32 ts[8]; };
struct V4_97FC { f32 x, y, z, w; };
struct V3_97FC { f32 x, y, z; };
struct V2_97FC { f32 x, y; };
struct S_97FC { u32 f0; u8 pad4[0x30]; u32 n; u8 c0[4]; u8 c1[4]; f32 t[8][4]; };
struct O_97FC { u8 pad_[12];
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(u32); virtual void v19(); virtual void v20(); virtual void v21(); virtual void lock(B_97FC *, int); virtual void unlock(F_97FC *);
    u32 f10; u8 pad14[8]; u32 f1c; };
extern "C" {
void fn_80148310(F_97FC *);
void fn_80139604(O_97FC *, u32, S_97FC *, B_97FC *);
u32 fn_80147CD8(F_97FC *, u8 *);
static inline u32 umin(u32 a, u32 b) { return a < b ? a : b; }
static inline u32 umin2(u32 b, u32 a) { return a < b ? a : b; }
void fn_801397FC(O_97FC *o, u32 idx, S_97FC *s) {
    F_97FC f;
    B_97FC b;
    fn_80148310(&f);
    o->lock(&b, 8);
    fn_80139604(o, idx, s, &b);
    o->unlock(&f);
    if ((o->f10 & 0x2000) && (s->f0 & 0x2000)) {
        u32 *d = (u32 *)(b.b0 + idx * b.s0);
        *d = fn_80147CD8(&f, s->c0);
    }
    if ((o->f10 & 0x4000) && (s->f0 & 0x4000)) {
        u32 *d = (u32 *)(b.b1 + idx * b.s1);
        *d = fn_80147CD8(&f, s->c1);
    }
    if ((o->f10 & 0x8000) && (s->f0 & 0x8000)) {
        u32 n = umin2(o->f1c, s->n);
        u32 i;
        for (i = 0; i < n; i++) {
            if (o->f10 & (0x1000000 << i)) {
                f32 *d = (f32 *)(b.tb[i] + idx * b.ts[i]);
                f32 w = s->t[i][3], z = s->t[i][2], y = s->t[i][1], x = s->t[i][0]; d[3] = w; d[2] = z; d[1] = y; d[0] = x;
            } else if (o->f10 & (0x10000 << i)) {
                f32 *d = (f32 *)(b.tb[i] + idx * b.ts[i]);
                f32 z = s->t[i][2], y = s->t[i][1], x = s->t[i][0]; d[2] = z; d[1] = y; d[0] = x;
            } else {
                f32 *d = (f32 *)(b.tb[i] + idx * b.ts[i]);
                f32 y = s->t[i][1], x = s->t[i][0]; d[1] = y; d[0] = x;
            }
        }
    }
    o->v18(idx);
}
}
