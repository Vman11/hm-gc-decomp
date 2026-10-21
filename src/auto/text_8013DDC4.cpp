// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_80148210(u8 *, s32, s32, s32, s32);
void fn_80148288(u8 *, s32, s32, s32, s32, s32, s32);
struct VCall_fn_8013DDC4_0 { char vptr_pad[0x53c]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void m(); };

void fn_8013DDC4(u8 *param_1, u8 *param_2) {
    if (*(u16 *)(param_1 + 0x1c) != 0) {
        ((VCall_fn_8013DDC4_0 *)param_1)->m();
    }
    *(u32 *)(param_1 + 0x540) = (u32)param_2[0] + ((u32)param_2[1] << 8) + ((u32)param_2[2] << 16) + ((u32)param_2[3] << 24);
    *(u32 *)(param_1 + 0x14) = (u32)param_2[4] + ((u32)param_2[5] << 8);
    *(u32 *)(param_1 + 0x10) = (u32)param_2[6] + ((u32)param_2[7] << 8);
    *(u32 *)(param_1 + 0x54c) = (u32)param_2[8] + ((u32)param_2[9] << 8);
    if (*(u32 *)(param_1 + 0x54c) == 3) {
        fn_80148288(param_1 + 0x1c, 0x18, 0xff, 0xff00, 0xff0000, 0, 0);
    } else {
        fn_80148210(param_1 + 0x1c, 8, 0xff, 0, 0);
    }
    *(u32 *)(param_1 + 0x18) = *(u32 *)(param_1 + 0x10) * *(u32 *)(param_1 + 0x54c);
    *(u8 **)(param_1 + 0x544) = param_2 + 10;
}

} /* extern "C" */
