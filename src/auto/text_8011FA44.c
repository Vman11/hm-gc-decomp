/* Functions from 0x8011FA44 to 0x8011FA98, found by decomp-toolkit. */
#include "common.h"
extern f32 lbl_80363DC8;

s32 fn_8011FA44(void *arg0) {
    if (*(s32 *)((char *)arg0 + 0x20) == 0) {
        return 0;
    }
    *(s32 *)((char *)arg0 + 0x4) = 0;
    *(s32 *)((char *)arg0 + 0x8) = 0;
    *(s32 *)((char *)arg0 + 0x14) = 0;
    *(s32 *)((char *)arg0 + 0x18) = 0;
    *(s32 *)((char *)arg0 + 0x1C) = 0;
    *(s32 *)((char *)arg0 + 0x24) = 0;
    *(s32 *)((char *)arg0 + 0xC) = 0;
    *(s32 *)((char *)arg0 + 0x28) = 0;
    *(f32 *)((char *)arg0 + 0x10) = lbl_80363DC8;
    *(s32 *)((char *)arg0 + 0x2C) = 1;
    *(s32 *)((char *)arg0 + 0x20) = 0;
    return 0;
}
