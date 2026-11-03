#include "common.h"
struct C802449C4 {
    u8 pad[56];
    C802449C4();
    ~C802449C4();
};
namespace m8008B124 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

/* QV=2.0p1 */
} /* extern "C" */
/* hoisted */
extern "C" {
extern "C" {
extern char lbl_803600D8[8];
extern char lbl_803600E0[4];
extern char lbl_8029908C[9];
extern char lbl_803600E4[7];
extern char lbl_803600EC[6];
extern char lbl_80299098[9];
extern char lbl_803600F4[7];
extern char lbl_802990A4[9];
extern char lbl_803600FC[5];
extern char lbl_80360104[5];
extern char lbl_802990B0[9];
extern char lbl_802990BC[144];
extern char lbl_8036010C[7];
extern char lbl_80360114[8];
extern char lbl_8036011C[6];
void fn_8008B980(void);
void fn_80249AC4(void);
void fn_8008B804(void);
void fn_80242210(void);
void fn_8008B6E0(void);
void fn_8023D198(void);
void fn_8008BA8C(void);
void fn_8008B124(struct P8008B124 *p, s32 n);
void fn_80241D80(void);
void fn_8003F140(void);
void fn_8003F18C(void);
void fn_8008B394(void);
void fn_8008B2DC(void);
void fn_802416D4(void);
void fn_8003F1DC(void);
void fn_80240054(void);
void fn_8023F5F4(void);
void fn_8008B338(void);
}
/* lbl_802C6990: descriptor table (DOL words; pointers as relocations) */
extern "C" void *lbl_802C6990[184];
extern "C" {
extern s32 lbl_80359348;
extern char lbl_8029908C[];
extern char lbl_80299098[];
extern char lbl_802990A4[];
extern char lbl_802990B0[];
extern char lbl_802990BC[];
extern char lbl_803600D8[];
extern char lbl_803600E0[];
extern char lbl_803600E4[];
extern char lbl_803600EC[];
extern char lbl_803600F4[];
extern char lbl_803600FC[];
extern char lbl_80360104[];
extern char lbl_8036010C[];
extern char lbl_80360114[];
extern char lbl_8036011C[];
}
/* This unit's .data (lbl_802C6990, 0x36C bytes): the function addresses the tables below through one section base. */
static s32 data_000[4] = { 0, 0xFA, 0x1F4, 0x2EE };
static char data_010[12] = "UI\\MEMCARD\\";
static char data_01C[31][8] = {
    "ATTIC", {'B', 'A', 'L', 'L', 'R', 'O', 'O', 'M'}, {'C', 'H', 'I', 'L', 'D', 'R', 'E', 'N'}, "CONSERV", "DINROOM", "FOYER", "GALLERY", "GRAVEYD",
    "GROOM", "GRTHALL", "GUEST", "HALLAB", "HALLCD", "KITCHEN", "LAB", "MUSEUM",
    "MAID", {'M', 'A', 'S', 'T', 'R', 'B', 'E', 'D'}, "MAUSOLM", "MEASURE", "TOYROOM", "OBSERV", "PANTRY", "PARLOR",
    "SITTING", "STRETCH", "SUNROOM", "WINTER", "TITLE", "SPIRIT", "GLOBAL"
};
static s32 data_114[3][3] = { { 0, 0x28, 0 }, { 0, 0x28, 0 }, { 0, 0x28, 0 } };
static f32 data_138[22] = { 0, 1, 0, 0, 0, 0, 0, 2, 0, 1, 1, 0, -1, 1, 0, 0, 1, 1, 0, 1, -1, 0 };
static s32 data_190[35] = {
    6, 9, 0xC, 0xF, 0x12, 0x15, 0x18, 0x1B, 0,
    6, 9, 0xC, 0xF, 0x12, 0x15, 0x18, 0x1B, 0,
    6, 0x40, 0x43, 0x46, 0x49, 0x4C, 0x4F, 0x52, 0x55,
    0x1E, 0x21, 0x24, 0x27, 0x2A, 0x2D, 0x30, 0x33
};
static char *data_21C[10] = {
    lbl_803600D8, lbl_803600E0, lbl_803600E0, lbl_8029908C, lbl_803600E0,
    lbl_803600E0, lbl_803600E4, lbl_803600E0, lbl_803600E0, lbl_803600E0
};
static char *data_244[4] = { lbl_803600EC, lbl_80299098, lbl_803600F4, lbl_802990A4 };
static char *data_254[7] = { lbl_803600FC, lbl_80360104, lbl_802990B0, lbl_802990BC, lbl_8036010C, lbl_80360114, lbl_8036011C };
static struct { char *s; s32 a, b; } data_270[7] = {
    { lbl_803600FC, 0, 1 }, { lbl_80360104, 1, 1 }, { lbl_802990B0, 2, 1 }, { lbl_802990BC, 3, 1 },
    { lbl_8036010C, 4, 1 }, { lbl_80360114, 5, 1 }, { lbl_8036011C, 6, 1 }
};
static s32 data_2C4[7] = { 0, 1, 2, 3, 4, 5, 6 };
static s32 data_2E0[7] = { 0, 2, 3, 5, 7, 9, 12 };
static s32 data_2FC[14] = { 1, 3, 4, 1, 3, 1, 3, 3, 1, 1, 2, 1, 1, 3 };
static s32 data_334[14] = { 0, 1, 1, 1, 2, 1, 3, 1, 4, 1, 5, 1, 1, 6 };
/* lbl_802C6CFC: vtable (reached only through lbl_802C6990 + 0x36C; force_active) */
extern "C" void *lbl_802C6CFC[20];
void *lbl_802C6CFC[20] = {
    (void *)0x00000000, (void *)0x00000000, (void *)fn_8008B980, (void *)fn_80249AC4,
    (void *)fn_8008B804, (void *)fn_80242210, (void *)fn_8008B6E0, (void *)fn_8023D198,
    (void *)fn_8008BA8C, (void *)fn_8008B124, (void *)fn_80241D80, (void *)fn_8003F140,
    (void *)fn_8003F18C, (void *)fn_8008B394, (void *)fn_8008B2DC, (void *)fn_802416D4,
    (void *)fn_8003F1DC, (void *)fn_80240054, (void *)fn_8023F5F4, (void *)fn_8008B338
};
extern u8 *lbl_8035B308;
struct P8008B124 {
    u8 pad[96];
    s32 f96;
    u8 pad2[208];
    s32 *f308;
    s32 *f312;
    u8 pad3[4];
    s32 f320;
    s32 f324;
    s32 f328;
    s32 f332;
};
void fn_80241628(P8008B124 *, s32, s32);
void *fn_80242144(void *self, s32 n);
void fn_802448C8(C802449C4 *it, void *list);
void fn_80244750(C802449C4 *it, s32 n);
s32 fn_8024457C(C802449C4 *it);
s32 fn_80244584(C802449C4 *it);
void fn_802494A4(void *self, s32 n);

void fn_8008B124(P8008B124 *p, s32 n) {
    s32 *q;
    s32 j = data_2E0[n];
    s32 t = p->f96;
    for (q = &data_2FC[j]; t > 0; q++) {
        if (*q > t) break;
        t -= data_2FC[j++];
    }
    switch (data_334[j]) {
    case 0:
        fn_80241628(p, 0, 0);
        if (*p->f312 != 0) {
            p->f320 = *(s32 *)(lbl_8035B308 + 72);
        } else {
            C802449C4 it;
            fn_802448C8(&it, fn_80242144(p, 0));
            fn_80244750(&it, 0);
            if (fn_80244584(&it) == 0) p->f320 = fn_8024457C(&it);
        }
        p->f332 = 1;
        if (*p->f308 == 0) fn_802494A4(p, 3);
        break;
    case 1:
        return;
    case 2:
        p->f324 = 0;
        break;
    case 3:
        p->f324 = 1;
        break;
    case 4:
        if (p->f328 != 0) fn_802494A4(p, 1);
        else fn_802494A4(p, 2);
        break;
    case 5:
        fn_802494A4(p, 3);
        break;
    case 6:
        fn_802494A4(p, 0);
        break;
    case 7:
        break;
    }
}

} /* extern "C" */

} /* namespace m8008B124 */

namespace m8008B2DC {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

struct V_8008B2DC { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void m(void *); };
extern u8 lbl_802990B0[];
extern u8 lbl_802990BC[];

void fn_8008B2DC(V_8008B2DC *p) {
    p->m(lbl_802990B0);
    p->m(lbl_802990BC);
}

} /* extern "C" */

} /* namespace m8008B2DC */

namespace m8008B338 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

struct V_8008B338 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void m(void *); };
extern u8 lbl_802990B0[];
extern u8 lbl_802990BC[];

void fn_8008B338(V_8008B338 *p) {
    p->m(lbl_802990B0);
    p->m(lbl_802990BC);
}

} /* extern "C" */

} /* namespace m8008B338 */

namespace m8008B394 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

void fn_8008B3F8(void *);
void fn_8023FE08(void *, f32);

void fn_8008B394(u8 *p, f32 f) {
    if (*(s32 *)(p + 96) <= 2 && *(s32 *)(p + 332) == 0) {
        fn_8008B3F8(p);
    }
    *(s32 *)(p + 332) = 0;
    fn_8023FE08(p, f);
}

} /* extern "C" */

} /* namespace m8008B394 */

struct V3 { f32 x, y, z; };
struct OB {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10(); virtual void v11(); virtual void v12();
    virtual void s13(V3 *, V3 *, int, int, int);
};
namespace m8008B3F8 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

/* hoisted */
struct P {
    u8 pad0[96];
    s32 st96;
    u8 pad100[124];
    OB *o224;
    u8 pad228[52];
    f32 *ang280;
    f32 *dist284;
    char *a288;
    char *a292;
    char *b296;
    char *b300;
    s32 *s304;
    u8 pad308[4];
    s32 *s312;
    s32 *s316;
    OB *o320;
    s32 i324;
    s32 i328;
};
extern f32 lbl_80360124, lbl_80360130, lbl_80360134, lbl_80360138;
extern f64 lbl_80360128;
extern char lbl_803600E0[4];
extern void *lbl_8035B65C;
void fn_80101820(V3 *);
f32 fn_80101590(V3 *, V3 *);
double fn_800F045C(double);
void fn_802494A4(P *, int);
int fn_800F6CD0(char *, char *);
void __ct__9C80253F24Fiiii(void *, char *, int, int, char *);
void *fn_80242144(P *, int);
void fn_80242BC0(void *, char *, int, int, char *, int);

static inline f32 acosf_(f32 x) {
    if ((f32)__fabs(x) <= lbl_80360128) return fn_800F045C(x);
    if (x > lbl_80360124) return lbl_80360124;
    return lbl_80360130;
}

static inline void play(P *p, int n, char *b, char *a) {
    if (fn_800F6CD0(a, lbl_803600E0) == 0) {
        if (*p->s304) __ct__9C80253F24Fiiii(lbl_8035B65C, a, 0, 0, b);
        else fn_80242BC0(fn_80242144(p, n), a, 0, 0, b, 0);
    }
}

void fn_8008B3F8(P *p) {
    V3 a, b, c, d;
    f32 ang;
    bool near;
    if (p->o320) {
        p->o320->s13(&a, &b, 0, 0, 0);
        b.z = lbl_80360124;
        fn_80101820(&b);
        p->o224->s13(&c, 0, 0, 0, 0);
        {
            *(volatile f32 *)&d.x = c.x - a.x; *(volatile f32 *)&d.y = c.y - a.y; *(volatile f32 *)&d.z = c.z - a.z;
        }
        d.z = *(volatile f32 *)&lbl_80360124;
        fn_80101820(&d);
        ang = lbl_80360134 * acosf_(b.x * d.x + b.y * d.y + b.z * d.z);
        {
            f32 dist = fn_80101590(&a, &c);
            near = false;
            if (dist <= *p->dist284 && ang <= *p->ang280 * lbl_80360138) near = true;
        }
        if (!near || (*p->s312 && *p->s316 && !p->i324)) {
            p->i328 = 1;
            if (p->st96 != 1) {
                fn_802494A4(p, 1);
                play(p, 1, p->b296, p->a288);
            }
        } else {
            p->i328 = 0;
            if (p->st96 != 2) {
                fn_802494A4(p, 2);
                play(p, 2, p->b300, p->a292);
            }
        }
    }
}

} /* extern "C" */

} /* namespace m8008B3F8 */

namespace m8008B6E0 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

void fn_80241E0C(void);

void fn_8008B6E0(s32 param_1) {
    *(u32 *)(param_1 + 0x118) = 0;
    *(u32 *)(param_1 + 0x11c) = 0;
    *(u32 *)(param_1 + 0x120) = 0;
    *(u32 *)(param_1 + 0x124) = 0;
    *(u32 *)(param_1 + 0x128) = 0;
    *(u32 *)(param_1 + 300) = 0;
    *(u32 *)(param_1 + 0x130) = 0;
    *(u32 *)(param_1 + 0x134) = 0;
    *(u32 *)(param_1 + 0x138) = 0;
    *(u32 *)(param_1 + 0x13c) = 0;
    *(u32 *)(param_1 + 0x140) = 0;
    *(u32 *)(param_1 + 0x144) = 1;
    *(u32 *)(param_1 + 0x148) = 1;
    *(u32 *)(param_1 + 0x14c) = 1;
    fn_80241E0C();
}

} /* extern "C" */

} /* namespace m8008B6E0 */

namespace m8008B740 {
extern "C" {
/* Functions from 0x8008B740 to 0x8008B804, found by decomp-toolkit. */

extern s32 lbl_80359348;
extern char lbl_8029908C[];
extern char lbl_80299098[];
extern char lbl_802990A4[];
extern char lbl_802990B0[];
extern char lbl_802990BC[];
extern char lbl_803600D8[];
extern char lbl_803600E0[];
extern char lbl_803600E4[];
extern char lbl_803600EC[];
extern char lbl_803600F4[];
extern char lbl_803600FC[];
extern char lbl_80360104[];
extern char lbl_8036010C[];
extern char lbl_80360114[];
extern char lbl_8036011C[];

void fn_8008B740(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x54) = 7;
    M2C_FIELD(arg0, s32 *, 0x2C) = 7;
    M2C_FIELD(arg0, s32 *, 0x68) = 4;
    M2C_FIELD(arg0, s32 *, 0x5C) = 0;
    M2C_FIELD(arg0, s32 *, 0x80) = 1;
    M2C_FIELD(arg0, s32 *, 0x7C) = 0;
    M2C_FIELD(arg0, s32 *, 0x84) = 0;
    M2C_FIELD(arg0, s32 *, 0x88) = 3;
    M2C_FIELD(arg0, s32 *, 0x8C) = 0;
    M2C_FIELD(arg0, s32 *, 0x94) = 0;
    M2C_FIELD(arg0, void **, 0x58) = m8008B124::data_254;
    M2C_FIELD(arg0, void **, 0x28) = m8008B124::data_270;
    M2C_FIELD(arg0, void **, 0x30) = m8008B124::data_2C4;
    M2C_FIELD(arg0, void **, 0x6C) = m8008B124::data_244;
    M2C_FIELD(arg0, s32 *, 0x78) = 0;
    M2C_FIELD(arg0, void **, 0xC4) = &lbl_80359348;
    M2C_FIELD(arg0, s32 *, 0xC8) = 0;
    M2C_FIELD(arg0, s32 *, 0xCC) = 0;
    M2C_FIELD(arg0, void **, 0xF4) = m8008B124::data_21C;
    M2C_FIELD(arg0, s32 *, 0xFC) = 0;
    M2C_FIELD(arg0, s32 *, 0x10C) = 0;
    M2C_FIELD(arg0, s32 *, 0x118) = 0;
    M2C_FIELD(arg0, s32 *, 0x11C) = 0;
    M2C_FIELD(arg0, s32 *, 0x120) = 0;
    M2C_FIELD(arg0, s32 *, 0x124) = 0;
    M2C_FIELD(arg0, s32 *, 0x128) = 0;
    M2C_FIELD(arg0, s32 *, 0x12C) = 0;
    M2C_FIELD(arg0, s32 *, 0x130) = 0;
    M2C_FIELD(arg0, s32 *, 0x134) = 0;
    M2C_FIELD(arg0, s32 *, 0x138) = 0;
    M2C_FIELD(arg0, s32 *, 0x13C) = 0;
    M2C_FIELD(arg0, s32 *, 0x140) = 0;
    M2C_FIELD(arg0, s32 *, 0x144) = 1;
    M2C_FIELD(arg0, s32 *, 0x148) = 1;
    M2C_FIELD(arg0, s32 *, 0x14C) = 1;
}

} /* extern "C" (c unit) */
} /* namespace m8008B740 */
