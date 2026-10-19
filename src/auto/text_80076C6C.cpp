// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_803286D0[];
extern f32 lbl_8035F3EC;
extern u32 lbl_8035F3F0;
void fn_80190C98(void *);

void fn_80076C6C(u8 *p) {
    if (*(u8 **)(p + 0x720) != NULL && *(u8 **)(p + 0x718) != NULL) {
        f32 v[3];
        u8 *q = *(u8 **)(*(u8 **)(p + 0x720) + 0x30);
        u8 *r;
        u8 *s;
        if (q != NULL) {
            (*(void (**)(void *, f32 *))(lbl_803286D0 + 0x130))(*(void **)(q + 0x10), v);
        } else {
            v[0] = lbl_8035F3EC;
            v[1] = lbl_8035F3EC;
            v[2] = lbl_8035F3EC;
        }
        r = *(u8 **)(p + 0x718);
        s = *(u8 **)(r + 0x30);
        if (s != NULL) {
            (*(void (**)(void *, f32 *))(lbl_803286D0 + 0xC))(*(void **)(s + 0x10), v);
            *(u32 *)(s + 0x20) |= lbl_8035F3F0;
            fn_80190C98(r);
        }
    }
    *(s32 *)(p + 0x71C) = 0;
}

} /* extern "C" */
