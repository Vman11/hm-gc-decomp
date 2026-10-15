/* Functions from 0x8024B710 to 0x8024B754, found by decomp-toolkit. */
#include "common.h"
extern void *lbl_8035B594;

s32 fn_8024B710(void *arg0) {
    if (*(s32 *)((u8 *)arg0 + 0x24) != 0 && (*(s32 *)((u8 *)arg0 + 0x20) != 0 || *(s32 *)(*(u32 *)((u8 *)lbl_8035B594 + 0x34C) + *(s32 *)((u8 *)arg0 + 0x30) * 4) != 0)) {
        return 1;
    }
    return 0;
}
