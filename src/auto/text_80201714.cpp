// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

u32 rand(void);

u32 fn_80201714(u32 n) {
    u32 r = 0;
    if (n != 0) {
        r = rand() % n;
    }
    return r;
}

} /* extern "C" */
