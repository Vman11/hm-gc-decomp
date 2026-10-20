// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern u8 __vt__9C8018AACC[];
extern volatile f32 lbl_80364A38;
void __ct__9C801A1FC0Fv(void *);
void __ct__9C8018B724Fv(void *);

void *__ct__9C8018AACCFv(u8 *p) {
    __ct__9C801A1FC0Fv(p);
    *(void * *)(p + 104) = __vt__9C8018AACC;
    __ct__9C8018B724Fv(p + 152);
    *(u16 *)(p + 4) = 10;
    *(s32 *)(p + 304) = 0;
    *(s32 *)(p + 144) = 0;
    *(s32 *)(p + 148) = 0;
    *(f32 *)(p + 20) = lbl_80364A38;
    *(f32 *)(p + 36) = lbl_80364A38;
    return p;
}
