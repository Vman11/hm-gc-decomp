#include "common.h"

extern "C" {

s32 fn_8021B0C8(void *, void *, s32, s32);

bool fn_8021A9F4(void *a, void *b) {
    return fn_8021B0C8(a, b, 0, 0) == 0;
}

} /* extern "C" */
