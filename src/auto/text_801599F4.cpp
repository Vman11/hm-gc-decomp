// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802E6BE8[];
extern u8 lbl_802E6BA8[];
void __ct__9C8015C6E4Fv(void);
void __dt__9C8015C6E4Fv(void);
void __construct_array(void *, void *, void *, u32, u32);

void *__ct__9C801599F4Fv(u8 *p) {
    *(void * *)(p + 0) = lbl_802E6BE8;
    *(void * *)(p + 0) = lbl_802E6BA8;
    __construct_array(p + 48, (void *)__ct__9C8015C6E4Fv, (void *)__dt__9C8015C6E4Fv, 28, 2);
    *(s32 *)(p + 4) = 0;
    *(s32 *)(p + 8) = 0;
    *(s32 *)(p + 12) = 0;
    *(s32 *)(p + 16) = 0;
    *(s32 *)(p + 20) = 0;
    *(s32 *)(p + 24) = 0;
    *(s32 *)(p + 28) = 0;
    *(s32 *)(p + 32) = 0;
    *(s32 *)(p + 16) = 0;
    *(s32 *)(p + 20) = 0;
    *(s32 *)(p + 44) = 0;
    *(s32 *)(p + 104) = 0;
    *(s32 *)(p + 108) = 0;
    *(s32 *)(p + 112) = 0;
    *(s32 *)(p + 116) = 0;
    *(s32 *)(p + 120) = 0;
    return p;
}

} /* extern "C" */
