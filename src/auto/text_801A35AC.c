// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

void fn_801A53A8(void *);
void fn_801A6848(void *);
void fn_801A6EB0(void *);
void fn_801AD740(void *);
void fn_801C0C68(void *);
void fn_801C126C(void *);
void fn_801C4044(void *);
void fn_801CE674(void *);
void fn_801CEAA8(void *);
void fn_801DE0C8(void *);

void fn_801A35AC(void *unused, u8 *p) {
    if (*(void **)(p + 0x8) != 0) {
        fn_801A53A8(*(void **)(p + 0x8));
    } else {
        fn_801A53A8(*(void **)(p + 0x4));
    }
    if (*(void **)(p + 0xC) != 0) {
        fn_801A6848(*(void **)(p + 0xC));
    } else {
        fn_801A6848(*(void **)(p + 0x4));
    }
    if (*(void **)(p + 0x10) != 0) {
        fn_801CEAA8(*(void **)(p + 0x10));
    } else {
        fn_801CEAA8(*(void **)(p + 0x4));
    }
    if (*(void **)(p + 0x14) != 0) {
        fn_801CE674(*(void **)(p + 0x14));
    } else {
        fn_801CE674(*(void **)(p + 0x4));
    }
    if (*(void **)(p + 0x18) != 0) {
        fn_801C0C68(*(void **)(p + 0x18));
    } else {
        fn_801C0C68(*(void **)(p + 0x4));
    }
    if (*(void **)(p + 0x1C) != 0) {
        fn_801C126C(*(void **)(p + 0x1C));
    } else {
        fn_801C126C(*(void **)(p + 0x4));
    }
    if (*(void **)(p + 0x20) != 0) {
        fn_801C4044(*(void **)(p + 0x20));
    } else {
        fn_801C4044(*(void **)(p + 0x4));
    }
    if (*(void **)(p + 0x24) != 0) {
        fn_801AD740(*(void **)(p + 0x24));
    } else {
        fn_801AD740(*(void **)(p + 0x4));
    }
    if (*(void **)(p + 0x28) != 0) {
        fn_801A6EB0(*(void **)(p + 0x28));
    } else {
        fn_801A6EB0(*(void **)(p + 0x4));
    }
    if (*(void **)(p + 0x2C) != 0) {
        fn_801DE0C8(*(void **)(p + 0x2C));
    } else {
        fn_801DE0C8(*(void **)(p + 0x4));
    }
}
