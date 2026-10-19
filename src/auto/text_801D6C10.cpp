// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
struct VCall_fn_801D6C10_0 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void p17(); virtual void p18(); virtual void p19(); virtual void p20(); virtual void p21(); virtual void p22(); virtual void p23(); virtual void p24(); virtual void p25(); virtual void p26(); virtual void p27(); virtual void p28(); virtual void p29(); virtual void p30(); virtual void p31(); virtual void p32(); virtual void p33(); virtual void p34(); virtual void p35(); virtual void p36(); virtual void p37(); virtual void p38(); virtual void m(int); };
struct VCall_fn_801D6C10_1 { char vptr_pad[0x10]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void m(); };
struct VCall_fn_801D6C10_2 { char vptr_pad[0x10]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void m(); };
struct VCall_fn_801D6C10_3 { char vptr_pad[0x80]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void p17(); virtual void p18(); virtual void p19(); virtual void p20(); virtual void p21(); virtual void p22(); virtual void p23(); virtual void p24(); virtual void p25(); virtual void p26(); virtual void p27(); virtual void p28(); virtual void p29(); virtual void p30(); virtual void p31(); virtual void p32(); virtual void p33(); virtual void p34(); virtual void p35(); virtual void p36(); virtual void p37(); virtual void p38(); virtual void p39(); virtual void p40(); virtual void p41(); virtual void p42(); virtual void p43(); virtual void p44(); virtual void p45(); virtual void p46(); virtual void p47(); virtual void p48(); virtual void p49(); virtual void p50(); virtual void p51(); virtual void p52(); virtual void p53(); virtual void p54(); virtual void p55(); virtual void p56(); virtual void p57(); virtual void p58(); virtual void p59(); virtual void p60(); virtual void p61(); virtual void p62(); virtual void m(int); };
struct VCall_fn_801D6C10_4 { char vptr_pad[0x80]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void p17(); virtual void p18(); virtual void p19(); virtual void p20(); virtual void p21(); virtual void p22(); virtual void p23(); virtual void p24(); virtual void p25(); virtual void p26(); virtual void p27(); virtual void p28(); virtual void p29(); virtual void p30(); virtual void p31(); virtual void p32(); virtual void p33(); virtual void p34(); virtual void p35(); virtual void p36(); virtual void p37(); virtual void p38(); virtual void p39(); virtual void p40(); virtual void p41(); virtual void p42(); virtual void p43(); virtual void p44(); virtual void p45(); virtual void p46(); virtual void p47(); virtual void p48(); virtual void p49(); virtual void p50(); virtual void p51(); virtual void p52(); virtual void p53(); virtual void p54(); virtual void p55(); virtual void p56(); virtual void p57(); virtual void p58(); virtual void p59(); virtual void p60(); virtual void p61(); virtual void p62(); virtual void m(int); };

void fn_801D6C10(u32 param_1, s32 param_2) {
    u32 iVar1;
    u32 *puVar2;
    u32 uVar3;
    u32 iVar4;

    if (param_2 == 0) {
        for (puVar2 = *(u32 **)(param_1 + 0x88); puVar2 != (u32 *)0x0;
                puVar2 = (u32 *)puVar2[2]) {
            ((VCall_fn_801D6C10_0 *)((u32 *)*puVar2))->m((u32)(param_1));
        }
    }
    if (*(s32 *)(*(u32 *)(param_1 + 0x74) + 4) != 0) {
        if (*(u32 *)(param_1 + 0x70) != 0) {
            if (*(u32 *)(param_1 + 0x68) != 0) {
                for (uVar3 = 0; uVar3 < *(u32 *)(*(u32 *)(param_1 + 0x70) + 8); uVar3 = uVar3 + 1) {
                    iVar1 = (*(u32 **)(param_1 + 0x68))[uVar3];
                    if (iVar1 != 0) {
                        ((VCall_fn_801D6C10_1 *)(iVar1))->m();
                    }
                }
            }
            for (uVar3 = 0; uVar3 < *(u32 *)(*(u32 *)(param_1 + 0x70) + 8); uVar3 = uVar3 + 1) {
                iVar1 = *(u32 *)(*(u32 *)(*(u32 *)(param_1 + 0x70) + 4) + uVar3 * 0x1c);
                if (iVar1 != 0) {
                    ((VCall_fn_801D6C10_2 *)(iVar1))->m();
                }
            }
        }
        iVar4 = *(u32 *)(param_1 + 0x138);
        if (iVar4 != 0) {
            ((VCall_fn_801D6C10_3 *)(iVar4))->m((u32)(1));
        }
        iVar4 = *(u32 *)(param_1 + 0x134);
        if ((iVar4 != 0) && (param_2 != 0)) {
            ((VCall_fn_801D6C10_4 *)(iVar4))->m((u32)(1));
        }
    }
}
}
