// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
extern u32 lbl_8035B658;
void fn_800604C4(int, int, int, int);
void fn_800F7E98(void);
void fn_800F7EC0(int);
struct C801829F8 { char pad[0x78]; C801829F8(void); };
struct VCall_fn_80254030_0 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void p17(); virtual void p18(); virtual void p19(); virtual void p20(); virtual void p21(); virtual void p22(); virtual void p23(); virtual void p24(); virtual void p25(); virtual void p26(); virtual int m(); };

void fn_80254030(u32 param_1) {
    u32 uVar1;
    u32 iVar2;

    uVar1 = ((VCall_fn_80254030_0 *)(*(u32 **)(*(u32 *)(param_1 + 4) + 0x10)))->m();
    *(u32 *)(param_1 + 0x10) = uVar1;
    if (lbl_8035B658 == 0) {
        fn_800604C4((int)(0xfffffffe), (int)(0), (int)(0), (int)(0));
    }
    fn_800F7EC0((int)(lbl_8035B658));
    iVar2 = (u32) new C801829F8();
    *(u32 *)(param_1 + 0x14) = iVar2;
    fn_800F7E98();
    if (*(u32 *)(param_1 + 0x14) == 0) {
        fn_800604C4((int)(0xfffffffc), (int)(0), (int)(0), (int)(0));
    }
}
}
