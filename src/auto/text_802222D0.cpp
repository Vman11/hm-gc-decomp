// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802F0638[];
extern s32 lbl_80356E60[4];
void fn_80221E28(void *);

void *__ct__9C802222D0Fv(u8 *p) {
    fn_80221E28(p);
    *(void **)(p + 0x60) = lbl_802F0638;
    lbl_80356E60[0] = 3;
    lbl_80356E60[1] = 5;
    lbl_80356E60[2] = 10;
    lbl_80356E60[3] = 7;
    return p;
}

} /* extern "C" */
