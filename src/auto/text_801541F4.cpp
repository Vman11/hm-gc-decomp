// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802E683C[];
void __dl__FPv(void *);
void __dt__9C8012C3F0Fv(void *, s32);
void fn_8012C2FC(void *);

void *fn_801541F4(void *param_1, s16 param_2) {
    if (param_1 != NULL) {
        *(u8 **)((u8 *)param_1 + 0x74) = lbl_802E683C;
        fn_8012C2FC(param_1);
        *(u32 *)((u8 *)param_1 + 0x78) = 0;
        *(u32 *)((u8 *)param_1 + 0x1c0) = 0;
        __dt__9C8012C3F0Fv(param_1, 0);
        if (0 < param_2) {
            __dl__FPv(param_1);
        }
    }
    return param_1;
}

} /* extern "C" */
