// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_800B9238(s32);
void fn_800C8080(s32);
void fn_800CA090(s32);

void fn_801FE33C(u8 *p, s32 a) {
    *(s32 *)(p + 20) = a;
    switch (a) {
    case 0:
        fn_800B9238(1);
        fn_800C8080(0);
        fn_800CA090(1);
        break;
    case 1:
        fn_800B9238(0);
        fn_800C8080(0);
        fn_800CA090(0);
        break;
    case 2:
        fn_800B9238(1);
        fn_800C8080(1);
        fn_800CA090(2);
        break;
    case 3:
        fn_800B9238(1);
        fn_800C8080(2);
        fn_800CA090(3);
        break;
    }
}

} /* extern "C" */
