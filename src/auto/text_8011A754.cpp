// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_801033E0(void *);
void fn_802200D0(void *);
void fn_80105F4C(void *);
void fn_80106B38(void *);
void fn_8021BB80(void *);
void fn_80106E74(void *);
void fn_80106E7C(void *);
void fn_80108490(void *);
void fn_801087A4(void *);
void fn_80103A7C(void *);

void fn_8011A754(void *p, u8 *q) {
    if (*(void **)(q + 8) != NULL) {
        fn_801033E0(*(void **)(q + 8));
    } else {
        fn_801033E0(*(void **)(q + 4));
    }
    if (*(void **)(q + 12) != NULL) {
        fn_802200D0(*(void **)(q + 12));
    } else {
        fn_802200D0(*(void **)(q + 4));
    }
    if (*(void **)(q + 16) != NULL) {
        fn_80105F4C(*(void **)(q + 16));
    } else {
        fn_80105F4C(*(void **)(q + 4));
    }
    if (*(void **)(q + 20) != NULL) {
        fn_80106B38(*(void **)(q + 20));
    } else {
        fn_80106B38(*(void **)(q + 4));
    }
    if (*(void **)(q + 28) != NULL) {
        fn_8021BB80(*(void **)(q + 28));
    } else {
        fn_8021BB80(*(void **)(q + 4));
    }
    if (*(void **)(q + 32) != NULL) {
        fn_80106E74(*(void **)(q + 32));
    } else {
        fn_80106E74(*(void **)(q + 4));
    }
    if (*(void **)(q + 36) != NULL) {
        fn_80106E7C(*(void **)(q + 36));
    } else {
        fn_80106E7C(*(void **)(q + 4));
    }
    if (*(void **)(q + 40) != NULL) {
        fn_80108490(*(void **)(q + 40));
    } else {
        fn_80108490(*(void **)(q + 4));
    }
    if (*(void **)(q + 44) != NULL) {
        fn_801087A4(*(void **)(q + 44));
    } else {
        fn_801087A4(*(void **)(q + 4));
    }
    if (*(void **)(q + 48) != NULL) {
        fn_80103A7C(*(void **)(q + 48));
    } else {
        fn_80103A7C(*(void **)(q + 4));
    }
}

} /* extern "C" */
