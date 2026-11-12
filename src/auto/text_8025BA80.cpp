// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802F2818[];
extern f32 lbl_80366860;
void __ct__9C80267F2CFv(void *);

void *__ct__9C8025BA80Fv(u8 *p) {
    __ct__9C80267F2CFv(p);
    *(void **)(p + 0) = lbl_802F2818;
    *(f32 *)(p + 252) = lbl_80366860;
    return p;
}

} /* extern "C" */
