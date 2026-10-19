// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
void fn_80268DCC(int);
void fn_8026D3FC(int);
struct VCall_fn_8026A370_0 {  virtual void m(int); };
struct VCall_fn_8026A370_1 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void m(); };
struct VCall_fn_8026A370_2 {  virtual void m(int); };

void fn_8026A370(u32 *param_1) {
    u32 *piVar1;

    if (param_1[1] != 0) {
        fn_80268DCC((int)(param_1[1]));
        piVar1 = (u32 *)param_1[1];
        if (piVar1 != (u32 *)0x0) {
            ((VCall_fn_8026A370_0 *)(piVar1))->m((u32)(1));
        }
    }
    if ((u32 *)*param_1 != (u32 *)0x0) {
        ((VCall_fn_8026A370_1 *)((u32 *)*param_1))->m();
        fn_8026D3FC((int)(*param_1));
        piVar1 = (u32 *)*param_1;
        if (piVar1 != (u32 *)0x0) {
            ((VCall_fn_8026A370_2 *)(piVar1))->m((u32)(1));
        }
    }
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
}
}
