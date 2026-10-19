// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_803286D0[];
extern f32 lbl_8035F3EC;

void fn_80072AC8(u8 *p, f32 *v) {
    v[0] = lbl_8035F3EC;
    v[1] = lbl_8035F3EC;
    v[2] = lbl_8035F3EC;
    if (*(u8 **)(p + 0x428) != NULL) {
        u8 *q = *(u8 **)(*(u8 **)(p + 0x428) + 0x30);
        if (q != NULL) {
            (*(void (**)(void *, f32 *))(lbl_803286D0 + 0x130))(*(void **)(q + 0x10), v);
        } else {
            v[0] = lbl_8035F3EC;
            v[1] = lbl_8035F3EC;
            v[2] = lbl_8035F3EC;
        }
        v[0] = v[0] + (*(f32 **)(*(u8 **)(p + 0x54C) + 0xC))[0];
        v[1] = v[1] + (*(f32 **)(*(u8 **)(p + 0x54C) + 0xC))[1];
        v[2] = v[2] + (*(f32 **)(*(u8 **)(p + 0x54C) + 0xC))[2];
    }
}

} /* extern "C" */
