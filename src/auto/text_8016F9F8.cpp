// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 __dt__9C80175748Fv[];
extern u8 lbl_8032ED28[];
void fn_800E1F04(int, int, int, int);

void fn_8016F9F8(void) {
    fn_800E1F04((int)(lbl_8032ED28), (int)(__dt__9C80175748Fv), (int)(0x30), (int)(0x10));
}

} /* extern "C" */
