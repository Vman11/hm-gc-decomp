// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802EF730[];
extern f32 lbl_80365700;
void fn_801FCAC0(void *);

void *__ct__9C80200944Fv(u8 *p) {
    fn_801FCAC0(p);
    *(void **)(p + 36) = lbl_802EF730;
    *(f32 *)(p + 68) = lbl_80365700;
    return p;
}

} /* extern "C" */
