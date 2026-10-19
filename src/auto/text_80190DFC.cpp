// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_80106B40(int, int);
void fn_80190C98(int);

void fn_80190DFC(s32 param_1) {
    if ((*(u32 *)(param_1 + 0x34) != 0) && (*(u32 *)(param_1 + 0x30) != 0)) {
        fn_80106B40((int)(*(u32 *)(param_1 + 0x34)), (int)(*(u32 *)(param_1 + 0x30)));
        fn_80190C98((int)(param_1));
    }
}

} /* extern "C" */
