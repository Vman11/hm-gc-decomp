// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
extern void *memcpy(void *, const void *, unsigned long);
struct VCall_fn_8014DBE8_0 { char vptr_pad[0xd0]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual int m(); };
struct VCall_fn_8014DBE8_1 { char vptr_pad[0xd0]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual int m(); };
struct VCall_fn_8014DBE8_2 { char vptr_pad[0xd0]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual int m(); };

u32 fn_8014DBE8(s32 *param_1) {
    s32 iVar1;
    s32 iVar2;
    s32 iVar3;

    iVar3 = *param_1;
    iVar1 = ((VCall_fn_8014DBE8_0 *)(iVar3))->m();
    iVar2 = ((VCall_fn_8014DBE8_1 *)(iVar3))->m();
    iVar3 = ((VCall_fn_8014DBE8_2 *)(iVar3))->m();
    memcpy(*(void **)(*param_1 + 0x7c),*(void **)(*param_1 + 0x78),(iVar2 + iVar1 + iVar3) * 4);
    return 0;
}
}
