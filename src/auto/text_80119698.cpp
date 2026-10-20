// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_800F931C(void *);
void fn_800F9BB4(void *);
void fn_801089E8(void *);
void fn_80108D0C(void *);
void fn_8010903C(void *);
void fn_80109044(void *);
void fn_8010945C(void *);
void fn_80109464(void *);
extern void *lbl_8035A9F8;
extern void *lbl_8035AA00;

void fn_80119698(void *p, u8 *q) {
    if (*(void **)(q + 12) != NULL) {
        fn_80108D0C(*(void **)(q + 12));
    } else {
        fn_80108D0C(*(void **)(q + 8));
    }
    if (*(void **)(q + 16) != NULL) {
        fn_800F931C(*(void **)(q + 16));
    } else {
        fn_800F931C(*(void **)(q + 8));
    }
    if (*(void **)(q + 20) != NULL) {
        fn_801089E8(*(void **)(q + 20));
    } else {
        fn_801089E8(*(void **)(q + 8));
    }
    if (*(void **)(q + 24) != NULL) {
        fn_8010903C(*(void **)(q + 24));
    } else {
        fn_8010903C(*(void **)(q + 8));
    }
    if (*(void **)(q + 28) != NULL) {
        fn_80109044(*(void **)(q + 28));
    } else {
        fn_80109044(*(void **)(q + 8));
    }
    if (*(void **)(q + 32) != NULL) {
        fn_8010945C(*(void **)(q + 32));
    } else {
        fn_8010945C(*(void **)(q + 8));
    }
    if (*(void **)(q + 36) != NULL) {
        fn_80109464(*(void **)(q + 36));
    } else {
        fn_80109464(*(void **)(q + 8));
    }
    if (lbl_8035A9F8 == NULL) {
        if (*(void **)(q + 40) != NULL) {
            fn_800F931C(*(void **)(q + 40));
        } else {
            fn_800F931C(*(void **)(q + 8));
        }
    }
    if (lbl_8035AA00 == NULL) {
        if (*(void **)(q + 44) != NULL) {
            fn_800F9BB4(*(void **)(q + 44));
        } else {
            fn_800F9BB4(*(void **)(q + 8));
        }
    }
}

} /* extern "C" */
