// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

void fn_801E3374(void *);
void fn_801E5984(void *);
void fn_801E3750(void *);
void fn_801ECD9C(void *);
void fn_801FA118(void *);
void fn_801EB888(void *);
void fn_801E6CF0(void *);
void fn_801EDADC(void *);
void fn_801E4CA8(void *);
void fn_801EFAE4(void *);

void fn_801A236C(void *unused, u8 *p) {
    if (*(void **)(p + 0x40) != 0) {
        fn_801E3374(*(void **)(p + 0x40));
    } else {
        fn_801E3374(*(void **)(p + 0x3C));
    }
    if (*(void **)(p + 0x50) != 0) {
        fn_801E5984(*(void **)(p + 0x50));
    } else {
        fn_801E5984(*(void **)(p + 0x3C));
    }
    if (*(void **)(p + 0x44) != 0) {
        fn_801E3750(*(void **)(p + 0x44));
    } else {
        fn_801E3750(*(void **)(p + 0x3C));
    }
    if (*(void **)(p + 0x48) != 0) {
        fn_801ECD9C(*(void **)(p + 0x48));
    } else {
        fn_801ECD9C(*(void **)(p + 0x3C));
    }
    if (*(void **)(p + 0x4C) != 0) {
        fn_801FA118(*(void **)(p + 0x4C));
    } else {
        fn_801FA118(*(void **)(p + 0x3C));
    }
    if (*(void **)(p + 0x54) != 0) {
        fn_801EB888(*(void **)(p + 0x54));
    } else {
        fn_801EB888(*(void **)(p + 0x3C));
    }
    if (*(void **)(p + 0x60) != 0) {
        fn_801E6CF0(*(void **)(p + 0x60));
    } else {
        fn_801E6CF0(*(void **)(p + 0x3C));
    }
    if (*(void **)(p + 0x64) != 0) {
        fn_801EDADC(*(void **)(p + 0x64));
    } else {
        fn_801EDADC(*(void **)(p + 0x3C));
    }
    if (*(void **)(p + 0x5C) != 0) {
        fn_801E4CA8(*(void **)(p + 0x5C));
    } else {
        fn_801E4CA8(*(void **)(p + 0x3C));
    }
    if (*(void **)(p + 0x58) != 0) {
        fn_801EFAE4(*(void **)(p + 0x58));
    } else {
        fn_801EFAE4(*(void **)(p + 0x3C));
    }
}
