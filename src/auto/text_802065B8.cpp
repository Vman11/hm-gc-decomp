// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802EF810[];
extern volatile f32 lbl_80365790;
void fn_801FA4F0(void *);

void *__ct__9C802065B8Fv(u8 *p) {
    fn_801FA4F0(p);
    *(void * *)(p + 88) = lbl_802EF810;
    *(s32 *)(p + 152) = 0;
    *(s32 *)(p + 160) = 0;
    *(f32 *)(p + 164) = lbl_80365790;
    *(f32 *)(p + 168) = lbl_80365790;
    *(f32 *)(p + 172) = lbl_80365790;
    *(s32 *)(p + 176) = 0;
    *(s32 *)(p + 180) = 0;
    return p;
}

} /* extern "C" */
