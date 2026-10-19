// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
extern f32 lbl_8035B960;
struct VCall_fn_8002AA38_0 { char vptr_pad[0x80]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void p17(); virtual void p18(); virtual void p19(); virtual void m(int); };
struct VCall_fn_8002AA38_1 { char vptr_pad[0x80]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void p17(); virtual void p18(); virtual void p19(); virtual void m(int); };
struct VCall_fn_8002AA38_2 { char vptr_pad[0x80]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void p17(); virtual void p18(); virtual void p19(); virtual void m(int); };
struct VCall_fn_8002AA38_3 { char vptr_pad[0x80]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void p17(); virtual void p18(); virtual void p19(); virtual void m(int); };

void fn_8002AA38(s32 param_1, s32 param_2) {
    if (param_2 == 1) {
        ((VCall_fn_8002AA38_0 *)(*(s32 *)(param_1 + 0x1f0)))->m((s32)(1));
        ((VCall_fn_8002AA38_1 *)(*(s32 *)(param_1 + 500)))->m((s32)(0));
    }
    else {
        ((VCall_fn_8002AA38_2 *)(*(s32 *)(param_1 + 0x1f0)))->m((s32)(0));
        ((VCall_fn_8002AA38_3 *)(*(s32 *)(param_1 + 500)))->m((s32)(1));
    }
    *(f32 *)(param_1 + 0x2f4) = lbl_8035B960;
}
}
