// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802E3948[];
void __dla__FPv(void *);
void __dl__FPv(void *);

void *dtor_80118860(u8 *p, s16 f) {
    if (p != NULL) {
        *(void **)p = lbl_802E3948;
        if (*(void **)(p + 24) != NULL) {
            __dla__FPv(*(void **)(p + 24));
        }
        if (*(u8 **)(p + 28) != NULL) {
            if (*(u8 **)(p + 28) != NULL) {
                __dla__FPv(*(u8 **)(p + 28) - 16);
            }
        }
    *(s32 *)(p + 24) = 0;
    *(s32 *)(p + 28) = 0;
    *(s32 *)(p + 4) = 0;
    *(s32 *)(p + 32) = 0;
    *(s32 *)(p + 36) = 0;
        if (f > 0) {
            __dl__FPv(p);
        }
    }
    return p;
}

} /* extern "C" */
