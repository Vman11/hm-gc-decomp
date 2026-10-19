// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
extern s32 lbl_8035B65C;
extern char lbl_8035BD90[0x6];
extern char lbl_8035BD98[0x6];
s32 fn_801AA960(int, int, int);
void fn_801C2368(int, int, int);
struct VCall_fn_8003189C_0 { char vptr_pad[0x2f0]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void m(int); };
struct VCall_fn_8003189C_1 { char vptr_pad[0x80]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void p17(); virtual void p18(); virtual void p19(); virtual void p20(); virtual void p21(); virtual void p22(); virtual void p23(); virtual void p24(); virtual void p25(); virtual void p26(); virtual void p27(); virtual void p28(); virtual void p29(); virtual void p30(); virtual void p31(); virtual void p32(); virtual void p33(); virtual void p34(); virtual void p35(); virtual void p36(); virtual void p37(); virtual void p38(); virtual void p39(); virtual void p40(); virtual void p41(); virtual void p42(); virtual void p43(); virtual void p44(); virtual void p45(); virtual void p46(); virtual void p47(); virtual void p48(); virtual void p49(); virtual void p50(); virtual void p51(); virtual void p52(); virtual void p53(); virtual void p54(); virtual void p55(); virtual void p56(); virtual void p57(); virtual void p58(); virtual void m(int, int); };

void fn_8003189C(s32 param_1) {
    s32 iVar1;

    ((VCall_fn_8003189C_0 *)(param_1))->m((s32)(1));
    iVar1 = fn_801AA960((int)(*(u32 *)(*(s32 *)(lbl_8035B65C + 0x24) + 0x33b0)), (int)(lbl_8035BD90), (int)(lbl_8035BD98)); /* "DEATH" */ /* "Death" */
    if (iVar1 != 0) {
        ((VCall_fn_8003189C_1 *)(iVar1))->m((s32)(0), (s32)(1));
        fn_801C2368((int)(*(u32 *)(param_1 + 0x78)), (int)(iVar1), (int)(1));
    }
}
}
