// TU 800819F0..80083120 (merged): shares the .sdata2 pool 8035FC20..8035FC48.
#include "common.h"
void *operator new(unsigned long);

extern "C" {
#pragma explicit_zero_data on
__declspec(section ".sdata2") f64 lbl_8035FC20 = 10.0;
__declspec(section ".sdata2") f32 lbl_8035FC28 = 0.0f;
#pragma explicit_zero_data reset
} /* extern "C" */

namespace n800819F0 {
extern "C" {

}
struct E { u8 pad[52]; u16 f52; };
struct R4 { u8 pad[4]; f32 f4; };
struct P { u8 pad[208]; E **f208; u8 pad2[12]; void *f224; u32 f228; u8 pad3[4]; f32 *f236; u8 pad4[116]; f32 *f356;
    u8 pad5[64]; s32 f424; u32 f428; u8 pad6[4]; u32 f436; u32 *f440; u8 pad7[12]; u32 f456; u32 f460; };
extern "C" {
extern u8 lbl_8035FBF4[4];
R4 *fn_8022D694(void *);
f64 fn_800F04FC(f64, f64);
P *fn_80242144(P *, int);
void fn_80242BC0(P *, void *, void *, int, f32 *, int);
static inline u32 bits(P *p) { return (s32)(*p->f440 & p->f456) >> 27; }
static inline u32 idx(P *p) { u32 v = bits(p); return v == 3 ? 1 : v; }
static inline void set(P *p, f32 v) {
    f32 s;
    u32 k;
    u32 w = *p->f440;
    E **a = p->f208;
    w = (s32)(w & p->f456) >> 27;
    f32 c = (f32)a[w == 3 ? 1 : w]->f52;
    fn_8022D694(p->f224)->f4 = c * v;
    *p->f440 &= ~p->f460;
    s = lbl_8035FC28;
    k = idx(p);
    if (k == 1 && p->f208[k] && p->f208[k]->f52) s = fn_8022D694(p->f224)->f4 / p->f208[k]->f52;
    *p->f440 |= (u32)(s * (f32)fn_800F04FC(lbl_8035FC20, p->f436));
}
void fn_800819F0(P *p, void *str) {
    f32 tmp;
    if (p->f424 == 0) {
        f64 d = fn_800F04FC(lbl_8035FC20, p->f436);
        tmp = (s32)(*p->f440 & p->f460) / (f32)d;
        p->f236 = &tmp;
    } else {
        p->f428 = p->f228;
        tmp = *p->f236;
        set(p, tmp);
    }
    fn_80242BC0(fn_80242144(p, 1), str, p->f224, 0, p->f236, 0);
}

} /* extern "C" */
} /* namespace n800819F0 */

namespace n80081C1C {
#pragma push
#pragma use_lmw_stmw on
extern "C" {

}
struct E { u8 pad[52]; u16 f52; };
struct R4 { u8 pad[4]; f32 f4; };
struct P { u8 pad[208]; E **f208; u8 pad2[12]; void *f224; u32 f228; u8 pad3[4]; f32 *f236; u8 pad4[116]; f32 *f356;
    u8 pad5[64]; s32 f424; u32 f428; u8 pad6[4]; u32 f436; u32 *f440; u8 pad7[12]; u32 f456; u32 f460; };
extern "C" {
extern u8 lbl_8035FBF4[4];
R4 *fn_8022D694(void *);
f64 fn_800F04FC(f64, f64);
P *fn_80242144(P *, int);
void fn_80242BC0(P *, void *, void *, int, f32 *, int);
static inline u32 bits(P *p) { return (s32)(*p->f440 & p->f456) >> 27; }
static inline u32 idx(P *p) { u32 v = bits(p); return v == 3 ? 1 : v; }
static inline void set(P *p, f32 v) {
    f32 s;
    u32 k;
    u32 w = *p->f440;
    E **a = p->f208;
    w = (s32)(w & p->f456) >> 27;
    f32 c = (f32)a[w == 3 ? 1 : w]->f52;
    fn_8022D694(p->f224)->f4 = c * v;
    *p->f440 &= ~p->f460;
    s = lbl_8035FC28;
    k = idx(p);
    if (k == 1 && p->f208[k] && p->f208[k]->f52) s = fn_8022D694(p->f224)->f4 / p->f208[k]->f52;
    *p->f440 |= (u32)(s * (f32)fn_800F04FC(lbl_8035FC20, p->f436));
}
void fn_80081C1C(P *p) {
    f32 tmp;
    if (*p->f356 > lbl_8035FC28) {
        set(p, *p->f356);
        if (p->f424 == 0) {
            f64 d = fn_800F04FC(lbl_8035FC20, p->f436);
            tmp = (s32)(*p->f440 & p->f460) / (f32)d;
            p->f236 = &tmp;
        } else {
            p->f428 = p->f228;
            tmp = *p->f236;
            set(p, tmp);
        }
        fn_80242BC0(fn_80242144(p, 1), lbl_8035FBF4, p->f224, 0, p->f236, 0);
    }
}

} /* extern "C" */
#pragma pop
} /* namespace n80081C1C */

namespace n80081F84 {
extern "C" {

typedef struct { u32 a; u32 b; } T8_80081F84;
typedef struct { u8 pad[12]; T8_80081F84 *arr; } S170_80081F84;
typedef struct { void *p; s32 a; s32 b; s32 c; s32 d; } T20_80081F84;
extern T20_80081F84 lbl_80298B0C;
void __dl__FPv(void *);
void __dla__FPv(void *);
void fn_800F6E88(void *, void *);
void fn_8023F764(void *, void **, T20_80081F84);
void fn_80242210(void *);

void fn_80081F84(u8 *p) {
    u32 i;
    u8 buf[8];
    if (*(s32 *)(p + 0x1b0) == 0 && *(void **)(p + 0x1b8) != 0) {
        __dl__FPv(*(void **)(p + 0x1b8));
        *(void **)(p + 0x1b8) = 0;
    }
    if (*(void ***)(p + 0x178) != 0) {
        for (i = 0; i < *(u32 *)(p + 0x174); i++) {
            if ((*(void ***)(p + 0x178))[i] != 0) {
                fn_800F6E88(buf, &(*(S170_80081F84 **)(p + 0x170))->arr[i]);
                {
                    T20_80081F84 t = lbl_80298B0C;
                    t.p = buf;
                    fn_8023F764(p, &(*(void ***)(p + 0x178))[i], t);
                }
                (*(void ***)(p + 0x178))[i] = 0;
            }
        }
        __dla__FPv(*(void **)(p + 0x178));
        *(void **)(p + 0x178) = 0;
    }
    fn_80242210(p);
}

} /* extern "C" */
} /* namespace n80081F84 */

namespace n800820C4 {
extern "C" {

struct VC { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void p17(); virtual void p18(); virtual void p19(); virtual void p20(); virtual void p21(); virtual void p22(); virtual void p23(); virtual void p24(); };
extern char lbl_80298A60[];
extern u8 *lbl_8035B530;
extern u8 lbl_8035FB58[8];
extern u32 lbl_8035A0A4;
#pragma explicit_zero_data on
__declspec(section ".sdata2") u32 lbl_8035FC40 = 43;
#pragma explicit_zero_data reset
extern u8 lbl_803286D0[];
void fn_800604C4(s32 code, s32 a, s32 b, s32 c);
void fn_800F7EC0(void *heap);
void fn_800F7E98(void);
s32 fn_8003C778(u32 a, void *b, void *c);
void *fn_8023F4A0(void *p, void *a, void *b, const char *name, s32 c);
void fn_8022A7A8(void *a);
void fn_802494A4(void *p, s32 s);
void fn_80081C1C(void *p);
void fn_80190C98(void *p);

inline void wA_set(u8 *p, s32 on, u32 m) {
    if (on) {
        **(u32 **)(p + 0x1B8) |= m;
    } else {
        **(u32 **)(p + 0x1B8) &= ~m;
    }
}

void fn_800820C4(u8 *p) {
    char *str = lbl_80298A60;
    s32 r = 0;
    BOOL b;
    u8 vC[12];
    u8 vB[12];
    u8 vA[12];

    if (*(void **)(p + 0x1B8) != 0 && *(void **)(p + 0x118) != 0 && **(s32 **)(p + 0x118) != 0 && *(s32 *)(p + 0x1B0) != 0) {
        *(u32 *)(p + 0x1B8) = 0;
    }
    if (*(void **)(p + 0x118) != 0 && **(s32 **)(p + 0x118) != 0 && *(s32 *)(*(u8 **)(p + 0xE0) + 0x114) == 0) {
        *(u32 *)(p + 0x1B0) = 1;
        r = fn_8003C778(lbl_8035A0A4, *(void **)(p + 0xE0), p + 0x1B8);
    } else {
        if (*(void **)(p + 0x1B8) == 0) {
            if (lbl_8035B530 == 0) {
                fn_800604C4(-2, 0, 0, 0);
            }
            fn_800F7EC0(lbl_8035B530);
            *(void **)(p + 0x1B8) = operator new(4);
            fn_800F7E98();
            if (*(void **)(p + 0x1B8) == 0) {
                fn_800604C4(-4, 0, 0, 0);
            }
        }
    }
    b = FALSE;
    if (r == 0) {
        **(u32 **)(p + 0x1B8) = 0;
        wA_set(p, **(s32 **)(p + 0x11C), *(u32 *)(p + 0x1BC));
        **(u32 **)(p + 0x1B8) &= ~*(u32 *)(p + 0x1C0);
        wA_set(p, **(s32 **)(p + 0x120), *(u32 *)(p + 0x1C4));
    }
    *(u32 *)(*(u8 **)(p + 0xE0) + 0xB4) |= 4;
    *(void **)(p + 0x168) = fn_8023F4A0(p, lbl_8035FB58, lbl_8035FB58, str + 192, 1);
    *(void **)(p + 0x16C) = fn_8023F4A0(p, lbl_8035FB58, lbl_8035FB58, str + 204, 1);
    *(void **)(p + 0x170) = fn_8023F4A0(p, lbl_8035FB58, lbl_8035FB58, str + 220, 1);
    *(u32 *)(p + 0x174) = *(u32 *)(**(u8 ***)(p + 0x170) + 0x10);
    if ((**(u32 **)(p + 0x1B8) & *(u32 *)(p + 0x1BC)) == 0) {
        **(u32 **)(p + 0x1B8) &= ~*(u32 *)(p + 0x1BC);
        ((VC *)*(void **)(p + 0xE0))->p24();
        fn_8022A7A8(*(void **)(p + 0xE0));
    }
    *(u32 *)(p + 0x17C) = 0;
    *(u32 *)(p + 0x180) = 0;
    *(u32 *)(p + 0x184) = 0;
    *(u32 *)(p + 0x188) = 0;
    *(u32 *)(p + 0x18C) = 0;
    *(u32 *)(p + 0x194) = 1;
    *(u32 *)(p + 0x1A0) = 0;
    *(u32 *)(p + 0x1A4) = 0;
    *(u32 *)(p + 0x1A8) = 0;
    *(u32 *)(p + 0x1AC) = 0;
    if (*(s32 *)(p + 0x194) != 0) {
        if (*(s32 *)(p + 0x1B0) != 0) {
            if (**(f32 **)(p + 0x164) > lbl_8035FC28) {
                fn_802494A4(p, 2);
                b = TRUE;
            } else {
                fn_802494A4(p, ((s32)(**(u32 **)(p + 0x1B8) & *(u32 *)(p + 0x1C8)) >> 27) + 1);
            }
        } else if (**(f32 **)(p + 0x164) > lbl_8035FC28) {
            fn_802494A4(p, 2);
            b = TRUE;
        } else if ((**(u32 **)(p + 0x1B8) & *(u32 *)(p + 0x1C4)) != 0) {
            fn_802494A4(p, 1);
        } else {
            fn_802494A4(p, 3);
        }
    }
    if (b) {
        fn_80081C1C(p);
    }
    if (*(void **)(*(u8 **)(p + 0xE0) + 0x9C) != 0) {
        u8 *n = *(u8 **)(*(u8 **)(*(u8 **)(p + 0xE0) + 0x9C) + 0x30);
        if (n != 0) {
            (*(void (**)(u32, void *, void *, void *))(lbl_803286D0 + 0x134))(*(u32 *)(n + 0x10), vC, vB, vA);
        }
        {
            u8 *m = *(u8 **)(*(u8 **)(p + 0xE0) + 0x9C);
            u8 *n2 = *(u8 **)(m + 0x30);
            if (n2 != 0) {
                (*(void (**)(u32, void *, void *, void *))(lbl_803286D0 + 0x1C))(*(u32 *)(n2 + 0x10), vC, vB, vA);
                *(u32 *)(n2 + 0x20) |= lbl_8035FC40;
                fn_80190C98(m);
            }
        }
    }
}

} /* extern "C" */
} /* namespace n800820C4 */

namespace n800824C0 {
extern "C" {

struct VO { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19(); virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void hide(); virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31(); virtual void v32(); virtual void send(void *msg, void *to, int a, void *d, int b); };
struct Cl { u8 p[4]; f32 f4; u8 p8[44]; u16 f52; };
struct Tm { u8 p[4]; f32 f4; };
struct Ob {
    u8 p0[0x60]; s32 f60;
    u8 p64[0xd0 - 0x64]; Cl **fd0;
    u8 pd4[0xe0 - 0xd4]; VO *fe0; VO *fe4; u8 pe8[4]; f32 *fec;
    u8 pf0[0x124 - 0xf0]; s32 *f124; s32 *f128;
    u8 p12c[0x158 - 0x12c]; f32 *f158; f32 *f15c;
    u8 p160[0x17c - 0x160]; s32 f17c; VO *f180; s32 f184; s32 f188; s32 f18c;
    u8 p190[0x198 - 0x190]; s32 f198; s32 f19c; s32 f1a0; u8 p1a4[4]; s32 f1a8; VO *f1ac;
    u8 p1b0[4]; u32 f1b4; u32 *f1b8; u32 f1bc; u32 f1c0; u8 p1c4[4]; u32 f1c8; u32 f1cc;
    f32 f1d0;
};
extern char lbl_80298A60[];
extern char lbl_8035FBF4[4], lbl_8035FBFC[4];
s32 fn_8022C558(VO *);
void fn_8022A7A8(VO *);
Tm *fn_8022D694(VO *);
f64 fn_800F04FC(f64, f64);
void fn_80241DD0(Ob *, char *, int, int, int, int);
void *fn_80242144(Ob *, int);
void fn_80242BC0(void *, char *, VO *, int, f32 *, int);
void fn_802494A4(Ob *, int);
void fn_8023FE08(Ob *, f32);

inline u32 Raw(Ob *o) { return (s32)(*o->f1b8 & o->f1c8) >> 27; }
inline u32 Mode(Ob *o) {
    u32 v = Raw(o);
    return v == 3 ? 1 : v;
}
inline bool IsAB(Ob *o) { bool b = true; if (Mode(o) != 1 && Mode(o) != 3) b = false; return b; }
inline f32 Vel(Ob *o) {
    Cl *c = o->fd0[Mode(o)];
    f32 s = (Raw(o) == 1) ? *o->f158 : -*o->f15c;
    s = s * o->f1d0;
    return s * c->f4;
}
inline void Upd(Ob *o) {
    f32 sp;
    *o->f1b8 &= ~o->f1cc;
    sp = lbl_8035FC28;
    {
        u32 m = Mode(o);
        if (m == 1 && o->fd0[m] && o->fd0[m]->f52)
            sp = fn_8022D694(o->fe0)->f4 / o->fd0[m]->f52;
    }
    *o->f1b8 |= (u32)(sp * (f32)fn_800F04FC(lbl_8035FC20, o->f1b4));
}
inline f32 Pos(Ob *o, f32 x) {
    u32 w = *o->f1b8;
    Cl **tb = o->fd0;
    u32 v = (s32)(w & o->f1c8) >> 27;
    u32 m = v == 3 ? 1 : v;
    f32 n = tb[m]->f52;
    return n * x;
}
inline void Go(Ob *o, char *s) {
    f32 v;
    if (o->f1a8 == 0) {
        f64 p = fn_800F04FC(lbl_8035FC20, o->f1b4);
        v = (f32)(s32)(*o->f1b8 & o->f1cc) / (f32)p;
        o->fec = &v;
    } else {
        o->f1ac = o->fe4;
        f32 x = *o->fec;
        v = x;
        fn_8022D694(o->fe0)->f4 = Pos(o, x);
        Upd(o);
    }
    fn_80242BC0(fn_80242144(o, 1), s, o->fe0, 0, o->fec, 0);
}

#pragma push
#pragma opt_propagation off
void fn_800824C0(Ob *o, f32 dt) {
    char *str = lbl_80298A60;
    if ((*o->f1b8 & o->f1bc) == 0 && fn_8022C558(o->fe0)) {
        *o->f1b8 &= ~o->f1bc;
        o->fe0->hide();
        fn_8022A7A8(o->fe0);
    } else if (IsAB(o) && o->f1a0 && !o->f1a8) {
        f32 d = Vel(o);
        f32 mx = o->fd0[Mode(o)]->f52;
        f32 cur = fn_8022D694(o->fe0)->f4;
        f32 t = d * dt + cur;
        if (t < lbl_8035FC28) {
            t = lbl_8035FC28;
            fn_80241DD0(o, str + 0x18, 0, 0, 0, 0);
        } else if (t > mx) {
            t = mx;
            fn_80241DD0(o, str + 0x18, 0, 0, 0, 0);
        }
        fn_8022D694(o->fe0)->f4 = t;
        Upd(o);
        if (o->f60 == 2) {
            Go(o, lbl_8035FBF4);
        } else if (o->f60 == 4) {
            Go(o, str + 0x30);
        }
    }
    if ((*o->f1b8 & o->f1bc) && !IsAB(o) && o->f184 == 0) {
        if (o->f180 && o->f180 != o->fe0 && o->f19c == 0) o->f180->send(lbl_8035FBFC, 0, 0, 0, 0);
        o->f198 = 0;
        o->f19c = 1;
        o->f180 = 0;
        if (o->f17c && (*o->f1b8 & o->f1bc) != 0 && (*o->f1b8 & o->f1c0) == 0 && *o->f124 == 0 &&
            (*o->f128 != 0 || o->f188 == 0) && o->f188 == 0) {
            o->f1a0 = 1;
            o->f18c = 0;
            if (o->fe4 && o->f198 == 0) {
                o->f180 = o->fe4;
                o->f180->send(str + 0x54, 0, 0, 0, 0);
                o->f198 = 1;
                o->f19c = 0;
            }
            fn_802494A4(o, 4);
        }
    }
    fn_8023FE08(o, dt);
}
#pragma pop

} /* extern "C" */
} /* namespace n800824C0 */

namespace n80082D44 {
extern "C" {

#include "common.h"

struct Cl { u8 p[52]; u16 f52; };
struct Tm { u8 p[4]; f32 f4; f32 f8; u8 p12[4]; Tm *f16; u8 p20[16]; f32 f36; };
struct Ob { u8 p0[208]; Cl **f208; u8 p212[12]; void *f224; u8 p228[176]; s32 f404; u8 p408[24]; s32 f432; u32 f436; u32 *f440; u8 p444[12]; u32 f456; u32 f460; };
extern "C" {
extern char lbl_80298A78[];
Tm *fn_8022D694(void *);
void fn_80241588(Ob *, u32, int, f32);
f64 fn_800F04FC(f64, f64);
void fn_80241DD0(Ob *, char *, int, int, int, int);
}
inline u32 Mode(Ob *o) {
    u32 v = (s32)(*o->f440 & o->f456) >> 27;
    return v == 3 ? 1 : v;
}
inline bool IsAB(Ob *o) { bool b = true; if (Mode(o) != 1 && Mode(o) != 3) b = false; return b; }
inline void SetT(Tm *t, f32 v) {
    t->f8 = v;
    if (t->f16) t->f36 = t->f8 / t->f16->f4;
}
extern "C" void fn_80082D44(Ob *o, u32 mode) {
    u32 old = Mode(o);
    f32 sp;
    *o->f440 &= ~o->f456;
    *o->f440 |= mode << 27;
    if (o->f208[Mode(o)] && fn_8022D694(o->f224)) {
        sp = fn_8022D694(o->f224)->f4;
        fn_80241588(o, Mode(o), 0, 0.2f);
        { Tm *t = fn_8022D694(o->f224); SetT(t, lbl_8035FC28); }
        f32 r = *(f32 *)&lbl_8035FC28;
        if (o->f404 && o->f432 && IsAB(o)) {
            u32 n = o->f208[1]->f52;
            f64 p = fn_800F04FC(lbl_8035FC20, o->f436);
            f32 d = (f32)(s32)(*o->f440 & o->f460) / (f32)p;
            r = d * n;
        } else if ((mode == 1 || mode == 3) && old == 1) {
            r = sp;
        } else if (mode == 3 && (old == 2 || (old == 1 && lbl_8035FC28 == sp))) {
            r = o->f208[Mode(o)]->f52;
        }
        fn_8022D694(o->f224)->f4 = r;
        *o->f440 &= ~o->f460;
        sp = lbl_8035FC28;
        {
            u32 m = Mode(o);
            if (m == 1 && o->f208[m] && o->f208[m]->f52)
                sp = fn_8022D694(o->f224)->f4 / o->f208[m]->f52;
        }
        *o->f440 |= (u32)(sp * (f32)fn_800F04FC(lbl_8035FC20, o->f436));
        return;
    }
    fn_80241DD0(o, lbl_80298A78, 0, 0, 0, 0);
}

} /* extern "C" */
} /* namespace n80082D44 */

