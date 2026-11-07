// Matched (wQU): f2ec position update moved into static inline UpdA(Obj*) with block-local g/m (late vregs fix loop walker/item colouring).
#include "common.h"

extern "C" {

struct V3 { f32 x, y, z; };

struct M30 { u8 pad[0x10]; void *f10; u8 pad14[0xc]; u32 f20; };
class Node { public:
    u32 f0; u8 pad4[0x2c]; void *f30; u8 pad34[0x68 - 0x34];
    virtual void n0(); virtual void n1(); virtual void upd(); virtual void n3(); virtual void n4(); virtual void n5();
    virtual void n6(); virtual void n7(); virtual void n8(); virtual void n9(); virtual void n10();
    virtual void tick(f32 dt); };
class Node2 : public Node { public: u8 pad6c[0x78 - 0x6c]; void *f78; };
struct Grp { u8 pad[0x30]; M30 *f30; };
struct FT { void *f0, *f4, *f8; void (*fc)(void *, V3 *); };

struct Tint { u8 pad[8]; u8 r, g, b; u8 pad2[0x2c - 0xb]; u32 f2c; };
struct TA { u8 pad[4]; Tint **e; };
struct TB { u8 pad[0x1c]; TA a; };
struct Fl { u32 f0; f32 f4; u8 pad8[0x28]; u32 f30; };
struct TH { u32 f0; u8 pad4[0x68]; TA *f6c; u8 pad70[0x20]; TB *f90; };
struct Mgr { u8 pad[0xc]; void *fc; };

class Tk { public:
    virtual void t0(); virtual void t1(); virtual void t2(); virtual void t3(); virtual void t4(); virtual void t5();
    virtual void t6(); virtual void t7(); virtual void t8(); virtual void t9(); virtual void t10(); virtual void t11();
    virtual void t12(); virtual void t13();
    virtual void tick(f32 dt);
};

class Obj { public:
    virtual void o0(); virtual void o1(); virtual void o2(); virtual void o3(); virtual void o4(); virtual void o5();
    virtual void o6(); virtual void o7(); virtual void o8(); virtual void o9(); virtual void o10(); virtual void o11();
    virtual void o12();
    virtual void getXf(V3 *pos, V3 *fwd, V3 *up, V3 *right, s32 a);
    virtual void o14(); virtual void o15(); virtual void o16();
    virtual void o17();
    virtual void o18();
    virtual void o19(); virtual void o20();
    virtual void o21(); virtual void o22(); virtual void o23(); virtual void o24(); virtual void o25(); virtual void o26();
    virtual void o27(); virtual void o28(); virtual void o29(); virtual void o30(); virtual void o31(); virtual void o32();
    virtual void msg(void *id, s32 a, s32 b, s32 c, s32 d);
    virtual void o34(); virtual void o35(); virtual void o36();
    virtual void kill(s32 a, V3 *v, void *h);
    u8 pad4[0x40];
    V3 f44;
    u8 pad50[0x26c - 0x50];
    s32 on;
    u8 pad270[0x2c0 - 0x270];
    TH *f2c0;
    s32 f2c4;
    u8 pad2c8[0x2d8 - 0x2c8];
    V3 f2d8;
    Node2 *f2e4;
    Node2 *f2e8;
    Grp *f2ec;
    Node2 *f2f0[2];
    u8 pad2f8[0x348 - 0x2f8];
    f32 f348;
    u8 pad34c[8];
    f32 f354;
    u8 pad358[4];
    f32 f35c;
    u8 pad360[8];
    f32 f368;
    u8 pad36c[0x378 - 0x36c];
    Tk *f378;
    u8 pad37c[0x398 - 0x37c];
    f32 *f398;
};

extern u32 lbl_8035FE38;
extern f32 lbl_8035FE3C;
extern f32 lbl_8035FDF8;
extern f32 lbl_8035FDFC;
extern u32 lbl_8035FDF0;
extern f32 lbl_8035FE10;
extern Mgr *lbl_8035B65C;
extern Obj *lbl_8035A1A8;
extern FT lbl_803286D0;
extern u8 lbl_80298E24[];

void fn_8005E6BC(Obj *o, f32 dt);
void fn_8005E00C(Obj *o, f32 dt);
void fn_80230928(Obj *o, f32 dt);
void fn_80238618(Obj *o, f32 dt);
void fn_80107F3C(void *o, V3 *s);
void fn_80190C98(void *o);
void fn_801907D8(void *o);
void fn_80107244(void *o, V3 *v);
void fn_8019B6B8(void *m, TH *h);
s32 fn_80264E0C(V3 *a, V3 *b, V3 *c, V3 *d, s32 *e, s32 *f, void **g, s32 h, s32 i, s32 j, s32 k, s32 l, s32 m, s32 n, s32 o);

inline void Upd(Grp *g, V3 *v) {
    M30 *m = g->f30;
    if (m) {
        lbl_803286D0.fc(m->f10, v);
        m->f20 |= lbl_8035FDF0;
        fn_80190C98(g);
    }
}

inline TA *GetTA(TH *h) { TA *a = h->f6c; if (!a) a = &h->f90->a; return a; }

static inline void UpdA(Obj *o) {
    Grp *g = o->f2ec;
    if (g && lbl_8035A1A8 == o) {
        M30 *m = g->f30;
        if (m) {
            lbl_803286D0.fc(m->f10, &o->f44);
            m->f20 |= lbl_8035FDF0;
            fn_80190C98(g);
        }
    }
}
void fn_800862A0(Obj *o, f32 dt) {
    V3 pos;
    V3 b;
    V3 hp;
    V3 hn;
    V3 v;
    Grp *g2;
    M30 *m2;
    if (o->on != 0) {
        if (o->f2c4 != 0) {
            o->o18();
            s32 a = (s32)(lbl_8035FE3C * o->f368);
            if (a < 0) a = 0;
            if (a == 0) {
                TH *h = o->f2c0;
                h->f0 &= ~0x800;
                if (*(u32 *)((u8 *)h + 0x88) == 0) fn_8019B6B8(lbl_8035B65C->fc, h);
                Fl *f = *(Fl **)((u8 *)h + 0xb0);
                if (f->f30 & 1) { f->f4 = lbl_8035FDF8; f->f0 &= ~0x18; }
                o->on = 0;
                o->f2c4 = 0;
            }
            if (o->f2c0) {
                for (u32 i = 0; i < 3; i++) {
                    Tint *e = GetTA(o->f2c0)->e[i];
                    e->r = a; e->g = a; e->b = a;
                    e->f2c |= lbl_8035FE38;
                }
            }
            fn_80230928(o, dt);
        } else {
            o->getXf(&pos, 0, 0, 0, 0);
            f32 py, pz, px; px = *(volatile f32 *)&pos.x; py = *(volatile f32 *)&pos.y; pz = *(volatile f32 *)&pos.z;
            *(volatile f32 *)&b.x = px; *(volatile f32 *)&b.y = py; *(volatile f32 *)&b.z = pz;
            b.z = pz - *(volatile f32 *)&lbl_8035FDFC;
            s32 hit = fn_80264E0C(&pos, &b, &hp, &hn, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1);
            UpdA(o);
            if (hit) {
                o->msg(lbl_80298E24, 0, 0, 0, 0);
                o->kill(0, 0, 0);
                return;
            }
            if (o->f398 && o->f348 >= *o->f398) {
                o->msg(lbl_80298E24, 0, 0, 0, 0);
                o->kill(1, 0, 0);
                return;
            }
            o->o17();
            o->f378->tick(dt);
            o->o18();
            o->on = 0;
            fn_80230928(o, dt);
            o->on = 1;
            if (o->f2e4) o->f2e4->tick(dt);
            if (o->f2e8) o->f2e8->tick(dt);
            fn_80238618(o, dt);
        }
        if (o->f2e4) o->f2e4->tick(dt);
        if (o->f2e8) o->f2e8->tick(dt);
        for (u32 i = 0; i < 2; i++) {
            if (o->f2f0[i]) {
                fn_801907D8(o->f2f0[i]);
                if (o->f2e4) {
                    if (o->f2e4->f30) fn_80107244(o->f2e4->f30, &v);
                    else { v.x = lbl_8035FDF8; v.y = lbl_8035FDF8; v.z = lbl_8035FDF8; }
                } else if (o->f2e8) {
                    if (o->f2e8->f30) fn_80107244(o->f2e8->f30, &v);
                    else { v.x = lbl_8035FDF8; v.y = lbl_8035FDF8; v.z = lbl_8035FDF8; }
                }
                g2 = (Grp *)o->f2f0[i];
                m2 = g2->f30;
                if (m2) {
                    lbl_803286D0.fc(m2->f10, &v);
                    m2->f20 |= lbl_8035FDF0;
                    fn_80190C98(g2);
                }
                o->f2f0[i]->tick(dt);
            }
        }
        f32 r;
        if (o->f348 < o->f35c) r = o->f348 / o->f35c;
        else r = lbl_8035FE10;
        if (r < lbl_8035FDFC) r = lbl_8035FDFC;
        o->f2d8.x = o->f354 * r;
        o->f2d8.y = o->f354 * r;
        o->f2d8.z = o->f354 * r;
        if (o->f2e4 && o->f2e4->f78) fn_80107F3C(o->f2e4->f78, &o->f2d8);
        if (o->f2e8 && o->f2e8->f78) fn_80107F3C(o->f2e8->f78, &o->f2d8);
        o->f348 += dt;
    }
    fn_8005E6BC(o, dt);
    fn_8005E00C(o, dt);
}

}
