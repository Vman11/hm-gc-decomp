// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_800F8DD0(void *);
void __dla__FPv(void *);

void fn_80215450(u8 *p) {
    fn_800F8DD0(p);
    if (*(s32 *)(p + 32) != 0) {
        if (*(s32 *)(p + 28) != 0) {
            if (*(u8 **)(p + 24) != NULL) {
                if (*(u8 **)(p + 24) != NULL) {
                    __dla__FPv(*(u8 **)(p + 24) - 16);
                }
                *(s32 *)(p + 24) = 0;
            }
            if (*(void **)(p + 20) != NULL) {
                __dla__FPv(*(void **)(p + 20));
                *(s32 *)(p + 20) = 0;
            }
        } else {
            if (*(u8 **)(p + 24) != NULL) {
                if (*(u8 **)(p + 24) != NULL) {
                    __dla__FPv(*(u8 **)(p + 24) - 16);
                }
                *(s32 *)(p + 24) = 0;
            }
            if (*(void **)(p + 20) != NULL) {
                __dla__FPv(*(void **)(p + 20));
                *(s32 *)(p + 20) = 0;
            }
        }
    *(s32 *)(p + 28) = 0;
    *(s32 *)(p + 32) = 0;
    *(s32 *)(p + 36) = 0;
    *(s32 *)(p + 40) = 0;
    *(s32 *)(p + 44) = 0;
    *(s32 *)(p + 48) = 0;
    *(s32 *)(p + 24) = 0;
    *(s32 *)(p + 20) = 0;
    *(s32 *)(p + 24) = 0;
    *(s32 *)(p + 20) = 0;
    }
}

} /* extern "C" */
