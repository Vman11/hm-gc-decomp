#include "common.h"
extern "C" {
}
struct V3 { f32 x, y, z; };
struct O { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5();
    virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void get(V3 *, int, V3 *, V3 *, int); virtual void put(V3 *, V3 *, V3 *, V3 *, int); };
struct O11 { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5();
    virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void f(); };
struct H48 { u8 pad[16]; void *h; };
struct Res { u8 pad[48]; H48 *f48; };
struct X { u8 pad[280]; V3 a; u8 pad2[48]; f32 f340; u8 pad3[1112]; Res *f1456; f32 m[7]; };
struct Tb { u8 pad[304]; void (*f304)(void *, V3 *); void (*f308)(void *, V3 *, V3 *, V3 *); };
struct D { u8 pad[4]; O11 *o; };
struct G { u8 pad[8]; u8 *db; };
struct T { u8 pad[192]; D *f192; u8 pad2[20]; s32 f216; u8 pad3[4]; X *f224; u8 pad4[8]; void *f236; u8 pad5[40]; O *f280; u8 pad6[144]; V3 f428; };
extern "C" {
extern f32 lbl_8035F0C0;
extern void *volatile lbl_8035B308;
extern G *lbl_8035B460;
extern Tb lbl_803286D0;
extern s32 lbl_8035B6E8;
O *fn_802288FC(void *, void *);
Res *fn_800F9398(void *, void *);
void fn_80107244(H48 *, f32 *);
void fn_801075B8(H48 *, f32 *);
static inline void negcross(V3 &v, V3 &u, V3 &c) {
    v.x = -v.x; v.y = -v.y; v.z = -v.z;
    c.x = v.y * u.z - v.z * u.y; c.y = v.z * u.x - v.x * u.z; c.z = v.x * u.y - v.y * u.x;
}
struct PQ { V3 p; f32 q[4]; };
void fn_8006C418(T *t) {
    V3 pos, v, u, c;
    f32 mq[4];
    V3 mp;
    Res *key = (Res *)t->f236;
    Res *r;
    O *o;
    { f32 k = lbl_8035F0C0; *(volatile f32 *)&v.x = k; *(volatile f32 *)&v.y = k; *(volatile f32 *)&v.z = k; }
    o = fn_802288FC(lbl_8035B308, key);
    r = 0;
    if (o) {
        o->get(&pos, 0, &u, &v, 0);
        negcross(v, u, c);
    } else {
        key = fn_800F9398(lbl_8035B460->db + 144, key);
        r = key;
        if (key) {
            Res *q = key;
            if (q->f48) lbl_803286D0.f304(q->f48->h, &pos);
            else pos.z = pos.y = pos.x = lbl_8035F0C0;
            if (q->f48) lbl_803286D0.f308(q->f48->h, &v, &c, &u);
            negcross(v, u, c);
        }
    }
    if (o == 0 && r == 0) return;
    {
        X *x = t->f224;
        x->a = t->f428;
        x->f340 = lbl_8035F0C0;
    }
    t->f280->put(&pos, &v, &u, &c, 0);
    lbl_8035B6E8 = 1;
    if (t->f216 == 1) {
        {
        X *x = (X *)t->f280;
        x->f1456 = 0;
        if (x->f1456) {
            mq[3] = mq[2] = mq[1] = mq[0] = mp.z = mp.y = mp.x = lbl_8035F0C0;
            if (x->f1456->f48) fn_80107244(x->f1456->f48, &mp.x);
            else mp.z = mp.y = mp.x = lbl_8035F0C0;
            if (x->f1456->f48) fn_801075B8(x->f1456->f48, mq);
            x->m[0] = mp.x; x->m[1] = mp.y; x->m[2] = mp.z; x->m[3] = mq[0];
            x->m[4] = mq[1]; x->m[5] = mq[2]; x->m[6] = mq[3];
        }
        }
        { X *x = (X *)t->f280; x->m[0] = pos.x; x->m[1] = pos.y; x->m[2] = pos.z; }
        t->f192->o->f();
    }
}

}
