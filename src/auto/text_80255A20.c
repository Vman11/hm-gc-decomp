// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern u8 lbl_802F23D8[];
extern u32 lbl_8035B680;
extern u32 lbl_8035B684;
void __ct__9C80108990Fv();
void __ct__9C80109410Fv();

u32 __ct__9C80255A20Fv(u32 param_1) {
    *(u8 **)(param_1 + 0xc0) = lbl_802F23D8;
    __ct__9C80108990Fv(param_1 + 8);
    __ct__9C80109410Fv(param_1 + 0x88);
    if (lbl_8035B684 == 0) {
        lbl_8035B684 = param_1;
    }
    lbl_8035B680 = 0;
    *(u32 *)(param_1 + 0xa8) = 0;
    *(u32 *)(param_1 + 4) = 0;
    *(u32 *)(param_1 + 0xac) = 0;
    *(u32 *)(param_1 + 0xb8) = 0;
    *(u32 *)(param_1 + 0xbc) = 1;
    return param_1;
}
