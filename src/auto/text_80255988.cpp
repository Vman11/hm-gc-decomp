// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
extern u8 lbl_802F23D8[];
extern u32 lbl_8035B684;
void __dl__FPv(int);
void __dt__9C80108990Fv(int, int);
void __dt__9C80109410Fv(int, int);
struct VCall_dtor_80255988_0 { char vptr_pad[0xc0]; virtual void p0(); virtual void p1(); virtual void m(); };

u32 __dt__9C80255A20Fv(u32 param_1, s16 param_2) {
    if (param_1 != 0) {
        *(u8 **)(param_1 + 0xc0) = lbl_802F23D8;
        if (lbl_8035B684 == param_1) {
            lbl_8035B684 = 0;
        }
        ((VCall_dtor_80255988_0 *)(param_1))->m();
        __dt__9C80109410Fv((int)(param_1 + 0x88), (int)(0xffffffff));
        __dt__9C80108990Fv((int)(param_1 + 8), (int)(0xffffffff));
        if (0 < param_2) {
            __dl__FPv((int)(param_1));
        }
    }
    return param_1;
}
}
