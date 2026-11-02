#include "common.h"
namespace m8004F034 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

#include "common.h"
extern "C" {
struct VO { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void getPos(void *p, void *a, int b, int c, int d); virtual void setPos(void *a, void *b, void *c, void *d, int e); virtual void w15(); virtual void w16(); virtual void hideA(); virtual void w18(); virtual void showA(); virtual void w20(); virtual void w21(); virtual void w22(); virtual void w23(); virtual void w24(); virtual void w25(); virtual void w26(); virtual void w27(); virtual void w28(); virtual void w29(); virtual void w30(); virtual void w31(); virtual void w32(); virtual void send(void *msg, u32 to, int a, void *d, int b); };
void fn_8003F140();
void fn_8003F18C();
void fn_8003F1DC();
void fn_8004F034(int p, int st);
void fn_8004FC50();
void fn_8004FCF4();
void fn_8004FD98();
void fn_8004FF0C();
void fn_80050068();
void fn_80050174();
void fn_800501FC();
void fn_8023D198();
void fn_8023FE08();
void fn_80240054();
void fn_802416D4();
void fn_80241D80();
void fn_80242210();
void fn_80249AC4();
extern char lbl_802961F0[];
extern char lbl_802961FC[];
extern char lbl_80296208[];
extern char lbl_80296214[];
extern char lbl_80296220[];
extern char lbl_8029622C[];
extern char lbl_80296238[];
extern char lbl_80296244[];
extern char lbl_80296250[];
extern char lbl_8029625C[];
extern char lbl_80296268[];
extern char lbl_80296274[];
extern char lbl_80296280[];
extern char lbl_8029628C[];
extern char lbl_80296298[];
extern char lbl_802962A4[];
extern char lbl_802962B0[];
extern char lbl_802962BC[];
extern char lbl_802962C8[];
extern char lbl_802962D4[];
extern char lbl_8035D860[];
extern char lbl_8035D868[];
extern char lbl_8035D870[];
extern char lbl_8035D878[];
extern char lbl_8035D880[];
extern char lbl_8035D888[];
extern char lbl_8035D890[];
extern char lbl_8035D898[];
extern char lbl_8035D8A0[];
extern char lbl_8035D8A8[];
extern char lbl_8035D8B0[];
extern char lbl_8035D8B8[];
extern char lbl_8035D8C0[];
extern char lbl_8035D8C8[];
extern char lbl_8035D8D0[];
extern char lbl_8035D8D8[];
extern char lbl_8035D8E0[];
extern char lbl_8035D8E4[];
extern char lbl_8035D8EC[];
extern char lbl_8035D8F4[];
extern char lbl_8035D8FC[];
extern char lbl_8035D904[];
extern char lbl_8035D90C[];
extern char lbl_8035D914[];
extern char lbl_8035D91C[];
extern char lbl_8035D924[];
extern char lbl_8035D92C[];
extern char lbl_8035D934[];
extern char lbl_8035D93C[];
extern char lbl_8035D944[];
extern char lbl_8035D94C[];
extern char lbl_8035D954[];
extern char lbl_8035D95C[];
extern char lbl_8035D964[4], lbl_8035DA84[4], lbl_8035DA98[4], lbl_8035DAA0[4], lbl_8035DABC[4], lbl_8035DAC4[4], lbl_8035DACC[4], lbl_8035DAD4[4], lbl_8035DADC[4];
extern char lbl_8035D968[];
extern char lbl_8035D970[];
extern char lbl_8035D978[];
extern char lbl_8035D980[];
extern char lbl_8035D988[];
extern char lbl_8035D990[];
extern char lbl_8035D998[];
extern char lbl_8035D9A0[];
extern char lbl_8035D9A8[];
extern char lbl_8035D9B0[];
extern char lbl_8035D9B8[];
extern char lbl_8035D9C0[];
extern char lbl_8035D9C8[];
extern char lbl_8035D9D0[];
extern char lbl_8035D9D8[];
extern char lbl_8035D9E0[];
extern char lbl_8035D9E8[];
extern char lbl_8035D9F0[];
extern char lbl_8035D9F8[];
extern char lbl_8035DA00[];
extern char lbl_8035DA04[];
extern char lbl_8035DA0C[];
extern char lbl_8035DA14[];
extern char lbl_8035DA1C[];
extern char lbl_8035DA24[];
extern char lbl_8035DA2C[];
extern char lbl_8035DA34[];
extern char lbl_8035DA3C[];
extern char lbl_8035DA44[];
extern char lbl_8035DA4C[];
extern char lbl_8035DA54[];
extern char lbl_8035DA5C[];
extern char lbl_8035DA64[];
extern char lbl_8035DA6C[];
extern char lbl_8035DA74[];
void *lbl_802B8B30[447] = { (void *)0x0, (void *)0xFA, (void *)0x1F4, (void *)0x2EE, (void *)0x55495C4D, (void *)0x454D4341, (void *)0x52445C00, (void *)0x41545449, (void *)0x43000000, (void *)0x42414C4C, (void *)0x524F4F4D, (void *)0x4348494C, (void *)0x4452454E, (void *)0x434F4E53, (void *)0x45525600, (void *)0x44494E52, (void *)0x4F4F4D00, (void *)0x464F5945, (void *)0x52000000, (void *)0x47414C4C, (void *)0x45525900, (void *)0x47524156, (void *)0x45594400, (void *)0x47524F4F, (void *)0x4D000000, (void *)0x47525448, (void *)0x414C4C00, (void *)0x47554553, (void *)0x54000000, (void *)0x48414C4C, (void *)0x41420000, (void *)0x48414C4C, (void *)0x43440000, (void *)0x4B495443, (void *)0x48454E00, (void *)0x4C414200, (void *)0x0, (void *)0x4D555345, (void *)0x554D0000, (void *)0x4D414944, (void *)0x0, (void *)0x4D415354, (void *)0x52424544, (void *)0x4D415553, (void *)0x4F4C4D00, (void *)0x4D454153, (void *)0x55524500, (void *)0x544F5952, (void *)0x4F4F4D00, (void *)0x4F425345, (void *)0x52560000, (void *)0x50414E54, (void *)0x52590000, (void *)0x5041524C, (void *)0x4F520000, (void *)0x53495454, (void *)0x494E4700, (void *)0x53545245, (void *)0x54434800, (void *)0x53554E52, (void *)0x4F4F4D00, (void *)0x57494E54, (void *)0x45520000, (void *)0x5449544C, (void *)0x45000000, (void *)0x53504952, (void *)0x49540000, (void *)0x474C4F42, (void *)0x414C0000, (void *)0x0, (void *)0x28, (void *)0x0, (void *)0x0, (void *)0x28, (void *)0x0, (void *)0x0, (void *)0x28, (void *)0x0, (void *)0x0, (void *)0x3F800000, (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x40000000, (void *)0x0, (void *)0x3F800000, (void *)0x3F800000, (void *)0x0, (void *)0xBF800000, (void *)0x3F800000, (void *)0x0, (void *)0x0, (void *)0x3F800000, (void *)0x3F800000, (void *)0x0, (void *)0x3F800000, (void *)0xBF800000, (void *)0x0, (void *)0x6, (void *)0x9, (void *)0xC, (void *)0xF, (void *)0x12, (void *)0x15, (void *)0x18, (void *)0x1B, (void *)0x0, (void *)0x6, (void *)0x9, (void *)0xC, (void *)0xF, (void *)0x12, (void *)0x15, (void *)0x18, (void *)0x1B, (void *)0x0, (void *)0x6, (void *)0x40, (void *)0x43, (void *)0x46, (void *)0x49, (void *)0x4C, (void *)0x4F, (void *)0x52, (void *)0x55, (void *)0x1E, (void *)0x21, (void *)0x24, (void *)0x27, (void *)0x2A, (void *)0x2D, (void *)0x30, (void *)0x33, (void *)&lbl_802961F0, (void *)&lbl_8035D860, (void *)&lbl_8035D868, (void *)&lbl_8035D870, (void *)&lbl_8035D878, (void *)&lbl_8035D880, (void *)&lbl_802961FC, (void *)&lbl_8035D888, (void *)&lbl_8035D890, (void *)&lbl_802961FC, (void *)&lbl_8035D898, (void *)&lbl_8035D8A0, (void *)&lbl_802961FC, (void *)&lbl_8035D8A8, (void *)&lbl_8035D8B0, (void *)&lbl_802961FC, (void *)&lbl_8035D8B8, (void *)&lbl_8035D8C0, (void *)&lbl_802961FC, (void *)&lbl_8035D8C8, (void *)&lbl_8035D8D0, (void *)&lbl_802961FC, (void *)&lbl_8035D8D8, (void *)&lbl_8035D8E0, (void *)&lbl_802961FC, (void *)&lbl_8035D8E4, (void *)&lbl_8035D8EC, (void *)&lbl_802961FC, (void *)&lbl_8035D8F4, (void *)&lbl_8035D8FC, (void *)&lbl_802961FC, (void *)&lbl_8035D904, (void *)&lbl_8035D90C, (void *)&lbl_8035D914, (void *)0x0, (void *)&lbl_8035D91C, (void *)&lbl_8035D924, (void *)0x0, (void *)&lbl_8035D92C, (void *)&lbl_8035D934, (void *)0x0, (void *)&lbl_8035D93C, (void *)&lbl_8035D944, (void *)0x0, (void *)&lbl_8035D94C, (void *)&lbl_8035D954, (void *)0x0, (void *)&lbl_8035D95C, (void *)&lbl_8035D95C, (void *)&lbl_8035D964, (void *)&lbl_8035D964, (void *)&lbl_8035D968, (void *)&lbl_8035D970, (void *)&lbl_8035D964, (void *)&lbl_8035D964, (void *)&lbl_8035D968, (void *)&lbl_80296208, (void *)&lbl_8035D964, (void *)&lbl_8035D964, (void *)&lbl_8035D978, (void *)&lbl_80296214, (void *)&lbl_8035D964, (void *)&lbl_8035D964, (void *)&lbl_8035D978, (void *)&lbl_80296220, (void *)&lbl_8035D964, (void *)&lbl_8035D964, (void *)&lbl_8035D980, (void *)&lbl_8035D988, (void *)&lbl_8035D964, (void *)&lbl_8035D964, (void *)&lbl_8035D980, (void *)&lbl_8029622C, (void *)&lbl_8035D964, (void *)&lbl_8035D964, (void *)&lbl_8035D980, (void *)&lbl_80296238, (void *)&lbl_8035D964, (void *)&lbl_8035D964, (void *)&lbl_8035D980, (void *)&lbl_80296244, (void *)&lbl_8035D964, (void *)&lbl_8035D964, (void *)&lbl_8035D980, (void *)&lbl_80296250, (void *)&lbl_8035D964, (void *)&lbl_8035D964, (void *)&lbl_8035D964, (void *)0x40400000, (void *)0x0, (void *)0x0, (void *)&lbl_8035D990, (void *)0x0, (void *)0x0, (void *)0x0, (void *)&lbl_8035D998, (void *)0x3F800000, (void *)0x0, (void *)0x0, (void *)&lbl_8035D9A0, (void *)0x40A00000, (void *)0x0, (void *)0x0, (void *)&lbl_8029625C, (void *)0x3F800000, (void *)0x0, (void *)0x0, (void *)&lbl_80296268, (void *)0x3F000000, (void *)0x0, (void *)0x0, (void *)&lbl_80296274, (void *)0x40800000, (void *)0x0, (void *)0x0, (void *)&lbl_8035D9A8, (void *)0x3C23D70A, (void *)0x0, (void *)0x0, (void *)&lbl_8035D9B0, (void *)0x40800000, (void *)0x0, (void *)0x0, (void *)&lbl_8035D9B8, (void *)&lbl_80296280, (void *)0x0, (void *)0x4C666F6F, (void *)0x74520000, (void *)0x0, (void *)&lbl_8035D9C0, (void *)0x1, (void *)0x0, (void *)0x0, (void *)0x0, (void *)&lbl_8035D9C8, (void *)&lbl_8035D9D0, (void *)&lbl_8035D9D8, (void *)&lbl_8035D9E0, (void *)&lbl_8035D9A0, (void *)&lbl_8035D8A0, (void *)&lbl_8035D9E8, (void *)&lbl_8035D8FC, (void *)&lbl_8035D8E0, (void *)&lbl_8035D9F0, (void *)&lbl_8035D9F8, (void *)&lbl_8035DA00, (void *)&lbl_8035D9C8, (void *)&lbl_8035DA04, (void *)&lbl_8029628C, (void *)&lbl_80296298, (void *)&lbl_802962A4, (void *)&lbl_8035DA0C, (void *)&lbl_802962A4, (void *)&lbl_802962A4, (void *)&lbl_802962A4, (void *)&lbl_8035DA14, (void *)&lbl_8035D8A0, (void *)&lbl_8035D9B8, (void *)&lbl_8035D9A8, (void *)&lbl_8035D8FC, (void *)&lbl_8035D990, (void *)&lbl_8035D9B0, (void *)&lbl_8029625C, (void *)&lbl_80296268, (void *)&lbl_8035DA1C, (void *)&lbl_802962B0, (void *)&lbl_802962BC, (void *)&lbl_8035DA24, (void *)&lbl_8035DA2C, (void *)&lbl_802962C8, (void *)&lbl_8035DA34, (void *)&lbl_80296274, (void *)&lbl_8035DA3C, (void *)&lbl_802962D4, (void *)&lbl_8035DA44, (void *)&lbl_8035DA4C, (void *)&lbl_8035DA54, (void *)&lbl_8035DA5C, (void *)&lbl_8035DA64, (void *)&lbl_8035DA6C, (void *)&lbl_8035DA74, (void *)&lbl_8035D9C8, (void *)0x0, (void *)0x1, (void *)&lbl_8035DA04, (void *)0x1, (void *)0x1, (void *)&lbl_8029628C, (void *)0x2, (void *)0x1, (void *)&lbl_80296298, (void *)0x3, (void *)0x1, (void *)&lbl_802962A4, (void *)0x4, (void *)0x4, (void *)&lbl_8035DA0C, (void *)0x8, (void *)0x1, (void *)&lbl_8035DA14, (void *)0x9, (void *)0x1, (void *)&lbl_8035D8A0, (void *)0xA, (void *)0x1, (void *)&lbl_8035D9B8, (void *)0xB, (void *)0x1, (void *)&lbl_8035D9A8, (void *)0xC, (void *)0x1, (void *)&lbl_8035D8FC, (void *)0xD, (void *)0x1, (void *)&lbl_8035D990, (void *)0xE, (void *)0x1, (void *)&lbl_8035D9B0, (void *)0xF, (void *)0x1, (void *)&lbl_8029625C, (void *)0x10, (void *)0x1, (void *)&lbl_80296268, (void *)0x11, (void *)0x1, (void *)&lbl_8035DA1C, (void *)0x12, (void *)0x1, (void *)&lbl_802962B0, (void *)0x13, (void *)0x1, (void *)&lbl_802962BC, (void *)0x14, (void *)0x1, (void *)&lbl_8035DA24, (void *)0x15, (void *)0x1, (void *)&lbl_8035DA2C, (void *)0x16, (void *)0x1, (void *)&lbl_802962C8, (void *)0x17, (void *)0x1, (void *)&lbl_8035DA34, (void *)0x18, (void *)0x1, (void *)&lbl_80296274, (void *)0x19, (void *)0x1, (void *)&lbl_8035DA3C, (void *)0x1A, (void *)0x1, (void *)&lbl_802962D4, (void *)0x1B, (void *)0x1, (void *)&lbl_8035DA44, (void *)0x1C, (void *)0x1, (void *)&lbl_8035DA4C, (void *)0x1D, (void *)0x1, (void *)&lbl_8035DA54, (void *)0x1E, (void *)0x1, (void *)&lbl_8035DA5C, (void *)0x1F, (void *)0x1, (void *)&lbl_8035DA64, (void *)0x20, (void *)0x1, (void *)&lbl_8035DA6C, (void *)0x21, (void *)0x1, (void *)&lbl_8035DA74, (void *)0x22, (void *)0x1, (void *)0x0, (void *)0x1, (void *)0x2, (void *)0x3, (void *)0x4, (void *)0x6, (void *)0x7, (void *)0x8, (void *)0x5, (void *)0x9, (void *)0xA, (void *)0xB, (void *)0xC, (void *)0xD, (void *)0xE, (void *)0xF, (void *)0x10, (void *)0x11, (void *)0x12, (void *)0x13, (void *)0x14, (void *)0x15, (void *)0x16, (void *)0x17, (void *)0x18, (void *)0x19, (void *)0x1A, (void *)0x1B, (void *)0x1C, (void *)0x1D, (void *)0x1E, (void *)0x1F, (void *)0x20, (void *)0x21, (void *)0x22 };
static s32 tA[35] = { 0, 12, 16, 25, 26, 27, 28, 36, 44, 51, 58, 65, 68, 69, 71, 74, 76, 79, 82, 83, 90, 95, 97, 100, 105, 108, 111, 112, 113, 114, 115, 116, 117, 118, 122 };
static s32 tB[126] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 7, 1, 1, 3, 2, 1, 1, 1, 1, 1, 1, 1, 3, 12, 12, 12, 1, 1, 3, 1, 1, 1, 2, 2, 1, 1, 3, 1, 1, 1, 2, 2, 1, 4, 1, 1, 1, 2, 2, 1, 4, 1, 1, 2, 1, 2, 1, 4, 1, 1, 1, 2, 2, 5, 1, 6, 12, 11, 1, 1, 1, 10, 1, 11, 4, 1, 7, 5, 1, 6, 12, 1, 4, 1, 1, 2, 1, 2, 5, 1, 3, 1, 2, 1, 11, 4, 1, 7, 4, 1, 1, 1, 5, 6, 1, 5, 4, 1, 7, 12, 12, 12, 12, 12, 12, 12, 1, 9, 1, 1, 1, 9, 1, 1 };
static s32 tC[126] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 12, 12, 15, 16, 12, 17, 12, 18, 19, 12, 12, 12, 12, 12, 20, 21, 12, 21, 12, 21, 12, 12, 20, 22, 12, 22, 12, 22, 12, 12, 23, 12, 23, 12, 23, 12, 12, 24, 12, 24, 12, 24, 12, 12, 25, 12, 25, 12, 25, 12, 12, 26, 12, 27, 12, 28, 12, 19, 12, 29, 12, 12, 18, 12, 12, 30, 12, 12, 31, 32, 12, 32, 31, 32, 31, 33, 12, 33, 34, 33, 35, 12, 12, 36, 12, 12, 19, 12, 18, 12, 12, 37, 12, 12, 18, 12, 38, 18, 39, 40, 41, 42, 43, 12, 44, 12, 44, 12, 45, 12, 45 };
void *lbl_802B96A8[20] = { (void *)0x0, (void *)0x0, (void *)&fn_80050068, (void *)&fn_80249AC4, (void *)&fn_8004FF0C, (void *)&fn_80242210, (void *)&fn_8004FD98, (void *)&fn_8023D198, (void *)&fn_80050174, (void *)&fn_8004F034, (void *)&fn_80241D80, (void *)&fn_8003F140, (void *)&fn_8003F18C, (void *)&fn_8023FE08, (void *)&fn_8004FC50, (void *)&fn_802416D4, (void *)&fn_8003F1DC, (void *)&fn_80240054, (void *)&fn_800501FC, (void *)&fn_8004FCF4 };
typedef struct { f32 x, y, z; } V3;
extern int rand(void);
extern u32 lbl_8035B308;
extern u8 *lbl_8035B460;
extern void *lbl_803286D0[];
extern u32 lbl_8035DA7C;
extern f32 lbl_8035DA80, lbl_8035DA8C, lbl_8035DA90, lbl_8035DA94, lbl_8035DAA8, lbl_8035DAAC, lbl_8035DAB0, lbl_8035DAB4, lbl_8035DAB8;
extern char lbl_8035D964[4], lbl_8035DA84[4], lbl_8035DA98[4], lbl_8035DAA0[4], lbl_8035DABC[4], lbl_8035DAC4[4], lbl_8035DACC[4], lbl_8035DAD4[4], lbl_8035DADC[4];
extern char lbl_802962E0[];
void *fn_800F9398(void *, void *);
void *fn_800F9788(void *, void *, void *);
void fn_80190C98(void *);
void fn_8022BCD8(int, void *, void *);
int fn_8022BE28(int, int);
void fn_8022BF30(int, int, int, f32);
void fn_802273F0(int, char *, char *, char *, int, f32);
int fn_80236AC0(int);
int fn_80236B14(int);
int fn_8023F5E8(int, int);
void fn_8023F9C8(int, int);
int fn_802401A0(int);
int fn_802401D0(int);
int fn_802402E0(int);
int fn_802405B8(int);
void fn_80240274(int, int);
void fn_80240948(int, char *, int);
void fn_80240DEC(int, int, int, int);
void fn_802413D8(int, int, f32, int, int, int);
void fn_80241588(int, int, int, f32);
int fn_80241628(int, int, int);
void fn_80242168(f32, int);
void fn_80257A4C(int, V3 *);
void fn_80255B9C(int, V3 *);
int fn_80249058(int, int);
int fn_8024909C(int, int);
void fn_802490E0(int, int, f32);
int fn_802491DC(int, int);
int fn_802494A4(int, int);

#define E0 (*(VO **)(p + 0xe0))
#define F110 (*(f32 *)((int)E0 + 0x110))

static inline void *FindRes(u8 *mgr, char *grp, char *name) {
    if (grp == 0 || grp[0] == 0) return fn_800F9398(mgr + 0x180, name);
    return fn_800F9788(mgr + 0x198, grp, name);
}
static inline void att(int p) {
    V3 v;
    u8 *b;
    u8 *a;
    (*(VO **)(p + 0xe4))->getPos(&v, 0, 0, 0, 0);
    fn_8023F9C8(p, 0);
    a = **(u8 ***)(p + 0x110);
    if (a != 0) {
        b = *(u8 **)(a + 0x30);
        if (b != 0) {
            ((void (*)(void *, V3 *))lbl_803286D0[3])(*(void **)(b + 0x10), &v);
            *(u32 *)(b + 0x20) |= lbl_8035DA7C;
            fn_80190C98(a);
        }
    }
}
static inline void att2(int p) {
    V3 v;
    u8 *a;
    u8 *b;
    (*(VO **)(p + 0xe4))->getPos(&v, 0, 0, 0, 0);
    fn_8023F9C8(p, 0);
    a = **(u8 ***)(p + 0x110);
    if (a != 0) {
        b = *(u8 **)(a + 0x30);
        if (b != 0) {
            ((void (*)(void *, V3 *))lbl_803286D0[3])(*(void **)(b + 0x10), &v);
            *(u32 *)(b + 0x20) |= lbl_8035DA7C;
            fn_80190C98(a);
        }
    }
}
static inline void nop() {}
static inline void lerp(V3 *r, V3 *a, V3 *b, f32 t) { f32 dx = b->x - a->x, dy = b->y - a->y, dz = b->z - a->z; dx *= t; dy *= t; dz *= t; r->x = a->x + dx; r->y = a->y + dy; r->z = a->z + dz; }
static inline int busy(int p) {
    u32 *s = *(u32 **)(*(int *)(p + 0xec) + 0xc);
    if (s[0] == *(u32 *)(p + 0x154) || s[1] == *(u32 *)(p + 0x154)) return 0;
    return 1;
}

void fn_8004F034(int p, int st) {
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
    case 0:
        F110 = lbl_8035DA80;
        fn_80241628(p, 0, 0);
        fn_8022BE28(*(int *)(p + 0xe0), 0);
        *(u32 *)(p + 0x118) = *(u32 *)(lbl_8035B308 + 0x48);
        E0->getPos((void *)(p + 0x11c), 0, 0, 0, 0);
        *(void **)(p + 0x154) = FindRes(*(u8 **)(lbl_8035B460 + 8), lbl_8035D964, lbl_8035DA84);
        if (*(int *)((int)E0 + 0x114) == 0) fn_802491DC(p, 7);
        else fn_802402E0(p);
        break;
    case 1:
        if (*(int *)(p + 0x160) != 0) {
            fn_802494A4(p, 9);
        } else {
            s32 ri;
            f32 r;
            fn_8023F5E8(p, *(int *)(p + 0x118));
            fn_80241628(p, 1, 0);
            fn_80241588(p, 4, 0, lbl_8035DA8C);
            ri = rand() % 2500u;
            r = lbl_8035DA90 * (f32)ri;
            r = lbl_8035DA94 + r;
            fn_802490E0(p, 0, r);
        }
        break;
    case 2:
        if (*(int *)(p + 0x160) != 0) {
            fn_802494A4(p, 9);
        } else {
            fn_8023F5E8(p, *(int *)(p + 0x118));
            fn_80241628(p, 1, 0);
            fn_80241588(p, 3, 0, lbl_8035DA8C);
        }
        break;
    case 3:
        fn_80241628(p, 1, 0);
        fn_80241588(p, 5, 0, lbl_8035DA8C);
        fn_802273F0(*(int *)(p + 0xe0), lbl_8035DA98, lbl_8035D964, lbl_8035DAA0, **(int **)(p + 0x128), **(f32 **)(p + 0x12c));
        break;
    case 4:
        if (*(int *)(p + 0x160) != 0) {
            fn_802494A4(p, 9);
        } else {
            if (*(int **)(p + 0x150) != 0 && **(int **)(p + 0x150) != 0) {
                fn_8023F5E8(p, *(int *)(p + 0x118));
                fn_80241628(p, 1, 0);
                fn_80241588(p, 0, 0, lbl_8035DA8C);
                fn_802490E0(p, 3, lbl_8035DA80);
            } else {
                fn_8023F5E8(p, *(int *)(p + 0x118));
                fn_80241628(p, 3, 0);
                fn_80241588(p, 1, 0, lbl_8035DA8C);
                fn_80242168(lbl_8035DAA8, p);
                fn_802491DC(p, 3);
            }
            fn_80240DEC(p, 25, 0, 4);
        }
        break;
    case 5:
        F110 = lbl_8035DA80;
        fn_80241628(p, 0, 0);
        fn_80241588(p, 2, 0, lbl_8035DA8C);
        fn_802401A0(p);
        break;
    case 6:
        if (*(int *)(p + 0x160) != 0) {
            fn_802494A4(p, 9);
        } else if (*(int **)(p + 0x150) != 0 && **(int **)(p + 0x150) != 0) {
            fn_8023F5E8(p, *(int *)(p + 0x118));
            fn_80241628(p, 1, 0);
            fn_80241588(p, 0, 0, lbl_8035DA8C);
            fn_802491DC(p, 3);
        } else {
            V3 r;
            V3 b;
            V3 a;
            V3 c;
            f32 dx, dy, dz;
            fn_8023F5E8(p, 0);
            fn_80241628(p, 0, 0);
            fn_80241628(p, 1, 0);
            fn_80241588(p, 0, 0, lbl_8035DA8C);
            E0->getPos(&a, &b, 0, 0, 0);
            (*(VO **)(p + 0x118))->getPos(&c, 0, 0, 0, 0);
            {V3 d;
            d.x = c.x - a.x;
            d.y = c.y - a.y;
            d.z = c.z - a.z;
            d.x *= *(f32 *)&lbl_8035DAAC;
            d.y *= lbl_8035DAAC;
            d.z *= lbl_8035DAAC;
            r.x = a.x + d.x;
            r.y = a.y + d.y;
            r.z = a.z + d.z;}
            fn_80257A4C(*(int *)(*(int *)(p + 0xc0) + 0xc), &r);
            fn_80255B9C(*(int *)(*(int *)(p + 0xc0) + 0x4), &r);
        }
        break;
    case 7:
        F110 = lbl_8035DA80;
        fn_80241628(p, 0, 0);
        fn_80241588(p, 8, 0, lbl_8035DAB0);
        fn_802401A0(p);
        break;
    case 8:
        fn_80241628(p, 0, 0);
        fn_80241588(p, 6, 0, lbl_8035DA8C);
        break;
    case 9:
        fn_8023F5E8(p, *(int *)(p + 0x118));
        fn_80241628(p, 0, 0);
        fn_80241588(p, 0, 0, lbl_8035DA8C);
        break;
    case 10:
        F110 = lbl_8035DA80;
        fn_80241628(p, 4, 0);
        fn_80241588(p, 0, 0, lbl_8035DA8C);
        fn_80236AC0(*(int *)(p + 0xe0));
        for (i = 0; i < *(int *)(p + 0x5c); i++) fn_8024909C(p, i);
        break;
    case 11:
        F110 = lbl_8035DA80;
        fn_802402E0(p);
        fn_80241628(p, 0, 0);
        fn_80241588(p, 0, 0, lbl_8035DA8C);
        break;
    case 12:
        return;
    case 13:
        fn_802401D0(p);
        break;
    case 14:
        return;
    case 15:
        fn_802494A4(p, 3);
        break;
    case 16:
        fn_802494A4(p, 4);
        break;
    case 17:
        fn_802491DC(p, 8);
        break;
    case 18:
        fn_802494A4(p, 1);
        break;
    case 19:
        fn_802494A4(p, 2);
        break;
    case 20:
        att2(p);
        break;
    case 21:
        if (busy(p) == 0) att(p);
        else fn_802405B8(p);
        break;
    case 22:
        if (busy(p) == 0) att(p);
        else {
            *(u32 *)(p + 0x168) = 1;
            fn_802405B8(p);
        }
        break;
    case 23:
        *(u32 *)(p + 0x168) = 1;
        fn_802405B8(p);
        break;
    case 24:
        if (*(int *)(p + 0x168) != 0) {
            *(u32 *)(p + 0x168) = 0;
            fn_802494A4(p, 8);
        }
        break;
    case 25:
        fn_802494A4(p, 5);
        break;
    case 26:
        fn_8022BCD8(*(int *)(p + 0xe0), lbl_802962E0, lbl_8035D964);
        fn_8022BF30(*(int *)(p + 0xe0), 255, 1, lbl_8035DAB0);
        fn_8022BF30(*(int *)(p + 0xe0), 0, 1, lbl_8035DAB4);
        fn_802490E0(p, 4, lbl_8035DAB8);
        break;
    case 27:
        F110 = lbl_8035DA80;
        break;
    case 28:
        fn_80240274(p, 0);
        fn_802494A4(p, 7);
        break;
    case 29:
        fn_802494A4(p, 11);
        break;
    case 30:
        fn_802402E0(p);
        if (*(VO **)(p + 0x158) != 0) (*(VO **)(p + 0x158))->send(lbl_8035DABC, *(u32 *)(p + 0xe0), 0, *(void **)(p + 0x15c), 0);
        break;
    case 31:
        *(u32 *)(p + 0x160) = 1;
        break;
    case 32:
        *(u32 *)(p + 0x160) = 1;
        fn_802494A4(p, 9);
        break;
    case 33:
        *(u32 *)(p + 0x160) = 0;
        break;
    case 34:
        *(u32 *)(p + 0x160) = 0;
        fn_802494A4(p, 1);
        break;
    case 35:
        *(u32 *)(p + 0x158) = *(u32 *)(p + 0xe4);
        *(u32 *)(p + 0x15c) = *(u32 *)(p + 0xec);
        fn_802494A4(p, 7);
        break;
    case 36:
        fn_802491DC(p, 5);
        break;
    case 37:
        if (*(void **)(p + 0x150) == 0 || *(void **)(p + 0x150) == 0) {
            fn_80241628(p, 3, 0);
            fn_80241588(p, 1, 0, lbl_8035DA8C);
            fn_80242168(lbl_8035DAA8, p);
        }
        break;
    case 38:
        fn_802494A4(p, 0);
        fn_802402E0(p);
        break;
    case 39:
        fn_802494A4(p, 10);
        fn_80240274(p, 0);
        fn_80240948(p, lbl_8035DAC4, 0);
        break;
    case 40:
        fn_802494A4(p, 10);
        fn_80240274(p, 0);
        fn_80240948(p, lbl_8035DACC, 0);
        break;
    case 41:
        fn_802494A4(p, 10);
        fn_80240274(p, 0);
        fn_80240948(p, lbl_8035DAD4, 0);
        break;
    case 42:
        fn_802494A4(p, 10);
        fn_80240274(p, 0);
        fn_80240948(p, lbl_8035DADC, 0);
        break;
    case 43:
        if (*(void **)(p + 0xf0) != 0) fn_802413D8(p, *(int *)(p + 0xf0), lbl_8035DA8C, 0, 1, *(int *)(p + 0xec));
        break;
    case 44:
        fn_80236B14(*(int *)(p + 0xe0));
        for (i = 0; i < *(int *)(p + 0x5c); i++) fn_80249058(p, i);
        break;
    case 45:
        fn_80236AC0(*(int *)(p + 0xe0));
        for (i = 0; i < *(int *)(p + 0x5c); i++) fn_8024909C(p, i);
        break;
    case 46:
        break;
    }
}
}

} /* extern "C" */

} /* namespace m8004F034 */

namespace m8004FC50 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

} /* extern "C" */

extern "C" {
extern char lbl_802962B0[];
extern char lbl_802962BC[];
extern char lbl_8035DA1C[0x8];
extern char lbl_8035DA6C[0x6];
extern char lbl_8035DA74[0x7];
struct VCall_fn_8004FC50_0 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void m(int); };
struct VCall_fn_8004FC50_1 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void m(int); };
struct VCall_fn_8004FC50_2 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void m(int); };
struct VCall_fn_8004FC50_3 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void m(int); };
struct VCall_fn_8004FC50_4 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void m(int); };

void fn_8004FC50(s32 *param_1) {
    ((VCall_fn_8004FC50_0 *)(param_1))->m((s32)(lbl_8035DA1C)); /* "LIGHTON" */
    ((VCall_fn_8004FC50_1 *)(param_1))->m((s32)(lbl_802962B0)); /* "PLYRDEAD" */
    ((VCall_fn_8004FC50_2 *)(param_1))->m((s32)(lbl_802962BC)); /* "PLYRLIVE" */
    ((VCall_fn_8004FC50_3 *)(param_1))->m((s32)(lbl_8035DA6C)); /* "CINON" */
    ((VCall_fn_8004FC50_4 *)(param_1))->m((s32)(lbl_8035DA74)); /* "CINOFF" */
}
}

} /* namespace m8004FC50 */

namespace m8004FCF4 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

} /* extern "C" */

extern "C" {
extern char lbl_802962B0[];
extern char lbl_802962BC[];
extern char lbl_8035DA1C[0x8];
extern char lbl_8035DA6C[0x6];
extern char lbl_8035DA74[0x7];
struct VCall_fn_8004FCF4_0 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void m(int); };
struct VCall_fn_8004FCF4_1 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void m(int); };
struct VCall_fn_8004FCF4_2 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void m(int); };
struct VCall_fn_8004FCF4_3 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void m(int); };
struct VCall_fn_8004FCF4_4 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void m(int); };

void fn_8004FCF4(s32 *param_1) {
    ((VCall_fn_8004FCF4_0 *)(param_1))->m((s32)(lbl_8035DA1C)); /* "LIGHTON" */
    ((VCall_fn_8004FCF4_1 *)(param_1))->m((s32)(lbl_802962B0)); /* "PLYRDEAD" */
    ((VCall_fn_8004FCF4_2 *)(param_1))->m((s32)(lbl_802962BC)); /* "PLYRLIVE" */
    ((VCall_fn_8004FCF4_3 *)(param_1))->m((s32)(lbl_8035DA6C)); /* "CINON" */
    ((VCall_fn_8004FCF4_4 *)(param_1))->m((s32)(lbl_8035DA74)); /* "CINOFF" */
}
}

} /* namespace m8004FCF4 */

namespace m8004FD98 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

extern f32 lbl_8035DAB0;
void fn_80241E0C(void *);

void fn_8004FD98(u8 *p) {
    *(s32 *)(p + 280) = 0;
    *(s32 *)(p + 296) = 0;
    *(s32 *)(p + 300) = 0;
    *(s32 *)(p + 304) = 0;
    *(s32 *)(p + 308) = 0;
    *(s32 *)(p + 312) = 0;
    *(s32 *)(p + 316) = 0;
    *(s32 *)(p + 320) = 0;
    *(s32 *)(p + 324) = 0;
    *(s32 *)(p + 328) = 0;
    *(s32 *)(p + 332) = 0;
    *(s32 *)(p + 336) = 0;
    *(s32 *)(p + 340) = 0;
    *(s32 *)(p + 344) = 0;
    *(s32 *)(p + 348) = 0;
    *(s32 *)(p + 352) = 0;
    *(f32 *)(p + 356) = lbl_8035DAB0;
    *(s32 *)(p + 360) = 0;
    fn_80241E0C(p);
}

} /* extern "C" */

} /* namespace m8004FD98 */

namespace m8004FE08 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

extern u8 lbl_802B8B30[];
extern f32 lbl_8035DAB0;

#pragma opt_propagation off
void fn_8004FE08(void *arg0) {
    u8 *base = lbl_802B8B30;
    M2C_FIELD(arg0, s32 *, 0x54) = 0x23;
    M2C_FIELD(arg0, s32 *, 0x2c) = 0x20;
    M2C_FIELD(arg0, s32 *, 0x68) = 0xc;
    M2C_FIELD(arg0, s32 *, 0x5c) = 9;
    M2C_FIELD(arg0, s32 *, 0x80) = 5;
    M2C_FIELD(arg0, s32 *, 0x7c) = 9;
    M2C_FIELD(arg0, s32 *, 0x84) = 5;
    M2C_FIELD(arg0, s32 *, 0x88) = 10;
    M2C_FIELD(arg0, s32 *, 0x8c) = 0;
    M2C_FIELD(arg0, s32 *, 0x94) = 2;
    M2C_FIELD(arg0, void **, 0x58) = base + 1124;
    M2C_FIELD(arg0, void **, 0x28) = base + 1264;
    M2C_FIELD(arg0, void **, 0x30) = base + 1648;
    M2C_FIELD(arg0, void **, 0x6c) = base + 1076;
    M2C_FIELD(arg0, void **, 0x78) = base + 892;
    M2C_FIELD(arg0, void **, 0xc4) = base + 540;
    M2C_FIELD(arg0, void **, 0xc8) = base + 560;
    M2C_FIELD(arg0, void **, 0xcc) = base + 668;
    M2C_FIELD(arg0, void **, 0xf4) = base + 728;
    M2C_FIELD(arg0, s32 *, 0xfc) = 0;
    M2C_FIELD(arg0, void **, 0x10c) = base + 1036;
    M2C_FIELD(arg0, s32 *, 0x118) = 0;
    M2C_FIELD(arg0, s32 *, 0x128) = 0;
    M2C_FIELD(arg0, s32 *, 0x12c) = 0;
    M2C_FIELD(arg0, s32 *, 0x130) = 0;
    M2C_FIELD(arg0, s32 *, 0x134) = 0;
    M2C_FIELD(arg0, s32 *, 0x138) = 0;
    M2C_FIELD(arg0, s32 *, 0x13c) = 0;
    M2C_FIELD(arg0, s32 *, 0x140) = 0;
    M2C_FIELD(arg0, s32 *, 0x144) = 0;
    M2C_FIELD(arg0, s32 *, 0x148) = 0;
    M2C_FIELD(arg0, s32 *, 0x14c) = 0;
    M2C_FIELD(arg0, s32 *, 0x150) = 0;
    M2C_FIELD(arg0, s32 *, 0x154) = 0;
    M2C_FIELD(arg0, s32 *, 0x158) = 0;
    M2C_FIELD(arg0, s32 *, 0x15c) = 0;
    M2C_FIELD(arg0, s32 *, 0x160) = 0;
    M2C_FIELD(arg0, f32 *, 0x164) = lbl_8035DAB0;
    M2C_FIELD(arg0, s32 *, 0x168) = 0;
}
#pragma opt_propagation reset

} /* extern "C" */

} /* namespace m8004FE08 */

namespace m8004FF0C {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

extern char lbl_802961F0[];
extern char lbl_8035D964[1];
extern char lbl_8035DAF0[5];
extern char lbl_8035DAF8[7];
s32 fn_8023F52C(void *p, char *a, char *b, char *name, s32 x, s32 y);
void fn_8023F214(void *p);

#pragma opt_propagation off
void fn_8004FF0C(u8 *p) {
    char *base = lbl_802961F0;
    *(s32 *)(p + 0x128) = fn_8023F52C(p, lbl_8035D964, lbl_8035D964, base + 252, 1, 0);
    *(s32 *)(p + 0x12c) = fn_8023F52C(p, lbl_8035D964, lbl_8035D964, base + 264, 1, 0);
    *(s32 *)(p + 0x130) = fn_8023F52C(p, lbl_8035D964, lbl_8035D964, base + 284, 1, 0);
    *(s32 *)(p + 0x134) = fn_8023F52C(p, lbl_8035D964, lbl_8035D964, base + 296, 1, 0);
    *(s32 *)(p + 0x138) = fn_8023F52C(p, lbl_8035D964, lbl_8035DAF0, base + 308, 1, 0);
    *(s32 *)(p + 0x13c) = fn_8023F52C(p, lbl_8035D964, lbl_8035DAF0, base + 324, 1, 0);
    *(s32 *)(p + 0x148) = fn_8023F52C(p, lbl_8035D964, lbl_8035D964, base + 340, 1, 0);
    *(s32 *)(p + 0x14c) = fn_8023F52C(p, lbl_8035D964, lbl_8035D964, base + 352, 1, 0);
    *(s32 *)(p + 0x150) = fn_8023F52C(p, lbl_8035D964, lbl_8035D964, lbl_8035DAF8, 0, 0);
    fn_8023F214(p);
}
#pragma opt_propagation reset

} /* extern "C" */

} /* namespace m8004FF0C */

namespace m80050068 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

} /* extern "C" */

extern "C" {
extern u8 lbl_802B96A8[];
void __dl__FPv(int);
void __dt__9C8024262CFv(int, int);
struct VCall_fn_80050068_0 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void m(); };

s32 * fn_80050068(s32 *param_1, s16 param_2) {
    if (param_1 != (s32 *)0x0) {
        *param_1 = (s32)lbl_802B96A8;
        ((VCall_fn_80050068_0 *)(param_1))->m();
        __dt__9C8024262CFv((int)(param_1), (int)(0));
        if (0 < param_2) {
            __dl__FPv((int)(param_1));
        }
    }
    return param_1;
}
}

} /* namespace m80050068 */

struct C8024262C {
    C8024262C();
    ~C8024262C();
};
namespace m800500DC {

#pragma optEH2 on

extern "C" {

extern void *lbl_8035B530;
extern u8 lbl_802B96A8[];
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
void fn_8004FE08(void *);

} /* extern "C" */

/* hoisted */

struct C800500DC : C8024262C {
    u8 pad[0x16C];
    C800500DC() {
        *(void **)this = lbl_802B96A8;
        fn_8004FE08(this);
    }
};

extern "C" void *fn_800500DC(void) {
    C800500DC *r;
    if (lbl_8035B530 == NULL) {
        fn_800604C4(-2, 0, 0, 0);
    }
    fn_800F7EC0(lbl_8035B530);
    r = new C800500DC;
    fn_800F7E98();
    if (r == NULL) {
        fn_800604C4(-4, 0, 0, 0);
    }
    return r;
}

} /* namespace m800500DC */

namespace m80050174 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

s32 fn_802421C0(void *, s32);

s32 fn_80050174(void *p, s32 a) {
    switch (a) {
    case 4:
        return fn_802421C0(p, 0);
    case 5:
        return fn_802421C0(p, 0);
    case 6:
        return fn_802421C0(p, 1);
    case 7:
        return fn_802421C0(p, 2);
    case 8:
        return fn_802421C0(p, 3);
    }
    return 1;
}

} /* extern "C" */

} /* namespace m80050174 */

namespace m800501FC {
// dtk: data-align 4
/* Functions from 0x800501FC to 0x80050288, found by decomp-toolkit. */

extern "C" {

extern "C" {

}


extern "C" int fn_800501FC(void *arg0, u32 arg1) {
    void *p = *(void **)((u8 *)arg0 + 0x98);
    if (p != NULL) {
        return (*(int **)((u8 *)p + 0xC))[arg1];
    }
    switch (arg1) {
    case 0: return 1;
    case 1: return 1;
    case 2: return 0;
    case 3: return 0;
    case 4: return 1;
    case 5: return 0;
    case 6: return 0;
    case 7: return 1;
    case 8: return 0;
    default: return 1;
    }
}

} /* extern "C" */

} /* namespace m800501FC */
