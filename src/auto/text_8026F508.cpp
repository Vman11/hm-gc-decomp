// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 *lbl_8035B460;
extern void *lbl_8035B7E0;
extern f32 lbl_80366E60;
extern char lbl_80366E64[8];
extern char lbl_80366E6C[8];
void *fn_801AAA08(void *, s32, const char *, s32);

void fn_8026F508(u8 *p, u8 *q) {
    void *x;
    if (*(s32 *)p != 0) {
    *(s32 *)(p + 0) = 0;
    *(s32 *)(p + 8) = 0;
    *(s32 *)(p + 12) = 0;
    *(f32 *)(p + 16) = lbl_80366E60;
    }
    *(s32 *)p = 1;
    x = *(void **)(*(u8 **)(lbl_8035B460 + 12) + 13232);
    if (x != NULL) {
        void *r = fn_801AAA08(x, 9, lbl_80366E64, 0);
        if (r != NULL) {
            *(void **)(p + 8) = r;
        }
        r = fn_801AAA08(x, 9, lbl_80366E6C, 0);
        if (r != NULL) {
            *(void **)(p + 12) = r;
        }
    }
    lbl_8035B7E0 = *(void **)(q + 4);
}

} /* extern "C" */
