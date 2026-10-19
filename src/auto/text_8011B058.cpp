// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern s32 lbl_8035AB34;
void fn_800C067C(int);
void fn_80119398(int, int);
void fn_802078EC(int, int);

void fn_8011B058(u32 param_1, s32 param_2) {
    fn_802078EC((int)(0x40000), (int)(0xa00000));
    fn_80119398((int)(param_1), (int)(param_2));
    fn_800C067C((int)(1));
    lbl_8035AB34 = *(u32 *)(param_2 + 0xc);
}

} /* extern "C" */
