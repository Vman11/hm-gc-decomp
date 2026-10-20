// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802F2AF0[];
void __ct__9C8023D2ACFv(void *);

void *__ct__9C80261CB0Fv(u8 *p) {
    __ct__9C8023D2ACFv(p);
    *(void * *)(p + 0) = lbl_802F2AF0;
    *(s32 *)(p + 156) = 0;
    *(s32 *)(p + 160) = 0;
    *(s32 *)(p + 152) = 0;
    *(s32 *)(p + 168) = 0;
    *(s32 *)(p + 172) = 0;
    *(s32 *)(p + 164) = 0;
    *(s32 *)(p + 140) = 1;
    return p;
}

} /* extern "C" */
