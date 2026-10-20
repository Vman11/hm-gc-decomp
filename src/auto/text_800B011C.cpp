// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_802494A4(void *, s32);
void fn_8023FE08(void *, f32);

void fn_800B011C(u8 *p, f32 f) {
    if (*(s32 *)(p + 96) == 1 && *(s32 *)(p + 308) != 0 && *(s32 *)(p + 312) != 0) {
        fn_802494A4(p, 2);
    }
    fn_8023FE08(p, f);
}

} /* extern "C" */
