// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802E2518[];
void __dl__FPv(void *);

void *__dt__9C80108CF0Fv(u8 *p, s16 f) {
    if (p != NULL) {
        u8 *n;
        *(void **)(p + 8) = lbl_802E2518;
        n = *(u8 **)p;
        while (n != NULL) {
            u8 *t = *(u8 **)n;
            __dl__FPv(n);
            n = t;
        }
        if (f > 0) {
            __dl__FPv(p);
        }
    }
    return p;
}

} /* extern "C" */
