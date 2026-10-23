// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct { u32 v[2]; } T8;
extern f32 lbl_803654C8;
void fn_80121D44(u8 *a, u8 *b);
void fn_8019BA78(void *a, u8 *b);
void fn_8019B9E4(void *a, u8 *b);

void fn_801F6D1C(u8 *self) {
    u8 *p;
    u8 zero;
    if (*(u32 *)(self + 36) & 2) {
        fn_80121D44(self + 40, *(u8 **)(self + 120) + 64);
        if (*(u32 *)(self + 124) != 0) {
            *(u32 *)(*(u8 **)(self + 120) + 84) = *(u32 *)(self + 124);
        }
        zero = 0;
        if (lbl_803654C8 == *(f32 *)(self + 72) && lbl_803654C8 == *(f32 *)(self + 76)) {
            zero = 1;
        }
        if (!zero) {
            p = *(u8 **)(self + 120);
            *(f32 *)(p + 36) = *(f32 *)(self + 72);
            *(f32 *)(p + 40) = *(f32 *)(self + 76);
        }
        *(f32 *)(self + 84) = *(f32 *)(self + 80);
        if (lbl_803654C8 == *(f32 *)(self + 80)) {
            p = *(u8 **)(self + 120);
            *(T8 *)(p + 64) = *(T8 *)(self + 56);
            *(T8 *)(p + 72) = *(T8 *)(self + 64);
        }
        if (*(s32 *)(self + 12) == 33) {
            fn_8019BA78(*(void **)(*(u8 **)(self + 8) + 216), *(u8 **)(self + 120));
        } else {
            fn_8019B9E4(*(void **)(*(u8 **)(self + 8) + 216), *(u8 **)(self + 120));
        }
    }
}

} /* extern "C" */
