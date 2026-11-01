// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

#include "common.h"
extern "C" {
struct VO { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void getPos(void *p, void *a, int b, int c, int d); virtual void setPos(void *a, void *b, void *c, void *d, int e); virtual void w15(); virtual void w16(); virtual void hideA(); virtual void w18(); virtual void showA(); virtual void w20(); virtual void w21(); virtual void w22(); virtual void show(); virtual void hide(); virtual void w25(); virtual void w26(); virtual void w27(); virtual void w28(); virtual void w29(); virtual void w30(); virtual void w31(); virtual void w32(); virtual void send(void *msg, void *to, int a, void *d, int b); };
static u8 sPad[896] = {1};
static s32 tA[14] = {1};
static s32 tB[36] = {1};
static s32 tC[36] = {1};
typedef struct { f32 x, y, z; } V3;
extern int rand(void);
extern int strcmp(const char *, const char *);
extern u32 lbl_8035B308;
extern u32 *lbl_8035B334;
extern void *lbl_803286D0[];
extern u32 lbl_8035F75C, lbl_8035F760;
extern f32 lbl_8035F764, lbl_8035F768, lbl_8035F76C, lbl_8035F780, lbl_8035F784;
extern char lbl_8035F720[4], lbl_8035F770[4], lbl_8035F778[4];
extern char lbl_80298548[], lbl_80298530[], lbl_80357740[];
int fn_800F6CD0(void *, void *);
void fn_800F6E88(void *, void *);
f32 fn_80101590(V3 *, void *);
void fn_80107244(void *, void *);
void fn_80190604(void *, void *, void *);
void fn_80190888(void *, void *, void *);
void fn_80190C98(void *);
void fn_80196688(void *);
void fn_8022345C(int, f32);
int fn_802288FC(u32, void *);
void fn_8022A7A8(VO *);
void fn_8022AD0C(VO *);
void fn_8022B618(VO *);
int fn_8022D694(VO *);
int fn_8023F4A0(int, char *, char *, char *, int);
void fn_80240B50(int, void *, int);
void fn_8024118C(int, void *, int);
void fn_80240DBC(int, f32);
void fn_80241588(int, int, int, f32);
int fn_80241628(int, int, int);
void *fn_80242144(int, int);
void fn_80242BC0(void *, void *, VO *, int, u32, int);
void fn_80249008(int, int);
void fn_802490E0(int, int, f32);
int fn_802491DC(int, int);
int fn_802494A4(int, int);

#define E0 (*(VO **)(p + 0xe0))
#define I(o) (*(int *)(p + (o)))
#define PI(o) (*(int **)(p + (o)))
#define PV(o) (*(void **)(p + (o)))

static inline void play(int p, void *name, int k) {
    if (fn_800F6CD0(name, lbl_8035F720) == 0) {
        if (I(0x1ac) != 0) fn_80240B50(p, name, k);
        else fn_8024118C(p, name, k);
        I(0x1ac) = k;
    }
}
static inline void play2(int p, void *name) {
    if (fn_800F6CD0(name, lbl_8035F720) == 0) {
        if (I(0x1ac) != 0) fn_80240B50(p, name, 0);
        else fn_8024118C(p, name, 0);
        I(0x1ac) = 0;
    }
}
static inline void hideE(int p) {
    E0->hide();
    fn_8022A7A8(E0);
    fn_8022B618(E0);
}
static inline void showE(int p) {
    E0->show();
    fn_8022AD0C(E0);
}
static inline void light(int p) {
    V3 v;
    u8 *b;
    u8 *a;
    V3 *s = *(V3 **)(I(0x17c) + 0xc);
f32 x, y, z;
    z = s->z;
    y = s->y;
    x = s->x;
    v.x = x;
    v.y = y;
    v.z = z;
    a = *(u8 **)((int)E0 + 0x9c);
    b = *(u8 **)(a + 0x30);
    if (b != 0) {
        ((void (*)(void *, V3 *))lbl_803286D0[3])(*(void **)(b + 0x10), &v);
        *(u32 *)(b + 0x20) |= lbl_8035F75C;
        fn_80190C98(a);
    }
}
static inline void light2(int p) {
    V3 v;
    u8 *a;
    u8 *b;
    V3 *s = *(V3 **)(I(0x17c) + 0xc);
f32 x, y, z;
    z = s->z;
    y = s->y;
    x = s->x;
    v.x = x;
    v.y = y;
    v.z = z;
    a = *(u8 **)((int)E0 + 0x9c);
    b = *(u8 **)(a + 0x30);
    if (b != 0) {
        ((void (*)(void *, V3 *))lbl_803286D0[3])(*(void **)(b + 0x10), &v);
        *(u32 *)(b + 0x20) |= lbl_8035F75C;
        fn_80190C98(a);
    }
}
static inline void rspd(int p) {
    s32 h;
    s32 ri;
    f32 r;
    h = *(u16 *)(*(int *)(p + 0x10) + 0x34);
    ri = rand() % 10000u;
    r = lbl_8035F768 * (f32)ri;
    r = (f32)h * r;
    *(f32 *)(p + 4) = r;
}
static inline void fx2(int p) {
    u8 *o = *(u8 **)((int)E0 + 0x9c);
    *(f32 *)(o + 0x9c) = lbl_8035F76C;
    *(u32 *)(o + 0x98) &= ~6;
    *(f32 *)(o + 0xac) = lbl_8035F76C;
    fn_80196688(o);
    *(u32 *)(o + 0x98) &= ~8;
}
static inline void fx(int p) {
    u8 *o = *(u8 **)((int)E0 + 0x9c);
    *(u32 *)(o + 0x98) |= lbl_8035F760;
    *(f32 *)(o + 0x9c) = lbl_8035F76C;
    *(u32 *)(o + 0x98) &= ~6;
    *(f32 *)(o + 0xac) = lbl_8035F76C;
    fn_80196688(o);
}
static inline void sel(int p) {
    if (*PI(0x158) != 0) {
        if (*PI(0x15c) != 0) {
            if (*PI(0x15c) != 0) fx(p);
        } else hideE(p);
    }
}
static inline void attach(int p) {
    if (fn_800F6CD0(PV(0x124), lbl_8035F720) == 0 && *(void **)(I(0x180) + 0xa0) != 0) {
        fn_80190888(*(void **)((int)E0 + 0x9c), *(void **)(I(0x180) + 0xa0), PV(0x124));
        light(p);
    }
}
static inline void attach2(int p) {
    if (fn_800F6CD0(PV(0x124), lbl_8035F720) == 0 && *(void **)(I(0x180) + 0xa0) != 0) {
        fn_80190888(*(void **)((int)E0 + 0x9c), *(void **)(I(0x180) + 0xa0), PV(0x124));
        light2(p);
    }
}
static inline void detach(int p) {
    if (PV(0x180) != 0 && fn_800F6CD0(PV(0x124), lbl_8035F720) == 0 && *(void **)(I(0x180) + 0xa0) != 0)
        fn_80190604(*(void **)((int)E0 + 0x9c), *(void **)(I(0x180) + 0xa0), PV(0x124));
}
static inline void retarget(int p) {
    char buf[8];
    int f;
    fn_800F6E88(buf, lbl_8035F720);
    f = 0;
    if (PV(0xec) != 0) fn_800F6E88(buf, PV(0xec));
    if (fn_800F6CD0(buf, lbl_8035F720) != 0) fn_800F6E88(buf, PV(0x120));
    else if (fn_800F6CD0(buf, PV(0x120)) == 0) f = 1;
    I(0x180) = fn_802288FC(lbl_8035B308, buf);
    I(0x184) = I(0x180) == *(u32 *)(lbl_8035B308 + 0x48);
    if (f != 0) {
        V3 v;
        void *o = *(void **)(*(int *)(I(0x180) + 0x9c) + 0x30);
        if (o != 0) fn_80107244(o, &v);
        else {
            v.x = lbl_8035F76C;
            v.y = lbl_8035F76C;
            v.z = lbl_8035F76C;
        }
        E0->setPos(&v, 0, 0, 0, 0);
    } else {
        attach2(p);
    }
}
static inline void dist(int p) {
    V3 v;
    E0->getPos(&v, 0, 0, 0, 0);
    *(f32 *)(p + 0x1a4) = fn_80101590(&v, (void *)(p + 0x198));
    *(f32 *)(p + 0x1a8) = *(f32 *)(p + 0x1a4);
}
static inline void snap(int p) {
    V3 w;
    E0->getPos(&w, 0, 0, 0, 0);
    *(f32 *)(p + 0x1a0) = w.z;
    E0->setPos((void *)(p + 0x198), 0, 0, 0, 0);
}
static inline void lookA(int p) {
    char buf[8];
    V3 v;
    void *o;
    if (PV(0xec) != 0) fn_800F6E88(buf, PV(0xec));
    if (fn_800F6CD0(buf, lbl_8035F720) != 0) fn_800F6E88(buf, PV(0x150));
    if (fn_800F6CD0(buf, lbl_8035F720) == 0) {
        o = (void *)fn_802288FC(lbl_8035B308, buf);
        if (o != 0) {
            void *b = *(void **)(*(int *)((int)o + 0x9c) + 0x30);
            if (b != 0) fn_80107244(b, (void *)(p + 0x198));
            else {
                *(f32 *)(p + 0x198) = lbl_8035F76C;
                *(f32 *)(p + 0x19c) = lbl_8035F76C;
                *(f32 *)(p + 0x1a0) = lbl_8035F76C;
            }
            E0->getPos(&v, 0, 0, 0, 0);
            *(f32 *)(p + 0x1a4) = fn_80101590(&v, (void *)(p + 0x198));
            *(f32 *)(p + 0x1a8) = *(f32 *)(p + 0x1a4);
            fn_802494A4(p, 2);
        }
    }
}
static inline void lookB(int p) {
    char buf[8];
    V3 v;
    V3 w;
    void *o;
    if (PV(0xec) != 0) fn_800F6E88(buf, PV(0xec));
    if (fn_800F6CD0(buf, lbl_8035F720) != 0) fn_800F6E88(buf, PV(0x150));
    if (fn_800F6CD0(buf, lbl_8035F720) == 0) {
        o = (void *)fn_802288FC(lbl_8035B308, buf);
        if (o != 0) {
            void *b = *(void **)(*(int *)((int)o + 0x9c) + 0x30);
            if (b != 0) fn_80107244(b, (void *)(p + 0x198));
            else {
                *(f32 *)(p + 0x198) = lbl_8035F76C;
                *(f32 *)(p + 0x19c) = lbl_8035F76C;
                *(f32 *)(p + 0x1a0) = lbl_8035F76C;
            }
            E0->getPos(&v, 0, 0, 0, 0);
            *(f32 *)(p + 0x1a4) = fn_80101590(&v, (void *)(p + 0x198));
            *(f32 *)(p + 0x1a8) = *(f32 *)(p + 0x1a4);
            E0->getPos(&w, 0, 0, 0, 0);
            *(f32 *)(p + 0x1a0) = w.z;
            E0->setPos((void *)(p + 0x198), 0, 0, 0, 0);
            {
                void *nm = PV(0x16c);
                if (fn_800F6CD0(nm, lbl_8035F720) == 0) {
                    if (I(0x1ac) != 0) fn_80240B50(p, nm, 0);
                    else fn_8024118C(p, nm, 0);
                    I(0x1ac) = 0;
                }
            }
            fn_802494A4(p, 3);
        }
    }
}
static inline void idle(int p) {
        u32 n = *(u32 *)PV(0x138);
        int r = 0;
        if (n != 0) r = rand() % n;
        if (r == 0) {
            I(0x18c) = 1;
            fn_802490E0(p, 1, **(f32 **)(p + 0x140));
        } else {
            if (I(0x18c) != 0) {
                {
                    void *nm = PV(0x168);
                    if (fn_800F6CD0(nm, lbl_8035F720) == 0) {
                        if (I(0x1ac) != 0) fn_80240B50(p, nm, 0);
                        else fn_8024118C(p, nm, 0);
                        I(0x1ac) = 0;
                    }
                }
                sel(p);
            }
            I(0x18c) = 0;
            fn_802490E0(p, 0, **(f32 **)(p + 0x13c));
        }
}
void fn_80079A9C(int p, int st) {
    s32 *q;
    s32 idx;
    s32 t;

    t = *(s32 *)(p + 0x60);
    idx = tA[st];
    for (q = tB + idx; t > 0; q++) {
        if (*q > t) break;
        t -= tB[idx++];
    }
    switch (tC[idx]) {
    case 0:
        fn_80241628(p, 0, 0);
        I(0x17c) = fn_8023F4A0(p, lbl_8035F720, lbl_8035F720, lbl_80298548, 1);
        if (fn_800F6CD0(PV(0x120), lbl_8035F720) == 0) {
            I(0x180) = fn_802288FC(lbl_8035B308, PV(0x120));
            attach(p);
        }
        I(0x184) = I(0x180) == *(u32 *)(lbl_8035B308 + 0x48);
        *(u32 *)((int)E0 + 0xb4) |= 4;
        I(0x194) = *PI(0x144);
        if (*PI(0x144) == 0) {
            hideE(p);
            I(0x194) = 0;
        }
        if (*PI(0x118) != 0) fn_802494A4(p, 1);
        else fn_802494A4(p, 3);
        if (**(void ***)(p + 0xd0) != 0) {
            fn_80241588(p, 0, 0, lbl_8035F764);
            rspd(fn_8022D694(E0));
        }
        break;
    case 1:
        fn_802490E0(p, 0, **(f32 **)(p + 0x13c));
        showE(p);
        I(0x194) = 1;
        break;
    case 2:
        showE(p);
        I(0x194) = 1;
        play(p, PV(0x160), 0);
        play(p, PV(0x164), 1);
        if (*PI(0x158) != 0) {
            if (*PI(0x15c) != 0) {
                if (*PI(0x15c) != 0) {
                fx2(p);
                }
            } else {
                showE(p);
                I(0x194) = 1;
            }
        }
        if (strcmp(lbl_80357740, lbl_8035F770) == 0) fn_8022345C(fn_802288FC(*lbl_8035B334, lbl_8035F778), lbl_8035F780);
        break;
    case 3:
        if (*PI(0x144) == 0) {
            hideE(p);
            I(0x194) = 0;
        }
        break;
    case 4:
        return;
    case 5:
        fn_80249008(p, 0);
        fn_80249008(p, 1);
        detach(p);
        break;
    case 6:
        if (*PI(0x154) != 0) {
            hideE(p);
            I(0x194) = 0;
        }
        play(p, PV(0x168), 0);
        sel(p);
        if (fn_800F6CD0(PV(0x148), lbl_8035F720) == 0) fn_80242BC0(fn_80242144(p, 0), PV(0x148), E0, 0, I(0x14c), 0);
        play(p, PV(0x16c), 0);
        fn_802494A4(p, 3);
        break;
    case 7:
        if (I(0x1ac) != 0) {
            I(0x1ac) = 0;
            fn_80240DBC(p, lbl_8035F784);
        }
        retarget(p);
        play(p, PV(0x170), 0);
        fn_802494A4(p, 1);
        break;
    case 8:
        retarget(p);
        play(p, PV(0x170), 0);
        fn_802494A4(p, 1);
        break;
    case 9:
        fn_802494A4(p, 3);
        break;
    case 10:
        idle(p);
        break;
    case 11:
        if (I(0x18c) != 0) {
            play(p, PV(0x168), 0);
            sel(p);
        }
        I(0x18c) = 0;
        fn_802491DC(p, 0);
        break;
    case 12: {
        lookA(p);
        break;
    }
    case 13:
        I(0x188) = 0;
        break;
    case 14:
        I(0x188) = 1;
        break;
    case 15: {
        lookB(p);
        break;
    }
    case 16:
        (*(VO **)(p + 0xe4))->send(lbl_80298530, E0, 0, PV(0x180), 0);
        break;
    case 17:
        hideE(p);
        I(0x194) = 0;
        fn_802494A4(p, 3);
        break;
    case 18:
        hideE(p);
        I(0x194) = 0;
        break;
    case 19:
        detach(p);
        break;
    case 20:
        break;
    }
}
}

} /* extern "C" */
