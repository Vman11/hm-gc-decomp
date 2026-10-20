// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 __vt__9C8018B484[];
extern f32 lbl_80364A58;
extern volatile f32 lbl_80364A5C;
void __ct__9C8018E2ACFv(void *);

void *__ct__9C8018B484Fv(u8 *p) {
    __ct__9C8018E2ACFv(p);
    *(void * *)(p + 12) = __vt__9C8018B484;
    *(s32 *)(p + 16) = 0;
    *(s32 *)(p + 48) = 0;
    *(s32 *)(p + 20) = 0;
    *(f32 *)(p + 24) = lbl_80364A58;
    *(f32 *)(p + 28) = lbl_80364A5C;
    *(f32 *)(p + 32) = lbl_80364A5C;
    *(f32 *)(p + 36) = lbl_80364A5C;
    *(f32 *)(p + 40) = lbl_80364A5C;
    *(f32 *)(p + 44) = lbl_80364A5C;
    return p;
}

} /* extern "C" */
