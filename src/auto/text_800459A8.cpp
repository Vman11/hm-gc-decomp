// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

#include "common.h"
extern "C" {
struct VO { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void getPos(void *p, void *a, int b, int c, int d); virtual void setPos(void *a, void *b, void *c, void *d, int e); virtual void w15(); virtual void w16(); virtual void hideA(); virtual void w18(); virtual void showA(); virtual void w20(); virtual void w21(); virtual void w22(); virtual void w23(); virtual void w24(); virtual void w25(); virtual void w26(); virtual void w27(); virtual void w28(); virtual void w29(); virtual void w30(); virtual void w31(); virtual void w32(); virtual void send(void *msg, u32 to, int a, void *d, int b); };
void fn_8003F140();
void fn_8003F18C();
void fn_8003F1DC();
void fn_800459A8(int p, int st);
void fn_800468E4();
void fn_80046988();
void fn_80046A2C();
void fn_80046A4C();
void fn_80046BB8();
void fn_80046CF4();
void fn_80046E00();
void fn_80046E50();
void fn_8023D198();
void fn_80240054();
void fn_802416D4();
void fn_80241D80();
void fn_80242210();
void fn_80249AC4();
extern char lbl_802957C8[];
extern char lbl_802957D4[];
extern char lbl_802957E0[];
extern char lbl_802957EC[];
extern char lbl_802957F8[];
extern char lbl_80295804[];
extern char lbl_80295810[];
extern char lbl_8029581C[];
extern char lbl_80295828[];
extern char lbl_80295834[];
extern char lbl_80295840[];
extern char lbl_8029584C[];
extern char lbl_80295858[];
extern char lbl_80295864[];
extern char lbl_80295870[];
extern char lbl_8029587C[];
extern char lbl_80295888[];
extern char lbl_80295894[];
extern char lbl_802958A0[];
extern char lbl_802958AC[];
extern char lbl_802958B8[];
extern char lbl_802958C4[];
extern char lbl_802958D0[];
extern char lbl_802958DC[];
extern char lbl_802958E8[];
extern char lbl_802958F4[];
extern char lbl_80295900[];
extern char lbl_8029590C[];
extern char lbl_8035CC60[];
extern char lbl_8035CC68[];
extern char lbl_8035CC70[];
extern char lbl_8035CC78[];
extern char lbl_8035CC80[];
extern char lbl_8035CC88[];
extern char lbl_8035CC90[];
extern char lbl_8035CC98[];
extern char lbl_8035CCA0[];
extern char lbl_8035CCA8[];
extern char lbl_8035CCB0[];
extern char lbl_8035CCB8[];
extern char lbl_8035CCC0[];
extern char lbl_8035CCC4[];
extern char lbl_8035CCCC[];
extern char lbl_8035CCD4[];
extern char lbl_8035CCDC[];
extern char lbl_8035CCE4[];
extern char lbl_8035CCEC[];
extern char lbl_8035CCF4[];
extern char lbl_8035CCFC[];
extern char lbl_8035CD04[];
extern char lbl_8035CD0C[];
extern char lbl_8035CD14[];
extern char lbl_8035CD1C[4], lbl_8035CE60[4], lbl_8035CE4C[4], lbl_8035CE68[4], lbl_8035CE70[4], lbl_8035CE78[4], lbl_8035CE80[4], lbl_8035CE88[4], lbl_8035CE90[4], lbl_8035CE98[4], lbl_8035CEA0[4], lbl_8035CEA8[4], lbl_8035CEB0[4], lbl_8035CEB8[4], lbl_8035CEC0[4], lbl_8035CEC8[4], lbl_8035CED0[4], lbl_8035CED8[4], lbl_8035CEE0[4], lbl_8035CEE8[4], lbl_8035CEF0[4], lbl_8035CEF8[4];
extern char lbl_8035CD20[];
extern char lbl_8035CD28[];
extern char lbl_8035CD30[];
extern char lbl_8035CD38[];
extern char lbl_8035CD40[];
extern char lbl_8035CD48[];
extern char lbl_8035CD50[];
extern char lbl_8035CD58[];
extern char lbl_8035CD60[];
extern char lbl_8035CD68[];
extern char lbl_8035CD70[];
extern char lbl_8035CD78[];
extern char lbl_8035CD80[];
extern char lbl_8035CD84[];
extern char lbl_8035CD8C[];
extern char lbl_8035CD94[];
extern char lbl_8035CD9C[];
extern char lbl_8035CDA4[];
extern char lbl_8035CDAC[];
extern char lbl_8035CDB4[];
extern char lbl_8035CDBC[];
extern char lbl_8035CDC4[];
extern char lbl_8035CDCC[];
extern char lbl_8035CDD4[];
extern char lbl_8035CDDC[];
extern char lbl_8035CDE4[];
extern char lbl_8035CDEC[];
extern char lbl_8035CDF4[];
extern char lbl_8035CDFC[];
extern char lbl_8035CE04[];
extern char lbl_8035CE0C[];
extern char lbl_8035CE14[];
extern char lbl_8035CE1C[];
void *lbl_802B4390[433] = { (void *)0x0, (void *)0xFA, (void *)0x1F4, (void *)0x2EE, (void *)0x55495C4D, (void *)0x454D4341, (void *)0x52445C00, (void *)0x41545449, (void *)0x43000000, (void *)0x42414C4C, (void *)0x524F4F4D, (void *)0x4348494C, (void *)0x4452454E, (void *)0x434F4E53, (void *)0x45525600, (void *)0x44494E52, (void *)0x4F4F4D00, (void *)0x464F5945, (void *)0x52000000, (void *)0x47414C4C, (void *)0x45525900, (void *)0x47524156, (void *)0x45594400, (void *)0x47524F4F, (void *)0x4D000000, (void *)0x47525448, (void *)0x414C4C00, (void *)0x47554553, (void *)0x54000000, (void *)0x48414C4C, (void *)0x41420000, (void *)0x48414C4C, (void *)0x43440000, (void *)0x4B495443, (void *)0x48454E00, (void *)0x4C414200, (void *)0x0, (void *)0x4D555345, (void *)0x554D0000, (void *)0x4D414944, (void *)0x0, (void *)0x4D415354, (void *)0x52424544, (void *)0x4D415553, (void *)0x4F4C4D00, (void *)0x4D454153, (void *)0x55524500, (void *)0x544F5952, (void *)0x4F4F4D00, (void *)0x4F425345, (void *)0x52560000, (void *)0x50414E54, (void *)0x52590000, (void *)0x5041524C, (void *)0x4F520000, (void *)0x53495454, (void *)0x494E4700, (void *)0x53545245, (void *)0x54434800, (void *)0x53554E52, (void *)0x4F4F4D00, (void *)0x57494E54, (void *)0x45520000, (void *)0x5449544C, (void *)0x45000000, (void *)0x53504952, (void *)0x49540000, (void *)0x474C4F42, (void *)0x414C0000, (void *)0x0, (void *)0x28, (void *)0x0, (void *)0x0, (void *)0x28, (void *)0x0, (void *)0x0, (void *)0x28, (void *)0x0, (void *)0x0, (void *)0x3F800000, (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x40000000, (void *)0x0, (void *)0x3F800000, (void *)0x3F800000, (void *)0x0, (void *)0xBF800000, (void *)0x3F800000, (void *)0x0, (void *)0x0, (void *)0x3F800000, (void *)0x3F800000, (void *)0x0, (void *)0x3F800000, (void *)0xBF800000, (void *)0x0, (void *)0x6, (void *)0x9, (void *)0xC, (void *)0xF, (void *)0x12, (void *)0x15, (void *)0x18, (void *)0x1B, (void *)0x0, (void *)0x6, (void *)0x9, (void *)0xC, (void *)0xF, (void *)0x12, (void *)0x15, (void *)0x18, (void *)0x1B, (void *)0x0, (void *)0x6, (void *)0x40, (void *)0x43, (void *)0x46, (void *)0x49, (void *)0x4C, (void *)0x4F, (void *)0x52, (void *)0x55, (void *)0x1E, (void *)0x21, (void *)0x24, (void *)0x27, (void *)0x2A, (void *)0x2D, (void *)0x30, (void *)0x33, (void *)&lbl_802957C8, (void *)&lbl_8035CC60, (void *)&lbl_802957C8, (void *)&lbl_8035CC68, (void *)&lbl_8035CC70, (void *)&lbl_8035CC78, (void *)&lbl_8035CC80, (void *)&lbl_8035CC88, (void *)&lbl_8035CC90, (void *)&lbl_8035CC98, (void *)&lbl_8035CCA0, (void *)&lbl_8035CC90, (void *)&lbl_8035CCA8, (void *)&lbl_8035CCB0, (void *)&lbl_8035CC90, (void *)&lbl_8035CCB8, (void *)&lbl_8035CCC0, (void *)&lbl_8035CC90, (void *)&lbl_8035CCC4, (void *)&lbl_8035CCCC, (void *)&lbl_8035CC90, (void *)&lbl_8035CCD4, (void *)&lbl_8035CCDC, (void *)&lbl_8035CC90, (void *)&lbl_8035CCE4, (void *)&lbl_8035CCEC, (void *)&lbl_8035CC90, (void *)&lbl_8035CCF4, (void *)&lbl_802957D4, (void *)&lbl_8035CC90, (void *)&lbl_8035CCFC, (void *)&lbl_8035CD04, (void *)&lbl_8035CC90, (void *)&lbl_8035CD0C, (void *)&lbl_8035CD14, (void *)&lbl_8035CD14, (void *)&lbl_8035CD1C, (void *)&lbl_8035CD1C, (void *)&lbl_8035CD20, (void *)&lbl_8035CD28, (void *)&lbl_8035CD1C, (void *)&lbl_8035CD1C, (void *)&lbl_8035CD20, (void *)&lbl_802957E0, (void *)&lbl_8035CD1C, (void *)&lbl_8035CD1C, (void *)&lbl_8035CD20, (void *)&lbl_802957EC, (void *)&lbl_8035CD1C, (void *)&lbl_8035CD1C, (void *)&lbl_8035CD20, (void *)&lbl_802957F8, (void *)&lbl_8035CD1C, (void *)&lbl_8035CD1C, (void *)&lbl_8035CD20, (void *)&lbl_80295804, (void *)&lbl_8035CD1C, (void *)&lbl_8035CD1C, (void *)&lbl_8035CD20, (void *)&lbl_80295810, (void *)&lbl_8035CD1C, (void *)&lbl_8035CD1C, (void *)&lbl_8035CD20, (void *)&lbl_8035CD30, (void *)&lbl_8035CD1C, (void *)&lbl_8035CD1C, (void *)&lbl_8035CD1C, (void *)0x40000000, (void *)0x0, (void *)0x0, (void *)&lbl_8035CD38, (void *)0x40000000, (void *)0x0, (void *)0x0, (void *)&lbl_8029581C, (void *)0x40A00000, (void *)0x0, (void *)0x0, (void *)&lbl_80295828, (void *)0x40000000, (void *)0x0, (void *)0x0, (void *)&lbl_80295834, (void *)0x40800000, (void *)0x0, (void *)0x0, (void *)&lbl_80295840, (void *)0x40800000, (void *)0x0, (void *)0x0, (void *)&lbl_8035CD40, (void *)&lbl_8035CD48, (void *)0x0, (void *)0x626F6E65, (void *)0x36520000, (void *)0x0, (void *)&lbl_8035CD50, (void *)&lbl_8035CD58, (void *)&lbl_8035CD60, (void *)&lbl_8035CD68, (void *)&lbl_8035CCEC, (void *)&lbl_802957D4, (void *)&lbl_8035CD70, (void *)&lbl_8029584C, (void *)&lbl_8035CD78, (void *)&lbl_8035CD80, (void *)&lbl_8035CD50, (void *)&lbl_8035CD84, (void *)&lbl_80295858, (void *)&lbl_80295864, (void *)&lbl_80295864, (void *)&lbl_8035CD8C, (void *)&lbl_8035CD94, (void *)&lbl_8035CD40, (void *)&lbl_8035CD9C, (void *)&lbl_80295870, (void *)&lbl_8035CDA4, (void *)&lbl_8035CDAC, (void *)&lbl_8029587C, (void *)&lbl_80295888, (void *)&lbl_8035CDB4, (void *)&lbl_8035CDBC, (void *)&lbl_8035CDC4, (void *)&lbl_8035CDCC, (void *)&lbl_80295894, (void *)&lbl_8035CDD4, (void *)&lbl_8035CDDC, (void *)&lbl_8035CDE4, (void *)&lbl_8035CDEC, (void *)&lbl_8035CDF4, (void *)&lbl_8035CDFC, (void *)&lbl_8035CE04, (void *)&lbl_8035CE0C, (void *)&lbl_8035CE14, (void *)&lbl_8035CE1C, (void *)&lbl_802958A0, (void *)&lbl_802958AC, (void *)&lbl_802958B8, (void *)&lbl_802958C4, (void *)&lbl_802958D0, (void *)&lbl_802958DC, (void *)&lbl_802958E8, (void *)&lbl_802958F4, (void *)&lbl_80295900, (void *)&lbl_8029590C, (void *)&lbl_8035CD50, (void *)0x0, (void *)0x1, (void *)&lbl_8035CD84, (void *)0x1, (void *)0x1, (void *)&lbl_80295858, (void *)0x2, (void *)0x1, (void *)&lbl_80295864, (void *)0x3, (void *)0x2, (void *)&lbl_8035CD8C, (void *)0x5, (void *)0x1, (void *)&lbl_8035CD94, (void *)0x6, (void *)0x1, (void *)&lbl_8035CD40, (void *)0x7, (void *)0x1, (void *)&lbl_8035CD9C, (void *)0x8, (void *)0x1, (void *)&lbl_80295870, (void *)0x9, (void *)0x1, (void *)&lbl_8035CDA4, (void *)0xA, (void *)0x1, (void *)&lbl_8035CDAC, (void *)0xB, (void *)0x1, (void *)&lbl_8029587C, (void *)0xC, (void *)0x1, (void *)&lbl_80295888, (void *)0xD, (void *)0x1, (void *)&lbl_8035CDB4, (void *)0xE, (void *)0x1, (void *)&lbl_8035CDBC, (void *)0xF, (void *)0x1, (void *)&lbl_8035CDC4, (void *)0x10, (void *)0x1, (void *)&lbl_8035CDCC, (void *)0x11, (void *)0x1, (void *)&lbl_80295894, (void *)0x12, (void *)0x1, (void *)&lbl_8035CDD4, (void *)0x13, (void *)0x1, (void *)&lbl_8035CDDC, (void *)0x14, (void *)0x1, (void *)&lbl_8035CDE4, (void *)0x15, (void *)0x1, (void *)&lbl_8035CDEC, (void *)0x16, (void *)0x1, (void *)&lbl_8035CDF4, (void *)0x17, (void *)0x1, (void *)&lbl_8035CDFC, (void *)0x18, (void *)0x1, (void *)&lbl_8035CE04, (void *)0x19, (void *)0x1, (void *)&lbl_8035CE0C, (void *)0x1A, (void *)0x1, (void *)&lbl_8035CE14, (void *)0x1B, (void *)0x1, (void *)&lbl_8035CE1C, (void *)0x1C, (void *)0x1, (void *)&lbl_802958A0, (void *)0x1D, (void *)0x1, (void *)&lbl_802958AC, (void *)0x1E, (void *)0x1, (void *)&lbl_802958B8, (void *)0x1F, (void *)0x1, (void *)&lbl_802958C4, (void *)0x20, (void *)0x1, (void *)&lbl_802958D0, (void *)0x21, (void *)0x1, (void *)&lbl_802958DC, (void *)0x22, (void *)0x1, (void *)&lbl_802958E8, (void *)0x23, (void *)0x1, (void *)&lbl_802958F4, (void *)0x24, (void *)0x1, (void *)&lbl_80295900, (void *)0x25, (void *)0x1, (void *)&lbl_8029590C, (void *)0x26, (void *)0x1, (void *)0x0, (void *)0x1, (void *)0x2, (void *)0x3, (void *)0x4, (void *)0x5, (void *)0x6, (void *)0x7, (void *)0x8, (void *)0x9, (void *)0xA, (void *)0xB, (void *)0xC, (void *)0xD, (void *)0xE, (void *)0xF, (void *)0x10, (void *)0x11, (void *)0x12, (void *)0x13, (void *)0x14, (void *)0x15, (void *)0x16, (void *)0x17, (void *)0x18, (void *)0x19, (void *)0x1A, (void *)0x1B, (void *)0x1C, (void *)0x1D, (void *)0x1E, (void *)0x1F, (void *)0x20, (void *)0x21, (void *)0x22, (void *)0x23, (void *)0x24, (void *)0x25, (void *)0x26 };
static s32 tA[39] = { 0, 10, 17, 24, 27, 32, 35, 40, 42, 45, 48, 50, 55, 59, 62, 67, 73, 75, 79, 82, 84, 86, 88, 90, 92, 94, 96, 98, 100, 102, 104, 106, 108, 110, 112, 114, 116, 118, 120 };
static s32 tB[122] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 4, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 4, 2, 1, 7, 1, 3, 4, 1, 1, 2, 2, 6, 1, 3, 4, 1, 1, 9, 1, 2, 1, 7, 3, 1, 6, 1, 9, 1, 3, 4, 1, 1, 2, 1, 6, 1, 8, 1, 1, 1, 5, 1, 2, 1, 1, 5, 1, 1, 1, 1, 9, 1, 6, 1, 2, 1, 6, 1, 3, 9, 1, 9, 1, 9, 1, 9, 1, 9, 1, 9, 1, 9, 1, 9, 1, 9, 1, 9, 1, 9, 1, 9, 1, 9, 1, 9, 1, 9, 1, 9, 1, 9, 1, 9, 1, 9, 1, 9, 1 };
static s32 tC[122] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 10, 12, 10, 13, 10, 10, 14, 15, 10, 16, 17, 10, 10, 18, 10, 10, 19, 10, 19, 10, 10, 20, 10, 10, 21, 10, 21, 10, 22, 10, 10, 23, 10, 10, 24, 10, 25, 10, 10, 21, 10, 21, 10, 26, 27, 26, 10, 28, 29, 10, 10, 30, 10, 30, 10, 10, 31, 10, 32, 31, 10, 33, 10, 34, 35, 34, 10, 10, 36, 10, 37, 10, 38, 10, 39, 10, 40, 10, 41, 10, 42, 10, 43, 10, 44, 10, 45, 10, 46, 10, 47, 10, 48, 10, 49, 10, 50, 10, 51, 10, 52, 10, 53, 10, 54, 10, 55, 10, 56, 10 };
void *lbl_802B4EC0[20] = { (void *)0x0, (void *)0x0, (void *)&fn_80046CF4, (void *)&fn_80249AC4, (void *)&fn_80046BB8, (void *)&fn_80242210, (void *)&fn_80046A4C, (void *)&fn_8023D198, (void *)&fn_80046E00, (void *)&fn_800459A8, (void *)&fn_80241D80, (void *)&fn_8003F140, (void *)&fn_8003F18C, (void *)&fn_80046A2C, (void *)&fn_800468E4, (void *)&fn_802416D4, (void *)&fn_8003F1DC, (void *)&fn_80240054, (void *)&fn_80046E50, (void *)&fn_80046988 };
typedef struct { f32 x, y, z; } V3;
typedef struct { u32 a[5]; } S5;
extern int rand(void);
extern u32 lbl_8035B308;
extern f32 lbl_8035CE24, lbl_8035CE28, lbl_8035CE40, lbl_8035CE44, lbl_8035CE48, lbl_8035CE54, lbl_8035CE58, lbl_8035CE5C;
extern f64 lbl_8035CE30, lbl_8035CE38;
extern char lbl_8035CD1C[4], lbl_8035CE60[4], lbl_8035CE4C[4], lbl_8035CE68[4], lbl_8035CE70[4], lbl_8035CE78[4], lbl_8035CE80[4], lbl_8035CE88[4], lbl_8035CE90[4], lbl_8035CE98[4], lbl_8035CEA0[4], lbl_8035CEA8[4], lbl_8035CEB0[4], lbl_8035CEB8[4], lbl_8035CEC0[4], lbl_8035CEC8[4], lbl_8035CED0[4], lbl_8035CED8[4], lbl_8035CEE0[4], lbl_8035CEE8[4], lbl_8035CEF0[4], lbl_8035CEF8[4];
int fn_800F6CD0(void *, void *);
void fn_80101820(V3 *);
void fn_8022BCD8(int, void *, void *);
void fn_8022BF30(int, int, int, f32);
int fn_8022C558(int);
int fn_80236AC0(int);
int fn_80236B14(int);
int fn_8023F5E8(int, int);
void fn_8023F764(int, int, S5);
void fn_8023F864(int, int);
void fn_8023F9C8(int, int);
int fn_802401A0(int);
int fn_802401D0(int);
int fn_802402E0(int);
int fn_802405B8(int);
void fn_80240274(int, int);
void fn_80240948(int, char *, int);
void fn_802413D8(int, int, f32, int, int, int);
void fn_80241588(int, int, int, f32);
int fn_80241628(int, int, int);
void fn_80257A4C(int, V3 *);
int fn_80249058(int, int);
int fn_8024909C(int, int);
int fn_802494A4(int, int);

#define E0 (*(VO **)(p + 0xe0))
#define F110 (*(f32 *)((int)E0 + 0x110))
#define I(o) (*(int *)(p + (o)))
#define F(o) (*(f32 *)(p + (o)))
#define PV(o) (*(void **)(p + (o)))
#define SK (*(u8 **)(I(0xc0) + 0xc))

static inline f32 Sq(f32 x) {
    if (x > lbl_8035CE28) {
        const f64 _half = lbl_8035CE30;
        const f64 _three = lbl_8035CE38;
        volatile f32 y;
        f64 g = __frsqrte((f64)x);
        g = _half * g * (_three - g * g * x);
        g = _half * g * (_three - g * g * x);
        g = _half * g * (_three - g * g * x);
        y = x * g;
        return y;
    }
    return x;
}
static inline f32 gsp(u8 *s) { if (*(f32 **)(s + 0xf8) != 0) return **(f32 **)(s + 0xf8); return **(f32 **)(s + 0xb4); }
static inline void restore(int p) {
    u8 *s = SK;
    *(f32 *)(s + 0xbc) = F(0x140);
    *(u32 *)(s + 0xf8) = 0;
}
static inline void hold(int p) {
    u8 *s = SK;
    *(f32 *)(s + 0xbc) = **(f32 **)(p + 0x11c);
    *(u32 *)(s + 0xf8) = I(0x120);
}
static inline void walk(int p, char *name) {
    fn_8023F9C8(p, 0);
    fn_802494A4(p, 6);
    fn_80240274(p, 0);
    fn_80240948(p, name, 0);
}
static inline u32 rmod(u32 n) { u32 r = 0; if (n != 0) r = rand() % n; return r; }
static inline void spd(int p) {
    s32 n;
    f32 v;
    int id;
    int *t;
    int q;
    q = *(int *)(I(0xc0) + 0x10);
    t = *(int **)(q + 0xf4);
    id = t[3] - 1;
    n = (s32)(lbl_8035CE54 * ((f32 *)t[15])[id]);
    if (n < 0) {
        n = -n;
        v = lbl_8035CE58 * (f32)(s32)-rmod(n);
    } else {
        v = lbl_8035CE58 * (f32)(s32)rmod(n);
    }
    *(f32 *)(q + 0xe0) = v;
    *(u32 *)(q + 0xc4) = 0;
    *(u32 *)(q + 0xc0) = 0;
}

void fn_800459A8(int p, int st) {
    s32 *q;
    s32 idx;
    s32 t;
    int i;

    t = *(s32 *)(p + 0x60);
    idx = tA[st];
    for (q = tB + idx; t > 0; q++) {
        if (*q > t) break;
        t -= tB[idx++];
    }
    switch (tC[idx]) {
    case 0: {
        u8 *s;
        F110 = lbl_8035CE24;
        fn_80241628(p, 0, 0);
        fn_8023F864(p, 0);
        fn_8022BF30(I(0xe0), 128, 1, lbl_8035CE28);
        s = SK;
        F(0x140) = *(f32 *)(s + 0xbc);
        { f32 *f8 = *(f32 **)(s + 0xf8); F(0x144) = f8 != 0 ? *f8 : **(f32 **)(s + 0xb4); }
        I(0x138) = *(u32 *)(lbl_8035B308 + 0x48);
        if (PV(0x124) != 0 && fn_800F6CD0(PV(0x124), lbl_8035CD1C) == 0) fn_8022BCD8(I(0xe0), PV(0x124), lbl_8035CD1C);
        if (PV(0x12c) != 0 && **(int **)(p + 0x12c) != 0) fn_802494A4(p, 7);
        fn_802402E0(p);
        break;
    }
    case 1:
        F110 = lbl_8035CE24;
        fn_802401D0(p);
        fn_8023F5E8(p, I(0x138));
        fn_80241628(p, 1, 0);
        fn_80241588(p, 0, 0, lbl_8035CE28);
        fn_8023F9C8(p, 0);
        break;
    case 2:
        if (I(0x14c) != 0) {
            fn_802494A4(p, 8);
        } else {
            V3 b;
            V3 a;
            f32 dx, dy, dz;
            fn_8023F5E8(p, I(0x138));
            fn_80241628(p, 3, 0);
            (*(VO **)(p + 0x138))->getPos(&a, 0, 0, 0, 0);
            E0->getPos(&b, 0, 0, 0, 0);
            dx = a.x - b.x;
            dy = a.y - b.y;
            dz = a.z - b.z;
            if (Sq(dx * dx + dy * dy + dz * dz) > **(f32 **)(p + 0x128)) {
                restore(p);
                fn_80241588(p, 3, 0, lbl_8035CE40);
            } else {
                hold(p);
                fn_80241588(p, 8, 0, lbl_8035CE40);
            }
        }
        break;
    case 3: {
        V3 d;
        V3 b;
        V3 a;
        restore(p);
        fn_8023F5E8(p, 0);
        (*(VO **)(p + 0x138))->getPos(&a, 0, 0, 0, 0);
        E0->getPos(&b, 0, 0, 0, 0);
        d.x = a.x - b.x;
        d.y = a.y - b.y;
        d.z = a.z - b.z;
        fn_80101820(&d);
        d.x *= lbl_8035CE44;
        d.y *= lbl_8035CE44;
        d.z *= lbl_8035CE44;
        a.x += d.x;
        a.y += d.y;
        a.z += d.z;
        fn_80257A4C(*(int *)(I(0xc0) + 0xc), &a);
        fn_80241628(p, 3, 0);
        fn_80241588(p, 2, 0, lbl_8035CE40);
        break;
    }
    case 4:
        restore(p);
        F110 = lbl_8035CE24;
        fn_80241628(p, 0, 0);
        fn_80241588(p, 6, 0, lbl_8035CE40);
        fn_802401A0(p);
        break;
    case 5:
        restore(p);
        F110 = lbl_8035CE24;
        fn_80241628(p, 0, 0);
        fn_80241588(p, 7, 0, lbl_8035CE40);
        fn_802401A0(p);
        break;
    case 6:
        F110 = lbl_8035CE24;
        fn_80241628(p, 4, 0);
        fn_80241588(p, 1, 0, lbl_8035CE48);
        break;
    case 7:
        F110 = lbl_8035CE24;
        fn_80240948(p, lbl_8035CE4C, 0);
        fn_80241628(p, 4, 0);
        fn_80241588(p, 3, 0, lbl_8035CE48);
        fn_80240274(p, 0);
        spd(p);
        break;
    case 8:
        fn_80241628(p, 0, 0);
        fn_80241588(p, 1, 0, lbl_8035CE48);
        fn_8023F864(p, 0);
        break;
    case 9:
        fn_8023F764(p, I(0x110), **(S5 **)(p + 0x10c));
        fn_802402E0(p);
        break;
    case 10:
        return;
    case 11:
        fn_802401D0(p);
        break;
    case 12:
        F110 = lbl_8035CE24;
        fn_8023F5E8(p, I(0x138));
        break;
    case 13:
        fn_8023F9C8(p, 0);
        break;
    case 14:
        fn_802494A4(p, 2);
        break;
    case 15:
        if (I(0xdc) == 4 || I(0xdc) == 5) {
            u8 *s = SK;
            f32 a = F(0x140);
            if (a == *(f32 *)(s + 0xbc)) { f32 d = **(f32 **)(p + 0x11c) - a; *(f32 *)(s + 0xbc) = d * lbl_8035CE5C + a; }
            fn_80241588(p, 8, 0, lbl_8035CE40);
        }
        break;
    case 16:
        fn_80241628(p, 0, 0);
        fn_8023F864(p, 0);
        fn_802402E0(p);
        if (*(int *)((int)E0 + 0x114) == 0) fn_802494A4(p, 9);
        break;
    case 17:
        fn_80241628(p, 0, 0);
        fn_8023F864(p, 0);
        fn_802402E0(p);
        if (*(int *)((int)E0 + 0x114) == 0) fn_802494A4(p, 9);
        break;
    case 18: {
        f32 v = -**(f32 **)(p + 0x118);
        (*(VO **)(p + 0x138))->send(lbl_8035CE60, I(0xe0), 0, &v, 0);
        fn_802494A4(p, 3);
        break;
    }
    case 19:
        fn_802405B8(p);
        break;
    case 20:
        fn_80241588(p, 4, 0, lbl_8035CE40);
        break;
    case 21:
        fn_802494A4(p, 4);
        break;
    case 22:
        F110 = lbl_8035CE24;
        break;
    case 23:
        if (I(0xdc) == 3) {
            hold(p);
            fn_80241588(p, 8, 0, lbl_8035CE40);
        }
        break;
    case 24:
        fn_802494A4(p, 5);
        break;
    case 25:
        if (PV(0x12c) != 0 && **(int **)(p + 0x12c) != 0) fn_802494A4(p, 7);
        else if (*(int *)(I(0x138) + 0x6c4) == 0) fn_802494A4(p, 1);
        else fn_802402E0(p);
        break;
    case 26:
        I(0x14c) = 1;
        break;
    case 27:
        I(0x14c) = 1;
        fn_802494A4(p, 8);
        break;
    case 28:
        I(0x14c) = 0;
        break;
    case 29:
        I(0x14c) = 0;
        fn_802494A4(p, 2);
        break;
    case 30:
        fn_80236B14(I(0xe0));
        for (i = 0; i < I(0x5c); i++) fn_80249058(p, i);
        fn_8023F864(p, 0);
        break;
    case 31:
        fn_80236AC0(I(0xe0));
        for (i = 0; i < I(0x5c); i++) fn_8024909C(p, i);
        if (fn_8022C558(I(0xe0)) != 0) fn_8023F9C8(p, 0);
        break;
    case 32:
        fn_80236AC0(I(0xe0));
        for (i = 0; i < I(0x5c); i++) fn_8024909C(p, i);
        break;
    case 33:
        if (PV(0xf0) != 0) fn_802413D8(p, I(0xf0), lbl_8035CE48, 0, 0, 0);
        break;
    case 34:
        fn_80241628(p, 0, 0);
        fn_8023F864(p, 0);
        fn_802402E0(p);
        break;
    case 35:
        fn_802494A4(p, 9);
        break;
    case 36:
        fn_802401D0(p);
        fn_802494A4(p, 2);
        break;
    case 37:
        walk(p, lbl_8035CE4C);
        break;
    case 38:
        walk(p, lbl_8035CE68);
        break;
    case 39:
        walk(p, lbl_8035CE70);
        break;
    case 40:
        walk(p, lbl_8035CE78);
        break;
    case 41:
        walk(p, lbl_8035CE80);
        break;
    case 42:
        walk(p, lbl_8035CE88);
        break;
    case 43:
        walk(p, lbl_8035CE90);
        break;
    case 44:
        walk(p, lbl_8035CE98);
        break;
    case 45:
        walk(p, lbl_8035CEA0);
        break;
    case 46:
        walk(p, lbl_8035CEA8);
        break;
    case 47:
        walk(p, lbl_8035CEB0);
        break;
    case 48:
        walk(p, lbl_8035CEB8);
        break;
    case 49:
        walk(p, lbl_8035CEC0);
        break;
    case 50:
        walk(p, lbl_8035CEC8);
        break;
    case 51:
        walk(p, lbl_8035CED0);
        break;
    case 52:
        walk(p, lbl_8035CED8);
        break;
    case 53:
        walk(p, lbl_8035CEE0);
        break;
    case 54:
        walk(p, lbl_8035CEE8);
        break;
    case 55:
        walk(p, lbl_8035CEF0);
        break;
    case 56:
        walk(p, lbl_8035CEF8);
        break;
    case 57:
        break;
    }
}
}

} /* extern "C" */
