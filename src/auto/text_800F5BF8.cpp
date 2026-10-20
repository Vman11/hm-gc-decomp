// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_800F9FE0(void *, s32);

void fn_800F5BF8(void **p, char *s) {
    while (*s != 0) {
        fn_800F9FE0(*p, *s);
        s++;
    }
}

} /* extern "C" */
