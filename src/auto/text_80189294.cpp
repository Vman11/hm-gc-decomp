#include "common.h"

extern "C" {

struct R { u8 pad_[292]; virtual void s0(); virtual void s1(); virtual void s2(void *, int, int); virtual void s3(); virtual void err(int); };
struct Box { f32 x0, x1, y0, y1, z0, z1; };
struct P { u8 pad[12]; void *fc; s32 f10; u8 *f14[3]; };
void fn_800FB064(R *, void *);
void *fn_800F9398(void *, void *);
void *fn_800F9788(void *, char *, void *);
u8 *fn_8019565C(void *);
u8 *fn_8019BAF4(void *);
u8 *fn_8019BAB8(void *);
void fn_8019BADC(void *, void *);
void fn_8019AC44(void *, void *, void *, void *);
void fn_80101A90(Box *, R *);
void *fn_800F8274(void *, void *);
void fn_8019A058(P *, u8 *, u8 *, R *);

static inline void *look(u8 *b, char *nm, void *id) {
    if (nm == 0 || *nm == 0) return fn_800F9398(b + 0x90, id);
    return fn_800F9788(b + 0xa8, nm, id);
}
static inline u8 *cv(void *x) { if (x) x = fn_8019565C(x); return (u8 *)x; }
void fn_80189294(P *p, u8 *b, u8 *q, void *r_v, u32 tok) {
    u8 *k;
    u8 id[8];
    R * r = (R *)r_v;
    char nm[8];
    switch (tok) {
    case 0x40:
        break;
    case 0x42: {
        u8 *o;
        u8 *k;
        u8 *n;
        fn_800FB064(r, id);
        fn_800FB064(r, nm);
        o = cv(look(b, nm, id));
        if (!o) r->err(37);
        n = fn_8019BAF4(q);
        if (n != 0) {
            k = fn_8019BAB8(q);
            if (k == 0) {
                fn_8019BADC(q, n);
            } else {
                *(s32 *)(q + 76) = 2;
                fn_8019AC44(q, o, n, k);
                *(P **)(k + 8) = p;
                *(u8 **)(k + 20) = k;
                if (p->f14[2] != 0) {
                    *(u8 **)(p->f14[2] + 28) = k;
                }
                *(u8 **)(k + 24) = p->f14[2];
                p->f14[2] = k;
                *(u8 **)(k + 28) = 0;
            }
        }
        break;
    }
    case 0x4A: {
        u8 *o;
        u8 *n;
        fn_800FB064(r, id);
        fn_800FB064(r, nm);
        if (nm == 0 || *nm == 0) o = (u8 *)fn_800F9398(b + 0x90, id); else o = (u8 *)fn_800F9788(b + 0xa8, nm, id);
        if (!o) r->err(37);
        n = fn_8019BAF4(q);
        if (n != 0) {
            k = fn_8019BAB8(q);
            if (k == 0) {
                {
                    fn_8019BADC(q, n);
                }
            } else {
                *(s32 *)(q + 76) = 3;
                fn_8019AC44(q, o, n, k);
                *(P **)(k + 8) = p;
                *(u8 **)(k + 20) = k;
                if (((u8 **)((u8 *)p + 0x20))[0] != 0) {
                    *(u8 **)(((u8 **)((u8 *)p + 0x20))[0] + 28) = k;
                }
                *(u8 **)(k + 24) = ((u8 **)((u8 *)p + 0x20))[0];
                ((u8 **)((u8 *)p + 0x20))[0] = k;
                *(u8 * volatile *)(k + 28) = 0;
            }
        }
        break;
    }
    case 0x47: {
        Box bx;
        fn_80101A90(&bx, r);
        f32 dy, dx, dz;
        dx = bx.x1 - bx.x0;
        dy = bx.y1 - bx.y0;
        dz = bx.z1 - bx.z0;
        if (dx > dy) {
            if (dx > dz) p->f10 = 0; else p->f10 = 2;
        } else {
            if (dy > dz) p->f10 = 1; else p->f10 = 2;
        }
        break;
    }
    case 0x4B: {
        u8 *o;
        fn_800FB064(r, id);
        fn_800FB064(r, nm);
        if (nm == 0 || *nm == 0) o = (u8 *)fn_800F9398(b + 0x1bc, id); else o = (u8 *)fn_800F9788(b + 0x1d4, nm, id);
        if (!o) r->err(37);
        fn_800FB064(r, id);
        p->fc = fn_800F8274(0x30 + o, id);
        if (!p->fc) r->err(37);
        break;
    }
    default:
        fn_8019A058(p, b, q, r);
        break;
    }
}

}
