// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_80120058(void);
void fn_80148118(int);

void fn_8014D5CC(s32 param_1) {
    fn_80120058();
    fn_80148118((int)(param_1 + 0x58));
    *(u32 *)(param_1 + 0x20) = 0;
    *(u32 *)(param_1 + 0x6c) = 0;
    *(u32 *)(param_1 + 0x70) = 0;
    *(u32 *)(param_1 + 0x74) = 0;
}

} /* extern "C" */
