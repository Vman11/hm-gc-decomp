// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_8011A24C(void *, void *);
void fn_8021138C(void *);
void fn_8020AD80(void *);
void fn_8020E640(void *);

void fn_8011B4D4(void *p, u8 *q) {
    fn_8011A24C(p, q);
    if (*(void **)(q + 24) != NULL) {
        fn_8021138C(*(void **)(q + 24));
    } else {
        fn_8021138C(*(void **)(q + 20));
    }
    if (*(void **)(q + 28) != NULL) {
        fn_8020AD80(*(void **)(q + 28));
    } else {
        fn_8020AD80(*(void **)(q + 20));
    }
    if (*(void **)(q + 28) != NULL) {
        fn_8020E640(*(void **)(q + 28));
    } else {
        fn_8020AD80(*(void **)(q + 20));
    }
}

} /* extern "C" */
