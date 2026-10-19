// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
extern u8 __dt__9C8015D9A4Fv[];
void fn_800E1E88(int, int);
void fn_80130E40(int);
void fn_8016CB38(int, int);
struct VCall_fn_80179CF4_0 { char vptr_pad[0x44]; virtual void p0(); virtual void p1(); virtual void m(); };

void fn_80179CF4(u32 param_1) {
    u32 iVar2;
    u32 uVar1;

    if (*(u32 *)(param_1 + 0x34) != 0) {
        fn_8016CB38((int)(*(u32 *)(param_1 + 0x34)), (int)(param_1));
        uVar1 = 0;
        iVar2 = 0;
        for (; uVar1 < *(u32 *)(param_1 + 0x14); uVar1 = uVar1 + 1) {
            ((VCall_fn_80179CF4_0 *)(*(u32 *)(param_1 + 0x38) + iVar2))->m();
            iVar2 = iVar2 + 300;
        }
        *(u32 *)(param_1 + 0x34) = 0;
    }
    if (*(u32 *)(param_1 + 0x38) != 0) {
        fn_800E1E88((int)(*(u32 *)(param_1 + 0x38)), (int)(__dt__9C8015D9A4Fv));
        *(u32 *)(param_1 + 0x38) = 0;
    }
    fn_80130E40((int)(param_1));
}
}
