// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct R { u8 pad_[292]; virtual void s0(); virtual void s1(); virtual void s2(void *, int, int); virtual void s3(); virtual void err(int); virtual u32 next(); };
struct V3 { f32 x, y, z; };
struct Q4 { f32 v[4]; };
struct Q { u8 pad_[36]; virtual void a0(); virtual void a1(); virtual void a2(); virtual void a3(); virtual void set(void *); };
struct X { u8 pad[16]; void *f16; u8 pad2[12]; u32 g32; };
struct P { V3 a; u8 pad[12]; V3 b; };
struct T {
    u32 f0;
    u32 f4;
    f32 f8, f12, f16, f20;
    f32 g24, g28, g32, g36;
    f32 f40;
    u32 f44;
    X *f48;
    P *f52;
    void *f56;
    u8 pad60[20];
    T *f80;
    T *f84;
    T *f88;
    u8 pad92[12];
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void *get3(); virtual Q *get4();
    u8 pad108[60];
    void *f168;
};
struct B { u8 pad[144]; u8 f144[24]; u8 f168[216]; u8 f384[24]; u8 f408[4]; };
struct FT { void *f0, *f4, *f8; void (*f12)(void *, V3 *); void *f16, *f20; void (*f24)(void *, Q4 *); void *f28, *f32, *f36, *f40; void (*f44)(void *, V3 *, V3 *); };
extern FT lbl_803286D0;
extern u32 lbl_80364B44;
s32 fn_800FB33C(R *);
f32 fn_800FB2E0(R *);
void fn_800FB064(R *, void *);
void fn_80101124(void *, R *);
void fn_800FF9E8(void *, R *);
void *fn_800F9398(void *, void *);
void *fn_800F9788(void *, char *, void *);
T *fn_8019556C(T *);
Q *fn_800F8274(void *, void *);
void fn_80190C98(T *);
static inline void *look(B *b, char *nm, void *id) {
    if (nm == 0 || *nm == 0) return fn_800F9398(b->f144, id);
    return fn_800F9788(b->f168, nm, id);
}
static inline void *look2(B *b, char *nm, void *id) {
    if (nm == 0 || *nm == 0) return fn_800F9398(b->f384, id);
    return fn_800F9788(b->f408, nm, id);
}
static inline void *G3(T *o) { return o->get3(); }
static inline Q *G4(T *o) { return o->get4(); }
static inline T *LK(B *b, u8 *id, char *nm) { T *o; if (nm == 0 || *nm == 0) o = (T *)fn_800F9398(b->f144, id); else o = (T *)fn_800F9788(b->f168, nm, id); return o; }
void fn_80191484(T *t, B *b, R *r, u32 tok) {
    u8 id[8];
    char nm[8];
    V3 v88;
    V3 w76;
    V3 a64;
    V3 b52;
    V3 v40;
    Q4 c;
    switch (tok) {
    case 146: fn_800FB33C(r); break;
    case 147: fn_800FB33C(r); break;
    case 104: t->f0 |= 2; break;
    case 105: t->f0 &= ~2; break;
    case 93:
        fn_80101124(&t->f8, r);
        t->f20 = fn_800FB2E0(r);
        t->g24 = t->f8;
        t->g28 = t->f12;
        t->g32 = t->f16;
        t->g36 = t->f20;
        break;
    case 94:
        t->f40 = fn_800FB2E0(r);
        t->f40 = t->f40 * t->f40;
        break;
    case 96: {
        T *o, *o2;
        void *p;
        Q *q;
        if (!t->get3()) r->err(39);
        fn_800FB064(r, id);
        fn_800FB064(r, nm);
        if (nm == 0 || *nm == 0) o = (T *)fn_800F9398(b->f144, id); else o = (T *)fn_800F9788(b->f168, nm, id);
        if (!o) r->err(37);
        o2 = fn_8019556C(o);
        if (!o2) r->err(35);
        fn_800FB064(r, id);
        p = t->get3();
        if (!p) break;
        q = fn_800F8274(o2->f168, id);
        if (!q) break;
        o2->f0 &= ~0x80000;
        q->set(p);
        if (t->f80 != o2) {
            t->f80 = o2;
            t->f84 = o2->f88;
            o2->f88 = t;
        }
        fn_80190C98(t);
        break;
    }
    case 97: {
        T *o;
        void *p;
        Q *q;
        if (!t->get3()) r->err(39);
        fn_800FB064(r, id);
        fn_800FB064(r, nm);
        o = LK(b, id, nm);
        if (!o) r->err(37);
        p = G3(t);
        q = o->get4();
        if (!p || !q) break;
        q->set(p);
        if (t->f80 != o) {
            t->f80 = o;
            t->f84 = o->f88;
            o->f88 = t;
        }
        fn_80190C98(t);
        break;
    }
    case 158: {
        T *o;
        void *p;
        Q *q;
        if (!t->get3()) r->err(39);
        fn_800FB064(r, id);
        fn_800FB064(r, nm);
        if (nm == 0 || *nm == 0) o = (T *)fn_800F9398(b->f144, id); else o = (T *)fn_800F9788(b->f168, nm, id);
        if (!o) r->err(37);
        t = fn_8019556C(t);
        if (!t) r->err(35);
        fn_800FB064(r, id);
        p = o->get3();
        if (!p) break;
        q = fn_800F8274(t->f168, id);
        if (!q) break;
        t->f0 &= ~0x80000;
        q->set(p);
        if (o->f80 != t) {
            o->f80 = t;
            o->f84 = t->f88;
            t->f88 = o;
        }
        fn_80190C98(o);
        break;
    }
    case 159: {
        T *o;
        void *p;
        Q *q;
        if (!t->get3()) r->err(39);
        fn_800FB064(r, id);
        fn_800FB064(r, nm);
        o = LK(b, id, nm);
        if (!o) r->err(37);
        p = G3(o);
        q = t->get4();
        if (!p || !q) break;
        q->set(p);
        if (o->f80 != t) {
            o->f80 = t;
            o->f84 = t->f88;
            t->f88 = o;
        }
        fn_80190C98(o);
        break;
    }
    case 98: {
        X *x;
        if (!t->f48) r->err(39);
        fn_80101124(&v88, r);
        x = t->f48;
        lbl_803286D0.f12(x->f16, &v88);
        x->g32 |= lbl_80364B44;
        break;
    }
    case 99: {
        X *x;
        if (!t->f48) r->err(39);
        fn_80101124(&a64, r);
        fn_80101124(&b52, r);
        x = t->f48;
        lbl_803286D0.f44(x->f16, &a64, &b52);
        x->g32 |= lbl_80364B44;
        break;
    }
    case 100: {
        X *x;
        if (!t->f48) r->err(39);
        fn_800FF9E8(&c, r);
        x = t->f48;
        lbl_803286D0.f24(x->f16, &c);
        x->g32 |= lbl_80364B44;
        break;
    }
    case 101: {
        X *x;
        if (!t->f48) r->err(39);
        fn_80101124(&v88, r);
        x = t->f48;
        lbl_803286D0.f12(x->f16, &v88);
        x->g32 |= lbl_80364B44;
        fn_80101124(&w76, r);
        a64.x = w76.x - v88.x;
        a64.y = w76.y - v88.y;
        a64.z = w76.z - v88.z;
        fn_80101124(&b52, r);
        x = t->f48;
        lbl_803286D0.f44(x->f16, &a64, &b52);
        x->g32 |= lbl_80364B44;
        break;
    }
    case 102:
        if (!t->f52) r->err(39);
        fn_80101124(&v40, r);
        { P *pp = t->f52; pp->a.x = v40.x; pp->a.y = v40.y; pp->a.z = v40.z; }
        break;
    case 103:
        if (!t->f52) r->err(39);
        fn_80101124(&v40, r);
        { P *pp = t->f52; pp->b.x = v40.x; pp->b.y = v40.y; pp->b.z = v40.z; }
        break;
    case 119:
        fn_800FB064(r, id);
        fn_800FB064(r, nm);
        t->f56 = look2(b, nm, id);
        if (!t->f56) r->err(37);
        break;
    case 120: t->f0 |= 0x200; break;
    case 121: t->f0 &= ~0x200; break;
    case 142: case 143: case 144: case 145: break;
    default: r->err(30); break;
    }
}

} /* extern "C" */
