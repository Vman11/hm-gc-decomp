// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern volatile f32 lbl_80365468;
void fn_801EF83C(void *);

void fn_801F0E28(u8 *p) {
    if (*(s32 *)(p + 8) != 0) {
        fn_801EF83C(p);
    *(s32 *)(p + 4) = 15;
    *(s32 *)(p + 40) = 0;
    *(s32 *)(p + 44) = 0;
    *(f32 *)(p + 68) = *(f32 *)(p + 76) = lbl_80365468;
    *(f32 *)(p + 72) = *(f32 *)(p + 80) = lbl_80365468;
    *(f32 *)(p + 84) = *(f32 *)(p + 92) = lbl_80365468;
    *(f32 *)(p + 88) = *(f32 *)(p + 96) = lbl_80365468;
    *(f32 *)(p + 100) = *(f32 *)(p + 108) = lbl_80365468;
    *(f32 *)(p + 104) = *(f32 *)(p + 112) = lbl_80365468;
    *(f32 *)(p + 48) = lbl_80365468;
    *(f32 *)(p + 60) = lbl_80365468;
    *(f32 *)(p + 52) = lbl_80365468;
    *(f32 *)(p + 64) = lbl_80365468;
    *(f32 *)(p + 56) = lbl_80365468;
    }
}

} /* extern "C" */
