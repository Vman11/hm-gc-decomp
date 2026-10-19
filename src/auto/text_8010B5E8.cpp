// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
extern u32 lbl_8035AAA0;
extern u32 lbl_8035AAA4;
void __dla__FPv(int);
void fn_80110E5C(int);
struct VCall_fn_8010B5E8_0 { char vptr_pad[0x1ec];  virtual void m(int); };
struct VCall_fn_8010B5E8_1 { char vptr_pad[0x10]; virtual void p0(); virtual void m(); };
struct VCall_fn_8010B5E8_2 { char vptr_pad[0x10];  virtual void m(int); };

void fn_8010B5E8(u32 *param_1) {
    u32 iVar1;
    u32 uVar2;

    if (param_1[2] != 0) {
        for (uVar2 = 0; uVar2 < *(u16 *)(param_1 + 4); uVar2 = uVar2 + 1) {
            if (((u32 *)param_1[2])[uVar2] != 0) {
                if (*(s32 *)(((u32 *)param_1[2])[uVar2] + 0x1e8) != 0) {
                    fn_80110E5C((int)(((u32 *)param_1[2])[uVar2]));
                }
                iVar1 = ((u32 *)param_1[2])[uVar2];
                if (iVar1 != 0) {
                    ((VCall_fn_8010B5E8_0 *)(iVar1))->m((u32)(1));
                }
                ((u32 *)param_1[2])[uVar2] = 0;
            }
        }
        __dla__FPv((int)(param_1[2]));
    }
    if (param_1[3] != 0) {
        for (uVar2 = 0; uVar2 < *(u16 *)((u32)param_1 + 0x12); uVar2 = uVar2 + 1) {
            iVar1 = ((u32 *)param_1[3])[uVar2];
            if (iVar1 != 0) {
                if (*(s32 *)(iVar1 + 0x48) != 0) {
                    ((VCall_fn_8010B5E8_1 *)(iVar1))->m();
                }
                iVar1 = ((u32 *)param_1[3])[uVar2];
                if (iVar1 != 0) {
                    ((VCall_fn_8010B5E8_2 *)(iVar1))->m((u32)(1));
                }
                ((u32 *)param_1[3])[uVar2] = 0;
            }
        }
        __dla__FPv((int)(param_1[3]));
    }
    *param_1 = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *(u16 *)(param_1 + 4) = 0;
    *(u16 *)((u32)param_1 + 0x12) = 0;
    param_1[1] = 0;
    lbl_8035AAA4 = 0;
    lbl_8035AAA0 = 0;
}
}
