// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern volatile f32 lbl_80363910;
void fn_80104ED0(void *);

void fn_801080E8(u8 *p) {
    *(f32 *)(p + 40) = lbl_80363910;
    *(f32 *)(p + 44) = lbl_80363910;
    *(f32 *)(p + 48) = lbl_80363910;
    fn_80104ED0(p);
}

} /* extern "C" */
