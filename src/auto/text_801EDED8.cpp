// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_801EF83C(void);
extern void *memset(void *, int, unsigned long);

void fn_801EDED8(s32 param_1) {
    if (*(s32 *)(param_1 + 8) != 0) {
        fn_801EF83C();
        *(u32 *)(param_1 + 4) = 0x14;
        memset((void *)(param_1 + 0x28),0,8);
    }
}

} /* extern "C" */
