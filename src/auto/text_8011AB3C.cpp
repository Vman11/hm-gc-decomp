// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_800FC9F4(void *);
void fn_800FD528(void *);

void fn_8011AB3C(void *p, u8 *q) {
    if (*(void **)(q + 8) != NULL) {
        fn_800FC9F4(*(void **)(q + 8));
    } else {
        fn_800FC9F4(*(void **)(q + 4));
    }
    if (*(void **)(q + 12) != NULL) {
        fn_800FD528(*(void **)(q + 12));
    } else {
        fn_800FD528(*(void **)(q + 4));
    }
}

} /* extern "C" */
