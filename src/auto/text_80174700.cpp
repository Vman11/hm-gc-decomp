// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_8032F028[];
extern void *memset(void *, int, unsigned long);

u8 * fn_80174700(void) {
    memset(lbl_8032F028 + 0x210,0,0x20);
    return lbl_8032F028;
}

} /* extern "C" */
