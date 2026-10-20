// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802E9828[];
extern volatile f32 lbl_80364C60;
void fn_8017B648(void *);

void *__ct__9C80198880Fv(u8 *p) {
    fn_8017B648(p);
    *(void * *)(p + 8) = lbl_802E9828;
    *(f32 *)(p + 20) = lbl_80364C60;
    *(f32 *)(p + 24) = lbl_80364C60;
    *(f32 *)(p + 28) = lbl_80364C60;
    *(f32 *)(p + 32) = lbl_80364C60;
    return p;
}

} /* extern "C" */
