// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
extern u8 __vt__9C800647C0[];
extern u8 __vt__9C80064764[];
void __dl__FPv(int);
void __dt__9C80064820Fv(int, int);
void __dt__9C8014D6B8Fv(int, int);
struct VCall_dtor_80120314_0 { char vptr_pad[0x2a0]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void m(); };

s32 dtor_80120314(s32 param_1, s16 param_2) {
    if (param_1 != 0) {
        *(u8 **)(param_1 + 0x2a0) = __vt__9C80064764;
        ((VCall_dtor_80120314_0 *)(param_1))->m();
        if (param_1 + 0x2c34 != 0) {
            *(u8 **)(param_1 + 0x2c64) = __vt__9C800647C0;
            __dt__9C8014D6B8Fv((int)(param_1 + 0x2c34), (int)(0));
        }
        __dt__9C80064820Fv((int)(param_1), (int)(0));
        if (0 < param_2) {
            __dl__FPv((int)(param_1));
        }
    }
    return param_1;
}
}
