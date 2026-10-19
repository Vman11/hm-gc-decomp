// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
extern void *memcpy(void *, const void *, unsigned long);
struct VCall_fn_8011712C_0 { char vptr_pad[0xd0]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual int m(); };
struct VCall_fn_8011712C_1 { char vptr_pad[0xd0]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual int m(); };
struct VCall_fn_8011712C_2 { char vptr_pad[0xd0]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual int m(); };

u32 fn_8011712C(s32 param_1) {
    u32 uVar1;
    s32 iVar2;
    s32 iVar3;
    s32 iVar4;

    if (*(s32 *)(param_1 + 0xc0) == 0) {
        uVar1 = 5;
    }
    else {
        iVar2 = ((VCall_fn_8011712C_0 *)(param_1))->m();
        iVar3 = ((VCall_fn_8011712C_1 *)(param_1))->m();
        memcpy(*(void **)(param_1 + 0x7c),*(void **)(param_1 + 0x78),(iVar3 + iVar2 + ((VCall_fn_8011712C_2 *)(param_1))->m()) * 4);
        uVar1 = 0;
    }
    return uVar1;
}
}
