// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 __vt__9C80197BEC[];
extern volatile f32 lbl_80364C50;
void __ct__9C8018E2ACFv(void *);

void *__ct__9C80197BECFv(u8 *p) {
    __ct__9C8018E2ACFv(p);
    *(void **)(p + 12) = __vt__9C80197BEC;
    *(s32 *)(p + 4) = 2;
    *(f32 *)(p + 16) = lbl_80364C50;
    *(f32 *)(p + 20) = lbl_80364C50;
    return p;
}

} /* extern "C" */
