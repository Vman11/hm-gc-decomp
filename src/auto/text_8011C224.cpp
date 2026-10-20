// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802E3E18[];
void __ct__9C8011D6B4Fv(void *);

void *__ct__9C8011C224Fv(u8 *p) {
    *(void * *)(p + 108) = lbl_802E3E18;
    __ct__9C8011D6B4Fv(p + 4);
    *(s32 *)(p + 0) = 0;
    *(s32 *)(p + 84) = 0;
    *(s32 *)(p + 88) = 0;
    *(s32 *)(p + 92) = 0;
    *(s32 *)(p + 100) = 0;
    *(s32 *)(p + 96) = 0;
    *(s32 *)(p + 104) = 0;
    return p;
}

} /* extern "C" */
