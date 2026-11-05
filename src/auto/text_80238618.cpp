// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct C802449C4 {
    u8 b[0x3c];
    C802449C4();
    ~C802449C4();
};

struct V3 { f32 x, y, z; };
struct S8 { u32 a, b; };

void fn_802448C8(C802449C4 *, u8 *);
void fn_80244750(C802449C4 *, s32);
s32 fn_80244584(C802449C4 *);
void *fn_8024457C(C802449C4 *);
void fn_80244594(C802449C4 *);

extern f32 lbl_80365EFC;
extern f32 lbl_80365F5C;
extern f32 lbl_80365F40;
extern f32 lbl_80365F80;
extern f32 lbl_80365F84;
extern f64 lbl_80365F28;
extern f64 lbl_80365F30;
extern u32 lbl_80365F7C;
extern u32 lbl_80365EE8, lbl_80365EEC, lbl_80365EF0, lbl_80365EF4;
extern char lbl_802A8AA0[];
extern u8 lbl_803286D0[];

struct VB68 { u8 pad[0x68]; virtual void p0(); virtual void p1(); virtual void upd(); };
struct Mdl : VB68 { };

struct Snd { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void tick(f32); };

struct Obj;
struct ObjV { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void p17(); virtual void p18(); virtual void p19(); virtual void p20(); virtual void p21(); virtual void p22(); virtual void p23(); virtual void p24(); virtual void p25(); virtual void p26(); virtual void p27(); virtual void p28(); virtual void p29(); virtual void p30(); virtual void p31(); virtual void p32(); virtual void msg(char *, void *, void *, void *, void *); };

void fn_8022CF14(void *, f32);
void *fn_8022D694(void *);
void fn_80241DD0(void *, char *, void *, void *, void *, void *);
void fn_8022CBD4(void *, f32);
void fn_80190C98(void *);
void fn_80107F3C(void *, void *);
void *fn_80242144(void *, s32);
f32 fn_80101590(V3 *, V3 *);
void fn_8022BE28(void *, void *);

#define F(T, o) (*(T *)(self + (o)))

static inline void getpos(Mdl *m, V3 *v) {
    if (*(u32 *)m & 4) m->upd();
    *v = *(V3 *)((u8 *)m + 0x18);
}

void fn_80238618(u8 *self, f32 dt) {
    V3 a;
    V3 b;
    V3 p;
    V3 q;
    u32 buf[2];
    u32 buf2[2];
    f32 ox, oy, oz;
    u8 *pp;
    u32 i;
    Mdl *m;
    s32 st;
    s32 hit;
    u8 *m1;
    u8 *s1;
    u8 *m2;
    u8 *s2;
    
    ox = F(f32, 0x44);
    oy = F(f32, 0x48);
    oz = F(f32, 0x4c);
    fn_8022CF14(self, dt);
    if (F(Snd *, 0x20c) != 0) {
        u32 f;
        F(Snd *, 0x20c)->tick(dt);
        f = F(u8 *, 0xa0) ? *(u32 *)(F(u8 *, 0xa0) + 0xac) : 0;
        if (f && !(F(u32, 0xb4) & 1) && fn_8022D694(self) && (*(u32 *)fn_8022D694(self) & 0x10)) {
            F(u32, 0xb4) |= 1;
            fn_80241DD0(F(void *, 0x20c), lbl_802A8AA0, 0, 0, 0, 0);
        }
    }
    F(f32, 0x130) = F(f32, 0x44);
    F(f32, 0x134) = F(f32, 0x48);
    F(f32, 0x138) = F(f32, 0x4c);
    F(f32, 0x130) -= ox;
    F(f32, 0x134) -= oy;
    F(f32, 0x138) -= oz;
    if (dt >= lbl_80365F80 && dt <= lbl_80365F84) {
        F(f32, 0x130) = lbl_80365EFC;
        F(f32, 0x134) = lbl_80365EFC;
        F(f32, 0x138) = lbl_80365EFC;
    } else {
        f32 inv = lbl_80365F5C / dt;
        F(f32, 0x130) *= inv;
        F(f32, 0x134) *= inv;
        F(f32, 0x138) *= inv;
    }
    if (F(f32, 0x1b4) > lbl_80365EFC) {
        { f32 t = dt * F(f32, 0x1b4); F(f32, 0x1ac) += t; }
        if (F(f32, 0x1ac) > F(f32, 0x1a8)) F(f32, 0x1ac) = F(f32, 0x1a8);
    }
    if (F(f32, 0x1a0) > lbl_80365EFC) {
        f32 d = F(f32, 0x118) * F(f32, 0x118) + F(f32, 0x11c) * F(f32, 0x11c) + F(f32, 0x120) * F(f32, 0x120);
        if (d > lbl_80365EFC) {
            f64 g = __frsqrte((f64)d);
            volatile f32 v;
            g = lbl_80365F28 * g * (lbl_80365F30 - g * g * d);
            g = lbl_80365F28 * g * (lbl_80365F30 - g * g * d);
            g = lbl_80365F28 * g * (lbl_80365F30 - g * g * d);
            v = (f32)(d * g);
            d = v;
        }
        fn_8022CBD4(self, F(f32, 0x1a0) * d);
    }
    if (F(u8 *, 0x9c) == 0) return;
    {
        m1 = F(u8 *, 0x9c);
        s1 = *(u8 **)(m1 + 0x30);
        if (s1) {
            (*(void (**)(void *, void *))(lbl_803286D0 + 0xc))(*(void **)(s1 + 0x10), self + 0x44);
            *(u32 *)(s1 + 0x20) |= lbl_80365F7C;
            fn_80190C98(m1);
        }
    }
    a = F(V3, 0x20);
    b = F(V3, 0x14);
    a.x = -a.x;
    a.y = -a.y;
    a.z = -a.z;
    b.x = -b.x;
    b.y = -b.y;
    b.z = -b.z;
    {
        m2 = F(u8 *, 0x9c);
        s2 = *(u8 **)(m2 + 0x30);
        if (s2) {
            (*(void (**)(void *, void *, void *, void *))(lbl_803286D0 + 0x1c))(*(void **)(s2 + 0x10), &a, &b, self + 0x2c);
            *(u32 *)(s2 + 0x20) |= lbl_80365F7C;
            fn_80190C98(m2);
        }
    }
    {
        u8 *m = F(u8 *, 0x9c);
        if (*(u16 *)(m + 4) == 1 && *(void **)(m + 0x78)) fn_80107F3C(*(void **)(m + 0x78), self + 0x38);
    }
    if (F(s32, 0x174) != 0) {
        for (i = 0, pp = self; i < 7; i++, pp += 4) {
            if (*(u32 *)(pp + 0x158) != 0xffffffff) {
                {
                    C802449C4 it;
                    m = F(Mdl *, 0x9c);
                    hit = 0;
                    st = *(s32 *)(pp + 0x158);
                    getpos(m, &p);
                    { void *g = fn_80242144(F(void *, 0x20c), i); fn_802448C8(&it, (u8 *)g); }
                    fn_80244750(&it, 0);
                    while (fn_80244584(&it) == 0) {
                        m = *(Mdl **)((u8 *)fn_8024457C(&it) + 0x9c);
                        getpos(m, &q);
                        f32 d = fn_80101590(&p, &q);
                        if (d <= (F(f32 *, 0x1c8) ? *F(f32 *, 0x1c8) : lbl_80365F40)) {
                            if (st == 0) {
                                buf[1] = lbl_80365EEC;
                                buf[0] = lbl_80365EE8;
                                ((u8 *)buf)[5] = i + '0';
                                ((u8 *)buf)[6] = 0;
                                ((ObjV *)self)->msg((char *)buf, fn_8024457C(&it), 0, 0, 0);
                            }
                            hit = 1;
                            break;
                        }
                        fn_80244594(&it);
                    }
                    if (st == 1 && hit == 0) {
                        buf2[1] = lbl_80365EF4;
                        buf2[0] = lbl_80365EF0;
                        ((u8 *)buf2)[7] = i + '0';
                        ((ObjV *)self)->msg((char *)buf2, 0, 0, 0, 0);
                    }
                    *(s32 *)(pp + 0x158) = hit;
                }
            }
        }
    }
    if (F(s32, 0x1fc) != 0) {
        if (F(s32, 0x200) != 0) {
            fn_8022BE28(self, 0);
            F(s32, 0x200) = 0;
        } else {
            fn_8022BE28(self, F(void *, 0x1f0));
            F(s32, 0x200) = 1;
        }
    }
}

}
