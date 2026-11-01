// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

#include "common.h"
extern "C" {
struct VO { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void getPos(void *p, void *a, int b, int c, int d); virtual void setPos(void *a, void *b, void *c, void *d, int e); virtual void w15(); virtual void w16(); virtual void hideA(); virtual void w18(); virtual void showA(); virtual void w20(); virtual void w21(); virtual void w22(); virtual void show(); virtual void hide(); virtual void w25(); virtual void w26(); virtual void w27(); virtual void w28(); virtual void w29(); virtual void w30(); virtual void w31(); virtual void w32(); virtual void send(void *msg, void *to, int a, void *d, int b); };
void fn_8003F140();
void fn_8003F18C();
void fn_8003F1DC();
void fn_80079A9C(int p, int st);
void fn_8007AB24();
void fn_8007ABA0();
void fn_8007B1F0();
void fn_8007B3D8();
void fn_8007B5FC();
void fn_8007B958();
void fn_8007BA64();
void fn_8007BA6C();
void fn_8023D198();
void fn_80240054();
void fn_802416D4();
void fn_80241D80();
void fn_80242210();
void fn_80249AC4();
extern char lbl_802984C4[];
extern char lbl_802984D0[];
extern char lbl_802984DC[];
extern char lbl_802984E8[];
extern char lbl_802984F4[];
extern char lbl_80298500[];
extern char lbl_8029850C[];
extern char lbl_80298518[];
extern char lbl_80298524[];
extern char lbl_80298548[], lbl_80298530[], lbl_80357740[];
extern char lbl_8029853C[];
extern char lbl_8035F718[];
extern char lbl_8035F720[4], lbl_8035F770[4], lbl_8035F778[4];
extern char lbl_8035F724[];
extern char lbl_8035F72C[];
extern char lbl_8035F734[];
extern char lbl_8035F73C[];
extern char lbl_8035F744[];
extern char lbl_8035F74C[];
extern char lbl_8035F754[];
void *lbl_802C25B8[224] = { (void *)0x0, (void *)0xFA, (void *)0x1F4, (void *)0x2EE, (void *)0x55495C4D, (void *)0x454D4341, (void *)0x52445C00, (void *)0x41545449, (void *)0x43000000, (void *)0x42414C4C, (void *)0x524F4F4D, (void *)0x4348494C, (void *)0x4452454E, (void *)0x434F4E53, (void *)0x45525600, (void *)0x44494E52, (void *)0x4F4F4D00, (void *)0x464F5945, (void *)0x52000000, (void *)0x47414C4C, (void *)0x45525900, (void *)0x47524156, (void *)0x45594400, (void *)0x47524F4F, (void *)0x4D000000, (void *)0x47525448, (void *)0x414C4C00, (void *)0x47554553, (void *)0x54000000, (void *)0x48414C4C, (void *)0x41420000, (void *)0x48414C4C, (void *)0x43440000, (void *)0x4B495443, (void *)0x48454E00, (void *)0x4C414200, (void *)0x0, (void *)0x4D555345, (void *)0x554D0000, (void *)0x4D414944, (void *)0x0, (void *)0x4D415354, (void *)0x52424544, (void *)0x4D415553, (void *)0x4F4C4D00, (void *)0x4D454153, (void *)0x55524500, (void *)0x544F5952, (void *)0x4F4F4D00, (void *)0x4F425345, (void *)0x52560000, (void *)0x50414E54, (void *)0x52590000, (void *)0x5041524C, (void *)0x4F520000, (void *)0x53495454, (void *)0x494E4700, (void *)0x53545245, (void *)0x54434800, (void *)0x53554E52, (void *)0x4F4F4D00, (void *)0x57494E54, (void *)0x45520000, (void *)0x5449544C, (void *)0x45000000, (void *)0x53504952, (void *)0x49540000, (void *)0x474C4F42, (void *)0x414C0000, (void *)0x0, (void *)0x28, (void *)0x0, (void *)0x0, (void *)0x28, (void *)0x0, (void *)0x0, (void *)0x28, (void *)0x0, (void *)0x0, (void *)0x3F800000, (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x40000000, (void *)0x0, (void *)0x3F800000, (void *)0x3F800000, (void *)0x0, (void *)0xBF800000, (void *)0x3F800000, (void *)0x0, (void *)0x0, (void *)0x3F800000, (void *)0x3F800000, (void *)0x0, (void *)0x3F800000, (void *)0xBF800000, (void *)0x0, (void *)0x6, (void *)0x9, (void *)0xC, (void *)0xF, (void *)0x12, (void *)0x15, (void *)0x18, (void *)0x1B, (void *)0x0, (void *)0x6, (void *)0x9, (void *)0xC, (void *)0xF, (void *)0x12, (void *)0x15, (void *)0x18, (void *)0x1B, (void *)0x0, (void *)0x6, (void *)0x40, (void *)0x43, (void *)0x46, (void *)0x49, (void *)0x4C, (void *)0x4F, (void *)0x52, (void *)0x55, (void *)0x1E, (void *)0x21, (void *)0x24, (void *)0x27, (void *)0x2A, (void *)0x2D, (void *)0x30, (void *)0x33, (void *)&lbl_8035F718, (void *)&lbl_8035F720, (void *)&lbl_8035F718, (void *)&lbl_8035F724, (void *)&lbl_8035F720, (void *)&lbl_8035F720, (void *)&lbl_8035F720, (void *)0x0, (void *)0x0, (void *)0x0, (void *)&lbl_802984C4, (void *)0x0, (void *)0x0, (void *)0x0, (void *)&lbl_802984D0, (void *)&lbl_8035F72C, (void *)&lbl_8035F734, (void *)&lbl_802984DC, (void *)&lbl_802984E8, (void *)&lbl_8035F73C, (void *)&lbl_8035F744, (void *)&lbl_802984F4, (void *)&lbl_8035F74C, (void *)&lbl_80298500, (void *)&lbl_802984C4, (void *)&lbl_802984D0, (void *)&lbl_802984DC, (void *)&lbl_8029850C, (void *)&lbl_80298518, (void *)&lbl_80298524, (void *)&lbl_80298530, (void *)&lbl_8035F754, (void *)&lbl_8029853C, (void *)&lbl_8035F73C, (void *)0x0, (void *)0x1, (void *)&lbl_8035F744, (void *)0x1, (void *)0x1, (void *)&lbl_802984F4, (void *)0x2, (void *)0x1, (void *)&lbl_8035F74C, (void *)0x3, (void *)0x1, (void *)&lbl_80298500, (void *)0x4, (void *)0x1, (void *)&lbl_802984C4, (void *)0x5, (void *)0x1, (void *)&lbl_802984D0, (void *)0x6, (void *)0x1, (void *)&lbl_802984DC, (void *)0x7, (void *)0x1, (void *)&lbl_8029850C, (void *)0x8, (void *)0x1, (void *)&lbl_80298518, (void *)0x9, (void *)0x1, (void *)&lbl_80298524, (void *)0xA, (void *)0x1, (void *)&lbl_80298530, (void *)0xB, (void *)0x1, (void *)&lbl_8035F754, (void *)0xC, (void *)0x1, (void *)&lbl_8029853C, (void *)0xD, (void *)0x1, (void *)0x0, (void *)0x1, (void *)0x2, (void *)0x3, (void *)0x4, (void *)0x5, (void *)0x6, (void *)0x7, (void *)0x8, (void *)0x9, (void *)0xA, (void *)0xB, (void *)0xC, (void *)0xD };
static s32 tA[14] = { 0, 4, 7, 10, 13, 16, 19, 22, 26, 28, 30, 32, 33, 35 };
static s32 tB[36] = { 1, 1, 1, 1, 1, 1, 2, 2, 1, 1, 2, 1, 1, 1, 1, 2, 1, 1, 2, 1, 1, 2, 1, 1, 1, 1, 1, 3, 1, 3, 1, 3, 4, 3, 1, 4 };
static s32 tC[36] = { 0, 1, 2, 3, 4, 5, 4, 4, 6, 4, 4, 7, 8, 4, 9, 4, 4, 10, 4, 4, 11, 4, 4, 12, 4, 12, 4, 13, 4, 14, 4, 15, 16, 17, 18, 19 };
void *lbl_802C2A90[20] = { (void *)0x0, (void *)0x0, (void *)&fn_8007B958, (void *)&fn_80249AC4, (void *)&fn_8007B5FC, (void *)&fn_80242210, (void *)&fn_8007B3D8, (void *)&fn_8023D198, (void *)&fn_8007BA64, (void *)&fn_80079A9C, (void *)&fn_80241D80, (void *)&fn_8003F140, (void *)&fn_8003F18C, (void *)&fn_8007B1F0, (void *)&fn_8007AB24, (void *)&fn_802416D4, (void *)&fn_8003F1DC, (void *)&fn_80240054, (void *)&fn_8007BA6C, (void *)&fn_8007ABA0 };
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
