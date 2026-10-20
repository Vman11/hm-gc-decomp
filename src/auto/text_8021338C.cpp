// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void __dla__FPv(void *);
void __dl__FPv(void *);
void fn_800E1E88(void *, void *);
void *__dt__9C80213428Fv(u8 *p, s16 f);

void *__dt__9C80213428Fv(u8 *p, s16 f) {
    if (p != NULL) {
        if (*(u8 **)(p + 4) != NULL) {
            if (*(u8 **)(p + 4) != NULL) {
                __dla__FPv(*(u8 **)(p + 4) - 16);
            }
        }
        if (*(void **)p != NULL) {
            fn_800E1E88(*(void **)p, (void *)__dt__9C80213428Fv);
        }
    *(s32 *)(p + 0) = 0;
    *(s32 *)(p + 4) = 0;
    *(s32 *)(p + 8) = 0;
    *(u16 *)(p + 12) = 0;
    *(u16 *)(p + 14) = 0;
    *(u16 *)(p + 16) = 0;
    *(u16 *)(p + 18) = 0;
        if (f > 0) {
            __dl__FPv(p);
        }
    }
    return p;
}

} /* extern "C" */
