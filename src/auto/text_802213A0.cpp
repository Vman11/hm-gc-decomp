// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
extern u8 lbl_80356DF8[];
extern u32 lbl_8035B270;
extern u32 lbl_8035B274;
void fn_8014C8C8(int, int, int, int);
void fn_802209AC(void);
struct VCall_fn_802213A0_0 { char vptr_pad[0x30]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void p17(); virtual void p18(); virtual int m(); };

void fn_802213A0(u32 param_1, u32 param_2) {
    fn_802209AC();
    if (lbl_8035B274 == 0) {
        lbl_8035B270 = ((VCall_fn_802213A0_0 *)(*(u32 *)(param_2 + 4)))->m();
        fn_8014C8C8((int)(lbl_80356DF8), (int)(0x100), (int)(0), (int)(0));
    }
    lbl_8035B274 = lbl_8035B274 + 1;
}
}
