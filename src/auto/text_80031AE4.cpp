// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 *lbl_8035B488;
extern u8 *lbl_8035B5E4;
void fn_8002B42C(void *, s32);
void fn_80253250(void *);
void fn_8002AFBC(void *);
void fn_8026D920(void *, f32);

void fn_80031AE4(u8 *p, s32 a) {
    f32 f;
    *(s32 *)(p + 0xB7C) = 1;
    *(u32 *)(p + 0x8C) ^= 16;
    *(u32 *)(lbl_8035B488 + 0x27F0) |= 2;
    fn_8002B42C(p + 0x818, 0);
    f = *(f32 *)(lbl_8035B488 + 0x14);
    if (a != 0) {
        fn_80253250(*(u8 **)(lbl_8035B5E4 + 0x70) + *(s32 *)(lbl_8035B5E4 + 0x68) * 52);
        fn_8002AFBC(p + 0x818);
        fn_8026D920(*(void **)(p + 0x80), f);
    }
}

} /* extern "C" */
