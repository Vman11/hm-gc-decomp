// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_801D1258(void *p);
void fn_801D11F4(void *p);
void fn_801CEAC8(void *p, void *q);
extern f32 lbl_80364FF8;

void fn_801C4B5C(u8 *p, f32 x) {
    u8 *q = *(u8 **)(p + 364);
    f32 v;
    if (*(s32 *)(q + 360) != 0) {
        v = x - lbl_80364FF8 * (*(f32 *)(q + 436) - *(f32 *)(q + 428));
        if (v < *(f32 *)(p + 72)) v = *(f32 *)(p + 72);
        *(f32 *)(q + 72) = v;
        q = *(u8 **)(p + 364);
        *(f32 *)(q + 80) = v + (*(f32 *)(q + 436) - *(f32 *)(q + 428));
        fn_801D1258(*(void **)(p + 364));
        fn_801CEAC8(*(void **)(p + 364), *(void **)(*(u8 **)(p + 364) + 408));
    } else {
        v = x - lbl_80364FF8 * (*(f32 *)(q + 440) - *(f32 *)(q + 432));
        if (v < *(f32 *)(p + 76)) v = *(f32 *)(p + 76);
        *(f32 *)(q + 76) = v;
        q = *(u8 **)(p + 364);
        *(f32 *)(q + 84) = v + (*(f32 *)(q + 440) - *(f32 *)(q + 432));
        fn_801D11F4(*(void **)(p + 364));
        fn_801CEAC8(*(void **)(p + 364), *(void **)(*(u8 **)(p + 364) + 408));
    }
}

} /* extern "C" */
