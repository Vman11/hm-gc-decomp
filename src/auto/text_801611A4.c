// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern u8 lbl_802E7090[];
void __ct__9C80134094Fv();
extern void *memset(void *, int, unsigned long);

u16 * __ct__9C801611A4Fv(u16 *param_1) {
    __ct__9C80134094Fv();
    *(u8 **)(param_1 + 2) = lbl_802E7090;
    *param_1 = 0;
    param_1[1] = 0;
    *(u32 *)(param_1 + 10) = 0;
    memset(param_1 + 4,0,0xc);
    *(u32 *)(param_1 + 0xc) = 0;
    return param_1;
}
