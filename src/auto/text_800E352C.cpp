// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802E0310[];
extern u8 lbl_802E0228[];
void __dl__FPv(void *);

void *fn_800E352C(u8 *p, s16 f) {
    if (p != NULL) {
        *(void **)p = lbl_802E0310;
        if (p != NULL) {
            *(void **)p = lbl_802E0228;
        }
        if (f > 0) {
            __dl__FPv(p);
        }
    }
    return p;
}

} /* extern "C" */
