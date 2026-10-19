// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern u8 lbl_802E6DB0[];
extern s32 lbl_8035ACE8;
void __ct__9C80155460Fv();
extern void *memset(void *, int, unsigned long);

s32 __ct__9C8015B350Fv(s32 param_1) {
    __ct__9C80155460Fv();
    *(u8 **)(param_1 + 0x20) = lbl_802E6DB0;
    lbl_8035ACE8 = 0;
    *(u32 *)(param_1 + 0x6c) = 0;
    memset((void *)(param_1 + 0x50),0,8);
    *(u32 *)(param_1 + 0x5c) = 0;
    *(u32 *)(param_1 + 0x60) = 0;
    *(u32 *)(param_1 + 0x58) = 0;
    *(u32 *)(param_1 + 100) = 0;
    return param_1;
}
