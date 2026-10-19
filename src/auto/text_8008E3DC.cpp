// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802C8258[];
void __dl__FPv(void *);
void fn_8003E980(void *, s32);

void *fn_8008E3DC(void *param_1, s16 param_2) {
    if (param_1 != NULL) {
        *(u8 **)((u8 *)param_1 + 0x648) = lbl_802C8258;
        *(u32 *)((u8 *)param_1 + 0x654) = 0;
        *(u32 *)((u8 *)param_1 + 0x64c) = 0;
        *(u32 *)((u8 *)param_1 + 0x650) = 0;
        fn_8003E980(param_1, 0);
        if (0 < param_2) {
            __dl__FPv(param_1);
        }
    }
    return param_1;
}

} /* extern "C" */
