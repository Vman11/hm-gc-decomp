// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
void fn_8021B908(int);
struct VCall_fn_8021BEF4_0 { char vptr_pad[0x10]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void m(); };
struct VCall_fn_8021BEF4_1 { char vptr_pad[0x10]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void m(); };
struct VCall_fn_8021BEF4_2 { char vptr_pad[0x10]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void m(); };
struct VCall_fn_8021BEF4_3 { char vptr_pad[0x10]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void m(); };
struct VCall_fn_8021BEF4_4 { char vptr_pad[0x10]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void p17(); virtual void m(); };

void fn_8021BEF4(s32 param_1) {
    if (*(u32 *)(param_1 + 0x14) != 0) {
        ((VCall_fn_8021BEF4_0 *)(param_1))->m();
    }
    if (*(u32 *)(param_1 + 0x18) != 0) {
        ((VCall_fn_8021BEF4_1 *)(param_1))->m();
    }
    if (*(u32 *)(param_1 + 0x1c) != 0) {
        ((VCall_fn_8021BEF4_2 *)(param_1))->m();
    }
    if (*(u32 *)(param_1 + 0x20) != 0) {
        ((VCall_fn_8021BEF4_3 *)(param_1))->m();
    }
    if (*(u32 *)(param_1 + 0x24) != 0) {
        ((VCall_fn_8021BEF4_4 *)(param_1))->m();
    }
    fn_8021B908((int)(param_1));
    *(u32 *)(param_1 + 0x14) = 0;
    *(u32 *)(param_1 + 0x18) = 0;
    *(u32 *)(param_1 + 0x1c) = 0;
    *(u32 *)(param_1 + 0x20) = 0;
    *(u32 *)(param_1 + 0x24) = 0;
}
}
