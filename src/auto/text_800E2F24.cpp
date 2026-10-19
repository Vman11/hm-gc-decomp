// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_800E2F24(void **p) {
    if (p[0] != NULL) {
        void (*f)(void *, s32) = (void (*)(void *, s32))p[2];
        if (f != NULL) {
            f(p[0], -1);
        }
    }
}

} /* extern "C" */
