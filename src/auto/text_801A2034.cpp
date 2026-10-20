// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_801A2824(void *, void *);
void fn_8014EB4C(void *);

void fn_801A2034(void *p, u8 *q) {
    fn_801A2824(p, q);
    if (*(void **)(q + 8) != NULL) {
        fn_8014EB4C(*(void **)(q + 8));
    } else {
        fn_8014EB4C(*(void **)(q + 4));
    }
}

} /* extern "C" */
