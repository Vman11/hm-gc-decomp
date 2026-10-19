// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_80132BC0(int, int, int);
void fn_80217880(int, int);

typedef struct { u32 w0, w1; } Copy8;

void fn_8015FA20(s32 param_1, u32 param_2, s32 param_3) {
    u32 uVar1;

    *(Copy8 *)(param_1 + 0x58) = *(Copy8 *)(param_3 + 0x58);
    *(u32 *)(param_1 + 0x60) = *(u32 *)(param_3 + 0x60);
    *(u16 *)(param_1 + 0x4c) = *(u16 *)(param_3 + 0x4c);
    *(u32 *)(param_1 + 0x50) = *(u32 *)(param_3 + 0x50);
    fn_80217880((int)(param_1 + 0x3c), (int)(param_3 + 0x3c));
    fn_80132BC0((int)(param_1), (int)(param_2), (int)(param_3));
}

} /* extern "C" */
