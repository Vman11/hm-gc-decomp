// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u32 lbl_8035A0A0;
void *memset(void *, int, unsigned long);
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7E98(void);
void fn_800F7EC0(u32);
void fn_800F8E38(void *, s32);
u32 fn_8021616C(u32);
struct C8003E8A0_14 { u8 b[0x14]; };
struct C8003E8A0 { u8 pad[0x2a8]; u32 x2a8; u8 pad2[0x2e4 - 0x2ac]; C8003E8A0_14 x2e4[0x1f]; u8 *x550[0x1f]; };

void fn_8003E8A0(C8003E8A0 *param_1, u32 param_2) {
    u32 i;

    param_1->x2a8 = fn_8021616C(param_2);
    i = 0;
    do {
        fn_800F8E38(&param_1->x2e4[i], 0x32);
        if (lbl_8035A0A0 == 0) {
            fn_800604C4(-2, 0, 0, 0);
        }
        fn_800F7EC0(lbl_8035A0A0);
        param_1->x550[i] = new u8[200];
        fn_800F7E98();
        if (param_1->x550[i] == 0) {
            fn_800604C4(-4, 0, 0, 0);
        }
        memset(param_1->x550[i], 0, 200);
        i++;
    } while (i < 0x1f);
}

} /* extern "C" */
