// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
void fn_8012962C(f64, f64, f64, f64);
struct VCall_fn_80197A58_0 { char vptr_pad[0x1930]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void p17(); virtual void p18(); virtual void p19(); virtual void p20(); virtual void p21(); virtual void p22(); virtual void p23(); virtual void p24(); virtual void p25(); virtual void p26(); virtual void p27(); virtual void p28(); virtual void p29(); virtual void p30(); virtual void p31(); virtual void p32(); virtual void p33(); virtual void p34(); virtual void p35(); virtual void p36(); virtual void p37(); virtual void p38(); virtual int m(); };
struct VCall_fn_80197A58_1 { char vptr_pad[0x1930]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void p17(); virtual void p18(); virtual void p19(); virtual void p20(); virtual void p21(); virtual void p22(); virtual void p23(); virtual void p24(); virtual void p25(); virtual void p26(); virtual void p27(); virtual void p28(); virtual void p29(); virtual void p30(); virtual void p31(); virtual void p32(); virtual void p33(); virtual void p34(); virtual void p35(); virtual void p36(); virtual void p37(); virtual void m(int); };

void fn_80197A58(s32 param_1, s32 param_2) {
    s32 iVar1;

    iVar1 = ((VCall_fn_80197A58_0 *)(*(s32 *)(param_2 + 8)))->m();
    fn_8012962C((f64)*(f32 *)(param_1 + 0x14), (f64)*(f32 *)(iVar1 + 0x38), (f64)*(f32 *)(iVar1 + 0x4c), (f64)*(f32 *)(iVar1 + 0x50));
    ((VCall_fn_80197A58_1 *)(*(s32 *)(param_2 + 8)))->m((s32)(iVar1));
}
}
