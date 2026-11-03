#include "common.h"
namespace m8008CB4C {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

#include "common.h"
extern "C" {
struct VO { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void getPos(void *p, void *a, int b, int c, int d); virtual void setPos(void *a, void *b, void *c, void *d, int e); virtual void w15(); virtual void w16(); virtual void w17(); virtual void w18(); virtual void w19(); virtual void w20(); virtual void w21(); virtual void w22(); virtual void w23(); virtual void w24(); virtual void w25(); virtual void w26(); virtual void w27(); virtual void w28(); virtual void w29(); virtual void w30(); virtual void w31(); virtual void w32(); virtual void send(void *msg, u32 to, int a, void *d, int b); };
void fn_8003F140();
void fn_8003F18C();
void fn_8003F1DC();
void fn_8008CB4C(int p, int st);
void fn_8008D8D8();
void fn_8008D8F8();
void fn_8008D984();
void fn_8008DA10();
void fn_8008DBCC();
void fn_8008DCC8();
void fn_8008DDD4();
void fn_8008DE54();
void fn_8023D198();
void fn_80240054();
void fn_802416D4();
void fn_80241D80();
void fn_80242210();
void fn_80249AC4();
extern char lbl_802992A0[];
extern char lbl_802992AC[];
extern char lbl_802992B8[];
extern char lbl_802992C4[];
extern char lbl_802992D0[];
extern char lbl_802992DC[];
extern char lbl_802992E8[];
extern char lbl_802992F4[];
extern char lbl_80299300[];
extern char lbl_8029930C[];
extern char lbl_80299318[];
extern char lbl_80299324[];
extern char lbl_80299330[];
extern char lbl_8029933C[];
extern char lbl_80299348[];
extern char lbl_80299354[];
extern char lbl_80299360[];
extern char lbl_8029936C[];
extern char lbl_80299378[];
extern char lbl_80360330[];
extern char lbl_80360338[];
extern char lbl_80360340[];
extern char lbl_80360348[];
extern char lbl_80360350[];
extern char lbl_80360358[];
extern char lbl_80360360[];
extern char lbl_80360368[];
extern char lbl_80360370[];
extern char lbl_80360378[];
extern char lbl_80360380[];
extern char lbl_80360388[];
extern char lbl_80360390[];
extern char lbl_80360398[];
extern char lbl_803603A0[];
extern char lbl_803603A8[];
extern char lbl_803603B0[];
extern char lbl_803603B8[];
extern char lbl_803603C0[];
extern char lbl_803603C8[];
extern char lbl_803603D0[];
extern char lbl_803603D8[];
extern char lbl_803603E0[];
extern char lbl_803603E8[];
extern char lbl_803603F0[];
extern s8 lbl_803603F8[1];
extern char lbl_803603FC[];
extern char lbl_80360404[];
extern char lbl_8036040C[];
extern char lbl_80360414[];
extern char lbl_8036041C[];
extern char lbl_80360424[];
extern char lbl_8036042C[];
extern char lbl_80360434[];
extern char lbl_8036043C[];
extern char lbl_80360444[];
extern char lbl_8036044C[];
extern char lbl_80360454[];
extern char lbl_8036045C[];
extern char lbl_80360464[];
extern char lbl_8036046C[];
extern char lbl_80360474[];
extern char lbl_8036047C[];
extern char lbl_80360484[];
extern char lbl_80360488[];
extern char lbl_8036048C[];
extern char lbl_80360494[];
extern char lbl_8036049C[];
extern char lbl_803604A4[];
extern char lbl_803604AC[6], lbl_8036051C[3], lbl_80360520[4], lbl_80360524[8], lbl_80360538[8], lbl_80360558[8], lbl_80360560[7], lbl_80360568[7];
extern char lbl_803604B4[];
extern char lbl_803604BC[];
extern char lbl_803604C4[];
extern char lbl_803604CC[];
extern char lbl_803604D4[];
extern char lbl_803604DC[];
extern char lbl_803604E4[];
extern char lbl_803604EC[];
extern char lbl_803604F4[];
extern char lbl_803604FC[];
extern char lbl_80360504[];
extern char lbl_8036050C[];
extern char lbl_80360514[];
static void *d_0[135] = { (void *)0x0, (void *)0xFA, (void *)0x1F4, (void *)0x2EE, (void *)0x55495C4D, (void *)0x454D4341, (void *)0x52445C00, (void *)0x41545449, (void *)0x43000000, (void *)0x42414C4C, (void *)0x524F4F4D, (void *)0x4348494C, (void *)0x4452454E, (void *)0x434F4E53, (void *)0x45525600, (void *)0x44494E52, (void *)0x4F4F4D00, (void *)0x464F5945, (void *)0x52000000, (void *)0x47414C4C, (void *)0x45525900, (void *)0x47524156, (void *)0x45594400, (void *)0x47524F4F, (void *)0x4D000000, (void *)0x47525448, (void *)0x414C4C00, (void *)0x47554553, (void *)0x54000000, (void *)0x48414C4C, (void *)0x41420000, (void *)0x48414C4C, (void *)0x43440000, (void *)0x4B495443, (void *)0x48454E00, (void *)0x4C414200, (void *)0x0, (void *)0x4D555345, (void *)0x554D0000, (void *)0x4D414944, (void *)0x0, (void *)0x4D415354, (void *)0x52424544, (void *)0x4D415553, (void *)0x4F4C4D00, (void *)0x4D454153, (void *)0x55524500, (void *)0x544F5952, (void *)0x4F4F4D00, (void *)0x4F425345, (void *)0x52560000, (void *)0x50414E54, (void *)0x52590000, (void *)0x5041524C, (void *)0x4F520000, (void *)0x53495454, (void *)0x494E4700, (void *)0x53545245, (void *)0x54434800, (void *)0x53554E52, (void *)0x4F4F4D00, (void *)0x57494E54, (void *)0x45520000, (void *)0x5449544C, (void *)0x45000000, (void *)0x53504952, (void *)0x49540000, (void *)0x474C4F42, (void *)0x414C0000, (void *)0x0, (void *)0x28, (void *)0x0, (void *)0x0, (void *)0x28, (void *)0x0, (void *)0x0, (void *)0x28, (void *)0x0, (void *)0x0, (void *)0x3F800000, (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x40000000, (void *)0x0, (void *)0x3F800000, (void *)0x3F800000, (void *)0x0, (void *)0xBF800000, (void *)0x3F800000, (void *)0x0, (void *)0x0, (void *)0x3F800000, (void *)0x3F800000, (void *)0x0, (void *)0x3F800000, (void *)0xBF800000, (void *)0x0, (void *)0x6, (void *)0x9, (void *)0xC, (void *)0xF, (void *)0x12, (void *)0x15, (void *)0x18, (void *)0x1B, (void *)0x0, (void *)0x6, (void *)0x9, (void *)0xC, (void *)0xF, (void *)0x12, (void *)0x15, (void *)0x18, (void *)0x1B, (void *)0x0, (void *)0x6, (void *)0x40, (void *)0x43, (void *)0x46, (void *)0x49, (void *)0x4C, (void *)0x4F, (void *)0x52, (void *)0x55, (void *)0x1E, (void *)0x21, (void *)0x24, (void *)0x27, (void *)0x2A, (void *)0x2D, (void *)0x30, (void *)0x33 };
static void *d_540[6] = { (void *)&lbl_802992A0, (void *)&lbl_80360330, (void *)&lbl_80360338, (void *)&lbl_80360340, (void *)&lbl_80360348, (void *)&lbl_80360350 };
static void *d_564[24] = { (void *)&lbl_80360358, (void *)&lbl_80360360, (void *)&lbl_80360368, (void *)&lbl_80360370, (void *)&lbl_80360360, (void *)&lbl_80360378, (void *)&lbl_80360380, (void *)&lbl_80360360, (void *)&lbl_80360388, (void *)&lbl_80360390, (void *)&lbl_80360360, (void *)&lbl_80360398, (void *)&lbl_803603A0, (void *)&lbl_80360360, (void *)&lbl_803603A8, (void *)&lbl_803603B0, (void *)&lbl_80360360, (void *)&lbl_803603B8, (void *)&lbl_803603C0, (void *)&lbl_80360360, (void *)&lbl_803603C8, (void *)&lbl_803603D0, (void *)&lbl_80360360, (void *)&lbl_803603D8 };
static void *d_660[3] = { (void *)&lbl_803603E0, (void *)&lbl_803603E8, (void *)0x0 };
static void *d_672[25] = { (void *)&lbl_803603F0, (void *)&lbl_803603F0, (void *)&lbl_803603F8, (void *)&lbl_803603F8, (void *)&lbl_803603FC, (void *)&lbl_802992AC, (void *)&lbl_803603F8, (void *)&lbl_803603F8, (void *)&lbl_803603FC, (void *)&lbl_802992B8, (void *)&lbl_803603F8, (void *)&lbl_803603F8, (void *)&lbl_80360404, (void *)&lbl_8036040C, (void *)&lbl_803603F8, (void *)&lbl_803603F8, (void *)&lbl_80360404, (void *)&lbl_802992C4, (void *)&lbl_803603F8, (void *)&lbl_803603F8, (void *)&lbl_80360404, (void *)&lbl_802992D0, (void *)&lbl_803603F8, (void *)&lbl_803603F8, (void *)&lbl_803603F8 };
static void *d_772[20] = { (void *)0x3C23D70A, (void *)0x0, (void *)0x0, (void *)&lbl_80360414, (void *)0x40400000, (void *)0x0, (void *)0x0, (void *)&lbl_8036041C, (void *)0x3F000000, (void *)0x0, (void *)0x0, (void *)&lbl_802992DC, (void *)0x40000000, (void *)0x0, (void *)0x0, (void *)&lbl_80360424, (void *)0x40800000, (void *)0x0, (void *)0x0, (void *)&lbl_8036042C };
static void *d_852[30] = { (void *)&lbl_80360434, (void *)0x1, (void *)0x0, (void *)0x0, (void *)0x0, (void *)&lbl_802992E8, (void *)0x1, (void *)0x0, (void *)0x0, (void *)0x0, (void *)&lbl_802992F4, (void *)0x1, (void *)0x0, (void *)0x0, (void *)0x0, (void *)&lbl_80299300, (void *)0x1, (void *)0x0, (void *)0x0, (void *)0x0, (void *)&lbl_8029930C, (void *)0x1, (void *)0x0, (void *)0x0, (void *)0x0, (void *)&lbl_8036043C, (void *)0x0, (void *)0x626F6E65, (void *)0x33395200, (void *)0x0 };
static void *d_972[12] = { (void *)&lbl_80360444, (void *)&lbl_8036044C, (void *)&lbl_80360454, (void *)&lbl_8036045C, (void *)&lbl_80360464, (void *)&lbl_8036046C, (void *)&lbl_80360474, (void *)&lbl_8036047C, (void *)&lbl_80360484, (void *)&lbl_80360488, (void *)&lbl_80299318, (void *)&lbl_8036048C };
static void *d_1020[35] = { (void *)&lbl_80360444, (void *)&lbl_80360494, (void *)&lbl_80299324, (void *)&lbl_80299330, (void *)&lbl_8029933C, (void *)&lbl_8029933C, (void *)&lbl_8036042C, (void *)&lbl_8036049C, (void *)&lbl_803604A4, (void *)&lbl_8036047C, (void *)&lbl_80299348, (void *)&lbl_80299354, (void *)&lbl_80299360, (void *)&lbl_803604AC, (void *)&lbl_8029936C, (void *)&lbl_8036041C, (void *)&lbl_80360414, (void *)&lbl_802992DC, (void *)&lbl_803604B4, (void *)&lbl_803604BC, (void *)&lbl_8029933C, (void *)&lbl_803604C4, (void *)&lbl_803604CC, (void *)&lbl_80360424, (void *)&lbl_803604D4, (void *)&lbl_80360454, (void *)&lbl_803604DC, (void *)&lbl_80299378, (void *)&lbl_803604E4, (void *)&lbl_803604EC, (void *)&lbl_803604F4, (void *)&lbl_803604FC, (void *)&lbl_80360504, (void *)&lbl_8036050C, (void *)&lbl_80360514 };
static void *d_1160[99] = { (void *)&lbl_80360444, (void *)0x0, (void *)0x1, (void *)&lbl_80360494, (void *)0x1, (void *)0x1, (void *)&lbl_80299324, (void *)0x2, (void *)0x1, (void *)&lbl_80299330, (void *)0x3, (void *)0x1, (void *)&lbl_8029933C, (void *)0x4, (void *)0x3, (void *)&lbl_8036042C, (void *)0x7, (void *)0x1, (void *)&lbl_8036049C, (void *)0x8, (void *)0x1, (void *)&lbl_803604A4, (void *)0x9, (void *)0x1, (void *)&lbl_8036047C, (void *)0xA, (void *)0x1, (void *)&lbl_80299348, (void *)0xB, (void *)0x1, (void *)&lbl_80299354, (void *)0xC, (void *)0x1, (void *)&lbl_80299360, (void *)0xD, (void *)0x1, (void *)&lbl_803604AC, (void *)0xE, (void *)0x1, (void *)&lbl_8029936C, (void *)0xF, (void *)0x1, (void *)&lbl_8036041C, (void *)0x10, (void *)0x1, (void *)&lbl_80360414, (void *)0x11, (void *)0x1, (void *)&lbl_802992DC, (void *)0x12, (void *)0x1, (void *)&lbl_803604B4, (void *)0x13, (void *)0x1, (void *)&lbl_803604BC, (void *)0x14, (void *)0x1, (void *)&lbl_803604C4, (void *)0x15, (void *)0x1, (void *)&lbl_803604CC, (void *)0x16, (void *)0x1, (void *)&lbl_80360424, (void *)0x17, (void *)0x1, (void *)&lbl_803604D4, (void *)0x18, (void *)0x1, (void *)&lbl_80360454, (void *)0x19, (void *)0x1, (void *)&lbl_803604DC, (void *)0x1A, (void *)0x1, (void *)&lbl_80299378, (void *)0x1B, (void *)0x1, (void *)&lbl_803604E4, (void *)0x1C, (void *)0x1, (void *)&lbl_803604EC, (void *)0x1D, (void *)0x1, (void *)&lbl_803604F4, (void *)0x1E, (void *)0x1, (void *)&lbl_803604FC, (void *)0x1F, (void *)0x1, (void *)&lbl_80360504, (void *)0x20, (void *)0x1, (void *)&lbl_8036050C, (void *)0x21, (void *)0x1, (void *)&lbl_80360514, (void *)0x22, (void *)0x1 };
static void *d_1556[35] = { (void *)0x0, (void *)0x1, (void *)0x2, (void *)0x3, (void *)0x4, (void *)0x5, (void *)0x14, (void *)0x6, (void *)0x7, (void *)0x8, (void *)0x9, (void *)0xA, (void *)0xB, (void *)0xC, (void *)0xD, (void *)0xE, (void *)0xF, (void *)0x10, (void *)0x11, (void *)0x12, (void *)0x13, (void *)0x15, (void *)0x16, (void *)0x17, (void *)0x18, (void *)0x19, (void *)0x1A, (void *)0x1B, (void *)0x1C, (void *)0x1D, (void *)0x1E, (void *)0x1F, (void *)0x20, (void *)0x21, (void *)0x22 };
static s32 tA[35] = { 0, 12, 20, 28, 29, 35, 40, 41, 46, 53, 58, 62, 69, 74, 76, 79, 82, 84, 87, 90, 93, 96, 99, 102, 105, 108, 112, 113, 114, 115, 116, 117, 118, 119, 122 };
static s32 tB[125] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 3, 1, 2, 1, 2, 1, 2, 1, 2, 1, 1, 1, 1, 3, 12, 3, 4, 1, 1, 2, 1, 3, 4, 1, 3, 1, 12, 1, 1, 1, 1, 8, 1, 1, 1, 4, 2, 1, 2, 1, 6, 1, 3, 1, 4, 1, 1, 6, 3, 2, 2, 1, 1, 1, 2, 7, 1, 2, 1, 1, 1, 11, 1, 1, 10, 6, 1, 5, 1, 11, 8, 1, 3, 5, 1, 6, 5, 1, 6, 5, 1, 6, 5, 1, 6, 9, 1, 2, 7, 1, 4, 5, 1, 6, 1, 1, 9, 1, 12, 12, 12, 12, 12, 12, 12, 2, 9, 1, 2, 9, 1 };
static s32 tC[125] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 12, 14, 12, 15, 12, 16, 12, 17, 12, 18, 12, 19, 17, 12, 12, 12, 20, 12, 21, 20, 12, 12, 20, 12, 20, 12, 22, 12, 23, 12, 17, 12, 12, 23, 12, 24, 12, 24, 12, 12, 25, 12, 25, 12, 12, 26, 27, 12, 28, 29, 28, 12, 28, 29, 12, 30, 12, 30, 31, 12, 32, 12, 12, 33, 12, 12, 24, 12, 34, 12, 12, 35, 12, 12, 36, 12, 12, 37, 12, 12, 38, 12, 12, 39, 12, 12, 17, 12, 12, 40, 12, 12, 41, 12, 12, 17, 12, 17, 42, 42, 43, 44, 45, 46, 47, 12, 48, 12, 12, 49, 12 };
void *lbl_802C811C[20] = { (void *)0x0, (void *)0x0, (void *)&fn_8008DCC8, (void *)&fn_80249AC4, (void *)&fn_8008DBCC, (void *)&fn_80242210, (void *)&fn_8008DA10, (void *)&fn_8023D198, (void *)&fn_8008DDD4, (void *)&fn_8008CB4C, (void *)&fn_80241D80, (void *)&fn_8003F140, (void *)&fn_8003F18C, (void *)&fn_8008D8D8, (void *)&fn_8008D8F8, (void *)&fn_802416D4, (void *)&fn_8003F1DC, (void *)&fn_80240054, (void *)&fn_8008DE54, (void *)&fn_8008D984 };
typedef struct { f32 x, y, z; } V3;
extern u32 lbl_8035B308;
extern u8 *lbl_8035B460;
extern s8 lbl_803603F8[1];
extern char lbl_803604AC[6], lbl_8036051C[3], lbl_80360520[4], lbl_80360524[8], lbl_80360538[8], lbl_80360558[8], lbl_80360560[7], lbl_80360568[7];
extern char lbl_80360570[8], lbl_80360578[8], lbl_80360580[8], lbl_80360588[8];
extern f32 lbl_8036052C, lbl_80360530, lbl_80360534, lbl_80360540, lbl_80360550, lbl_80360554;
extern f64 lbl_80360548;
void *fn_800F9398(void *, void *);
void *fn_800F9788(void *, void *, void *);
void fn_80257A4C(int, int);
void fn_801907D8(int);
void fn_80190940(int, int);
void fn_80101820(V3 *);
void fn_8022BCD8(int, void *, void *);
int fn_8022BE28(int, int);
void fn_8022BF30(int, int, int, f32);
VO *fn_802288FC(u32, char *);
int fn_80236AC0(int);
int fn_80236B14(int);
int fn_8023F5E8(int, int);
void fn_8023F864(int, int);
void fn_8023F9C8(int, int);
int fn_802401A0(int);
int fn_802402E0(int);
int fn_802405B8(int);
void fn_8024125C(int, int);
void fn_80240274(int, int);
void fn_80240948(int, char *, int);
void fn_802413D8(f32, int, int, int, int, int);
void fn_80241588(int, int, int, f32);
int fn_80241628(int, int, int);
void fn_80242168(f32, int);
int fn_80249058(int, int);
int fn_8024909C(int, int);
void fn_802490E0(int, int, f32);
int fn_802491DC(int, int);
int fn_802494A4(int, int);

#define E0 (*(VO **)(p + 0xe0))
#define KN (*(VO **)(p + 0x134))

static inline void *FindRes(u8 *mgr, s8 *grp, void *name) {
    if (grp == 0 || grp[0] == 0) return fn_800F9398(mgr + 0x180, name);
    return fn_800F9788(mgr + 0x198, grp, name);
}
static inline void detach(int p) {
    if (KN != 0) {
        *(u32 *)((int)KN + 0x234) = 0;
        *(u32 *)((int)E0 + 0x234) = 0;
        fn_801907D8(*(int *)((int)KN + 0x9c));
        KN->send(lbl_80360520, 0, 0, 0, 0);
    }
}
static inline void anim(int p, int off) {
    if (KN != 0) KN->send(*(void **)(*(int *)(p + 0xc8) + off), 0, 0, 0, 0);
}
static inline void walkPlayer(int p, char *name) {
    fn_802494A4(p, 11);
    fn_80240274(p, 0);
    fn_80240948(p, name, 0);
}

void fn_8008CB4C(int p, int st) {
    s32 *q;
    s32 idx;
    s32 t;
    int i;
    V3 d;
    V3 f;
    V3 a;
    V3 b;
    V3 m4;
    V3 m3;
    V3 m2;
    V3 m1;
    f32 dmg;
    VO *o;

    idx = tA[st];
    t = *(s32 *)(p + 0x60);
    for (q = tB + idx; t > 0; q++) {
        if (*q > t) break;
        t -= tB[idx++];
    }
    switch (tC[idx]) {
    case 0: {
        int g;
        fn_80241628(p, 0, 0);
        fn_8022BE28(*(int *)(p + 0xe0), 0);
        *(u32 *)(p + 0x118) = *(u32 *)(lbl_8035B308 + 0x48);
        *(void **)(p + 0x174) = FindRes(*(u8 **)(lbl_8035B460 + 8), lbl_803603F8, lbl_8036051C);
        g = *(int *)(*(int *)(p + 0xc0) + 8);
        *(u32 *)(g + 0xf4) = 0;
        *(u32 *)(g + 0xf8) = 0;
        fn_80257A4C(g, 0);
        if (*(int *)((int)E0 + 0x114) == 0) fn_802491DC(p, 0);
        break;
    }
    case 1:
        if (KN != 0) {
            detach(p);
            KN = 0;
        }
        o = fn_802288FC(lbl_8035B308, lbl_80360524);
        if (o) o->send(lbl_803604AC, *(u32 *)(p + 0xe0), 0, 0, 0);
        fn_80241628(p, 0, 0);
        fn_80241588(p, 0, 0, lbl_8036052C);
        anim(p, 0);
        *(s32 *)((int)E0 + 0x220) = -1;
        *(u32 *)((int)E0 + 0x228) |= 0x100;
        break;
    case 2:
        fn_80241628(p, 0, 0);
        fn_80241588(p, 2, 0, lbl_8036052C);
        anim(p, 0x18);
        break;
    case 3:
        fn_80241628(p, 0, 0);
        fn_80241588(p, 1, 0, lbl_8036052C);
        anim(p, 0xc);
        break;
    case 4:
        if (*(int *)(p + 0x16c) != 0) {
            fn_802494A4(p, 10);
        } else {
            fn_8023F5E8(p, *(int *)(p + 0x118));
            fn_80241628(p, 2, 0);
            fn_80241588(p, 3, 0, lbl_8036052C);
            anim(p, 0x24);
            fn_80242168(lbl_80360530, p);
        }
        break;
    case 5:
        if (*(int *)(p + 0x180) != 0) fn_80241628(p, 4, 0);
        else fn_80241628(p, 2, 0);
        *(u32 *)(p + 0x180) = 0;
        fn_80241588(p, 4, 0, lbl_8036052C);
        anim(p, 0x30);
        *(u32 *)(p + 0x170) = 0;
        *(u32 *)(p + 0x178) = 0;
        break;
    case 6:
        fn_80241628(p, 0, 0);
        fn_80241588(p, 6, 0, lbl_8036052C);
        anim(p, 0x48);
        fn_802490E0(p, 1, **(f32 **)(p + 0x11c));
        break;
    case 7:
        fn_80241628(p, 0, 0);
        fn_802401A0(p);
        fn_80241588(p, 7, 0, lbl_8036052C);
        anim(p, 0x54);
        break;
    case 8:
        fn_80241628(p, 3, 0);
        fn_80241588(p, 5, 0, lbl_8036052C);
        anim(p, 0x3c);
        *(u32 *)(p + 0x158) = 0;
        fn_802490E0(p, 2, *(f32 **)(p + 0x120) != 0 ? **(f32 **)(p + 0x120) : lbl_80360534);
        break;
    case 9:
        fn_80241628(p, 4, 0);
        fn_80241588(p, 1, 0, lbl_8036052C);
        anim(p, 0xc);
        break;
    case 10:
        fn_8023F5E8(p, *(int *)(p + 0x118));
        fn_80241628(p, 4, 0);
        fn_80241588(p, 1, 0, lbl_8036052C);
        anim(p, 0xc);
        break;
    case 11:
        fn_80241628(p, 5, 0);
        fn_80236AC0(*(int *)(p + 0xe0));
        for (i = 0; i < *(int *)(p + 0x5c); i++) fn_8024909C(p, i);
        break;
    case 12:
        return;
    case 13:
        *(u32 *)((int)E0 + 0x220) = 0;
        *(u32 *)((int)E0 + 0x228) &= ~0x100;
        break;
    case 14:
        *(u32 *)(p + 0x170) = 0;
        *(u32 *)(p + 0x178) = 0;
        break;
    case 15:
        *(u32 *)(p + 0x158) = 0;
        break;
    case 16:
        fn_80241628(p, 0, 0);
        break;
    case 17:
        fn_802494A4(p, 4);
        break;
    case 18:
        fn_802494A4(p, 6);
        break;
    case 19:
        fn_8023F9C8(p, 0);
        fn_8023F9C8(p, 1);
        fn_8023F9C8(p, 2);
        fn_8023F9C8(p, 3);
        fn_8023F9C8(p, 4);
        fn_8022BCD8(*(int *)(p + 0xe0), lbl_80360538, lbl_803603F8);
        fn_8022BF30(*(int *)(p + 0xe0), 0, 1, lbl_80360540);
        fn_802491DC(p, 3);
        fn_8024125C(p, 0);
        break;
    case 20:
        fn_802405B8(p);
        break;
    case 21:
        if (*(int *)(p + 0x158) == 0) fn_802405B8(p);
        break;
    case 22:
        return;
    case 23:
        if (*(int **)(p + 0x128) != 0 && **(int **)(p + 0x128) == 1) fn_802494A4(p, 4);
        else fn_802494A4(p, 2);
        break;
    case 24:
        fn_802494A4(p, 8);
        break;
    case 25:
        fn_802494A4(p, 7);
        break;
    case 26:
        (*(VO **)(p + 0x118))->getPos(&a, 0, 0, 0, 0);
        E0->getPos(&b, &f, 0, 0, 0);
        d.x = a.x - b.x;
        d.y = a.y - b.y;
        d.z = a.z - b.z;
        fn_80101820(&d);
        if (d.x * f.x + d.y * f.y + d.z * f.z > lbl_80360548) {
            *(u32 *)(p + 0x180) = 0;
            fn_802494A4(p, 5);
        } else {
            *(u32 *)(p + 0x180) = 1;
            fn_802494A4(p, 5);
        }
        break;
    case 27:
        return;
    case 28:
        *(u32 *)(p + 0x16c) = 1;
        break;
    case 29:
        *(u32 *)(p + 0x16c) = 1;
        fn_802494A4(p, 10);
        break;
    case 30:
        *(u32 *)(p + 0x16c) = 0;
        break;
    case 31:
        *(u32 *)(p + 0x16c) = 0;
        fn_802494A4(p, 4);
        break;
    case 32:
        *(u32 *)(p + 0x164) = *(u32 *)(p + 0xe4);
        *(u32 *)(p + 0x168) = *(u32 *)(p + 0xec);
        fn_802494A4(p, 1);
        break;
    case 33:
        KN = *(VO **)(p + 0xec);
        { VO *k = KN;
        if (k != 0) {
            f32 z = lbl_80360540;
            m1.x = z; m1.y = z; ((f32 *)&dmg)[3] = z;
            { f32 o = lbl_80360550;
            ((f32 *)&dmg)[4] = o; m2.y = z; m2.z = z;
            m3.x = z; m3.y = z; m3.z = o; }
            ((f32 *)&dmg)[10] = z; m4.y = lbl_80360554; ((f32 *)&dmg)[12] = z;
            k->send(lbl_80360558, 0, 0, 0, 0);
            KN->setPos(&m1, &m2, &m3, &m4, 0);
            fn_80190940(*(int *)((int)KN + 0x9c), *(int *)((int)E0 + 0x9c));
            *(VO **)((int)KN + 0x234) = E0;
            *(VO **)((int)E0 + 0x234) = KN;
        } }
        break;
    case 34:
        fn_802494A4(p, 1);
        break;
    case 35:
        *(u32 *)(p + 0x158) = 0;
        break;
    case 36:
        *(u32 *)(p + 0x178) = 1;
        fn_80241628(p, 0, 0);
        *(u32 *)(p + 0x170) = 1;
        break;
    case 37:
        *(u32 *)(p + 0x178) = 0;
        fn_8023F9C8(p, 5);
        break;
    case 38:
        if (*(int *)(p + 0x178) != 0) {
            u32 *h = *(u32 **)(*(int *)(p + 0xec) + 0xc);
            if (h[0] == *(u32 *)(p + 0x174) || h[1] == *(u32 *)(p + 0x174)) {
                dmg = -**(f32 **)(p + 0x124);
                (*(VO **)(p + 0x118))->send(lbl_80360560, *(u32 *)(p + 0xe0), 0, &dmg, 0);
            }
        }
        fn_80241628(p, 0, 0);
        break;
    case 39:
        if (*(int *)(p + 0x170) == 0) fn_80241628(p, 2, 0);
        break;
    case 40:
        detach(p);
        fn_802402E0(p);
        o = *(VO **)(p + 0x164);
        if (o) o->send(lbl_80360568, *(u32 *)(p + 0xe0), 0, *(void **)(p + 0x168), 0);
        break;
    case 41:
        fn_80241628(p, 0, 0);
        *(u32 *)(p + 0x170) = 1;
        break;
    case 42:
        fn_802494A4(p, 11);
        fn_802402E0(p);
        break;
    case 43: walkPlayer(p, lbl_80360570); break;
    case 44: walkPlayer(p, lbl_80360578); break;
    case 45: walkPlayer(p, lbl_80360580); break;
    case 46: walkPlayer(p, lbl_80360588); break;
    case 47:
        if (*(void **)(p + 0xf0) != 0) {
            fn_802413D8(lbl_8036052C, p, *(int *)(p + 0xf0), 0, 1, *(int *)(p + 0xec));
            if (KN != 0) KN->send(*(void **)(p + 0xf0), 0, 0, 0, 0);
        }
        break;
    case 48:
        fn_80236B14(*(int *)(p + 0xe0));
        for (i = 0; i < *(int *)(p + 0x5c); i++) fn_80249058(p, i);
        fn_8023F864(p, 0);
        fn_8023F864(p, 1);
        fn_8023F864(p, 2);
        fn_8023F864(p, 3);
        fn_8023F864(p, 4);
        fn_8023F864(p, 5);
        break;
    case 49:
        fn_80236AC0(*(int *)(p + 0xe0));
        for (i = 0; i < *(int *)(p + 0x5c); i++) fn_8024909C(p, i);
    case 50:
        break;
    }
}
}

} /* extern "C" */

} /* namespace m8008CB4C */

namespace m8008D8D8 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

void fn_8023FE08(void);

void fn_8008D8D8(void) {
    fn_8023FE08();
}

} /* extern "C" */

} /* namespace m8008D8D8 */

namespace m8008D8F8 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

} /* extern "C" */

extern "C" {
extern char lbl_80299354[];
extern char lbl_80299360[];
extern char lbl_8036050C[0x6];
extern char lbl_80360514[0x7];
struct VCall_fn_8008D8F8_0 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void m(int); };
struct VCall_fn_8008D8F8_1 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void m(int); };
struct VCall_fn_8008D8F8_2 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void m(int); };
struct VCall_fn_8008D8F8_3 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void m(int); };

void fn_8008D8F8(s32 *param_1) {
    ((VCall_fn_8008D8F8_0 *)(param_1))->m((s32)(lbl_80299360)); /* "PLYRLIVE" */
    ((VCall_fn_8008D8F8_1 *)(param_1))->m((s32)(lbl_80299354)); /* "PLYRDEAD" */
    ((VCall_fn_8008D8F8_2 *)(param_1))->m((s32)(lbl_8036050C)); /* "CINON" */
    ((VCall_fn_8008D8F8_3 *)(param_1))->m((s32)(lbl_80360514)); /* "CINOFF" */
}
}

} /* namespace m8008D8F8 */

namespace m8008D984 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

} /* extern "C" */

extern "C" {
extern char lbl_80299354[];
extern char lbl_80299360[];
extern char lbl_8036050C[0x6];
extern char lbl_80360514[0x7];
struct VCall_fn_8008D984_0 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void m(int); };
struct VCall_fn_8008D984_1 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void m(int); };
struct VCall_fn_8008D984_2 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void m(int); };
struct VCall_fn_8008D984_3 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void m(int); };

void fn_8008D984(s32 *param_1) {
    ((VCall_fn_8008D984_0 *)(param_1))->m((s32)(lbl_80299360)); /* "PLYRLIVE" */
    ((VCall_fn_8008D984_1 *)(param_1))->m((s32)(lbl_80299354)); /* "PLYRDEAD" */
    ((VCall_fn_8008D984_2 *)(param_1))->m((s32)(lbl_8036050C)); /* "CINON" */
    ((VCall_fn_8008D984_3 *)(param_1))->m((s32)(lbl_80360514)); /* "CINOFF" */
}
}

} /* namespace m8008D984 */

namespace m8008DA10 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

extern f32 lbl_80360590;
extern volatile f32 lbl_80360540;
extern f32 lbl_80360594;
void fn_80241E0C(void *);

void fn_8008DA10(u8 *p) {
    *(s32 *)(p + 280) = 0;
    *(s32 *)(p + 284) = 0;
    *(s32 *)(p + 288) = 0;
    *(s32 *)(p + 292) = 0;
    *(s32 *)(p + 296) = 0;
    *(s32 *)(p + 300) = 0;
    *(s32 *)(p + 304) = 0;
    *(s32 *)(p + 308) = 0;
    *(f32 *)(p + 312) = lbl_80360590;
    *(f32 *)(p + 316) = lbl_80360540;
    *(s32 *)(p + 344) = 0;
    *(s32 *)(p + 348) = 0;
    *(f32 *)(p + 352) = lbl_80360594;
    *(s32 *)(p + 356) = 0;
    *(s32 *)(p + 360) = 0;
    *(s32 *)(p + 364) = 0;
    *(s32 *)(p + 368) = 0;
    *(s32 *)(p + 372) = 0;
    *(s32 *)(p + 376) = 0;
    *(f32 *)(p + 380) = lbl_80360540;
    *(s32 *)(p + 384) = 0;
    fn_80241E0C(p);
}

} /* extern "C" */

} /* namespace m8008DA10 */

namespace m8008DA98 {
extern "C" {
#define d_0 ((u32 *)m8008CB4C::d_0)
#define d_540 ((u32 *)m8008CB4C::d_540)
#define d_564 ((u32 *)m8008CB4C::d_564)
#define d_660 ((u32 *)m8008CB4C::d_660)
#define d_672 ((u32 *)m8008CB4C::d_672)
#define d_772 ((u32 *)m8008CB4C::d_772)
#define d_852 ((u32 *)m8008CB4C::d_852)
#define d_972 ((u32 *)m8008CB4C::d_972)
#define d_1020 ((u32 *)m8008CB4C::d_1020)
#define d_1160 ((u32 *)m8008CB4C::d_1160)
#define d_1556 ((u32 *)m8008CB4C::d_1556)
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern f32 lbl_80360590;
extern f32 lbl_80360540;
extern f32 lbl_80360594;

void fn_8008DA98(u8 *p) {
    *(s32 *)(p + 84) = 35;
    *(s32 *)(p + 44) = 33;
    *(s32 *)(p + 104) = 12;
    *(s32 *)(p + 92) = 5;
    *(s32 *)(p + 128) = 6;
    *(s32 *)(p + 124) = 8;
    *(s32 *)(p + 132) = 1;
    *(s32 *)(p + 136) = 6;
    *(s32 *)(p + 140) = 0;
    *(s32 *)(p + 148) = 6;
    *(u32 **)(p + 88) = d_1020;
    *(u32 **)(p + 40) = d_1160;
    *(u32 **)(p + 48) = d_1556;
    *(u32 **)(p + 108) = d_972;
    *(u32 **)(p + 120) = d_772;
    *(u32 **)(p + 196) = d_540;
    *(u32 **)(p + 200) = d_564;
    *(u32 **)(p + 204) = d_660;
    *(u32 **)(p + 244) = d_672;
    *(s32 *)(p + 252) = 0;
    *(u32 **)(p + 268) = d_852;
    *(s32 *)(p + 280) = 0;
    *(s32 *)(p + 284) = 0;
    *(s32 *)(p + 288) = 0;
    *(s32 *)(p + 292) = 0;
    *(s32 *)(p + 296) = 0;
    *(s32 *)(p + 300) = 0;
    *(s32 *)(p + 304) = 0;
    *(s32 *)(p + 308) = 0;
    *(f32 *)(p + 312) = lbl_80360590;
    *(f32 *)(p + 316) = lbl_80360540;
    *(s32 *)(p + 344) = 0;
    *(s32 *)(p + 348) = 0;
    *(f32 *)(p + 352) = lbl_80360594;
    *(s32 *)(p + 356) = 0;
    *(s32 *)(p + 360) = 0;
    *(s32 *)(p + 364) = 0;
    *(s32 *)(p + 368) = 0;
    *(s32 *)(p + 372) = 0;
    *(s32 *)(p + 376) = 0;
    *(f32 *)(p + 380) = lbl_80360540;
    *(s32 *)(p + 384) = 0;
}

} /* extern "C" (c unit) */
} /* namespace m8008DA98 */
