// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern void *lbl_8035B7BC;
void fn_800F6FBC(void *, void *);
void *fn_8026D254(void *, void *);
void fn_8026B280(void *, f32);
void fn_8026B2CC(void *, void *, void *);

void fn_80248B54(u8 *p, void *a, void *b, void *c, f32 f) {
    if (*(s32 *)(p + 44) != 0) {
        char buf[8];
        void *r;
        fn_800F6FBC(a, buf);
        r = fn_8026D254(lbl_8035B7BC, buf);
        if (*(s32 *)(p + 44) != 0 && r != NULL) {
            fn_8026B280(lbl_8035B7BC, f);
            fn_8026B2CC(lbl_8035B7BC, r, c);
        }
    }
}

} /* extern "C" */
