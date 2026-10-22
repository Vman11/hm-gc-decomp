// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef u32 undefined4; typedef u8 undefined1; typedef u16 undefined2; typedef u32 uint; typedef u8 byte;
typedef void code(); typedef s32 undefined;
typedef struct { f32 x, y, z; } V3;
extern u32 lbl_80362D30;
struct VC { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void p17(); virtual void p18(); virtual void p19(); virtual void p20(); virtual void p21(); virtual void p22(); virtual void p23(); virtual void p24(); };

static u8 sPad[0x57C] = {1};
static s32 tA[36] = {1};
static s32 tB[71] = {1};
static s32 tC[64] = {1};
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
