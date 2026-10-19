/* Functions from 0x801103B4 to 0x80110444, found by decomp-toolkit. */
#include "common.h"

extern "C" {

s32 fn_801103B4(void *unused, s8 *a, s8 *b) {
    s8 x, y;
    while ((x = *a) && (y = *b) && x != '\\' && y != '\\') {
        if (x != y) return 0;
        ++a;
        ++b;
    }
    if ((x != 0 && x != '\\') || (*b != 0 && *b != '\\')) return 0;
    return 1;
}

} /* extern "C" */
