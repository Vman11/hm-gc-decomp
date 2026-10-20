// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void __dl__FPv(void *);
void __dla__FPv(void *);
void fn_80242210(void *);

void fn_8004B61C(u8 *p) {
    if (*(s32 *)(p + 416) == 0 && *(void **)(p + 452) != NULL) {
        __dl__FPv(*(void **)(p + 452));
        *(s32 *)(p + 452) = 0;
    }
    if (*(void **)(p + 400) != NULL) {
        u32 i;
        for (i = 0; i < *(u32 *)(p + 468); i++) {
            (*(u32 **)(p + 400))[i] = 0;
        }
        __dla__FPv(*(void **)(p + 400));
        *(s32 *)(p + 400) = 0;
    }
    fn_80242210(p);
}

} /* extern "C" */
