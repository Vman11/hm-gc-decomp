// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern "C" {
extern char lbl_80294DB8[];
extern u32 lbl_8035A060;
extern u32 lbl_8035A1DC;
extern char lbl_8035C138[0x6];
void fn_800604C4(int, int, int, int);
void fn_800F7E98(void);
void fn_800F7EC0(int);
void fn_80129938(int, int);
void fn_8012ACAC(int, int, void *, int, int);
void fn_8018182C(int, int, int, int);
void fn_80215FDC(int);
void fn_80216044(int, int);
struct C801829F8 { char pad[0x78]; C801829F8(void); };
struct VCall_fn_8003B06C_0 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void p17(); virtual void p18(); virtual void p19(); virtual void p20(); virtual void p21(); virtual void p22(); virtual void p23(); virtual void p24(); virtual void p25(); virtual void p26(); virtual int m(); };
struct VCall_fn_8003B06C_1 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void p17(); virtual void p18(); virtual void p19(); virtual void p20(); virtual void p21(); virtual void p22(); virtual void p23(); virtual void p24(); virtual int m(); };

void fn_8003B06C(u32 *param_1, u32 param_2, u32 param_3) {
    u32 uVar1;
    u32 iVar2;

    *param_1 = param_3;
    uVar1 = ((VCall_fn_8003B06C_0 *)(*(u32 **)(lbl_8035A1DC + 0x2c44)))->m();
    param_1[5] = uVar1;
    fn_80216044((int)(*param_1), (int)((u32)lbl_80294DB8));
    if (lbl_8035A060 == 0) {
        fn_800604C4((int)(0xfffffffe), (int)(0), (int)(0), (int)(0));
    }
    fn_800F7EC0((int)(lbl_8035A060));
    iVar2 = (u32) new C801829F8();
    param_1[6] = iVar2;
    fn_800F7E98();
    if (param_1[6] == 0) {
        fn_800604C4((int)(0xfffffffc), (int)(0), (int)(0), (int)(0));
    }
    fn_8012ACAC((int)(param_1[5]), (int)(*(u32 *)(lbl_8035A1DC + 0x2c4c)), lbl_8035C138, (int)(1), (int)(0)); /* "Legal" */
    fn_8018182C((int)(param_1[6]), (int)(lbl_8035A1DC + 0x3040), (int)("Legal"), (int)(1));
    fn_80215FDC((int)(*param_1));
    uVar1 = ((VCall_fn_8003B06C_1 *)(*(u32 **)(lbl_8035A1DC + 0x2c44)))->m();
    param_1[3] = uVar1;
    fn_80129938((int)(param_1[3]), (int)(*(u32 *)(lbl_8035A1DC + 0x2c4c)));
}
}

} /* extern "C" */
