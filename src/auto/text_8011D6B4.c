// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

typedef struct { u32 a, b, c; } T12_8011D6B4;
extern T12_8011D6B4 lbl_8029BF10;
extern u8 lbl_802AFC68[];
extern u8 lbl_802E3E68[];
void __ct__9C80119180Fv(void *);

void *__ct__9C8011D6B4Fv(u8 *p) {
    *(void * *)(p + 0) = lbl_802AFC68;
    *(void * *)(p + 0) = lbl_802E3E68;
    *(s32 *)(p + 32) = 0;
    *(s32 *)(p + 36) = 0;
    __ct__9C80119180Fv(p + 40);
    __ct__9C80119180Fv(p + 56);
    *(s32 *)(p + 16) = 0;
    *(s32 *)(p + 24) = 0;
    *(s32 *)(p + 28) = 0;
    *(T12_8011D6B4 *)(p + 4) = lbl_8029BF10;
    *(s32 *)(p + 20) = 0;
    return p;
}
