#include "common.h"

extern "C" {

s32 fn_80210648(void *, void *, s32, s32);

bool fn_8020FF74(void *a, void *b) {
    return fn_80210648(a, b, 0, 0) == 0;
}

} /* extern "C" */
