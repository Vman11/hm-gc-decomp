// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void __dla__FPv(void *);

void fn_80102E34(u8 *p) {
    if (*(u8 **)(p + 0) != NULL) {
        if (*(u8 **)(p + 0) != NULL) {
            __dla__FPv(*(u8 **)(p + 0) - 16);
        }
    }
    if (*(u8 **)(p + 4) != NULL) {
        if (*(u8 **)(p + 4) != NULL) {
            __dla__FPv(*(u8 **)(p + 4) - 16);
        }
    }
    if (*(u8 **)(p + 8) != NULL) {
        if (*(u8 **)(p + 8) != NULL) {
            __dla__FPv(*(u8 **)(p + 8) - 16);
        }
    }
    *(s32 *)(p + 0) = 0;
    *(s32 *)(p + 4) = 0;
    *(s32 *)(p + 8) = 0;
    *(s32 *)(p + 12) = 0;
    *(s32 *)(p + 16) = 0;
    *(s32 *)(p + 20) = 0;
}

} /* extern "C" */
