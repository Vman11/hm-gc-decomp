// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802E8290[];
extern volatile f32 lbl_80364718;
void fn_80137968(void *);

void *__ct__9C80170688Fv(u8 *p) {
    fn_80137968(p);
    *(void * *)(p + 68) = lbl_802E8290;
    *(s32 *)(p + 72) = 0;
    *(s32 *)(p + 76) = 0;
    *(s32 *)(p + 80) = 0;
    *(s32 *)(p + 84) = 0;
    *(f32 *)(p + 88) = lbl_80364718;
    *(f32 *)(p + 92) = lbl_80364718;
    *(f32 *)(p + 96) = lbl_80364718;
    *(f32 *)(p + 100) = lbl_80364718;
    *(f32 *)(p + 104) = lbl_80364718;
    *(f32 *)(p + 108) = lbl_80364718;
    return p;
}

} /* extern "C" */
