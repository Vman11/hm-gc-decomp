// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

void fn_800FA69C();
void fn_800FB700();
extern void *memcpy(void *, const void *, unsigned long);

void fn_801FE7EC(u32 *param_1, void *param_2, u32 param_3, u32 param_4) {
    memcpy(param_1 + 1,param_2,0x10);
    *param_1 = 1;
    fn_800FB700(param_1 + 5,param_1 + 0x10,0x20);
    fn_800FB700(param_1 + 10,param_1 + 0x20,0x20);
    fn_800FA69C(param_1 + 5,param_3);
    fn_800FA69C(param_1 + 10,param_4);
}
