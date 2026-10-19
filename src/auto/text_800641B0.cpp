// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
extern u8 lbl_802BCEEC[];
extern u8 __vt__9C800643B0[];
extern u32 lbl_8035A1DC;
void __dt__9C80038D2CFv(int, int);
void __dt__9C8003965CFv(int, int);
void __dt__9C80039E10Fv(int, int);
void __dt__9C8003A490Fv(int, int);
void __dt__9C8003A978Fv(int, int);
void __dt__9C8003ACE0Fv(int, int);
void __dt__9C8003B394Fv(int, int);
void __dt__9C8003C388Fv(int, int);
void __dl__FPv(int);
void __dt__9C8023C9A0Fv(int, int);
void __dt__9C801A351CFv(int, int);
struct VCall_fn_800641B0_0 { char vptr_pad[0x2a0]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void m(); };

u32 fn_800641B0(u32 param_1, s16 param_2) {
    if (param_1 != 0) {
        *(u8 **)(param_1 + 0x2a0) = lbl_802BCEEC;
        lbl_8035A1DC = 0;
        if (*(u32 *)(param_1 + 0x33ac) != 0) {
            ((VCall_fn_800641B0_0 *)(param_1))->m();
        }
        __dt__9C8003ACE0Fv((int)(param_1 + 0x36d8), (int)(0xffffffff));
        __dt__9C8023C9A0Fv((int)(param_1 + 0x36d4), (int)(0xffffffff));
        __dt__9C8003965CFv((int)(param_1 + 0x364c), (int)(0xffffffff));
        __dt__9C8003A978Fv((int)(param_1 + 0x3618), (int)(0xffffffff));
        __dt__9C8003A490Fv((int)(param_1 + 0x35ec), (int)(0xffffffff));
        __dt__9C80039E10Fv((int)(param_1 + 0x35cc), (int)(0xffffffff));
        __dt__9C8003C388Fv((int)(param_1 + 0x3550), (int)(0xffffffff));
        __dt__9C8003B394Fv((int)(param_1 + 0x3530), (int)(0xffffffff));
        __dt__9C80038D2CFv((int)(param_1 + 0x3410), (int)(0xffffffff));
        if (param_1 != 0) {
            *(u8 **)(param_1 + 0x2a0) = __vt__9C800643B0;
            __dt__9C801A351CFv((int)(param_1), (int)(0));
        }
        if (0 < param_2) {
            __dl__FPv((int)(param_1));
        }
    }
    return param_1;
}
}
