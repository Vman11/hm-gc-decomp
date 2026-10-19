// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
struct VCall_fn_800FADA8_0 { char vptr_pad[0x124]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual int m(); };
struct VCall_fn_800FADA8_1 { char vptr_pad[0x124]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void m(int); };
struct VCall_fn_800FADA8_2 { char vptr_pad[0x124]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual int m(); };
struct VCall_fn_800FADA8_3 { char vptr_pad[0x124]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void m(int); };
struct VCall_fn_800FADA8_4 { char vptr_pad[0x124]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual int m(); };
struct VCall_fn_800FADA8_5 { char vptr_pad[0x124]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void m(int); };
struct VCall_fn_800FADA8_6 { char vptr_pad[0x124]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual int m(); };
struct VCall_fn_800FADA8_7 { char vptr_pad[0x124]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void m(int); };

u32 fn_800FADA8(u32 param_1) {
    u32 iVar1;

    iVar1 = ((VCall_fn_800FADA8_0 *)(param_1))->m();
    if (iVar1 != 7) {
        ((VCall_fn_800FADA8_1 *)(param_1))->m((u32)(8));
    }
    iVar1 = ((VCall_fn_800FADA8_2 *)(param_1))->m();
    if (iVar1 != 4) {
        ((VCall_fn_800FADA8_3 *)(param_1))->m((u32)(5));
    }
    iVar1 = ((VCall_fn_800FADA8_4 *)(param_1))->m();
    if (iVar1 != 8) {
        ((VCall_fn_800FADA8_5 *)(param_1))->m((u32)(9));
    }
    iVar1 = ((VCall_fn_800FADA8_6 *)(param_1))->m();
    if (iVar1 != 5) {
        ((VCall_fn_800FADA8_7 *)(param_1))->m((u32)(6));
    }
    return *(u32 *)(param_1 + 0xc);
}
}
