// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_8010C438(void *);
void fn_8010C33C(void *);
void fn_8010B920(void *);
void fn_80112F08(void *);
void fn_8010E448(void *);
void fn_801122C0(void *);
void fn_8010CE5C(void *);
void fn_8010EE58(void *);
void fn_80112A14(void *);

void fn_80119E00(void *p, u8 *q) {
    if (*(void **)(q + 12) != NULL) {
        fn_8010C438(*(void **)(q + 12));
    } else {
        fn_8010C438(*(void **)(q + 8));
    }
    if (*(void **)(q + 16) != NULL) {
        fn_8010C33C(*(void **)(q + 16));
    } else {
        fn_8010C33C(*(void **)(q + 8));
    }
    if (*(void **)(q + 44) != NULL) {
        fn_8010B920(*(void **)(q + 44));
    } else {
        fn_8010B920(*(void **)(q + 8));
    }
    if (*(void **)(q + 20) != NULL) {
        fn_80112F08(*(void **)(q + 20));
    } else {
        fn_80112F08(*(void **)(q + 8));
    }
    if (*(void **)(q + 24) != NULL) {
        fn_8010E448(*(void **)(q + 24));
    } else {
        fn_8010E448(*(void **)(q + 8));
    }
    if (*(void **)(q + 28) != NULL) {
        fn_801122C0(*(void **)(q + 28));
    } else {
        fn_801122C0(*(void **)(q + 8));
    }
    if (*(void **)(q + 32) != NULL) {
        fn_8010CE5C(*(void **)(q + 32));
    } else {
        fn_8010CE5C(*(void **)(q + 8));
    }
    if (*(void **)(q + 36) != NULL) {
        fn_8010EE58(*(void **)(q + 36));
    } else {
        fn_8010EE58(*(void **)(q + 8));
    }
    if (*(void **)(q + 40) != NULL) {
        fn_80112A14(*(void **)(q + 40));
    } else {
        fn_80112A14(*(void **)(q + 8));
    }
}

} /* extern "C" */
