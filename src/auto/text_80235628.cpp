// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_80365EC4[0x4];
void fn_8024AFF8(int);

extern "C" {
void fn_8024B2D8(int, int, void *, void *);
}


extern "C" void fn_80235628(s32 *param_1) {
    s32 *piVar1;
    s32 iVar2;

    if (*param_1 != 0) {
        iVar2 = 0;
        piVar1 = param_1;
        do {
            fn_8024AFF8((int)(piVar1 + 1));
            iVar2 = iVar2 + 1;
            piVar1 = piVar1 + 0x31;
        } while (iVar2 < 4);
        *param_1 = 0;
    }
    iVar2 = 0;
    piVar1 = param_1;
    do {
        fn_8024B2D8((int)(piVar1 + 1), (int)(0x32), (void *)lbl_80365EC4, (void *)lbl_80365EC4);
        iVar2 = iVar2 + 1;
        piVar1 = piVar1 + 0x31;
    } while (iVar2 < 4);
    *param_1 = 1;
}

} /* extern "C" */
