// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802E2210[];
void *memset(void *, s32, u32);

void *__ct__9C800FC2E0Fv(u8 *p) {
    *(void **)(p + 48) = lbl_802E2210;
    memset(p, 0, 16);
    *(s32 *)(p + 16) = 0;
    *(s32 *)(p + 20) = 0;
    *(u16 *)(p + 32) = 0;
    *(u16 *)(p + 34) = 0;
    *(s32 *)(p + 24) = 0;
    *(s32 *)(p + 28) = 0;
    *(u16 *)(p + 36) = 0;
    *(u16 *)(p + 38) = 0;
    *(u16 *)(p + 40) = 0;
    *(u16 *)(p + 42) = 1;
    memset(p + 44, 0, 4);
    *(s32 *)(p + 44) = 0;
    return p;
}

} /* extern "C" */
