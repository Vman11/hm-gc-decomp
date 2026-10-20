// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_80103CF0(void *, void *, void *, void *);

void fn_80107218(void *a, void *b, u8 *p, s32 i) {
    fn_80103CF0(a, b, p, *(u8 **)(p + 36) + i * 40);
}

} /* extern "C" */
