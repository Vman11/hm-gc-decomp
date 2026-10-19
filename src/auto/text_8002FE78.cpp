// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {



} /* extern "C" */

extern "C" {
extern char lbl_80294718[];
void fn_800E8F6C(...);
void fn_800F6E40(int, int);
struct VCall_fn_8002FE78_0 { char vptr_pad[0xc0]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void m(int); };

void fn_8002FE78(u32 param_1, u32 param_2) {
    u8 auStack_28 [8];
    u8 auStack_20[14];

    ((VCall_fn_8002FE78_0 *)(param_1))->m((u32)(auStack_28));
    fn_800F6E40((int)(auStack_20), (int)(auStack_28));
    fn_800E8F6C(param_2,lbl_80294718,auStack_20); /* "Levels\\%s" */
}
}
