#include "common.h"

extern "C" {

struct V { f32 x, y, z; };
struct FT {
    u8 pad[0x130];
    void (*f130)(void *, V *);
    u8 pad134[0x144 - 0x134];
    void (*f144)(void *, V *);
    void (*f148)(void *, V *);
    void (*f14c)(void *, V *);
};
extern FT lbl_803286D0;
struct S28 { u8 pad[0x10]; void *f10; };
struct G65C { u8 pad[0x28]; S28 *f28; };
extern G65C *lbl_8035B65C;
struct Cam {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13();
    virtual void Set(V *, V *, V *, V *, int);
};
struct T {
    u8 pad[0xe0];
    Cam *fe0;
    u8 pade4[0x158 - 0xe4];
    f32 *f158, *f15c, *f160;
    u8 pad164[4];
    f32 *f168, *f16c, *f170;
    u8 pad174[0x1d0 - 0x174];
    s32 f1d0;
};
void fn_80101820(V *);

static inline void MAdd(V *o, f32 s, const V *v) {
    o->x = s * v->x + o->x;
    o->y = s * v->y + o->y;
    o->z = s * v->z + o->z;
}

void fn_8004A7C8(T *t) {
    V pos, up, rt, fw, c, a, b, d;
    lbl_803286D0.f130(lbl_8035B65C->f28->f10, &pos);
    lbl_803286D0.f14c(lbl_8035B65C->f28->f10, &up);
    lbl_803286D0.f144(lbl_8035B65C->f28->f10, &fw);
    lbl_803286D0.f148(lbl_8035B65C->f28->f10, &rt);
    rt.x = -rt.x;
    rt.y = -rt.y;
    rt.z = -rt.z;
    c = pos;
    if (t->f1d0) {
        MAdd(&c, *t->f168, &up);
        MAdd(&c, *t->f16c, &fw);
        MAdd(&c, *t->f170, &rt);
    } else {
        MAdd(&c, *t->f158, &up);
        MAdd(&c, *t->f15c, &fw);
        MAdd(&c, *t->f160, &rt);
    }
    a.x = -up.x; a.y = -up.y; a.z = -up.z;
    fn_80101820(&a);
    b = rt;
    fn_80101820(&b);
    d.x = -fw.x; d.y = -fw.y; d.z = -fw.z;
    fn_80101820(&d);
    t->fe0->Set(&c, &a, &b, &d, 0);
}

}
