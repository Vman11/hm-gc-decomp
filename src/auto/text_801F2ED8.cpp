// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802EE900[];
extern u8 lbl_802EE90C[];
void __dl__FPv(void *);

void *fn_801F2ED8(u8 *p, s16 f) {
    if (p != NULL) {
        *(void **)p = lbl_802EE900;
        if (p + 35224 != NULL) {
            *(void **)(p + 35224) = lbl_802EE90C;
        }
        if (p + 32788 != NULL) {
            *(void **)(p + 32788) = lbl_802EE90C;
        }
        if (f > 0) {
            __dl__FPv(p);
        }
    }
    return p;
}

} /* extern "C" */
