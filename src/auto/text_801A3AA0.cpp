// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_801A3178(void);
void fn_801FDE2C(int);
void fn_801FE7E4(int);
void fn_80200818(int);
void fn_8020152C(int);
void fn_80203794(int);
void fn_80203ED8(int);
void fn_802044FC(int);
void fn_802056FC(int);

void fn_801A3AA0(u32 param_1, s32 param_2) {
    fn_801A3178();
    fn_801FE7E4((int)(*(u32 *)(param_2 + 4)));
    fn_80200818((int)(*(u32 *)(param_2 + 4)));
    fn_801FDE2C((int)(*(u32 *)(param_2 + 4)));
    fn_8020152C((int)(*(u32 *)(param_2 + 4)));
    fn_80203ED8((int)(*(u32 *)(param_2 + 4)));
    fn_80203794((int)(*(u32 *)(param_2 + 4)));
    fn_802044FC((int)(*(u32 *)(param_2 + 4)));
    fn_802056FC((int)(*(u32 *)(param_2 + 4)));
}

} /* extern "C" */
