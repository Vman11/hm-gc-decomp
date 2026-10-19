// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
void fn_80100CF4(int);
void fn_8021EA50(int, int, int);
void fn_8021EFD8(void);
void fn_8021EFE4(int);
struct VCall_fn_800FBBE4_0 { char vptr_pad[0x30]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void m(int); };

void fn_800FBBE4(u32 param_1, u32 param_2, u8 *param_3) {
    u8 auStack_28 [12];

    fn_80100CF4((int)(auStack_28));
    if (param_3 == (u8 *)0x0) {
        ((VCall_fn_800FBBE4_0 *)(param_2))->m((u32)(auStack_28));
        param_3 = auStack_28;
    }
    fn_8021EFE4((int)(*(u32 *)(param_1 + 0xc)));
    fn_8021EFD8();
    fn_8021EA50((int)(*(u32 *)(param_1 + 8)), (int)(param_2), (int)(param_3));
}
}
