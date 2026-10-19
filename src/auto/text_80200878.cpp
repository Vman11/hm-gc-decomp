// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 fn_80203040[];
extern u8 lbl_80330CE4[];
void fn_800E1F04(int, int, int, int);

void fn_80200878(void) {
    fn_800E1F04((int)(lbl_80330CE4), (int)(fn_80203040), (int)(0x1dc), (int)(0x100));
}

} /* extern "C" */
