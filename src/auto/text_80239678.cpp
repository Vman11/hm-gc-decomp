// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct Q;
struct QO { u8 pad[4]; virtual void v0(); virtual void s1(Q *); };
struct Q { u32 fl; u8 pad4[8]; QO *o12; u8 pad16[32]; u32 f48; };
struct V524 { virtual void v0(); virtual void v1(); virtual void s2(); virtual void v3(); virtual void s4(); };
struct P {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
    virtual void v15(); virtual void v16(); virtual void v17(); virtual void s18(); virtual void v19();
    virtual void s20();
    u8 pad4[272];
    s32 i276;
    f32 v280[3];
    f32 v292[3];
    u8 pad304[12];
    f32 v316[3];
    f32 *f328;
    f32 *f332;
    f32 *f336;
    f32 len;
    u32 a344[7];
    u8 pad372[52];
    f32 f424;
    f32 f428;
    f32 *f432;
    f32 f436;
    u8 pad440[52];
    s32 i492;
    u8 pad496[12];
    s32 i508;
    s32 i512;
    u8 pad516[8];
    V524 *o524;
    u8 pad528[20];
    s32 *s548;
    s32 i552;
    u8 pad556[20];
    s32 i576;
};
extern f32 lbl_80365EFC;
extern f64 lbl_80365F28, lbl_80365F30;
extern u32 lbl_80365F00;
void fn_8022D77C(P *);
Q *fn_8022D694(P *);
void *fn_8022C3F4(P *);
void fn_8022BE28(P *, int);

inline f32 Sqrt(f32 x) {
    volatile f32 y;
    f64 g = __frsqrte(x);
    g = lbl_80365F28 * g * (lbl_80365F30 - g * g * x);
    g = lbl_80365F28 * g * (lbl_80365F30 - g * g * x);
    g = lbl_80365F28 * g * (lbl_80365F30 - g * g * x);
    y = x * g;
    return y;
}

void fn_80239678(P *p) {
    s32 i;
    if (p->i276) {
        p->s18();
        p->s20();
    }
    p->v280[0] = p->v292[0];
    p->v280[1] = p->v292[1];
    p->v280[2] = p->v292[2];
    {
        f32 d = p->v280[0] * p->v280[0] + p->v280[1] * p->v280[1] + p->v280[2] * p->v280[2];
        if (d > lbl_80365EFC) d = Sqrt(d);
        p->len = d;
    }
    if (p->f328) {
        f32 x, y, z;
        x = *p->f328;
        z = *p->f336;
        y = *p->f332;
        p->v316[0] = x;
        p->v316[1] = y;
        p->v316[2] = z;
    } else {
        p->v316[0] = lbl_80365EFC;
        p->v316[1] = lbl_80365EFC;
        p->v316[2] = lbl_80365EFC;
    }
    if (p->o524) {
        p->o524->s4();
        p->o524->s2();
    }
    fn_8022D77C(p);
    p->f428 = p->f424;
    p->f436 = p->f432 ? *p->f432 : lbl_80365EFC;
    p->i552 = p->s548 ? *p->s548 : 0;
    for (i = 0; i < 7; i++) {
        if (p->a344[i] != 0xFFFFFFFF) p->a344[i] = 0;
    }
    p->i576 = 0;
    if (p->i492) {
        if (fn_8022D694(p)) {
            Q *q = fn_8022D694(p);
            if (q->f48 & 1) {
                q->fl |= lbl_80365F00;
                if (q->o12) q->o12->s1(q);
            }
        }
        if (fn_8022C3F4(p)) fn_8022BE28(p, 0);
        p->i508 = 0;
        p->i512 = 0;
        p->i492 = 0;
    }
}

} /* extern "C" */
