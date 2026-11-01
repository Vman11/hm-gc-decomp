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
void fn_80052118(int p, int st);
void fn_8005327C();
void fn_800532D8();
void fn_80053384();
void fn_80053430();
void fn_80054068();
void fn_80054108();
void fn_800543B0();
void fn_8005462C();
void fn_80054740();
void fn_80054790();
void fn_8023D198();
void fn_80240054();
void fn_80241D80();
void fn_80249AC4();
extern char lbl_80296598[];
extern char lbl_802965A4[];
extern char lbl_802965B0[];
extern char lbl_802965BC[];
extern char lbl_802965C8[];
extern char lbl_802965D4[];
extern char lbl_802965E0[];
extern char lbl_802965EC[];
extern char lbl_802965F8[];
extern char lbl_80296604[];
extern char lbl_80296610[];
extern char lbl_8029661C[];
extern char lbl_80296628[];
extern char lbl_80296634[];
extern char lbl_80296640[];
extern char lbl_8029664C[];
extern char lbl_80296658[];
extern char lbl_80296664[];
extern char lbl_80296670[];
extern char lbl_8029667C[];
extern char lbl_80296688[];
extern char lbl_80296694[];
extern char lbl_802966A0[];
extern char lbl_8035DD48[];
extern char lbl_8035DD50[];
extern char lbl_8035DD58[];
extern char lbl_8035DD60[];
extern char lbl_8035DD68[];
extern char lbl_8035DD70[];
extern char lbl_8035DD78[];
extern char lbl_8035DD80[];
extern char lbl_8035DD88[];
extern char lbl_8035DD90[];
extern char lbl_8035DD98[];
extern char lbl_8035DDA0[];
extern char lbl_8035DDA8[];
extern char lbl_8035DDB0[];
extern char lbl_8035DDB8[];
extern char lbl_8035DDC0[];
extern char lbl_8035DDC8[];
extern char lbl_8035DDD0[];
extern char lbl_8035DDD4[];
extern char lbl_8035DDDC[];
extern char lbl_8035DDE4[];
extern char lbl_8035DDEC[];
extern char lbl_8035DDF4[];
extern char lbl_8035DDFC[6], lbl_8035DE78[5], lbl_8035DF74[7], lbl_8035DF7C[8], lbl_8035DF84[8], lbl_8035DF8C[7];
extern char lbl_8035DE04[];
extern char lbl_8035DE0C[];
extern char lbl_8035DE14[];
extern char lbl_8035DE1C[];
extern u8 lbl_8035DE24[4];
extern char lbl_8035DE28[];
extern char lbl_8035DE30[];
extern char lbl_8035DE38[];
extern char lbl_8035DE40[];
extern char lbl_8035DE48[];
extern char lbl_8035DE50[];
extern char lbl_8035DE58[];
extern char lbl_8035DE60[];
extern char lbl_8035DE68[];
extern char lbl_8035DE70[];
extern char lbl_8035DDFC[6], lbl_8035DE78[5], lbl_8035DF74[7], lbl_8035DF7C[8], lbl_8035DF84[8], lbl_8035DF8C[7];
extern char lbl_8035DE80[];
extern char lbl_8035DE88[];
extern char lbl_8035DE90[];
extern char lbl_8035DE98[];
extern char lbl_8035DEA0[];
extern char lbl_8035DEA8[];
extern char lbl_8035DEB0[];
extern char lbl_8035DEB8[];
extern char lbl_8035DEC0[];
extern char lbl_8035DEC8[];
extern char lbl_8035DED0[];
extern char lbl_8035DED8[];
extern char lbl_8035DEE0[];
extern char lbl_8035DEE8[];
extern char lbl_8035DEF0[];
extern char lbl_8035DEF8[];
extern char lbl_8035DF00[];
extern char lbl_8035DF08[];
extern char lbl_8035DF10[];
extern char lbl_8035DF18[];
extern char lbl_8035DF20[];
extern char lbl_8035DF28[];
extern char lbl_8035DF30[];
extern char lbl_8035DF38[];
extern char lbl_8035DF40[];
extern char lbl_8035DF48[];
extern char lbl_8035DF50[];
void *lbl_802BA218[476] = { (void *)0x0, (void *)0xFA, (void *)0x1F4, (void *)0x2EE, (void *)0x55495C4D, (void *)0x454D4341, (void *)0x52445C00, (void *)0x41545449, (void *)0x43000000, (void *)0x42414C4C, (void *)0x524F4F4D, (void *)0x4348494C, (void *)0x4452454E, (void *)0x434F4E53, (void *)0x45525600, (void *)0x44494E52, (void *)0x4F4F4D00, (void *)0x464F5945, (void *)0x52000000, (void *)0x47414C4C, (void *)0x45525900, (void *)0x47524156, (void *)0x45594400, (void *)0x47524F4F, (void *)0x4D000000, (void *)0x47525448, (void *)0x414C4C00, (void *)0x47554553, (void *)0x54000000, (void *)0x48414C4C, (void *)0x41420000, (void *)0x48414C4C, (void *)0x43440000, (void *)0x4B495443, (void *)0x48454E00, (void *)0x4C414200, (void *)0x0, (void *)0x4D555345, (void *)0x554D0000, (void *)0x4D414944, (void *)0x0, (void *)0x4D415354, (void *)0x52424544, (void *)0x4D415553, (void *)0x4F4C4D00, (void *)0x4D454153, (void *)0x55524500, (void *)0x544F5952, (void *)0x4F4F4D00, (void *)0x4F425345, (void *)0x52560000, (void *)0x50414E54, (void *)0x52590000, (void *)0x5041524C, (void *)0x4F520000, (void *)0x53495454, (void *)0x494E4700, (void *)0x53545245, (void *)0x54434800, (void *)0x53554E52, (void *)0x4F4F4D00, (void *)0x57494E54, (void *)0x45520000, (void *)0x5449544C, (void *)0x45000000, (void *)0x53504952, (void *)0x49540000, (void *)0x474C4F42, (void *)0x414C0000, (void *)0x0, (void *)0x28, (void *)0x0, (void *)0x0, (void *)0x28, (void *)0x0, (void *)0x0, (void *)0x28, (void *)0x0, (void *)0x0, (void *)0x3F800000, (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x40000000, (void *)0x0, (void *)0x3F800000, (void *)0x3F800000, (void *)0x0, (void *)0xBF800000, (void *)0x3F800000, (void *)0x0, (void *)0x0, (void *)0x3F800000, (void *)0x3F800000, (void *)0x0, (void *)0x3F800000, (void *)0xBF800000, (void *)0x0, (void *)0x6, (void *)0x9, (void *)0xC, (void *)0xF, (void *)0x12, (void *)0x15, (void *)0x18, (void *)0x1B, (void *)0x0, (void *)0x6, (void *)0x9, (void *)0xC, (void *)0xF, (void *)0x12, (void *)0x15, (void *)0x18, (void *)0x1B, (void *)0x0, (void *)0x6, (void *)0x40, (void *)0x43, (void *)0x46, (void *)0x49, (void *)0x4C, (void *)0x4F, (void *)0x52, (void *)0x55, (void *)0x1E, (void *)0x21, (void *)0x24, (void *)0x27, (void *)0x2A, (void *)0x2D, (void *)0x30, (void *)0x33, (void *)&lbl_80296598, (void *)&lbl_8035DD48, (void *)&lbl_802965A4, (void *)&lbl_8035DD50, (void *)&lbl_8035DD58, (void *)&lbl_8035DD60, (void *)&lbl_8035DD68, (void *)&lbl_8035DD70, (void *)&lbl_8035DD78, (void *)&lbl_8035DD68, (void *)&lbl_8035DD80, (void *)&lbl_8035DD88, (void *)&lbl_8035DD68, (void *)&lbl_8035DD90, (void *)&lbl_8035DD98, (void *)&lbl_8035DD68, (void *)&lbl_8035DDA0, (void *)&lbl_8035DDA8, (void *)&lbl_8035DD68, (void *)&lbl_8035DDB0, (void *)&lbl_8035DDB8, (void *)&lbl_8035DD68, (void *)&lbl_8035DDC0, (void *)&lbl_8035DDC8, (void *)&lbl_8035DD68, (void *)&lbl_8035DDA0, (void *)&lbl_8035DDD0, (void *)&lbl_8035DD68, (void *)&lbl_8035DDD4, (void *)&lbl_8035DDDC, (void *)&lbl_8035DD68, (void *)&lbl_8035DDE4, (void *)&lbl_8035DDEC, (void *)&lbl_8035DD68, (void *)&lbl_8035DDF4, (void *)&lbl_8035DDFC, (void *)&lbl_8035DD68, (void *)&lbl_802965B0, (void *)&lbl_8035DE04, (void *)&lbl_8035DD68, (void *)&lbl_8035DE0C, (void *)&lbl_8035DE14, (void *)&lbl_8035DE1C, (void *)&lbl_8035DE24, (void *)&lbl_8035DE24, (void *)&lbl_8035DE14, (void *)&lbl_802965BC, (void *)&lbl_8035DE24, (void *)&lbl_8035DE24, (void *)&lbl_8035DE14, (void *)&lbl_802965C8, (void *)&lbl_8035DE24, (void *)&lbl_8035DE24, (void *)&lbl_8035DE14, (void *)&lbl_802965D4, (void *)&lbl_8035DE24, (void *)&lbl_8035DE24, (void *)&lbl_8035DE14, (void *)&lbl_802965E0, (void *)&lbl_8035DE24, (void *)&lbl_8035DE24, (void *)&lbl_8035DE14, (void *)&lbl_802965EC, (void *)&lbl_8035DE24, (void *)&lbl_8035DE24, (void *)&lbl_8035DE14, (void *)&lbl_8035DE28, (void *)&lbl_8035DE24, (void *)&lbl_8035DE24, (void *)&lbl_8035DE30, (void *)&lbl_8035DE30, (void *)&lbl_8035DE24, (void *)&lbl_8035DE24, (void *)&lbl_8035DE38, (void *)&lbl_8035DE24, (void *)&lbl_8035DE24, (void *)&lbl_8035DE24, (void *)0x40000000, (void *)0x0, (void *)0x0, (void *)&lbl_8035DE40, (void *)0x3F800000, (void *)0x0, (void *)0x0, (void *)&lbl_802965F8, (void *)0x3F000000, (void *)0x0, (void *)0x0, (void *)&lbl_80296604, (void *)0x3F000000, (void *)0x0, (void *)0x0, (void *)&lbl_80296610, (void *)0x3F000000, (void *)0x0, (void *)0x0, (void *)&lbl_8029661C, (void *)0x3FEAA993, (void *)0x0, (void *)0x0, (void *)&lbl_80296628, (void *)0x40800000, (void *)0x0, (void *)0x0, (void *)&lbl_8035DE48, (void *)0x40800000, (void *)0x0, (void *)0x0, (void *)&lbl_8035DE50, (void *)&lbl_8035DE58, (void *)&lbl_8035DD60, (void *)&lbl_80296634, (void *)&lbl_8035DE60, (void *)&lbl_8035DE68, (void *)&lbl_8035DD98, (void *)&lbl_8035DDB8, (void *)&lbl_8035DE70, (void *)&lbl_8035DE78, (void *)&lbl_8035DE80, (void *)&lbl_8035DD60, (void *)&lbl_8035DE88, (void *)&lbl_8035DE90, (void *)&lbl_8035DE98, (void *)&lbl_8035DE04, (void *)&lbl_8035DE58, (void *)&lbl_8035DE04, (void *)&lbl_80296640, (void *)&lbl_8029664C, (void *)&lbl_80296658, (void *)&lbl_8035DE70, (void *)&lbl_80296664, (void *)&lbl_8035DE78, (void *)&lbl_8035DE48, (void *)&lbl_8035DEA0, (void *)&lbl_8035DEA8, (void *)&lbl_8035DE40, (void *)&lbl_8035DEB0, (void *)&lbl_80296670, (void *)&lbl_8035DEB8, (void *)&lbl_8035DEC0, (void *)&lbl_8035DE50, (void *)&lbl_8035DEC8, (void *)&lbl_80296604, (void *)&lbl_8029667C, (void *)&lbl_80296688, (void *)&lbl_8035DED0, (void *)&lbl_80296694, (void *)&lbl_8035DED8, (void *)&lbl_8035DEE0, (void *)&lbl_8035DEE8, (void *)&lbl_8035DEF0, (void *)&lbl_8035DEF8, (void *)&lbl_8035DF00, (void *)&lbl_8035DF08, (void *)&lbl_8035DF10, (void *)&lbl_8035DF18, (void *)&lbl_8035DF20, (void *)&lbl_8035DF28, (void *)&lbl_8035DF30, (void *)&lbl_8035DF38, (void *)&lbl_8035DF40, (void *)&lbl_80296658, (void *)&lbl_8029661C, (void *)&lbl_80296610, (void *)&lbl_80296628, (void *)&lbl_8035DF48, (void *)&lbl_8035DF50, (void *)&lbl_802966A0, (void *)&lbl_8035DE58, (void *)0x0, (void *)0x1, (void *)&lbl_8035DE04, (void *)0x1, (void *)0x1, (void *)&lbl_80296640, (void *)0x2, (void *)0x1, (void *)&lbl_8029664C, (void *)0x3, (void *)0x1, (void *)&lbl_80296658, (void *)0x4, (void *)0x2, (void *)&lbl_8035DE70, (void *)0x6, (void *)0x1, (void *)&lbl_80296664, (void *)0x7, (void *)0x1, (void *)&lbl_8035DE78, (void *)0x8, (void *)0x1, (void *)&lbl_8035DE48, (void *)0x9, (void *)0x1, (void *)&lbl_8035DEA0, (void *)0xA, (void *)0x1, (void *)&lbl_8035DEA8, (void *)0xB, (void *)0x1, (void *)&lbl_8035DE40, (void *)0xC, (void *)0x1, (void *)&lbl_8035DEB0, (void *)0xD, (void *)0x1, (void *)&lbl_80296670, (void *)0xE, (void *)0x1, (void *)&lbl_8035DEB8, (void *)0xF, (void *)0x1, (void *)&lbl_8035DEC0, (void *)0x10, (void *)0x1, (void *)&lbl_8035DE50, (void *)0x11, (void *)0x1, (void *)&lbl_8035DEC8, (void *)0x12, (void *)0x1, (void *)&lbl_80296604, (void *)0x13, (void *)0x1, (void *)&lbl_8029667C, (void *)0x14, (void *)0x1, (void *)&lbl_80296688, (void *)0x15, (void *)0x1, (void *)&lbl_8035DED0, (void *)0x16, (void *)0x1, (void *)&lbl_80296694, (void *)0x17, (void *)0x1, (void *)&lbl_8035DED8, (void *)0x18, (void *)0x1, (void *)&lbl_8035DEE0, (void *)0x19, (void *)0x1, (void *)&lbl_8035DEE8, (void *)0x1A, (void *)0x1, (void *)&lbl_8035DEF0, (void *)0x1B, (void *)0x1, (void *)&lbl_8035DEF8, (void *)0x1C, (void *)0x1, (void *)&lbl_8035DF00, (void *)0x1D, (void *)0x1, (void *)&lbl_8035DF08, (void *)0x1E, (void *)0x1, (void *)&lbl_8035DF10, (void *)0x1F, (void *)0x1, (void *)&lbl_8035DF18, (void *)0x20, (void *)0x1, (void *)&lbl_8035DF20, (void *)0x21, (void *)0x1, (void *)&lbl_8035DF28, (void *)0x22, (void *)0x1, (void *)&lbl_8035DF30, (void *)0x23, (void *)0x1, (void *)&lbl_8035DF38, (void *)0x24, (void *)0x1, (void *)&lbl_8035DF40, (void *)0x25, (void *)0x1, (void *)&lbl_8029661C, (void *)0x26, (void *)0x1, (void *)&lbl_80296610, (void *)0x27, (void *)0x1, (void *)&lbl_80296628, (void *)0x28, (void *)0x1, (void *)&lbl_8035DF48, (void *)0x29, (void *)0x1, (void *)&lbl_8035DF50, (void *)0x2A, (void *)0x1, (void *)&lbl_802966A0, (void *)0x2B, (void *)0x1, (void *)0x0, (void *)0x1, (void *)0x2, (void *)0x3, (void *)0x4, (void *)0x25, (void *)0x5, (void *)0x6, (void *)0x7, (void *)0x8, (void *)0x9, (void *)0xA, (void *)0xB, (void *)0xC, (void *)0xD, (void *)0xE, (void *)0xF, (void *)0x10, (void *)0x11, (void *)0x12, (void *)0x13, (void *)0x14, (void *)0x15, (void *)0x16, (void *)0x17, (void *)0x18, (void *)0x19, (void *)0x1A, (void *)0x1B, (void *)0x1C, (void *)0x1D, (void *)0x1E, (void *)0x1F, (void *)0x20, (void *)0x21, (void *)0x22, (void *)0x23, (void *)0x24, (void *)0x26, (void *)0x27, (void *)0x28, (void *)0x29, (void *)0x2A, (void *)0x2B };
static s32 tA[44] = { 0, 15, 29, 40, 41, 46, 47, 50, 56, 57, 62, 63, 66, 68, 70, 73, 76, 79, 82, 85, 91, 96, 98, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 118, 123, 128, 131, 134, 137, 140, 143 };
static s32 tB[144] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 1, 1, 2, 1, 1, 1, 2, 1, 2, 1, 15, 2, 6, 1, 4, 2, 15, 6, 1, 8, 1, 1, 6, 1, 4, 2, 15, 1, 1, 8, 1, 4, 15, 8, 1, 6, 1, 14, 1, 14, 4, 1, 10, 4, 1, 10, 8, 1, 6, 5, 1, 9, 11, 1, 3, 3, 4, 1, 1, 3, 3, 8, 1, 3, 1, 2, 14, 1, 13, 1, 1, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 2, 6, 1, 4, 2, 2, 6, 1, 5, 1, 3, 3, 4, 2, 3, 9, 1, 5, 9, 1, 5, 13, 1, 1, 13, 1, 1, 13, 1, 1, 15 };
static s32 tC[144] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 15, 17, 15, 18, 15, 19, 20, 15, 21, 15, 22, 15, 15, 23, 24, 15, 25, 26, 27, 15, 28, 15, 29, 15, 15, 30, 15, 30, 15, 15, 15, 31, 15, 15, 32, 33, 15, 33, 15, 34, 15, 35, 15, 36, 15, 15, 15, 37, 15, 38, 15, 38, 15, 15, 39, 15, 15, 40, 15, 15, 41, 15, 15, 42, 15, 15, 43, 15, 44, 45, 44, 15, 45, 44, 46, 15, 46, 47, 46, 48, 15, 15, 49, 15, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 15, 15, 61, 15, 61, 15, 35, 15, 62, 15, 35, 15, 42, 15, 42, 15, 15, 63, 15, 15, 64, 15, 15, 65, 15, 66, 15, 66, 67, 15, 67, 68 };
void *lbl_802BAEB8[20] = { (void *)0x0, (void *)0x0, (void *)&fn_8005462C, (void *)&fn_80249AC4, (void *)&fn_800543B0, (void *)&fn_8005327C, (void *)&fn_80054068, (void *)&fn_8023D198, (void *)&fn_80054740, (void *)&fn_80052118, (void *)&fn_80241D80, (void *)&fn_8003F140, (void *)&fn_8003F18C, (void *)&fn_80053430, (void *)&fn_800532D8, (void *)&fn_80054108, (void *)&fn_8003F1DC, (void *)&fn_80240054, (void *)&fn_80054790, (void *)&fn_80053384 };
typedef struct { f32 x, y, z; } V3;
extern u32 lbl_8035B308;
extern f32 lbl_803596E0[];
extern u32 lbl_8035DF58;
extern f32 lbl_8035DF5C, lbl_8035DF60, lbl_8035DF64, lbl_8035DF68, lbl_8035DF6C, lbl_8035DF70;
extern char lbl_802966AC[], lbl_802966B8[];
extern u8 lbl_8035DE24[4];
extern char lbl_8035DDFC[6], lbl_8035DE78[5], lbl_8035DF74[7], lbl_8035DF7C[8], lbl_8035DF84[8], lbl_8035DF8C[7];
extern char lbl_8035DF94[8], lbl_8035DF9C[8], lbl_8035DFA4[8], lbl_8035DFAC[8], lbl_8035DFB4[8], lbl_8035DFBC[8], lbl_8035DFC4[8], lbl_8035DFCC[8], lbl_8035DFD4[8], lbl_8035DFDC[8];
int fn_800F6CD0(void *, void *);
f32 fn_80101590(V3 *, V3 *);
void fn_8023C314(void *, f32, f32, f32);
void fn_80053FD4(int);
void fn_80053D34(int);
void fn_80227650(int, char *, char *, char *, int);
void fn_8022BCD8(int, void *, void *);
int fn_8022BE28(int, int);
void fn_8022BF30(int, int, int, f32);
int fn_80236AC0(int);
int fn_80236B14(int);
int fn_8023F5E8(int, int);
int fn_802401A0(int);
int fn_802401D0(int);
int fn_802402E0(int);
int fn_802405B8(int);
void fn_80240274(int, int);
void fn_80240948(int, char *, int);
void fn_802413D8(int, int, f32, int, int, int);
void fn_80241588(int, int, int, f32);
int fn_80241628(int, int, int);
void fn_80242168(f32, int);
void *fn_80242144(int, int);
void fn_80242BC0(void *, void *, u32, int, u32, int);
int fn_80249058(int, int);
int fn_8024909C(int, int);
void fn_802490E0(int, int, f32);
int fn_802491DC(int, int);
int fn_802494A4(int, int);

#define E0 (*(VO **)(p + 0xe0))
#define FL (*(u32 **)(p + 0x158))

static inline void clr(int p) { if (FL != 0) *FL &= ~0x800; }
static inline void setf(int p) { if (FL != 0) *FL |= lbl_8035DF58; }
static inline f32 dist(int p) {
    V3 a, b;
    if (*(void **)(p + 0x118) == 0) return lbl_803596E0[0];
    E0->getPos(&a, 0, 0, 0, 0);
    (*(VO **)(p + 0x118))->getPos(&b, 0, 0, 0, 0);
    return fn_80101590(&a, &b);
}
static inline void walkPlayer(int p, char *name) {
    fn_802494A4(p, 13);
    fn_80240948(p, name, 0);
}
static inline void approach(int p) {
    if (**(int **)(p + 0x19c) == 1) {
        fn_80241628(p, 4, 0);
        fn_80241588(p, 1, 0, lbl_8035DF68);
        fn_80242168(lbl_8035DF70, p);
    } else {
        fn_80241628(p, 1, 0);
        fn_80241588(p, 0, 0, lbl_8035DF68);
    }
}
static inline void kill(int p) {
    fn_80241628(p, 0, 0);
    fn_802402E0(p);
    clr(p);
    *(u32 *)(p + 0x120) = 0;
    if (*(VO **)(p + 0x1b0) != 0) (*(VO **)(p + 0x1b0))->send(lbl_8035DF74, *(u32 *)(p + 0xe0), 0, *(void **)(p + 0x1b4), 0);
}
static inline void flagIf(int p) {
    if (FL != 0 && (*(int *)(p + 0x120) != 0 || *(int *)(p + 0x12c) != 0 || *(int *)(p + 0x128) != 0)) *FL |= lbl_8035DF58;
}

void fn_80052118(int p, int st) {
    s32 *q;
    s32 idx;
    s32 t;
    int i;
    f32 dmg;

    t = *(s32 *)(p + 0x60);
    idx = tA[st];
    for (q = tB + idx; t > 0; q++) {
        if (*q > t) break;
        t -= tB[idx++];
    }
    switch (tC[idx]) {
    case 0:
        *(f32 *)((int)E0 + 0x110) = lbl_8035DF5C;
        fn_80241628(p, 0, 0);
        fn_8022BE28(*(int *)(p + 0xe0), 0);
        clr(p);
        if (*(int *)((int)E0 + 0x114) == 0) fn_802494A4(p, 1);
        else fn_802402E0(p);
        fn_8023C314((void *)(p + 0x184), lbl_8035DF60, lbl_8035DF5C, lbl_8035DF64);
        *(u32 *)(p + 0x118) = *(u32 *)(lbl_8035B308 + 0x48);
        break;
    case 1:
        *(f32 *)((int)E0 + 0x110) = lbl_8035DF5C;
        fn_802402E0(p);
        *(u32 *)(p + 0x120) = 0;
        fn_80241628(p, 0, 0);
        fn_80241588(p, 0, 0, lbl_8035DF68);
        clr(p);
        *(u32 *)(p + 0x120) = 0;
        break;
    case 2:
        fn_80241588(p, 10, 1, lbl_8035DF6C);
        *(f32 *)((int)E0 + 0x110) = lbl_8035DF5C;
        fn_80240274(p, 0);
        fn_802401A0(p);
        fn_8023F5E8(p, *(int *)(p + 0x118));
        fn_80241628(p, 1, 0);
        fn_8022BE28(*(int *)(p + 0xe0), 0);
        *(u32 *)(p + 0x120) = 0;
        *(u32 *)(p + 0x124) = 0;
        *(u32 *)(p + 0x128) = 0;
        *(u32 *)(p + 0x12c) = 0;
        *(f32 *)(p + 0x140) = lbl_8035DF6C;
        *(f32 *)(p + 0x1ac) = lbl_8035DF6C;
        *(u32 *)(p + 0x1b8) = 0;
        *(u32 *)(p + 0x1bc) = 0;
        *(u32 *)(p + 0x1c0) = 0;
        *(u32 *)(p + 0x1c4) = 0;
        *(f32 *)((int)E0 + 0x1ac) = *(f32 *)((int)E0 + 0x1a8);
        break;
    case 3:
        if (*(int *)(p + 0x1b8) != 0) {
            fn_802494A4(p, 12);
        } else if (**(int **)(p + 0x1a0) == 1) {
            fn_8023F5E8(p, *(int *)(p + 0x118));
            fn_80241628(p, 1, 0);
            fn_80241588(p, 7, 0, lbl_8035DF68);
        } else {
            fn_802494A4(p, 5);
        }
        break;
    case 4:
        if (*(int *)(p + 0x1b8) != 0) {
            fn_802494A4(p, 12);
        } else {
            fn_80241628(p, 0, 0);
            fn_80241588(p, 2, 0, lbl_8035DF68);
            fn_80053FD4(p);
        }
        break;
    case 5:
        if (*(int *)(p + 0x1b8) != 0) {
            fn_802494A4(p, 12);
        } else if (**(int **)(p + 0x1a0) == 1) {
            fn_8023F5E8(p, *(int *)(p + 0x118));
            fn_80241628(p, 1, 0);
            fn_80241588(p, 3, 0, lbl_8035DF68);
            if (*(int *)(p + 0x1c8) != 0) {
                *(u32 *)(p + 0x1c8) = 0;
            } else {
                setf(p);
                *(f32 *)(p + 0x140) = lbl_8035DF6C;
                *(u32 *)(p + 0x120) = 1;
                *(u32 *)(p + 0x1c0) = 0;
            }
        } else {
            approach(p);
        }
        break;
    case 6:
        if (*(int *)(p + 0x1b8) != 0) {
            fn_802494A4(p, 12);
        } else {
            fn_8023F5E8(p, *(int *)(p + 0x118));
            fn_80241628(p, 1, 0);
            fn_80241588(p, 4, 0, lbl_8035DF68);
            setf(p);
            *(f32 *)(p + 0x140) = lbl_8035DF6C;
            *(u32 *)(p + 0x120) = 1;
            *(u32 *)(p + 0x1c0) = 0;
        }
        break;
    case 7:
        fn_80241588(p, 5, 0, lbl_8035DF68);
        break;
    case 8:
        *(f32 *)((int)E0 + 0x110) = lbl_8035DF5C;
        fn_80241628(p, 0, 0);
        fn_80241588(p, 9, 0, lbl_8035DF68);
        fn_802401A0(p);
        *(u32 *)((int)E0 + 0xb4) |= 4;
        clr(p);
        *(u32 *)(p + 0x120) = 0;
        fn_80242BC0(fn_80242144(p, 2), lbl_8035DE78, *(u32 *)(p + 0xe0), 0, 0, 0);
        *(u32 *)(p + 0x1a8) = 0;
        break;
    case 9:
        if (*(int *)(p + 0x1b8) != 0) {
            fn_802494A4(p, 12);
        } else {
            fn_802491DC(p, 3);
            *(u32 *)(p + 0x120) = 0;
            *(f32 *)(p + 0x140) = lbl_8035DF6C;
            *(u32 *)(p + 0x124) = 1;
            *(u32 *)(p + 0x1c4) = 0;
            fn_80241628(p, 1, 0);
            fn_80241588(p, 0, 0, lbl_8035DF68);
        }
        break;
    case 10:
        if (*(int *)(p + 0x1b8) != 0) {
            fn_802494A4(p, 12);
        } else {
            *(u32 *)(p + 0x120) = 0;
            if (dist(p) < **(f32 **)(p + 0x164)) fn_802494A4(p, 3);
            else approach(p);
        }
        break;
    case 11:
        if (*(int *)(p + 0x1b8) != 0) {
            fn_802494A4(p, 12);
        } else {
            fn_80241628(p, 0, 0);
            fn_80241588(p, 0, 0, lbl_8035DF68);
            clr(p);
            *(u32 *)(p + 0x128) = 0;
            fn_802490E0(p, 2, **(f32 **)(p + 0x198));
        }
        break;
    case 12:
        clr(p);
        *(u32 *)(p + 0x12c) = 0;
        clr(p);
        *(u32 *)(p + 0x120) = 0;
        fn_80241628(p, 0, 0);
        fn_80241588(p, 0, 0, lbl_8035DF68);
        break;
    case 13:
        *(f32 *)((int)E0 + 0x110) = lbl_8035DF5C;
        fn_80240274(p, 0);
        fn_80236AC0(*(int *)(p + 0xe0));
        for (i = 0; i < *(int *)(p + 0x5c); i++) fn_8024909C(p, i);
        flagIf(p);
        fn_80241628(p, 3, 0);
        fn_80241588(p, 0, 0, lbl_8035DF68);
        break;
    case 14:
        *(f32 *)((int)E0 + 0x110) = lbl_8035DF5C;
        clr(p);
        *(u32 *)(p + 0x120) = 0;
        fn_80241628(p, 0, 0);
        fn_80241588(p, 11, 0, lbl_8035DF68);
        E0->w18();
        break;
    case 15:
        return;
    case 16:
        fn_802401D0(p);
        break;
    case 17:
        clr(p);
        *(u32 *)(p + 0x12c) = 0;
        break;
    case 18:
        clr(p);
        *(u32 *)(p + 0x120) = 0;
        break;
    case 19:
        fn_802401D0(p);
        *(u32 *)(p + 0x1a8) = 0;
        break;
    case 20:
        *(u32 *)(p + 0x124) = 0;
        break;
    case 21:
        clr(p);
        *(u32 *)(p + 0x128) = 0;
        break;
    case 22:
        fn_80241628(p, 0, 0);
        *(u32 *)(p + 0x1bc) = 0;
        break;
    case 23:
        if (dist(p) < **(f32 **)(p + 0x164)) fn_802494A4(p, 3);
        else fn_802494A4(p, 10);
        break;
    case 24:
        fn_802494A4(p, 4);
        break;
    case 25:
        clr(p);
        *(u32 *)(p + 0x120) = 0;
        fn_802494A4(p, 9);
        break;
    case 26:
        fn_802494A4(p, *(int *)(p + 0x64));
        break;
    case 27:
        fn_802491DC(p, 7);
        break;
    case 28:
        fn_80241588(p, 3, 0, lbl_8035DF68);
        break;
    case 29:
        kill(p);
        break;
    case 30:
        fn_802405B8(p);
        break;
    case 31:
        dmg = -**(f32 **)(p + 0x134);
        (*(VO **)(p + 0x118))->send(lbl_8035DF7C, *(u32 *)(p + 0xe0), 0, &dmg, 0);
        break;
    case 32:
        clr(p);
        *(u32 *)(p + 0x120) = 0;
        fn_802402E0(p);
        break;
    case 33:
        fn_802494A4(p, 8);
        break;
    case 34:
        *(f32 *)((int)E0 + 0x110) = lbl_8035DF5C;
        break;
    case 35:
        fn_802494A4(p, 2);
        break;
    case 36:
        fn_802494A4(p, 3);
        break;
    case 37:
        kill(p);
        if (*(int *)(p + 0x1a8) == 1) fn_802494A4(p, 2);
        else *(u32 *)(p + 0x1a8) = 1;
        break;
    case 38:
        E0->hideA();
        E0->showA();
        *(u32 *)(p + 0x120) = 0;
        *(u32 *)(p + 0x1b0) = *(u32 *)(p + 0xe4);
        *(u32 *)(p + 0x1b4) = *(u32 *)(p + 0xec);
        fn_802494A4(p, 2);
        break;
    case 39:
        fn_802494A4(p, 5);
        break;
    case 40:
        fn_80241588(p, 2, 0, lbl_8035DF68);
        fn_80227650(*(int *)(p + 0x11c), lbl_802966AC, lbl_8035DF84, lbl_8035DF8C, 0);
        fn_802490E0(p, 1, **(f32 **)(p + 0x13c));
        break;
    case 41: {
        f32 tt = lbl_8035DF68 + *(f32 *)(p + 0x130);
        fn_8022BCD8(*(int *)(p + 0xe0), lbl_802966B8, lbl_8035DE24);
        fn_8022BF30(*(int *)(p + 0xe0), 0xff, 1, lbl_8035DF6C);
        fn_8022BF30(*(int *)(p + 0xe0), 0, 1, tt);
        fn_802490E0(p, 0, *(f32 *)(p + 0x130));
        *(u32 *)((int)E0 + 0xb4) &= ~4;
        break;
    }
    case 42:
        fn_802494A4(p, 6);
        break;
    case 43:
        clr(p);
        *(u32 *)(p + 0x128) = 0;
        fn_802494A4(p, 10);
        break;
    case 44:
        *(u32 *)(p + 0x1b8) = 1;
        break;
    case 45:
        *(u32 *)(p + 0x1b8) = 1;
        fn_802494A4(p, 12);
        break;
    case 46:
        *(u32 *)(p + 0x1b8) = 0;
        break;
    case 47:
        *(u32 *)(p + 0x1b8) = 0;
        fn_802494A4(p, 3);
        break;
    case 48:
        fn_802402E0(p);
        fn_802494A4(p, 14);
        break;
    case 49:
        *(u32 *)(p + 0x1bc) = 0;
        if (*(int *)(p + 0x120) != 0) {
            *(u32 *)(p + 0x1c8) = 1;
            fn_802494A4(p, 5);
        } else if (*(int *)(p + 0x12c) != 0) {
            fn_802494A4(p, 4);
        } else {
            fn_802401D0(p);
            fn_8023F5E8(p, *(int *)(p + 0x118));
            fn_80241628(p, 1, 0);
            fn_802494A4(p, 3);
        }
        break;
    case 50: walkPlayer(p, lbl_8035DF94); break;
    case 51: walkPlayer(p, lbl_8035DF9C); break;
    case 52: walkPlayer(p, lbl_8035DFA4); break;
    case 53: walkPlayer(p, lbl_8035DFAC); break;
    case 54: walkPlayer(p, lbl_8035DFB4); break;
    case 55: walkPlayer(p, lbl_8035DFBC); break;
    case 56: walkPlayer(p, lbl_8035DFC4); break;
    case 57: walkPlayer(p, lbl_8035DFCC); break;
    case 58: walkPlayer(p, lbl_8035DFD4); break;
    case 59: walkPlayer(p, lbl_8035DFDC); break;
    case 60:
        if (*(void **)(p + 0xf0) != 0) {
            if (fn_800F6CD0(*(void **)(p + 0xf0), lbl_8035DDFC) != 0) fn_802491DC(p, 5);
            fn_802413D8(p, *(int *)(p + 0xf0), lbl_8035DF68, 0, 1, *(int *)(p + 0xec));
        }
        break;
    case 61:
        fn_802494A4(p, 14);
        break;
    case 62:
        if (*(int *)(p + 0x1a8) == 1) fn_802494A4(p, 2);
        else *(u32 *)(p + 0x1a8) = 1;
        break;
    case 63:
        fn_802494A4(p, 10);
        break;
    case 64:
        fn_802491DC(p, 4);
        break;
    case 65:
        fn_80053FD4(p);
        *(u32 *)(p + 0x1bc) = 1;
        break;
    case 66:
        fn_80236B14(*(int *)(p + 0xe0));
        for (i = 0; i < *(int *)(p + 0x5c); i++) fn_80249058(p, i);
        clr(p);
        clr(p);
        *(u32 *)(p + 0x120) = 0;
        break;
    case 67:
        fn_80236AC0(*(int *)(p + 0xe0));
        for (i = 0; i < *(int *)(p + 0x5c); i++) fn_8024909C(p, i);
        flagIf(p);
        break;
    case 68:
        fn_80053D34(p);
    case 69:
        break;
    }
}
}

} /* extern "C" */
