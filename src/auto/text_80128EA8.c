// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035AB70;
extern u8 lbl_80328890[];
void __ct__9C80121E80Fv(void);
void __construct_array(void *, void *, void *, u32, u32);

void fn_80128EA8(void) {
    lbl_8035AB70 = lbl_803596E0[0];
    __construct_array(lbl_80328890, (void *)__ct__9C80121E80Fv, 0, 4, 256);
}
