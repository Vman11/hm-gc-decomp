// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_8019A578(u32, u32);
struct C801EE6E4_8 { u8 pad[0xd4]; u32 xd4; u32 xd8; };
struct C801EE6E4 { u8 pad[8]; C801EE6E4_8 *x8; u8 pad2[0x18]; u32 x24; u32 *x28; u32 x2c; };

#pragma opt_propagation off
void fn_801EE6E4(C801EE6E4 *param_1) {
    u32 b;

    if ((param_1->x24 & 2) != 0) {
        *param_1->x28 = param_1->x2c;
        b = param_1->x8->xd4;
        fn_8019A578(param_1->x8->xd8, b);
    }
}
#pragma opt_propagation reset

} /* extern "C" */
