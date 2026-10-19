// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
void fn_801044C4(int, int, int);
void fn_80138D8C(int);
void fn_80138DD8(int, int, int);
void fn_8019E7C8(int, int, int, int);
struct VCall_fn_8018D75C_0 { char vptr_pad[0x68]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual int m(); };
struct VCall_fn_8018D75C_1 { char vptr_pad[0x30]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual int m(); };
struct VCall_fn_8018D75C_2 { char vptr_pad[0x1930]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void p17(); virtual void p18(); virtual void p19(); virtual void p20(); virtual void p21(); virtual void p22(); virtual void p23(); virtual void p24(); virtual void p25(); virtual void p26(); virtual void p27(); virtual void p28(); virtual void p29(); virtual void p30(); virtual void p31(); virtual void p32(); virtual void p33(); virtual void p34(); virtual void p35(); virtual void p36(); virtual void p37(); virtual void p38(); virtual void p39(); virtual void p40(); virtual void p41(); virtual void p42(); virtual void p43(); virtual void p44(); virtual void p45(); virtual void p46(); virtual void p47(); virtual void p48(); virtual void p49(); virtual void p50(); virtual void p51(); virtual void p52(); virtual void p53(); virtual void p54(); virtual void p55(); virtual void p56(); virtual void p57(); virtual void p58(); virtual void p59(); virtual void p60(); virtual void p61(); virtual void p62(); virtual void p63(); virtual void p64(); virtual void p65(); virtual void p66(); virtual void p67(); virtual int m(); };
struct VCall_fn_8018D75C_3 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual int m(int); };

void fn_8018D75C(u32 *param_1, u32 *param_2, u32 param_3) {
    u32 iVar1;
    u32 uVar2;
    u32 uVar3;

    if ((*param_1 & 0x4000) != 0) {
        if (param_3 == 0) {
            param_3 = ((VCall_fn_8018D75C_0 *)(param_1))->m();
        }
        if (param_3 != 0) {
            iVar1 = ((VCall_fn_8018D75C_1 *)(*(u32 *)*param_2))->m();
            uVar2 = ((VCall_fn_8018D75C_2 *)(iVar1))->m();
            fn_801044C4((int)(param_3), (int)(((VCall_fn_8018D75C_3 *)(*(u32 **)(*param_2 + 0xb8)))->m((u32)(0))), (int)(uVar2));
            fn_80138DD8((int)(*param_2), (int)(0), (int)(*(u32 *)(param_3 + 0x14)));
        }
        else {
            fn_80138D8C((int)(*param_2));
        }
        fn_8019E7C8((int)(param_2), (int)(param_1[0x24]), (int)(param_1[0x1b]), (int)(param_1 + 0x25));
    }
}
}
