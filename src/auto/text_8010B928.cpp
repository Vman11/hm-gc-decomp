// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 *lbl_8035AAB4;
void *fn_800F8274(void *, void *);

void *fn_8010B928(u8 *p, void *a) {
    u8 *n;
    void *r = fn_800F8274(p + 32, a);
    if (r == NULL) {
        for (n = lbl_8035AAB4; n != NULL; n = *(u8 **)(n + 68)) {
            r = fn_800F8274(n + 32, a);
            if (r != NULL) {
                break;
            }
        }
    }
    return r;
}

} /* extern "C" */
