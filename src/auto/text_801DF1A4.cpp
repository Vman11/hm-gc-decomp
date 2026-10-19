// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct { u32 a, b, c; } T12_801DF1A4;
extern T12_801DF1A4 lbl_802ED508;
extern T12_801DF1A4 lbl_802ED514;
extern f32 lbl_80365278;
extern f32 lbl_80365274;
void fn_80108A94(void *, void *, void *, s32);

void fn_801DF1A4(u8 *p) {
    if (*(void **)(p + 0x38) != NULL) {
        T12_801DF1A4 t = lbl_802ED508;
        fn_80108A94(*(void **)(p + 0x38), p, &t, -1);
    }
    if (*(void **)(p + 0x3C) != NULL) {
        T12_801DF1A4 t = lbl_802ED514;
        fn_80108A94(*(void **)(p + 0x3C), p, &t, -1);
    }
    *(s32 *)(p + 4) = 8;
    *(s32 *)(p + 0x28) = 0;
    *(s32 *)(p + 0x2C) = 0;
    *(s32 *)(p + 0x38) = 0;
    *(s32 *)(p + 0x3C) = 0;
    *(f32 *)(p + 0x30) = lbl_80365278;
    *(f32 *)(p + 0x34) = lbl_80365274;
}

} /* extern "C" */
