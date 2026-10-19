// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
void fn_8011A8A0(void);
void fn_8021C9C4(int);
struct VCall_fn_8021E3E4_0 { char vptr_pad[0x8]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void m(int); };

void fn_8021E3E4(s32 *param_1, u32 param_2) {
    fn_8011A8A0();
    ((VCall_fn_8021E3E4_0 *)(param_1))->m((s32)(param_2));
    fn_8021C9C4((int)(param_1 + 3));
    *param_1 = (s32)(param_1 + 3);
}
}
