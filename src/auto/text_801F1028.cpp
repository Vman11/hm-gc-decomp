// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802EE8CC[];
extern volatile f32 lbl_80365468;
void __ct__9C801EFA90Fv(void *);

void *__ct__9C801F1028Fv(u8 *p) {
    __ct__9C801EFA90Fv(p);
    *(void * *)(p + 0) = lbl_802EE8CC;
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
    return p;
}

} /* extern "C" */
