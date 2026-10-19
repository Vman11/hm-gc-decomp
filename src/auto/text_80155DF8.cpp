// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
extern u8 lbl_802E6940[];
extern u8 __vt__9C80155EF8[];
void __dl__FPv(int);
void __dt__9C80137EECFv(int, int);
struct VCall_fn_80155DF8_0 { char vptr_pad[0x14]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void m(); };

u32 __dt__9C80155E80Fv(u32 param_1, s16 param_2) {
    if (param_1 != 0) {
        *(u8 **)(param_1 + 0x14) = lbl_802E6940;
        ((VCall_fn_80155DF8_0 *)(param_1))->m();
        if (param_1 != 0) {
            *(u8 **)(param_1 + 0x14) = __vt__9C80155EF8;
            __dt__9C80137EECFv((int)(param_1), (int)(0));
        }
        if (0 < param_2) {
            __dl__FPv((int)(param_1));
        }
    }
    return param_1;
}
}
