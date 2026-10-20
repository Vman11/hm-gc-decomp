// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void *fn_8010FFD0(void *, void *, s32);
void fn_8010CAF4(void *, void *);

BOOL fn_8010FE74(u8 *p, u8 *a, void *b) {
    void *x = b == NULL ? a + 8 : fn_8010FFD0(a, b, 0);
    if (x == NULL) {
        return FALSE;
    }
    fn_8010CAF4(p + 8, x);
    return TRUE;
}

} /* extern "C" */
