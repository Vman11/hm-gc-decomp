// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern u8 lbl_802E9828[];
extern u8 __vt__9C8017B40C[];
void __dt__9C8019A4B0Fv(void *, s32);
void __dl__FPv(void *);

void *__dt__9C80198880Fv(u8 *p, s16 f) {
    if (p != NULL) {
        *(void **)(p + 8) = lbl_802E9828;
        if (p != NULL) {
            *(void **)(p + 8) = __vt__9C8017B40C;
            __dt__9C8019A4B0Fv(p, 0);
        }
        if (f > 0) {
            __dl__FPv(p);
        }
    }
    return p;
}
