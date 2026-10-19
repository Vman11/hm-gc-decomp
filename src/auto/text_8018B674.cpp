// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_800FC804(void *, s32, s32, s32);

void fn_8018B674(u8 *p, s32 a, s32 b, s32 c, s32 d) {
    fn_800FC804(p, a, b, c);
    *(s32 *)(p + 0x90) = d;
}

} /* extern "C" */
