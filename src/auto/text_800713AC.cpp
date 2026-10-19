// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_8035F33C;
extern void *lbl_8035B7BC;
void fn_80107244(void *, f32 *);
void fn_8026A820(void *, void *, void *, f32 *);
void fn_8023FE08(void *, f32);

void fn_800713AC(u8 *p, f32 f) {
    f32 v[3];
    void *q = *(void **)(*(u8 **)(*(u8 **)(p + 0xE0) + 0x9C) + 0x30);
    if (q != NULL) {
        fn_80107244(q, v);
    } else {
        v[0] = lbl_8035F33C;
        v[1] = lbl_8035F33C;
        v[2] = lbl_8035F33C;
    }
    fn_8026A820(lbl_8035B7BC, p, p + 0x13C, v);
    fn_8023FE08(p, f);
}

} /* extern "C" */
