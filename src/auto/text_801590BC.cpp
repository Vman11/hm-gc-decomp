// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

} /* extern "C" */

extern "C" {
struct Unk801590BC_Elem { char pad[8]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void m(); };

void fn_801590BC(s32 param_1, s32 param_2) {
    *(s32 *)(param_1 + 0x78) = param_2;
    ((Unk801590BC_Elem *)(param_1 + *(s32 *)(param_1 + 0x68) * 0x1c + 0x30))->m();
    *(s32 *)(param_1 + 0x6c) = *(s32 *)(param_1 + 0x6c) + param_2;
}
}
