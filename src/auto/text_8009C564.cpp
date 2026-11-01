// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef u32 undefined4; typedef u8 undefined1; typedef u16 undefined2; typedef u32 uint; typedef u8 byte;
typedef void code(); typedef s32 undefined;
typedef struct { f32 x, y, z; } V3;
struct VO { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void getPos(V3 *p, int a, int b, int c, int d); virtual void w14(); virtual void w15(); virtual void w16(); virtual void w17(); virtual void w18(); virtual void w19(); virtual void w20(); virtual void w21(); virtual void w22(); virtual void w23(); virtual void w24(); virtual void w25(); virtual void w26(); virtual void w27(); virtual void w28(); virtual void w29(); virtual void w30(); virtual void w31(); virtual void w32(); virtual void send(void *msg, u32 to, int a, void *d, int b); }; typedef u16 ushort; typedef u64 undefined8; typedef s16 short_;

struct VC { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void p17(); virtual void p18(); virtual void p19(); virtual void p20(); virtual void p21(); virtual void p22(); virtual void p23(); virtual void p24(); virtual void p25(); virtual void p26(); virtual void p27(); virtual void p28(); virtual void p29(); virtual void p30(); virtual void p31(); virtual void p32(); virtual void p33(); virtual void p34(); virtual void p35(); virtual void p36(); virtual void p37(); virtual void p38(); virtual void p39(); virtual void p40(); virtual void p41(); virtual void p42(); virtual void p43(); virtual void p44(); virtual void p45(); virtual void p46(); virtual void p47(); virtual void p48(); virtual void p49(); virtual void p50(); virtual void p51(); virtual void p52(); virtual void p53(); virtual void p54(); virtual void p55(); virtual void p56(); virtual void p57(); virtual void p58(); virtual void p59(); virtual void p60(); virtual void p61(); virtual void p62(); virtual void p63(); };
extern u8 lbl_8029A3D8[];
extern u32 lbl_8035B308;
extern u8 lbl_80361744[8];
extern u8 lbl_803617D0[8];
extern u8 lbl_803617E0[8];
f32 fn_80101664(V3 *v);
void fn_80101820(V3 *v);
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
void fn_80241588(int, int, int, f32);
int fn_80241628(int, int, int);
void fn_80242168(f32, int);
int fn_80249058(int, int);
int fn_8024909C(int, int);
void fn_802490E0(int, int, f32);
int fn_802491DC(int, int);
int fn_802494A4(int, int);

void fn_8003F140();
void fn_8003F18C();
void fn_8003F1DC();
void fn_8009C564(int param_1, int param_2);
void fn_8009CBA4();
void fn_8009CC30();
void fn_8009CCBC();
void fn_8009CCDC();
void fn_8009CD1C();
void fn_8009CDB8();
void fn_8009CF84();
void fn_8009CFD4();
void fn_8023D198();
void fn_80240054();
void fn_802416D4();
void fn_80241D80();
void fn_80242210();
void fn_80249AC4();
extern char lbl_8029A330[];
extern char lbl_8029A33C[];
extern char lbl_8029A348[];
extern char lbl_8029A354[];
extern char lbl_8029A360[];
extern char lbl_8029A36C[];
extern char lbl_8029A378[];
extern char lbl_8029A384[];
extern char lbl_8029A390[];
extern char lbl_8029A39C[];
extern char lbl_8029A3A8[];
extern char lbl_8029A3B4[];
extern char lbl_8029A3C0[];
extern char lbl_8029A3CC[];
extern char lbl_80361670[];
extern char lbl_80361678[];
extern char lbl_80361680[];
extern char lbl_80361688[];
extern char lbl_80361690[];
extern char lbl_80361698[];
extern char lbl_803616A0[];
extern char lbl_803616A8[];
extern char lbl_803616B0[];
extern char lbl_803616B8[];
extern char lbl_803616C0[];
extern char lbl_803616C8[];
extern char lbl_803616D0[];
extern char lbl_803616D8[];
extern char lbl_803616E0[];
extern char lbl_803616E8[];
extern char lbl_803616EC[];
extern char lbl_803616F4[];
extern char lbl_803616FC[];
extern char lbl_80361704[];
extern char lbl_8036170C[];
extern char lbl_80361714[];
extern char lbl_8036171C[];
extern char lbl_80361724[];
extern char lbl_8036172C[];
extern char lbl_80361734[];
extern char lbl_8036173C[];
extern u8 lbl_80361744[8];
extern char lbl_80361748[];
extern char lbl_80361750[];
extern char lbl_80361758[];
extern char lbl_80361760[];
extern char lbl_80361768[];
extern char lbl_80361770[];
extern char lbl_80361778[];
extern char lbl_80361780[];
extern char lbl_80361788[];
extern char lbl_80361790[];
extern char lbl_80361798[];
extern char lbl_803617A0[];
extern char lbl_803617A8[];
extern char lbl_803617B0[];
extern char lbl_803617B8[];
void *lbl_802CDE68[309] = { (void *)0x0, (void *)0xFA, (void *)0x1F4, (void *)0x2EE, (void *)0x55495C4D, (void *)0x454D4341, (void *)0x52445C00, (void *)0x41545449, (void *)0x43000000, (void *)0x42414C4C, (void *)0x524F4F4D, (void *)0x4348494C, (void *)0x4452454E, (void *)0x434F4E53, (void *)0x45525600, (void *)0x44494E52, (void *)0x4F4F4D00, (void *)0x464F5945, (void *)0x52000000, (void *)0x47414C4C, (void *)0x45525900, (void *)0x47524156, (void *)0x45594400, (void *)0x47524F4F, (void *)0x4D000000, (void *)0x47525448, (void *)0x414C4C00, (void *)0x47554553, (void *)0x54000000, (void *)0x48414C4C, (void *)0x41420000, (void *)0x48414C4C, (void *)0x43440000, (void *)0x4B495443, (void *)0x48454E00, (void *)0x4C414200, (void *)0x0, (void *)0x4D555345, (void *)0x554D0000, (void *)0x4D414944, (void *)0x0, (void *)0x4D415354, (void *)0x52424544, (void *)0x4D415553, (void *)0x4F4C4D00, (void *)0x4D454153, (void *)0x55524500, (void *)0x544F5952, (void *)0x4F4F4D00, (void *)0x4F425345, (void *)0x52560000, (void *)0x50414E54, (void *)0x52590000, (void *)0x5041524C, (void *)0x4F520000, (void *)0x53495454, (void *)0x494E4700, (void *)0x53545245, (void *)0x54434800, (void *)0x53554E52, (void *)0x4F4F4D00, (void *)0x57494E54, (void *)0x45520000, (void *)0x5449544C, (void *)0x45000000, (void *)0x53504952, (void *)0x49540000, (void *)0x474C4F42, (void *)0x414C0000, (void *)0x0, (void *)0x28, (void *)0x0, (void *)0x0, (void *)0x28, (void *)0x0, (void *)0x0, (void *)0x28, (void *)0x0, (void *)0x0, (void *)0x3F800000, (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x40000000, (void *)0x0, (void *)0x3F800000, (void *)0x3F800000, (void *)0x0, (void *)0xBF800000, (void *)0x3F800000, (void *)0x0, (void *)0x0, (void *)0x3F800000, (void *)0x3F800000, (void *)0x0, (void *)0x3F800000, (void *)0xBF800000, (void *)0x0, (void *)0x6, (void *)0x9, (void *)0xC, (void *)0xF, (void *)0x12, (void *)0x15, (void *)0x18, (void *)0x1B, (void *)0x0, (void *)0x6, (void *)0x9, (void *)0xC, (void *)0xF, (void *)0x12, (void *)0x15, (void *)0x18, (void *)0x1B, (void *)0x0, (void *)0x6, (void *)0x40, (void *)0x43, (void *)0x46, (void *)0x49, (void *)0x4C, (void *)0x4F, (void *)0x52, (void *)0x55, (void *)0x1E, (void *)0x21, (void *)0x24, (void *)0x27, (void *)0x2A, (void *)0x2D, (void *)0x30, (void *)0x33, (void *)&lbl_8029A330, (void *)&lbl_80361670, (void *)&lbl_80361678, (void *)&lbl_80361680, (void *)&lbl_8029A33C, (void *)&lbl_80361688, (void *)&lbl_80361690, (void *)&lbl_8029A33C, (void *)&lbl_80361698, (void *)&lbl_803616A0, (void *)&lbl_8029A33C, (void *)&lbl_803616A8, (void *)&lbl_803616B0, (void *)&lbl_8029A33C, (void *)&lbl_803616B8, (void *)&lbl_803616C0, (void *)&lbl_8029A33C, (void *)&lbl_803616C8, (void *)&lbl_803616D0, (void *)&lbl_8029A33C, (void *)&lbl_803616D8, (void *)&lbl_803616E0, (void *)&lbl_8029A33C, (void *)&lbl_803616B8, (void *)&lbl_803616E8, (void *)&lbl_8029A33C, (void *)&lbl_803616EC, (void *)&lbl_803616F4, (void *)&lbl_8029A33C, (void *)&lbl_803616FC, (void *)&lbl_80361704, (void *)&lbl_8029A33C, (void *)&lbl_8036170C, (void *)&lbl_80361714, (void *)&lbl_8029A33C, (void *)&lbl_8029A348, (void *)&lbl_8036171C, (void *)&lbl_8029A33C, (void *)&lbl_80361724, (void *)&lbl_8036172C, (void *)&lbl_8029A33C, (void *)&lbl_80361734, (void *)&lbl_8036173C, (void *)&lbl_8036173C, (void *)&lbl_80361744, (void *)&lbl_80361744, (void *)&lbl_80361748, (void *)&lbl_80361750, (void *)&lbl_80361744, (void *)&lbl_80361744, (void *)&lbl_80361748, (void *)&lbl_8029A354, (void *)&lbl_80361744, (void *)&lbl_80361744, (void *)&lbl_80361748, (void *)&lbl_8029A360, (void *)&lbl_80361744, (void *)&lbl_80361744, (void *)&lbl_80361748, (void *)&lbl_8029A36C, (void *)&lbl_80361744, (void *)&lbl_80361744, (void *)&lbl_80361748, (void *)&lbl_8029A378, (void *)&lbl_80361744, (void *)&lbl_80361744, (void *)&lbl_80361748, (void *)&lbl_8029A384, (void *)&lbl_80361744, (void *)&lbl_80361744, (void *)&lbl_80361748, (void *)&lbl_80361758, (void *)&lbl_80361744, (void *)&lbl_80361744, (void *)&lbl_80361744, (void *)0x40000000, (void *)0x0, (void *)0x0, (void *)&lbl_80361760, (void *)0x40400000, (void *)0x0, (void *)0x0, (void *)&lbl_80361768, (void *)0x40800000, (void *)0x0, (void *)0x0, (void *)&lbl_80361770, (void *)0x40800000, (void *)0x0, (void *)0x0, (void *)&lbl_80361778, (void *)&lbl_80361780, (void *)&lbl_8029A390, (void *)&lbl_80361788, (void *)&lbl_80361790, (void *)&lbl_80361798, (void *)&lbl_80361680, (void *)&lbl_80361780, (void *)&lbl_8036171C, (void *)&lbl_8029A39C, (void *)&lbl_8029A3A8, (void *)&lbl_8029A3B4, (void *)&lbl_803617A0, (void *)&lbl_80361798, (void *)&lbl_8029A3B4, (void *)&lbl_80361770, (void *)&lbl_80361778, (void *)&lbl_80361768, (void *)&lbl_803617A8, (void *)&lbl_8029A3C0, (void *)&lbl_8029A3CC, (void *)&lbl_803617B0, (void *)&lbl_803617B8, (void *)&lbl_80361780, (void *)0x0, (void *)0x1, (void *)&lbl_8036171C, (void *)0x1, (void *)0x1, (void *)&lbl_8029A39C, (void *)0x2, (void *)0x1, (void *)&lbl_8029A3A8, (void *)0x3, (void *)0x1, (void *)&lbl_8029A3B4, (void *)0x4, (void *)0x2, (void *)&lbl_803617A0, (void *)0x6, (void *)0x1, (void *)&lbl_80361798, (void *)0x7, (void *)0x1, (void *)&lbl_80361770, (void *)0x8, (void *)0x1, (void *)&lbl_80361778, (void *)0x9, (void *)0x1, (void *)&lbl_80361768, (void *)0xA, (void *)0x1, (void *)&lbl_803617A8, (void *)0xB, (void *)0x1, (void *)&lbl_8029A3C0, (void *)0xC, (void *)0x1, (void *)&lbl_8029A3CC, (void *)0xD, (void *)0x1, (void *)&lbl_803617B0, (void *)0xE, (void *)0x1, (void *)&lbl_803617B8, (void *)0xF, (void *)0x1, (void *)0x0, (void *)0x1, (void *)0x2, (void *)0x3, (void *)0x4, (void *)0x7, (void *)0x5, (void *)0x6, (void *)0x8, (void *)0x9, (void *)0xA, (void *)0xB, (void *)0xC, (void *)0xD, (void *)0xE, (void *)0xF };
static s32 tA[16] = { 0, 6, 9, 15, 16, 20, 21, 24, 27, 28, 31, 34, 36, 40, 43, 45 };
static s32 tB[47] = { 1, 1, 1, 1, 1, 1, 1, 1, 4, 1, 1, 1, 1, 1, 1, 6, 2, 1, 1, 2, 6, 1, 3, 2, 1, 3, 2, 6, 4, 1, 1, 4, 1, 1, 1, 5, 2, 1, 1, 2, 4, 1, 1, 1, 5, 1, 5 };
static s32 tC[47] = { 0, 1, 2, 3, 4, 5, 6, 7, 6, 6, 8, 6, 8, 9, 6, 6, 6, 10, 11, 6, 6, 6, 12, 6, 6, 13, 6, 14, 6, 15, 6, 6, 16, 6, 17, 6, 18, 19, 18, 6, 20, 6, 21, 6, 22, 6, 23 };
void *lbl_802CE4F4[17] = { (void *)0x0, (void *)0x0, (void *)&fn_8009CDB8, (void *)&fn_80249AC4, (void *)&fn_8009CD1C, (void *)&fn_80242210, (void *)&fn_8009CCDC, (void *)&fn_8023D198, (void *)&fn_8009CF84, (void *)&fn_8009C564, (void *)&fn_80241D80, (void *)&fn_8003F140, (void *)&fn_8003F18C, (void *)&fn_8009CCBC, (void *)&fn_8009CBA4, (void *)&fn_802416D4, (void *)&fn_8003F1DC };
void *wAX_802CE538[3] = { (void *)&fn_80240054, (void *)&fn_8009CFD4, (void *)&fn_8009CC30 };
void fn_8009C564(int param_1, int param_2) {
    s32 *q;
    s32 idx;
    s32 t;
  V3 d;
  V3 b;
  V3 a;
  V3 f;
  V3 d2;
  V3 b2;
  V3 a2;
  V3 f2;
  float v78;
  BOOL bVar2;
  f32 len;
  int *piVar1;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;

    idx = tA[param_2];
    t = *(s32 *)(param_1 + 0x60);
    for (q = tB + idx; t > 0; q++) {
        if (*q > t) break;
        t -= tB[idx++];
    }
  switch (tC[idx]) {
  case 0:
    *(f32 *)(*(int *)(param_1 + 0xe0) + 0x110) = 1.0f;
    fn_80241628(param_1,0,0);
    fn_8022BE28(*(undefined4 *)(param_1 + 0xe0),0);
    *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(lbl_8035B308 + 0x48);
    if (*(int *)(*(int *)(param_1 + 0xe0) + 0x114) == 0) {
      fn_802494A4(param_1,1);
    }
    break;
  case 1:
    *(f32 *)(*(int *)(param_1 + 0xe0) + 0x110) = 1.0f;
    fn_80241628(param_1,0,0);
    fn_80241588(param_1,10,1,0.0f);
    fn_802401A0(param_1);
    break;
  case 2:
    if (*(int *)(param_1 + 0x130) != 0) {
      fn_802494A4(param_1,5);
    }
    else {
      fn_8023F5E8(param_1,*(undefined4 *)(param_1 + 0x118));
      fn_80241628(param_1,1,0);
      fn_80241588(param_1,1,0,0.2f);
      fn_80242168(60.0f,param_1);
    }
    break;
  case 3:
    fn_80241628(param_1,2,0);
    fn_80241588(param_1,0xc,0,0.2f);
    v78 = -**(float **)(param_1 + 0x11c);
    (*(VO **)(param_1 + 0x118))->send((u8 *)"DAMAGE",*(undefined4 *)(param_1 + 0xe0),0,&v78,0);
    break;
  case 4:
    *(f32 *)(*(int *)(param_1 + 0xe0) + 0x110) = 1.0f;
    fn_80241628(param_1,0,0);
    fn_80241588(param_1,9,0,0.2f);
    fn_802401A0(param_1);
    break;
  case 5:
    fn_8023F5E8(param_1,*(undefined4 *)(param_1 + 0x118));
    fn_80241628(param_1,0,0);
    fn_80241588(param_1,0,0,0.2f);
    break;
  case 6:
    return;
  case 7:
    fn_802401D0(param_1);
    break;
  case 8:
    fn_802494A4(param_1,2);
    break;
  case 9:
    fn_802491DC(param_1,3);
    break;
  case 10:
    (*(VO **)(param_1 + 0x118))->getPos(&a,0,0,0,0);
    (*(VO **)(param_1 + 0xe0))->getPos(&b,0,0,0,0);
    d.x = b.x - a.x;
    d.y = b.y - a.y;
    d.z = b.z - a.z;
    fn_80101820(&d);
    iVar3 = *(int *)(param_1 + 0x118);
    f.x = *(float *)(iVar3 + 0x118);
    f.y = *(float *)(iVar3 + 0x11c);
    f.z = *(float *)(iVar3 + 0x120);
    len = fn_80101664(&f);
    if (d.x * f.x + d.y * f.y + d.z * f.z > 0.0f && len > 2.0f) {
      bVar2 = TRUE;
    } else {
      bVar2 = FALSE;
    }
    if (bVar2) {
      fn_802494A4(param_1,4);
    }
    else {
      fn_802494A4(param_1,3);
    }
    break;
  case 0xb:
    (*(VO **)(param_1 + 0x118))->getPos(&a2,0,0,0,0);
    (*(VO **)(param_1 + 0xe0))->getPos(&b2,0,0,0,0);
    d2.x = b2.x - a2.x;
    d2.y = b2.y - a2.y;
    d2.z = b2.z - a2.z;
    fn_80101820(&d2);
    iVar3 = *(int *)(param_1 + 0x118);
    f2.x = *(float *)(iVar3 + 0x118);
    f2.y = *(float *)(iVar3 + 0x11c);
    f2.z = *(float *)(iVar3 + 0x120);
    len = fn_80101664(&f2);
    if (d2.x * f2.x + d2.y * f2.y + d2.z * f2.z > 0.0f && len > 2.0f) {
      bVar2 = TRUE;
    } else {
      bVar2 = FALSE;
    }
    if (bVar2) {
      fn_802494A4(param_1,4);
    }
    break;
  case 0xc:
    fn_802494A4(param_1,4);
    break;
  case 0xd:
    fn_802405B8(param_1);
    break;
  case 0xe:
    *(f32 *)(*(int *)(param_1 + 0xe0) + 0x110) = 1.0f;
    break;
  case 0xf:
    fn_8022BCD8(*(undefined4 *)(param_1 + 0xe0),lbl_8029A3D8,lbl_80361744);
    fn_8022BF30(*(undefined4 *)(param_1 + 0xe0),0xff,1,0.0f);
    fn_8022BF30(*(undefined4 *)(param_1 + 0xe0),0,1,2.0f);
    fn_802490E0(param_1,1,1.8f);
    break;
  case 0x10:
    fn_802402E0(param_1);
    piVar4 = *(int **)(param_1 + 0x128);
    if (piVar4 != (int *)0x0) {
      ((VO *)piVar4)->send(lbl_803617E0,*(undefined4 *)(param_1 + 0xe0),0,*(void **)(param_1 + 300),0);
    }
    break;
  case 0x11:
    *(undefined4 *)(param_1 + 0x128) = *(undefined4 *)(param_1 + 0xe4);
    *(undefined4 *)(param_1 + 300) = *(undefined4 *)(param_1 + 0xec);
    fn_802494A4(param_1,1);
    break;
  case 0x12:
    *(undefined4 *)(param_1 + 0x130) = 1;
    break;
  case 0x13:
    *(undefined4 *)(param_1 + 0x130) = 1;
    fn_802494A4(param_1,5);
    break;
  case 0x14:
    *(undefined4 *)(param_1 + 0x130) = 0;
    break;
  case 0x15:
    *(undefined4 *)(param_1 + 0x130) = 0;
    fn_802494A4(param_1,2);
    break;
  case 0x16:
    fn_80236B14(*(undefined4 *)(param_1 + 0xe0));
    for (iVar3 = 0; iVar3 < *(int *)(param_1 + 0x5c); iVar3 = iVar3 + 1) {
      fn_80249058(param_1,iVar3);
    }
    break;
  case 0x17:
    fn_80236AC0(*(undefined4 *)(param_1 + 0xe0));
    for (iVar3 = 0; iVar3 < *(int *)(param_1 + 0x5c); iVar3 = iVar3 + 1) {
      fn_8024909C(param_1,iVar3);
    }
  case 24:
    break;
  }
}

} /* extern "C" */
