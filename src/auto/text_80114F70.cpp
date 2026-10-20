// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern void *lbl_8035AAF0;
void fn_801150D0(void *);
void fn_80115C58(void *);
void fn_80116318(void *);
void fn_80115114(void *);

void fn_80114F70(u8 *p) {
    fn_801150D0(p + 4);
    fn_80115C58(p + 8);
    fn_80116318(lbl_8035AAF0);
    fn_80115114(lbl_8035AAF0);
    *(void **)(p + 10108) = p + 4;
    *(s32 *)p = 1;
}

} /* extern "C" */
