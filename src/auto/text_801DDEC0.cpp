// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_803308B4[];
extern u32 lbl_8035B060;
void __dla__FPv(int);
void fn_800F8DD0(int);

void fn_801DDEC0(void) {
    fn_800F8DD0((int)(lbl_803308B4));
    if (lbl_8035B060 != 0) {
        __dla__FPv((int)(lbl_8035B060));
        lbl_8035B060 = 0;
    }
}

} /* extern "C" */
