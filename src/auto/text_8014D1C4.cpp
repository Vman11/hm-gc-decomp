// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern volatile f32 lbl_803644EC;
extern f32 lbl_803644F0;
extern f32 lbl_803644E8;
void __ct__9C8002FAE0Fv(void);
void __construct_array(void *, void *, void *, u32, u32);
void *memset(void *, s32, u32);

void *fn_8014D1C4(u8 *p) {
    __construct_array(p + 96, (void *)__ct__9C8002FAE0Fv, 0, 12, 9);
    memset(p, 0, 96);
    memset(p + 96, 0, 108);
    *(f32 *)(p + 212) = lbl_803644EC;
    *(f32 *)(p + 216) = lbl_803644EC;
    *(f32 *)(p + 220) = lbl_803644F0;
    *(f32 *)(p + 224) = lbl_803644E8;
    *(f32 *)(p + 228) = lbl_803644EC;
    *(f32 *)(p + 232) = lbl_803644EC;
    *(s32 *)(p + 204) = 0;
    *(s32 *)(p + 208) = 5;
    return p;
}

} /* extern "C" */
