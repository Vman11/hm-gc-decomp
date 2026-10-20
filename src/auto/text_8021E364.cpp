// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_8011A754(void *, void *);
void fn_8021CA2C(void *);

void fn_8021E364(void *p, u8 *q) {
    fn_8011A754(p, q);
    if (*(void **)(q + 24) != NULL) {
        fn_8021CA2C(*(void **)(q + 24));
    } else {
        fn_8021CA2C(*(void **)(q + 4));
    }
}

} /* extern "C" */
