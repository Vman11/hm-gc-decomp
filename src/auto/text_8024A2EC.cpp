// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern void *volatile lbl_8035B548;
void fn_8024B6D0(void *);

void fn_8024A2EC(s32 *p, u8 *q) {
    if (p[0] != 0) {
        p[0] = 0;
    }
    p[0] = 1;
    lbl_8035B548 = *(void **)(q + 4);
    fn_8024B6D0(lbl_8035B548);
}

} /* extern "C" */
