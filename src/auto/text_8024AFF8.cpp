// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_800E1E88(void *, void *);
void __dt__9C8024AC90Fv(void);
void __dla__FPv(void *);
void fn_8023B324(void *);

void fn_8024AFF8(u8 *p) {
    if (*(s32 *)(p + 20) != 0) {
        if (*(void **)(p + 4) != NULL) {
            fn_800E1E88(*(void **)(p + 4), (void *)__dt__9C8024AC90Fv);
        }
        if (*(u8 **)(p + 8) != NULL) {
            if (*(u8 **)(p + 8) != NULL) {
                __dla__FPv(*(u8 **)(p + 8) - 16);
            }
        }
        if (*(void **)(p + 12) != NULL) {
            __dla__FPv(*(void **)(p + 12));
        }
        if (*(u8 **)(p + 16) != NULL) {
            if (*(u8 **)(p + 16) != NULL) {
                __dla__FPv(*(u8 **)(p + 16) - 16);
            }
        }
        fn_8023B324(p + 28);
    }
    *(s32 *)(p + 0) = 0;
    *(s32 *)(p + 4) = 0;
    *(s32 *)(p + 8) = 0;
    *(s32 *)(p + 12) = 0;
    *(s32 *)(p + 16) = 0;
    *(s32 *)(p + 24) = 0;
    *(s32 *)(p + 20) = 0;
}

} /* extern "C" */
