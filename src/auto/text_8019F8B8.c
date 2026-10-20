// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern u8 lbl_802E9BB8[];
extern f32 lbl_80364D70;
void fn_8017B648(void *);

void *__ct__9C8019F8B8Fv(u8 *p) {
    fn_8017B648(p);
    *(void **)(p + 8) = lbl_802E9BB8;
    *(f32 *)(p + 20) = lbl_80364D70;
    return p;
}
