// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_800FA69C(void *, void *);

void fn_80109DD4(u8 *p, void *a) {
    fn_800FA69C(*(s32 *)(p + 0x34) != 0 ? p + 0x20 : p + 0xC, a);
}

} /* extern "C" */
