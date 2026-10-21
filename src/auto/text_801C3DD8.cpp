// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u32 lbl_8035AFDC;
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7E98(void);
void fn_800F7EC0(u32);
struct VCall_fn_801C3DD8_0 { char vptr_pad[0x70]; virtual void p0(); virtual void p1(); virtual void m(); };

u32 fn_801C3DD8(u32 *param_1, u32 param_2, u32 param_3) {
    u32 i;

    if ((s32)param_1[0x18] != 0) {
        ((VCall_fn_801C3DD8_0 *)param_1)->m();
    }
    *param_1 = param_2;
    param_1[0x1a] = param_3;
    if (lbl_8035AFDC == 0) {
        fn_800604C4(-2, 0, 0, 0);
    }
    fn_800F7EC0(lbl_8035AFDC);
    param_1[0x19] = (u32) new u8[param_3 << 2];
    fn_800F7E98();
    if (param_1[0x19] == 0) {
        fn_800604C4(-4, 0, 0, 0);
    }
    for (i = 0; i < param_1[0x1a]; i++) {
        ((u32 *)param_1[0x19])[i] = 0;
    }
    param_1[0x18] = 1;
    return 0;
}

} /* extern "C" */
