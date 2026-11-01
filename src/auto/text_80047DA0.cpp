#include "common.h"

extern "C" {
__declspec(section ".sdata2") char lbl_8035D138[8] = "INIT";
__declspec(section ".sdata2") char lbl_8035D140[4] = "ON";
__declspec(section ".sdata2") char lbl_8035D144[4] = "OFF";
__declspec(section ".sdata2") char lbl_8035D148[8] = "EXIT";
__declspec(section ".sdata2") char lbl_8035D150[8] = "LIGHTON";
__declspec(section ".sdata2") char lbl_8035D158[8] = "FLASHON";
__declspec(section ".sdata2") char lbl_8035D160[8] = "FLSHON";
__declspec(section ".sdata2") char lbl_8035D168[8] = "FLSHOFF";
__declspec(section ".sdata2") char lbl_8035D170[8] = "AMCYCON";
__declspec(section ".sdata2") char lbl_8035D178[8] = "SOUNDON";
__declspec(section ".sdata2") u32 lbl_8035D180 = 0x800;
__declspec(section ".sdata2") char lbl_8035D184[4] = {0};
__declspec(section ".sdata2") char lbl_8035D188[4] = {0x00, 0x00, 0x00, 0x00};
__declspec(section ".sdata2") char lbl_8035D18C[8] = {0x4C, 0x65, 0x76, 0x65, 0x6C, 0x5C, 0x00, 0x00};
__declspec(section ".sdata2") f32 lbl_8035D194 = 0.5f;
__declspec(section ".sdata2") f32 lbl_8035D198 = 9.999999747378752e-05f;
__declspec(section ".sdata2") f32 lbl_8035D19C = 3.1415927410125732f;
__declspec(section ".sdata2") f32 lbl_8035D1A0 = 6.2831854820251465f;
__declspec(section ".sdata2") f32 lbl_8035D1A4 = -3.1415927410125732f;
__declspec(section ".sdata2") f32 lbl_8035D1A8 = 0.20000000298023224f;
__declspec(section ".sdata2") f32 lbl_8035D1AC = 0.25f;
__declspec(section ".sdata2") f32 lbl_8035D1B0 = 0.8999999761581421f;
__declspec(section ".sdata2") f32 lbl_8035D1B4 = 0.10000000149011612f;
__declspec(section ".sdata2") f32 lbl_8035D1B8 = 1.0f;
}

namespace m80047DA0 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

#include "common.h"

struct V3 { f32 x, y, z; };
struct C4 { f32 a, b, c, d; };
struct In { u8 p[20]; C4 f20; };
struct Y { u8 p[16]; In *f16; };
struct N16 { u8 p[16]; void *f16; };
struct H { u32 f0; u16 f4; u8 p6[42]; N16 *f48; u8 p52[12]; void *f64; u8 p68[40]; Y *f108; };
struct Cm { u8 p[156]; H *f156; u8 p160[412]; s32 f572; };
struct FT { u8 p[304]; void (*f304)(void *, V3 *); };
struct G116 { u8 p[484]; void *f484; };
struct GB { u8 p[12]; void *f12; u8 p16[100]; G116 *f116; };
class O { public: u8 p0[96]; s32 f96; u8 p100[124]; Cm *f224; u8 p228[56]; s32 *f284; s32 *f288; u8 p292[4]; s32 *f296; void *f300; void *f304; u8 p308[4];
    void *f312, *f316, *f320; f32 f324, f328, f332; u8 p336[4]; V3 f340; C4 f352; C4 *f368; s32 f372; C4 f376; Y *f392; H *f396; u8 p400[16]; f32 f416; s32 f420;
    void *f424, *f428; };
extern "C" {
extern FT lbl_803286D0;
extern GB *lbl_8035B65C;
extern f32 lbl_8035D184;
extern char lbl_8035D160[8], lbl_8035D168[8];
void *fn_8023F4A0(O *, char *, char *, char *, int);
void fn_8019AE40(void *, H *);
void fn_8024118C(O *, void *, int);
void fn_80240DBC(O *, f32);
void fn_802494A4(O *, int);
void __ct__9C80253F24Fiiii(void *, char *, int, int, int);
void fn_800483EC(O *, int);
}
inline void On(O *o) {
    if (o->f396) o->f396->f0 |= lbl_8035D180;
    if (o->f300) fn_8024118C(o, o->f300, 0);
    if (o->f304) fn_8024118C(o, o->f304, 1);
}
inline void Off(O *o) {
    if (o->f396) o->f396->f0 &= ~0x800;
    fn_80240DBC(o, lbl_8035D194);
}
inline void Restore(O *o) {
    if (o->f392) o->f392->f16->f20 = o->f352;
    if (o->f392 && o->f296 && *o->f296) o->f396->f0 &= ~0x800;
}
void fn_8003F140();
void fn_8003F18C();
void fn_8003F1DC();
extern "C" void fn_80047DA0(O *o, s32 idx);
void fn_80048528();
void fn_80048A50();
void fn_80048AB8();
void fn_80048B40();
void fn_80048BC8();
void fn_80048D10();
void fn_80048E4C();
void fn_80048F58();
void fn_8023D198();
void fn_8023F5F4();
void fn_80240054();
void fn_802416D4();
void fn_80241D80();
void fn_80249AC4();
extern const char lbl_80295A90[12] = "LIGHTOFF";
extern const char lbl_80295A9C[12] = "FLASHOFF";
extern const char lbl_80295AA8[12] = "AMCYCOFF";
extern const char lbl_80295AB4[12] = "SOUNDOFF";
void *lbl_802B5970[198] = { (void *)0x0, (void *)0xFA, (void *)0x1F4, (void *)0x2EE, (void *)0x55495C4D, (void *)0x454D4341, (void *)0x52445C00, (void *)0x41545449, (void *)0x43000000, (void *)0x42414C4C, (void *)0x524F4F4D, (void *)0x4348494C, (void *)0x4452454E, (void *)0x434F4E53, (void *)0x45525600, (void *)0x44494E52, (void *)0x4F4F4D00, (void *)0x464F5945, (void *)0x52000000, (void *)0x47414C4C, (void *)0x45525900, (void *)0x47524156, (void *)0x45594400, (void *)0x47524F4F, (void *)0x4D000000, (void *)0x47525448, (void *)0x414C4C00, (void *)0x47554553, (void *)0x54000000, (void *)0x48414C4C, (void *)0x41420000, (void *)0x48414C4C, (void *)0x43440000, (void *)0x4B495443, (void *)0x48454E00, (void *)0x4C414200, (void *)0x0, (void *)0x4D555345, (void *)0x554D0000, (void *)0x4D414944, (void *)0x0, (void *)0x4D415354, (void *)0x52424544, (void *)0x4D415553, (void *)0x4F4C4D00, (void *)0x4D454153, (void *)0x55524500, (void *)0x544F5952, (void *)0x4F4F4D00, (void *)0x4F425345, (void *)0x52560000, (void *)0x50414E54, (void *)0x52590000, (void *)0x5041524C, (void *)0x4F520000, (void *)0x53495454, (void *)0x494E4700, (void *)0x53545245, (void *)0x54434800, (void *)0x53554E52, (void *)0x4F4F4D00, (void *)0x57494E54, (void *)0x45520000, (void *)0x5449544C, (void *)0x45000000, (void *)0x53504952, (void *)0x49540000, (void *)0x474C4F42, (void *)0x414C0000, (void *)0x0, (void *)0x28, (void *)0x0, (void *)0x0, (void *)0x28, (void *)0x0, (void *)0x0, (void *)0x28, (void *)0x0, (void *)0x0, (void *)0x3F800000, (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x40000000, (void *)0x0, (void *)0x3F800000, (void *)0x3F800000, (void *)0x0, (void *)0xBF800000, (void *)0x3F800000, (void *)0x0, (void *)0x0, (void *)0x3F800000, (void *)0x3F800000, (void *)0x0, (void *)0x3F800000, (void *)0xBF800000, (void *)0x0, (void *)0x6, (void *)0x9, (void *)0xC, (void *)0xF, (void *)0x12, (void *)0x15, (void *)0x18, (void *)0x1B, (void *)0x0, (void *)0x6, (void *)0x9, (void *)0xC, (void *)0xF, (void *)0x12, (void *)0x15, (void *)0x18, (void *)0x1B, (void *)0x0, (void *)0x6, (void *)0x40, (void *)0x43, (void *)0x46, (void *)0x49, (void *)0x4C, (void *)0x4F, (void *)0x52, (void *)0x55, (void *)0x1E, (void *)0x21, (void *)0x24, (void *)0x27, (void *)0x2A, (void *)0x2D, (void *)0x30, (void *)0x33, (void *)&lbl_8035D138, (void *)&lbl_8035D140, (void *)&lbl_8035D144, (void *)&lbl_8035D138, (void *)&lbl_8035D148, (void *)&lbl_8035D150, (void *)lbl_80295A90, (void *)&lbl_8035D158, (void *)lbl_80295A9C, (void *)&lbl_8035D160, (void *)&lbl_8035D168, (void *)&lbl_8035D170, (void *)lbl_80295AA8, (void *)&lbl_8035D178, (void *)lbl_80295AB4, (void *)&lbl_8035D138, (void *)0x0, (void *)0x1, (void *)&lbl_8035D148, (void *)0x1, (void *)0x1, (void *)&lbl_8035D150, (void *)0x2, (void *)0x1, (void *)lbl_80295A90, (void *)0x3, (void *)0x1, (void *)&lbl_8035D158, (void *)0x4, (void *)0x1, (void *)lbl_80295A9C, (void *)0x5, (void *)0x1, (void *)&lbl_8035D160, (void *)0x6, (void *)0x1, (void *)&lbl_8035D168, (void *)0x7, (void *)0x1, (void *)&lbl_8035D170, (void *)0x8, (void *)0x1, (void *)lbl_80295AA8, (void *)0x9, (void *)0x1, (void *)&lbl_8035D178, (void *)0xA, (void *)0x1, (void *)lbl_80295AB4, (void *)0xB, (void *)0x1, (void *)0x0, (void *)0x1, (void *)0x2, (void *)0x3, (void *)0x4, (void *)0x5, (void *)0x6, (void *)0x7, (void *)0x8, (void *)0x9, (void *)0xA, (void *)0xB };
static s32 tI[12] = { 0, 3, 6, 9, 11, 12, 13, 16, 19, 20, 21, 22 };
static s32 tB[23] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 1, 3, 3, 1, 1, 1, 1, 1, 1, 3, 3, 3, 3 };
static s32 tS[23] = { 0, 1, 2, 3, 4, 5, 6, 3, 6, 7, 3, 8, 9, 10, 11, 10, 12, 13, 12, 14, 15, 16, 17 };
void *lbl_802B5D70[20] = { (void *)0x0, (void *)0x0, (void *)&fn_80048E4C, (void *)&fn_80249AC4, (void *)&fn_80048D10, (void *)&fn_80048A50, (void *)&fn_80048BC8, (void *)&fn_8023D198, (void *)&fn_80048F58, (void *)&fn_80047DA0, (void *)&fn_80241D80, (void *)&fn_8003F140, (void *)&fn_8003F18C, (void *)&fn_80048528, (void *)&fn_80048AB8, (void *)&fn_802416D4, (void *)&fn_8003F1DC, (void *)&fn_80240054, (void *)&fn_8023F5F4, (void *)&fn_80048B40 };
extern "C" void fn_80047DA0(O *o, s32 idx) {
    s32 *q;
    s32 i;
    s32 t;
    i = tI[idx];
    t = o->f96;
    q = &tB[i];
    while (t > 0) {
        if (*q > t) break;
        t -= tB[i++];
        q++;
    }
    switch (tS[i]) {
    case 0:
        o->f324 = lbl_8035D184;
        o->f328 = lbl_8035D184;
        o->f332 = lbl_8035D184;
        o->f312 = fn_8023F4A0(o, lbl_8035D188, lbl_8035D188, (char *)"AmbientFlashOn", 0);
        o->f316 = fn_8023F4A0(o, lbl_8035D188, lbl_8035D188, (char *)"AmbientFlashOff", 0);
        o->f320 = fn_8023F4A0(o, lbl_8035D188, lbl_8035D188, (char *)"LightStartColor", 0);
        o->f424 = fn_8023F4A0(o, lbl_8035D188, lbl_8035D18C, (char *)"AmbientCycleHigh", 0);
        o->f428 = fn_8023F4A0(o, lbl_8035D188, lbl_8035D18C, (char *)"AmbientCycleLow", 0);
        o->f368 = (C4 *)((u8 *)lbl_8035B65C + 88);
        if (!o->f312 && !o->f316) {
            H *h = o->f224->f156;
            if (h && h->f4 == 15) {
                N16 *y = h->f48;
                if (y) lbl_803286D0.f304(y->f16, &o->f340);
                else { o->f340.x = lbl_8035D184; o->f340.y = lbl_8035D184; o->f340.z = lbl_8035D184; }
                o->f396 = o->f224->f156;
                o->f392 = o->f396->f108;
                if (!o->f320) o->f352 = o->f392->f16->f20;
            }
        }
        if (o->f396 && !o->f396->f64) {
            fn_8019AE40(lbl_8035B65C->f12, o->f396);
            fn_8019AE40(lbl_8035B65C->f116->f484, o->f396);
        }
        break;
    case 1:
        if (o->f284 && *o->f284) On(o);
        else Off(o);
        break;
    case 2:
        if (o->f288 && *o->f288) On(o);
        else Off(o);
        break;
    case 3: return;
    case 4:
        if (o->f284 && *o->f284) Off(o);
        break;
    case 5:
        if (o->f288 && *o->f288) Off(o);
        break;
    case 6: fn_802494A4(o, 1); break;
    case 7: fn_802494A4(o, 2); break;
    case 8: __ct__9C80253F24Fiiii(lbl_8035B65C, lbl_8035D160, 0, 0, 0); break;
    case 9: __ct__9C80253F24Fiiii(lbl_8035B65C, lbl_8035D168, 0, 0, 0); break;
    case 10: fn_800483EC(o, 0); break;
    case 11: fn_800483EC(o, 1); break;
    case 12:
        if (o->f316) *o->f368 = o->f376;
        Restore(o);
        break;
    case 13:
        if (o->f312) *o->f368 = o->f376;
        Restore(o);
        break;
    case 14:
        o->f420 = 1;
        o->f416 = lbl_8035D184;
        break;
    case 15:
        o->f420 = 0;
        if (!o->f372) {
            o->f376 = *o->f368;
            o->f372 = 1;
        }
        *o->f368 = o->f376;
        break;
    case 16: o->f224->f572 = 1; break;
    case 17: o->f224->f572 = 0; break;
    case 18: break;
    }
}

} /* extern "C" */

} /* namespace m80047DA0 */

namespace m800483EC {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

typedef struct { f32 r, g, b, a; } ColorF;
extern const char lbl_80295B14[16] = "DiffuseColor";
void *fn_8023F4A0(void *p, char *a, char *b, char *name, s32 x);

void fn_800483EC(void *p, s32 on) {
    ColorF *s;
    ColorF *d;
    f32 r, g, b, a;
    f32 a2, b2, g2, r2;
    u32 *f;
    if ((on != 0 && M2C_FIELD(p, void **, 0x138) != 0) || (on == 0 && M2C_FIELD(p, void **, 0x13c) != 0)) {
        if (on != 0) {
            s = M2C_FIELD(M2C_FIELD(p, void **, 0x138), ColorF **, 0xc);
            a = s->a; r = s->r; g = s->g; b = s->b;
        } else {
            s = M2C_FIELD(M2C_FIELD(p, void **, 0x13c), ColorF **, 0xc);
            a = s->a; r = s->r; g = s->g; b = s->b;
        }
        d = M2C_FIELD(p, ColorF **, 0x170);
        d->r = r; d->g = g; d->b = b; d->a = a;
    }
    M2C_FIELD(p, void **, 0x134) = fn_8023F4A0(p, lbl_8035D188, lbl_8035D188, (char *)lbl_80295B14, 0);
    if (M2C_FIELD(p, void **, 0x134) != 0) {
        s = M2C_FIELD(M2C_FIELD(p, void **, 0x134), ColorF **, 0xc);
        a2 = s->a; b2 = s->b; g2 = s->g; r2 = s->r;
        d = (ColorF *)((u8 *)M2C_FIELD(M2C_FIELD(p, void **, 0x188), void **, 0x10) + 0x14);
        d->r = r2; d->g = g2; d->b = b2; d->a = a2;
    }
    f = M2C_FIELD(p, u32 **, 0x18c);
    if (f != 0 && M2C_FIELD(p, s32 **, 0x128) != 0 && *M2C_FIELD(p, s32 **, 0x128) != 0 && on == 0) {
        *f |= lbl_8035D180;
    }
}

} /* extern "C" */

} /* namespace m800483EC */

namespace m80048528 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

typedef struct { f32 r, g, b, a; } ColorF;
typedef struct { f32 x, y, z; } Vec3;
struct E { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12();
  virtual void get(void *, s32, s32, s32, s32); virtual void set(void *, s32, s32, s32, s32); };
int rand(void);
double fn_800F030C(double);

static inline f32 frand10() { s32 i = rand() % 10000u; return lbl_8035D198 * (f32)i; }
static inline f32 frand5() { s32 i = rand() % 5000u; return lbl_8035D198 * (f32)i; }
#define frand(n) frand##n()
#define RR(fld, n, c) { s32 ri = rand() % (n##000u); f32 r = lbl_8035D198 * (f32)ri; r = fld + (r - c); fld = r; }

static inline void lerpc(ColorF *o, ColorF *b, ColorF *a, f32 t) {
    ColorF c;
    c.r = t * (b->r - a->r) + a->r;
    c.g = t * (b->g - a->g) + a->g;
    c.b = t * (b->b - a->b) + a->b;
    c.a = t * (b->a - a->a) + a->a;
    *o = c;
}

struct S {
    u8 pad0[0xe0];
    E * fe0;
    u8 pade4[0x34];
    s32 * f118;
    u8 pad11c[0x8];
    void * f124;
    u8 pad128[0x18];
    void * f140;
    f32 f144;
    f32 f148;
    f32 f14c;
    f32 f150;
    u8 pad154[0xc];
    f32 f160;
    f32 f164;
    f32 f168;
    f32 f16c;
    ColorF * f170;
    s32 f174;
    u8 pad178[0x28];
    f32 f1a0;
    s32 f1a4;
    void * f1a8;
    void * f1ac;
    f32 * f1b0;
};

void fn_80048528(S *p, f32 dt) {
    void *e;
    void *q;
    ColorF *c;
    ColorF *d;
    Vec3 v;
    f32 r, g, b, a;
    f32 k;
    if (p->f174 == 0) {
        *(ColorF *)((u8 *)p + 0x178) = *p->f170;
        p->f174 = 1;
    }
    if (p->f118 != 0 && *p->f118 != 0) {
    RR(p->f144, 10, lbl_8035D194)
    if (p->f144 > lbl_8035D19C) p->f144 -= lbl_8035D1A0;
    if (p->f144 < lbl_8035D1A4) p->f144 += lbl_8035D1A0;
    RR(p->f148, 10, lbl_8035D194)
    if (p->f148 > lbl_8035D19C) p->f148 -= lbl_8035D1A0;
    if (p->f148 < lbl_8035D1A4) p->f148 += lbl_8035D1A0;
    RR(p->f14c, 10, lbl_8035D194)
    if (p->f14c > lbl_8035D19C) p->f14c -= lbl_8035D1A0;
    if (p->f14c < lbl_8035D1A4) p->f14c += lbl_8035D1A0;
    if (p->f124 != 0 && (u32)p + 0x124 != 0) {
        p->fe0->get((u8 *)p + 0x154, 0, 0, 0, 0);
    }
    v = *(Vec3 *)((u8 *)p + 0x154);
    v.x += lbl_8035D1A8 * (f32)fn_800F030C(p->f144);
    v.y += lbl_8035D1A8 * (f32)fn_800F030C(p->f148);
    v.z += lbl_8035D1A8 * (f32)fn_800F030C(p->f14c);
    p->fe0->set(&v, 0, 0, 0, 0);
    RR(p->f150, 5, lbl_8035D1AC)
    while (p->f150 > lbl_8035D19C) p->f150 -= lbl_8035D1A0;
    while (p->f150 < lbl_8035D1A4) p->f150 += lbl_8035D1A0;
    k = lbl_8035D1B4 * (f32)fn_800F030C(p->f150) + lbl_8035D1B0;
    if (k > *(f32 *)&lbl_8035D1B8) k = lbl_8035D1B8;
    q = M2C_FIELD(p->fe0, void **, 0x9c);
    if (q != 0) {
        void *s = p->f140;
        void *m = M2C_FIELD(q, void **, 0x6c);
        if (s == 0) {
            r = p->f160 * k;
            g = p->f164 * k;
            b = p->f168 * k;
            a = p->f16c * k;
        } else {
            c = M2C_FIELD(s, ColorF **, 0xc);
            a = c->a * k; r = c->r; r = r * k; g = c->g * k; b = c->b * k;
        }
        d = (ColorF *)((u8 *)M2C_FIELD(m, void **, 0x10) + 0x14);
        d->r = r; d->g = g; d->b = b; d->a = a;
    }
    }
    if (p->f1a4 == 1 && p->f1ac != 0 && p->f1a8 != 0 && p->f1b0 != 0) {
        f32 half, t;
        ColorF *a0, *b0, *o;
        p->f1a0 += dt;
        if (p->f1a0 >= *p->f1b0) p->f1a0 -= *p->f1b0;
{
        f32 per = *p->f1b0; f32 one = lbl_8035D1B8;
        ColorF *A = M2C_FIELD(p->f1ac, ColorF **, 0xc);
        ColorF *B = M2C_FIELD(p->f1a8, ColorF **, 0xc);
        f32 br, bg, bb, ba, ar, ag, ab, aa;
        ar = A->r;
        br = B->r;
        ag = A->g;
        bg = B->g;
        ab = A->b;
        bb = B->b;
        aa = A->a;
        ba = B->a;
        t = one - (f32)__fabs(per * lbl_8035D194 - p->f1a0) / (per * lbl_8035D194);
        o = p->f170;
        o->r = t * (br - ar) + ar;
        o->g = t * (bg - ag) + ag;
        o->b = t * (bb - ab) + ab;
        o->a = t * (ba - aa) + aa;
        }
    }
}

} /* extern "C" */

} /* namespace m80048528 */

namespace m80048A50 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

extern s32 lbl_8035B65C;
void fn_8019AD10(int, int);
void fn_80242210(int);

void fn_80048A50(s32 param_1) {
    if ((*(u32 *)(param_1 + 0x18c) != 0) && (*(u32 *)(*(u32 *)(param_1 + 0x18c) + 0x40) != 0)) {
        fn_8019AD10((int)(*(u32 *)(lbl_8035B65C + 0xc)), (int)(*(u32 *)(param_1 + 0x18c)));
        fn_8019AD10((int)(*(u32 *)(*(u32 *)(lbl_8035B65C + 0x74) + 0x1e4)), (int)(*(u32 *)(param_1 + 0x18c)));
    }
    fn_80242210((int)(param_1));
}

} /* extern "C" */

} /* namespace m80048A50 */

namespace m80048AB8 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

} /* extern "C" */

extern "C" {
extern char lbl_80295A90[];
extern char lbl_8035D150[0x8];
extern char lbl_8035D160[0x8];
extern char lbl_8035D168[0x8];
struct VCall_fn_80048AB8_0 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void m(int); };
struct VCall_fn_80048AB8_1 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void m(int); };
struct VCall_fn_80048AB8_2 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void m(int); };
struct VCall_fn_80048AB8_3 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void m(int); };

void fn_80048AB8(s32 *param_1) {
    ((VCall_fn_80048AB8_0 *)(param_1))->m((s32)(lbl_8035D150)); /* "LIGHTON" */
    ((VCall_fn_80048AB8_1 *)(param_1))->m((s32)(lbl_80295A90)); /* "LIGHTOFF" */
    ((VCall_fn_80048AB8_2 *)(param_1))->m((s32)(lbl_8035D160)); /* "FLSHON" */
    ((VCall_fn_80048AB8_3 *)(param_1))->m((s32)(lbl_8035D168)); /* "FLSHOFF" */
}
}

} /* namespace m80048AB8 */

namespace m80048B40 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

} /* extern "C" */

extern "C" {
extern char lbl_80295A90[];
extern char lbl_8035D150[0x8];
extern char lbl_8035D160[0x8];
extern char lbl_8035D168[0x8];
struct VCall_fn_80048B40_0 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void m(int); };
struct VCall_fn_80048B40_1 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void m(int); };
struct VCall_fn_80048B40_2 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void m(int); };
struct VCall_fn_80048B40_3 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void m(int); };

void fn_80048B40(s32 *param_1) {
    ((VCall_fn_80048B40_0 *)(param_1))->m((s32)(lbl_8035D150)); /* "LIGHTON" */
    ((VCall_fn_80048B40_1 *)(param_1))->m((s32)(lbl_80295A90)); /* "LIGHTOFF" */
    ((VCall_fn_80048B40_2 *)(param_1))->m((s32)(lbl_8035D160)); /* "FLSHON" */
    ((VCall_fn_80048B40_3 *)(param_1))->m((s32)(lbl_8035D168)); /* "FLSHOFF" */
}
}

} /* namespace m80048B40 */

namespace m80048BC8 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

extern f32 lbl_8035D184;
void fn_80241E0C(void *);

void fn_80048BC8(u8 *p) {
    *(s32 *)(p + 280) = 0;
    *(s32 *)(p + 284) = 0;
    *(s32 *)(p + 288) = 0;
    *(s32 *)(p + 292) = 0;
    *(s32 *)(p + 296) = 0;
    *(s32 *)(p + 300) = 0;
    *(s32 *)(p + 304) = 0;
    *(s32 *)(p + 308) = 0;
    *(s32 *)(p + 312) = 0;
    *(s32 *)(p + 316) = 0;
    *(s32 *)(p + 320) = 0;
    *(f32 *)(p + 336) = lbl_8035D184;
    *(s32 *)(p + 368) = 0;
    *(s32 *)(p + 372) = 0;
    *(s32 *)(p + 392) = 0;
    *(s32 *)(p + 396) = 0;
    *(s32 *)(p + 420) = 0;
    *(s32 *)(p + 424) = 0;
    *(s32 *)(p + 428) = 0;
    *(s32 *)(p + 432) = 0;
    fn_80241E0C(p);
}

} /* extern "C" */

} /* namespace m80048BC8 */

namespace m80048C40 {
/* Functions from 0x80048C40 to 0x80048D10, found by decomp-toolkit. */

extern "C" {

extern u8 lbl_802B5970[];
extern f32 lbl_8035D184;

#pragma opt_propagation off
void fn_80048C40(u8 *p) {
    u8 *base = lbl_802B5970;
    M2C_FIELD(p, s32 *, 84) = 12;
    M2C_FIELD(p, s32 *, 44) = 12;
    M2C_FIELD(p, s32 *, 104) = 3;
    M2C_FIELD(p, s32 *, 92) = 0;
    M2C_FIELD(p, s32 *, 128) = 0;
    M2C_FIELD(p, s32 *, 124) = 0;
    M2C_FIELD(p, s32 *, 132) = 0;
    M2C_FIELD(p, s32 *, 136) = 0;
    M2C_FIELD(p, s32 *, 140) = 0;
    M2C_FIELD(p, s32 *, 148) = 0;
    M2C_FIELD(p, u8 **, 88) = base + 552;
    M2C_FIELD(p, u8 **, 40) = base + 600;
    M2C_FIELD(p, u8 **, 48) = base + 744;
    M2C_FIELD(p, u8 **, 108) = base + 540;
    M2C_FIELD(p, s32 *, 120) = 0;
    M2C_FIELD(p, s32 *, 196) = 0;
    M2C_FIELD(p, s32 *, 200) = 0;
    M2C_FIELD(p, s32 *, 204) = 0;
    M2C_FIELD(p, s32 *, 244) = 0;
    M2C_FIELD(p, s32 *, 252) = 0;
    M2C_FIELD(p, s32 *, 268) = 0;
    M2C_FIELD(p, s32 *, 280) = 0;
    M2C_FIELD(p, s32 *, 284) = 0;
    M2C_FIELD(p, s32 *, 288) = 0;
    M2C_FIELD(p, s32 *, 292) = 0;
    M2C_FIELD(p, s32 *, 296) = 0;
    M2C_FIELD(p, s32 *, 300) = 0;
    M2C_FIELD(p, s32 *, 304) = 0;
    M2C_FIELD(p, s32 *, 308) = 0;
    M2C_FIELD(p, s32 *, 312) = 0;
    M2C_FIELD(p, s32 *, 316) = 0;
    M2C_FIELD(p, s32 *, 320) = 0;
    M2C_FIELD(p, f32 *, 336) = lbl_8035D184;
    M2C_FIELD(p, s32 *, 368) = 0;
    M2C_FIELD(p, s32 *, 372) = 0;
    M2C_FIELD(p, s32 *, 392) = 0;
    M2C_FIELD(p, s32 *, 396) = 0;
    M2C_FIELD(p, s32 *, 420) = 0;
    M2C_FIELD(p, s32 *, 424) = 0;
    M2C_FIELD(p, s32 *, 428) = 0;
    M2C_FIELD(p, s32 *, 432) = 0;
}
#pragma opt_propagation reset

} /* extern "C" */

} /* namespace m80048C40 */

namespace m80048D10 {
extern "C" {
__declspec(section ".sdata2") char lbl_8035D1C8[8] = "Flicker";
__declspec(section ".sdata2") char lbl_8035D1D0[8] = "Sound";
extern const char lbl_80295B24[0x5C] = {0x4C, 0x69, 0x67, 0x68, 0x74, 0x4F, 0x6E, 0x4C, 0x69, 0x67, 0x68, 0x74, 0x00, 0x00, 0x00, 0x00, 0x4C, 0x69, 0x67, 0x68, 0x74, 0x4F, 0x66, 0x66, 0x4C, 0x69, 0x67, 0x68, 0x74, 0x00, 0x00, 0x00, 0x41, 0x63, 0x74, 0x6F, 0x72, 0x52, 0x65, 0x6C, 0x61, 0x74, 0x69, 0x76, 0x65, 0x00, 0x00, 0x00, 0x4C, 0x69, 0x67, 0x68, 0x74, 0x46, 0x6C, 0x61, 0x73, 0x68, 0x00, 0x00, 0x49, 0x67, 0x6E, 0x69, 0x74, 0x65, 0x53, 0x6F, 0x75, 0x6E, 0x64, 0x00, 0x41, 0x6D, 0x62, 0x69, 0x65, 0x6E, 0x74, 0x43, 0x79, 0x63, 0x6C, 0x65, 0x54, 0x69, 0x6D, 0x65, 0x00, 0x00, 0x00, 0x00};
}
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

#pragma opt_propagation off
extern char lbl_8035D188[4];
extern char lbl_8035D18C[8];
extern char lbl_80295A90[];
u32 fn_8023F52C(void *, char *, char *, char *, s32, s32);
void fn_8023F214(void *);

void fn_80048D10(u8 *p) {
    char *s = lbl_80295A90;
    *(u32 *)(p + 0x118) = fn_8023F52C(p, lbl_8035D188, lbl_8035D188, lbl_8035D1C8, 0, 0);
    *(u32 *)(p + 0x11c) = fn_8023F52C(p, lbl_8035D188, lbl_8035D188, s + 148, 0, 0);
    *(u32 *)(p + 0x120) = fn_8023F52C(p, lbl_8035D188, lbl_8035D188, s + 164, 0, 0);
    *(u32 *)(p + 0x124) = fn_8023F52C(p, lbl_8035D188, lbl_8035D188, s + 180, 0, 0);
    *(u32 *)(p + 0x128) = fn_8023F52C(p, lbl_8035D188, lbl_8035D188, s + 196, 0, 0);
    *(u32 *)(p + 0x12c) = fn_8023F52C(p, lbl_8035D188, lbl_8035D188, s + 208, 0, 0);
    *(u32 *)(p + 0x130) = fn_8023F52C(p, lbl_8035D188, lbl_8035D188, lbl_8035D1D0, 0, 0);
    *(u32 *)(p + 0x1b0) = fn_8023F52C(p, lbl_8035D188, lbl_8035D18C, s + 220, 0, 0);
    fn_8023F214(p);
}
#pragma opt_propagation reset

} /* extern "C" */

} /* namespace m80048D10 */

namespace m80048E4C {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

} /* extern "C" */

extern "C" {
extern u8 lbl_802B5D70[];
void __dl__FPv(int);
void __dt__9C8024262CFv(int, int);
struct VCall_fn_80048E4C_0 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void m(); };

s32 * fn_80048E4C(s32 *param_1, s16 param_2) {
    if (param_1 != (s32 *)0x0) {
        *param_1 = (s32)lbl_802B5D70;
        ((VCall_fn_80048E4C_0 *)(param_1))->m();
        __dt__9C8024262CFv((int)(param_1), (int)(0));
        if (0 < param_2) {
            __dl__FPv((int)(param_1));
        }
    }
    return param_1;
}
}

} /* namespace m80048E4C */


#pragma optEH2 on

extern "C" {

extern void *lbl_8035B530;
extern u8 lbl_802B5D70[];
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
void fn_80048C40(void *);

} /* extern "C" */

struct C8024262C {
    C8024262C();
    ~C8024262C();
};

struct C80048EC0 : C8024262C {
    u8 pad[0x1B4];
    C80048EC0() {
        *(void **)this = lbl_802B5D70;
        fn_80048C40(this);
    }
};

extern "C" void *fn_80048EC0(void) {
    C80048EC0 *r;
    if (lbl_8035B530 == NULL) {
        fn_800604C4(-2, 0, 0, 0);
    }
    fn_800F7EC0(lbl_8035B530);
    r = new C80048EC0;
    fn_800F7E98();
    if (r == NULL) {
        fn_800604C4(-4, 0, 0, 0);
    }
    return r;
}


namespace m80048F58 {
extern "C" {
/* Functions from 0x80048F58 to 0x80048F60, found by decomp-toolkit. */

s32 fn_80048F58(void) {
    return 1;
}

}

} /* namespace m80048F58 */

namespace m80048F60 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035A124;
extern volatile f32 lbl_8035A120;
__declspec(section ".sdata2") f64 lbl_8035D1D8 = 0.3490658402442932;
double fn_800EFDA4(double);
void *fn_8023DC5C(void *, void *, void *, void *, s32);
void __register_global_object(void *, void *, void *);
extern u8 lbl_8030283C[];
extern const char lbl_80295B80[9] = "Behavior";
__declspec(section ".sdata2") char lbl_8035D1E0[8] = "BLite";
void fn_80048EC0(void);
void fn_800375E4(void);
extern u8 lbl_80302830[];

void fn_80048F60(void) {
    lbl_8035A124 = lbl_803596E0[0];
    lbl_8035A120 = fn_800EFDA4(*(volatile f64 *)&lbl_8035D1D8);
    __register_global_object(fn_8023DC5C(lbl_8030283C, (void *)lbl_80295B80, lbl_8035D1E0, (void *)fn_80048EC0, 436), (void *)fn_800375E4, lbl_80302830);
}

__declspec(section ".ctors") static void (*const ctor_80048F60)(void) = fn_80048F60;

} /* extern "C" */

} /* namespace m80048F60 */
