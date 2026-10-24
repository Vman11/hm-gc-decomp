// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V3 { f32 x, y, z; };
struct N {
    u32 flags;
    u8 pad4[20];
    f32 x, y, z, r;
    u8 pad40[20];
    struct Q *q60;
    u8 pad64[40];
    virtual void v0(); virtual void v1(); virtual void upd();
    f32 gx() { if (flags & 4) upd(); return x; }
    f32 gy() { if (flags & 4) upd(); return y; }
    f32 gz() { if (flags & 4) upd(); return z; }
    f32 gr() { if (flags & 4) upd(); return r; }
};
struct Q { u8 pad[552]; u32 fl; };
struct OB {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10(); virtual void v11(); virtual void v12();
    virtual void s13(V3 *, int, int, int, int);
};
struct P {
    u8 pad0[20];
    V3 axis;
    u8 pad32[36];
    V3 org;
    u8 pad80[76];
    N *n156;
    u8 pad160[236];
    OB *o396;
    u8 pad400[164];
    Q *q564;
    u8 pad568[228];
    f32 best;
    s32 hit;
    s32 who;
};
extern f32 lbl_80365ABC;
f32 fn_80101590(V3 *, V3 *);
void fn_80101820(V3 *);
int fn_8023BD28(V3, V3, V3, f32, f32 *, f32 *);

void fn_802234B0(P *p, N *q, s32 k) {
    if (q->q60 != p->q564 && !(q->q60->fl & 0x80)) {
        f32 ra = p->n156->gr();
        f32 rq = q->gr();
        V3 pa, pq, w, d;
        f32 dot;
        f32 t1, t2;
        {
            f32 z = p->n156->gz();
            f32 y = p->n156->gy();
            pa.x = p->n156->gx();
            pa.y = y;
            pa.z = z;
        }
        {
            f32 z = q->gz();
            f32 y = q->gy();
            pq.x = q->gx();
            pq.y = y;
            pq.z = z;
        }
        if (fn_80101590(&pa, &pq) < ra + rq) {
            p->o396->s13(&w, 0, 0, 0, 0);
            d.x = w.x - p->org.x;
            d.y = w.y - p->org.y;
            d.z = w.z - p->org.z;
            dot = d.x * p->axis.x + d.y * p->axis.y + d.z * p->axis.z;
            fn_80101820(&d);
            if (fn_8023BD28(pq, pa, d, rq, &t1, &t2)) {
                if (t2 > dot - lbl_80365ABC) t2 = dot - lbl_80365ABC;
                p->hit = 1;
                if (t2 > p->best) p->best = t2;
                p->who = k;
            }
        }
    }
}

} /* extern "C" */
