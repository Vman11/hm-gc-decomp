// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef u32 undefined4; typedef u8 undefined1; typedef u16 undefined2; typedef u32 uint; typedef u8 byte;
typedef void code(); typedef s32 undefined;
typedef struct { f32 x, y, z; } V3;
extern u32 lbl_80362D30;
struct VC { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void p17(); virtual void p18(); virtual void p19(); virtual void p20(); virtual void p21(); virtual void p22(); virtual void p23(); virtual void p24(); };

extern u8 lbl_803286D0[];
extern u8 lbl_8029BA98[];
extern u32 lbl_8035B308;
extern u8 lbl_80362C78[8];
extern u8 lbl_80362C80[8];
extern u8 lbl_80362C88[8];
extern u8 lbl_80362C90[8];
extern u8 lbl_80362D34[8];
extern u8 lbl_80362D38[8];
extern u8 lbl_80362D40[8];
extern u8 lbl_80362D48[8];
extern u8 lbl_80362D50[8];
extern u8 lbl_80362D58[8];
extern u8 lbl_80362D60[8];
extern u8 lbl_80362D68[8];
extern u8 lbl_80362D70[8];
extern u8 lbl_80362D78[8];
extern u8 lbl_80362D80[8];
extern u8 lbl_80362D88[8];
extern u8 lbl_80362D90[8];
extern u8 lbl_80362D98[8];
extern u8 lbl_80362DA0[8];
extern u8 lbl_80362DA8[8];
extern u8 lbl_80362DB0[8];
extern u8 lbl_80362DB8[8];
extern u8 lbl_80362DC0[8];
extern u8 lbl_80362DC8[8];
extern u8 lbl_80362DD0[8];
extern u8 lbl_80362DD8[8];
extern u8 lbl_80362DE0[8];
extern u8 lbl_80362DE8[8];
extern u8 lbl_80362DF0[8];
extern u8 lbl_80362DF8[8];
int fn_800F6CD0(u32, void *);
void fn_80190888(u32, void *, u32);
void fn_80190C98(void *);
void *fn_802288FC(u32, u32);
u32 fn_8023F4A0(int, void *, void *, void *, int);
void fn_80240948(int, void *, int);
void fn_80240D70(int, int);
void fn_8024125C(int, int);
void fn_80241628(int, int, int);
void fn_802494A4(int, int);
void fn_802413D8(f32 f, int p, void *a, int b, int c, void *d);

void fn_8003F140();
void fn_8003F18C();
void fn_8003F1DC();
void fn_8003FB68();
void fn_8003FB6C();
void fn_800B05F0(int param_1, int param_2);
void fn_800B0C58();
void fn_800B0D48();
void fn_800B0D7C();
void fn_800B0DF0();
void fn_800B0F9C();
void fn_800B0FA4();
void fn_8023D198();
void fn_80240054();
void fn_802416D4();
void fn_80241D80();
void fn_80242210();
void fn_80249AC4();
extern char lbl_8029B924[];
extern char lbl_8029B930[];
extern char lbl_8029B93C[];
extern char lbl_8029B948[];
extern char lbl_8029B954[];
extern char lbl_8029B960[];
extern char lbl_8029B96C[];
extern char lbl_8029B978[];
extern char lbl_8029B984[];
extern char lbl_8029B990[];
extern char lbl_8029B99C[];
extern char lbl_8029B9A8[];
extern char lbl_8029B9C0[];
extern char lbl_8029B9CC[];
extern char lbl_8029B9D8[];
extern char lbl_8029B9E4[];
extern char lbl_8029B9F0[];
extern char lbl_8029B9FC[];
extern char lbl_8029BA08[];
extern char lbl_8029BA14[];
extern char lbl_8029BA20[];
extern char lbl_8029BA2C[];
extern char lbl_8029BA38[];
extern char lbl_8029BA44[];
extern char lbl_8029BA50[];
extern char lbl_8029BA5C[];
extern char lbl_8029BA68[];
extern char lbl_8029BA74[];
extern char lbl_8029BA80[];
extern char lbl_8029BA8C[];
extern char lbl_80362C30[];
extern char lbl_80362C38[];
extern char lbl_80362C40[];
extern char lbl_80362C48[];
extern char lbl_80362C50[];
extern char lbl_80362C58[];
extern char lbl_80362C60[];
extern char lbl_80362C68[];
extern char lbl_80362C70[];
extern u8 lbl_80362C78[8];
extern u8 lbl_80362C80[8];
extern u8 lbl_80362C88[8];
extern u8 lbl_80362C90[8];
extern char lbl_80362C98[];
extern char lbl_80362CA8[];
extern char lbl_80362CB0[];
extern char lbl_80362CB8[];
extern char lbl_80362CC0[];
extern char lbl_80362CC8[];
extern char lbl_80362CD0[];
extern char lbl_80362CD8[];
extern char lbl_80362CE0[];
extern char lbl_80362CE8[];
extern char lbl_80362CF0[];
extern char lbl_80362CF8[];
extern char lbl_80362D00[];
extern char lbl_80362D08[];
extern char lbl_80362D10[];
extern char lbl_80362D18[];
extern char lbl_80362D20[];
extern char lbl_80362D28[];
void *lbl_802D5F48[351] = { (void *)0x0, (void *)0xFA, (void *)0x1F4, (void *)0x2EE, (void *)0x55495C4D, (void *)0x454D4341, (void *)0x52445C00, (void *)0x41545449, (void *)0x43000000, (void *)0x42414C4C, (void *)0x524F4F4D, (void *)0x4348494C, (void *)0x4452454E, (void *)0x434F4E53, (void *)0x45525600, (void *)0x44494E52, (void *)0x4F4F4D00, (void *)0x464F5945, (void *)0x52000000, (void *)0x47414C4C, (void *)0x45525900, (void *)0x47524156, (void *)0x45594400, (void *)0x47524F4F, (void *)0x4D000000, (void *)0x47525448, (void *)0x414C4C00, (void *)0x47554553, (void *)0x54000000, (void *)0x48414C4C, (void *)0x41420000, (void *)0x48414C4C, (void *)0x43440000, (void *)0x4B495443, (void *)0x48454E00, (void *)0x4C414200, (void *)0x0, (void *)0x4D555345, (void *)0x554D0000, (void *)0x4D414944, (void *)0x0, (void *)0x4D415354, (void *)0x52424544, (void *)0x4D415553, (void *)0x4F4C4D00, (void *)0x4D454153, (void *)0x55524500, (void *)0x544F5952, (void *)0x4F4F4D00, (void *)0x4F425345, (void *)0x52560000, (void *)0x50414E54, (void *)0x52590000, (void *)0x5041524C, (void *)0x4F520000, (void *)0x53495454, (void *)0x494E4700, (void *)0x53545245, (void *)0x54434800, (void *)0x53554E52, (void *)0x4F4F4D00, (void *)0x57494E54, (void *)0x45520000, (void *)0x5449544C, (void *)0x45000000, (void *)0x53504952, (void *)0x49540000, (void *)0x474C4F42, (void *)0x414C0000, (void *)0x0, (void *)0x28, (void *)0x0, (void *)0x0, (void *)0x28, (void *)0x0, (void *)0x0, (void *)0x28, (void *)0x0, (void *)0x0, (void *)0x3F800000, (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x40000000, (void *)0x0, (void *)0x3F800000, (void *)0x3F800000, (void *)0x0, (void *)0xBF800000, (void *)0x3F800000, (void *)0x0, (void *)0x0, (void *)0x3F800000, (void *)0x3F800000, (void *)0x0, (void *)0x3F800000, (void *)0xBF800000, (void *)0x0, (void *)0x6, (void *)0x9, (void *)0xC, (void *)0xF, (void *)0x12, (void *)0x15, (void *)0x18, (void *)0x1B, (void *)0x0, (void *)0x6, (void *)0x9, (void *)0xC, (void *)0xF, (void *)0x12, (void *)0x15, (void *)0x18, (void *)0x1B, (void *)0x0, (void *)0x6, (void *)0x40, (void *)0x43, (void *)0x46, (void *)0x49, (void *)0x4C, (void *)0x4F, (void *)0x52, (void *)0x55, (void *)0x1E, (void *)0x21, (void *)0x24, (void *)0x27, (void *)0x2A, (void *)0x2D, (void *)0x30, (void *)0x33, (void *)&lbl_80362C30, (void *)&lbl_80362C38, (void *)&lbl_8029B924, (void *)&lbl_80362C40, (void *)&lbl_80362C38, (void *)&lbl_8029B930, (void *)&lbl_80362C48, (void *)&lbl_80362C38, (void *)&lbl_8029B93C, (void *)&lbl_80362C50, (void *)&lbl_80362C38, (void *)&lbl_8029B948, (void *)&lbl_80362C58, (void *)&lbl_80362C38, (void *)&lbl_8029B954, (void *)&lbl_80362C60, (void *)&lbl_80362C38, (void *)&lbl_8029B960, (void *)&lbl_80362C68, (void *)&lbl_80362C38, (void *)&lbl_8029B96C, (void *)&lbl_80362C70, (void *)&lbl_80362C38, (void *)&lbl_8029B978, (void *)&lbl_80362C78, (void *)&lbl_80362C38, (void *)&lbl_8029B984, (void *)&lbl_80362C80, (void *)&lbl_80362C38, (void *)&lbl_8029B990, (void *)&lbl_80362C88, (void *)&lbl_80362C38, (void *)&lbl_8029B99C, (void *)&lbl_80362C90, (void *)&lbl_80362C38, (void *)&lbl_8029B9A8, (void *)&lbl_80362C98, (void *)&lbl_80362C98, (void *)0x1, (void *)&lbl_80362CA8, (void *)&lbl_80362CB0, (void *)&lbl_80362CB8, (void *)&lbl_80362CC0, (void *)&lbl_8029B9C0, (void *)&lbl_80362CC8, (void *)&lbl_80362CD0, (void *)&lbl_80362CD8, (void *)&lbl_80362CE0, (void *)&lbl_80362CE8, (void *)&lbl_80362CF0, (void *)&lbl_80362CF8, (void *)&lbl_80362D00, (void *)&lbl_80362D08, (void *)&lbl_80362D10, (void *)&lbl_80362D10, (void *)&lbl_8029B9CC, (void *)&lbl_8029B9D8, (void *)&lbl_8029B9E4, (void *)&lbl_8029B9F0, (void *)&lbl_8029B9FC, (void *)&lbl_8029BA08, (void *)&lbl_8029BA14, (void *)&lbl_8029BA20, (void *)&lbl_8029BA2C, (void *)&lbl_8029BA38, (void *)&lbl_8029BA44, (void *)&lbl_8029BA50, (void *)&lbl_8029BA5C, (void *)&lbl_8029BA68, (void *)&lbl_8029BA74, (void *)&lbl_80362D18, (void *)&lbl_80362D20, (void *)&lbl_80362D28, (void *)&lbl_8029BA80, (void *)&lbl_8029BA8C, (void *)&lbl_80362CA8, (void *)0x0, (void *)0x1, (void *)&lbl_80362CB0, (void *)0x1, (void *)0x1, (void *)&lbl_80362CB8, (void *)0x2, (void *)0x1, (void *)&lbl_80362CC0, (void *)0x3, (void *)0x1, (void *)&lbl_8029B9C0, (void *)0x4, (void *)0x1, (void *)&lbl_80362CC8, (void *)0x5, (void *)0x1, (void *)&lbl_80362CD0, (void *)0x6, (void *)0x1, (void *)&lbl_80362CD8, (void *)0x7, (void *)0x1, (void *)&lbl_80362CE0, (void *)0x8, (void *)0x1, (void *)&lbl_80362CE8, (void *)0x9, (void *)0x1, (void *)&lbl_80362CF0, (void *)0xA, (void *)0x1, (void *)&lbl_80362CF8, (void *)0xB, (void *)0x1, (void *)&lbl_80362D00, (void *)0xC, (void *)0x1, (void *)&lbl_80362D08, (void *)0xD, (void *)0x1, (void *)&lbl_80362D10, (void *)0xE, (void *)0x2, (void *)&lbl_8029B9CC, (void *)0x10, (void *)0x1, (void *)&lbl_8029B9D8, (void *)0x11, (void *)0x1, (void *)&lbl_8029B9E4, (void *)0x12, (void *)0x1, (void *)&lbl_8029B9F0, (void *)0x13, (void *)0x1, (void *)&lbl_8029B9FC, (void *)0x14, (void *)0x1, (void *)&lbl_8029BA08, (void *)0x15, (void *)0x1, (void *)&lbl_8029BA14, (void *)0x16, (void *)0x1, (void *)&lbl_8029BA20, (void *)0x17, (void *)0x1, (void *)&lbl_8029BA2C, (void *)0x18, (void *)0x1, (void *)&lbl_8029BA38, (void *)0x19, (void *)0x1, (void *)&lbl_8029BA44, (void *)0x1A, (void *)0x1, (void *)&lbl_8029BA50, (void *)0x1B, (void *)0x1, (void *)&lbl_8029BA5C, (void *)0x1C, (void *)0x1, (void *)&lbl_8029BA68, (void *)0x1D, (void *)0x1, (void *)&lbl_8029BA74, (void *)0x1E, (void *)0x1, (void *)&lbl_80362D18, (void *)0x1F, (void *)0x1, (void *)&lbl_80362D20, (void *)0x20, (void *)0x1, (void *)&lbl_80362D28, (void *)0x21, (void *)0x1, (void *)&lbl_8029BA80, (void *)0x22, (void *)0x1, (void *)&lbl_8029BA8C, (void *)0x23, (void *)0x1, (void *)0x0, (void *)0x1, (void *)0x2, (void *)0x3, (void *)0x4, (void *)0x5, (void *)0x6, (void *)0x7, (void *)0x8, (void *)0x9, (void *)0xA, (void *)0xB, (void *)0xC, (void *)0xD, (void *)0xE, (void *)0xF, (void *)0x10, (void *)0x11, (void *)0x12, (void *)0x13, (void *)0x14, (void *)0x15, (void *)0x16, (void *)0x17, (void *)0x18, (void *)0x19, (void *)0x1A, (void *)0x1B, (void *)0x1C, (void *)0x1D, (void *)0x1E, (void *)0x1F, (void *)0x20, (void *)0x21, (void *)0x22, (void *)0x23 };
static s32 tA[36] = { 0, 2, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33, 35, 37, 39, 41, 43, 45, 47, 49, 51, 53, 55, 57, 59, 61, 63, 65, 67, 69 };
static s32 tB[71] = { 1, 1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 };
static s32 tC[64] = { 0, 1, 2, 2, 3, 2, 4, 2, 1, 2, 5, 2, 6, 2, 7, 2, 8, 2, 9, 2, 10, 2, 11, 2, 12, 2, 13, 2, 14, 2, 15, 2, 16, 2, 17, 2, 18, 2, 19, 2, 20, 2, 21, 2, 22, 2, 23, 2, 24, 2, 25, 2, 26, 2, 27, 2, 28, 2, 29, 2, 30, 2, 31, 2 };
u32 wAX_802D6770[7] = { 0x20, 0x2, 0x21, 0x2, 0x22, 0x2, 0x23 };
void *lbl_802D678C[20] = { (void *)0x0, (void *)0x0, (void *)&fn_800B0DF0, (void *)&fn_80249AC4, (void *)&fn_800B0D7C, (void *)&fn_80242210, (void *)&fn_800B0D48, (void *)&fn_8023D198, (void *)&fn_800B0F9C, (void *)&fn_800B05F0, (void *)&fn_80241D80, (void *)&fn_8003F140, (void *)&fn_8003F18C, (void *)&fn_800B0C58, (void *)&fn_8003FB68, (void *)&fn_802416D4, (void *)&fn_8003F1DC, (void *)&fn_80240054, (void *)&fn_800B0FA4, (void *)&fn_8003FB6C };
void fn_800B05F0(int param_1, int param_2) {
    s32 *q;
    s32 idx;
    s32 t;
  int *piVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;

    idx = tA[param_2];
    t = *(s32 *)(param_1 + 0x60);
    for (q = tB + idx; t > 0; q++) {
        if (*q > t) break;
        t -= tB[idx++];
    }
  switch (tC[idx]) {
  case 0:
    fn_80241628(param_1,0,0);
    *(u32 *)(param_1 + 0x120) = fn_8023F4A0(param_1,lbl_80362D34,lbl_80362D34,lbl_8029BA98,1);
    if (fn_800F6CD0(*(u32 *)(param_1 + 0x118),lbl_80362D34) == 0) {
      u8 *obj = (u8 *)fn_802288FC(lbl_8035B308,*(u32 *)(param_1 + 0x118));
      if (fn_800F6CD0(*(u32 *)(param_1 + 0x11c),lbl_80362D34) == 0 && *(void **)(obj + 0xa0) != 0) {
        V3 v;
        u8 *mdl;
        u8 *node;
        fn_80190888(*(u32 *)(*(u8 **)(param_1 + 0xe0) + 0x9c),*(void **)(obj + 0xa0),*(u32 *)(param_1 + 0x11c));
        { V3 *src = *(V3 **)(*(u8 **)(param_1 + 0x120) + 0xc); f32 z = src->z, y = src->y, x = src->x; v.x = x; v.y = y; v.z = z; }
        mdl = *(u8 **)(*(u8 **)(param_1 + 0xe0) + 0x9c);
        node = *(u8 **)(mdl + 0x30);
        if (node != 0) {
          (*(void (**)(u32, void *))(lbl_803286D0 + 0xC))(*(u32 *)(node + 0x10),&v);
          *(u32 *)(node + 0x20) |= lbl_80362D30;
          fn_80190C98(mdl);
        }
      }
    }
    fn_802494A4(param_1,1);
    break;
  case 1:
    fn_80241628(param_1,0,0);
    break;
  case 2:
    return;
  case 3:
    ((VC *)*(void **)(param_1 + 0xe0))->p23();
    fn_8024125C(param_1,0);
    break;
  case 4:
    ((VC *)*(void **)(param_1 + 0xe0))->p24();
    fn_80240D70(param_1,0xffffffff);
    break;
  case 5:
    fn_80241628(param_1,1,0);
    fn_80240948(param_1,lbl_80362D38,0);
    break;
  case 6:
    fn_80241628(param_1,1,0);
    fn_80240948(param_1,lbl_80362D40,0);
    break;
  case 7:
    fn_80241628(param_1,1,0);
    fn_80240948(param_1,lbl_80362D48,0);
    break;
  case 8:
    fn_80241628(param_1,1,0);
    fn_80240948(param_1,lbl_80362D50,0);
    break;
  case 9:
    fn_80241628(param_1,1,0);
    fn_80240948(param_1,lbl_80362D58,0);
    break;
  case 10:
    fn_80241628(param_1,1,0);
    fn_80240948(param_1,lbl_80362D60,0);
    break;
  case 0xb:
    fn_80241628(param_1,1,0);
    fn_80240948(param_1,lbl_80362D68,0);
    break;
  case 0xc:
    fn_80241628(param_1,1,0);
    fn_80240948(param_1,lbl_80362D70,0);
    break;
  case 0xd:
    fn_80241628(param_1,1,0);
    fn_80240948(param_1,lbl_80362D78,0);
    break;
  case 0xe:
    fn_80241628(param_1,1,0);
    fn_80240948(param_1,lbl_80362D80,0);
    break;
  case 0xf:
    fn_80241628(param_1,1,0);
    fn_80240948(param_1,lbl_80362D80,0);
    break;
  case 0x10:
    fn_80241628(param_1,1,0);
    fn_80240948(param_1,lbl_80362D88,0);
    break;
  case 0x11:
    fn_80241628(param_1,1,0);
    fn_80240948(param_1,lbl_80362D90,0);
    break;
  case 0x12:
    fn_80241628(param_1,1,0);
    fn_80240948(param_1,lbl_80362D98,0);
    break;
  case 0x13:
    fn_80241628(param_1,1,0);
    fn_80240948(param_1,lbl_80362DA0,0);
    break;
  case 0x14:
    fn_80241628(param_1,1,0);
    fn_80240948(param_1,lbl_80362DA8,0);
    break;
  case 0x15:
    fn_80241628(param_1,1,0);
    fn_80240948(param_1,lbl_80362DB0,0);
    break;
  case 0x16:
    fn_80241628(param_1,1,0);
    fn_80240948(param_1,lbl_80362DB8,0);
    break;
  case 0x17:
    fn_80241628(param_1,1,0);
    fn_80240948(param_1,lbl_80362DC0,0);
    break;
  case 0x18:
    fn_80241628(param_1,1,0);
    fn_80240948(param_1,lbl_80362DC8,0);
    break;
  case 0x19:
    fn_80241628(param_1,1,0);
    fn_80240948(param_1,lbl_80362DD0,0);
    break;
  case 0x1a:
    fn_80241628(param_1,1,0);
    fn_80240948(param_1,lbl_80362DD8,0);
    break;
  case 0x1b:
    fn_80241628(param_1,1,0);
    fn_80240948(param_1,lbl_80362DE0,0);
    break;
  case 0x1c:
    fn_80241628(param_1,1,0);
    fn_80240948(param_1,lbl_80362DE8,0);
    break;
  case 0x1d:
    fn_80241628(param_1,1,0);
    fn_80240948(param_1,lbl_80362DF0,0);
    break;
  case 0x1e:
    fn_80241628(param_1,1,0);
    fn_80240948(param_1,lbl_80362DF8,0);
    break;
  case 0x1f:
    if ((*(void **)(param_1 + 0xec) != 0) && (*(void **)(param_1 + 0xf0) != 0)) {
      fn_802413D8(0.2f,param_1,*(void **)(param_1 + 0xf0),0,1,*(void **)(param_1 + 0xec));
    }
    break;
  case 0x20:
    fn_802413D8(0.4f,param_1,lbl_80362C78,0,1,0);
    break;
  case 0x21:
    fn_802413D8(0.4f,param_1,lbl_80362C80,0,1,0);
    break;
  case 0x22:
    fn_802413D8(0.4f,param_1,lbl_80362C88,0,1,0);
    break;
  case 0x23:
    fn_802413D8(0.4f,param_1,lbl_80362C90,0,1,0);
  case 36:
    break;
  }
}

} /* extern "C" */
