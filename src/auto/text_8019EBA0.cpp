// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern f32 lbl_80364D3C;
void fn_801A0A1C(void *);
void fn_801867C8(void *, void *, f32);

void fn_8019EBA0(u8 *p, f32 f) {
    f32 k;
    fn_801A0A1C(p);
    k = lbl_80364D3C / *(f32 *)(p + 0xD8);
    *(f32 *)(p + 0x104) += f;
    while (*(f32 *)(p + 0x104) >= k) {
        *(u32 *)(p + 0xD0) = !*(u32 *)(p + 0xD0);
        fn_801867C8(p + *(u32 *)(p + 0xD0) * 20 + 0x90, p + !*(u32 *)(p + 0xD0) * 20 + 0x90, *(f32 *)(p + 0xE0));
        *(f32 *)(p + 0x104) -= k;
    }
    *(f32 *)(p + 0xD4) = *(f32 *)(p + 0x104) * *(f32 *)(p + 0xD8);
}

} /* extern "C" */
