// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_801A2C40(void *, void *);
void fn_80221508(void *);

void fn_80220828(void *p, u8 *q) {
    fn_801A2C40(p, q);
    if (*(void **)(q + 76) != NULL) {
        fn_80221508(*(void **)(q + 76));
    } else {
        fn_80221508(*(void **)(q + 28));
    }
}

} /* extern "C" */
