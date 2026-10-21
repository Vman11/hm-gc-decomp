// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_80115B6C(int, int, int, void *);
void fn_80116728(int, void *, void *);
void fn_80116A70(int, void *);
void fn_80116B10(int, int, void *);

u32 fn_80115930(s32 param_1, u32 param_2, s32 param_3) {
    u32 local_60;
    u32 local_64;
    u8 auStack_68 [4];
    u8 auStack_5c[80];

    fn_80116B10((int)(param_2), (int)(*(u32 *)(param_3 + 4)), &local_64);
    fn_80116A70((int)(local_64), auStack_68);
    fn_80115B6C((int)(local_64), (int)(0), (int)(0), auStack_5c);
    fn_80116728((int)(*(u32 *)(param_1 + 0x27a8)), auStack_5c, &local_60);
    return local_60;
}

} /* extern "C" */
