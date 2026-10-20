// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_8008B3F8(void *);
void fn_8023FE08(void *, f32);

void fn_8008B394(u8 *p, f32 f) {
    if (*(s32 *)(p + 96) <= 2 && *(s32 *)(p + 332) == 0) {
        fn_8008B3F8(p);
    }
    *(s32 *)(p + 332) = 0;
    fn_8023FE08(p, f);
}

} /* extern "C" */
