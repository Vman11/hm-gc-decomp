// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void __dla__FPv(void *);
void fn_800F8DD0(void *);

void fn_8017C9D0(u8 *p) {
    if (*(u8 **)(p + 40) != NULL) {
        if (*(u8 **)(p + 40) != NULL) {
            __dla__FPv(*(u8 **)(p + 40) - 16);
        }
    }
    if (*(u8 **)(p + 36) != NULL) {
        if (*(u8 **)(p + 36) != NULL) {
            __dla__FPv(*(u8 **)(p + 36) - 16);
        }
    }
    if (*(u8 **)(p + 32) != NULL) {
        if (*(u8 **)(p + 32) != NULL) {
            __dla__FPv(*(u8 **)(p + 32) - 16);
        }
    }
    fn_800F8DD0(p);
    *(s32 *)(p + 20) = 0;
    *(s32 *)(p + 24) = 0;
    *(s32 *)(p + 28) = 0;
    *(s32 *)(p + 32) = 0;
    *(s32 *)(p + 36) = 0;
    *(s32 *)(p + 40) = 0;
}

} /* extern "C" */
