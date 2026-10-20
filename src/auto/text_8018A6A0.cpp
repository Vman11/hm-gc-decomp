// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

u32 fn_801A1538(void *, void *);
void fn_8017F42C(void *, void *);

u32 fn_8018A6A0(void *p, void *q) {
    if (fn_801A1538(p, q) == 64) {
        return 64;
    }
    fn_8017F42C(q, p);
    return 64;
}

} /* extern "C" */
