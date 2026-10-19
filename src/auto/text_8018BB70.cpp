// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_803286D0[];
void fn_8018BB70(u8 *p, void *q) {
    u8 *t = lbl_803286D0;
    u8 *e = *(u8 **)(p + 0x34);
    u8 *end = e + *(s32 *)(p + 0x14) * 152;
    for (; e < end; e += 152) {
        (*(void (**)(void *, void *, void *))(t + 0x190))(q, *(void **)(e + 0x1C), e + 0x3C);
        (*(void (**)(void *, void *, void *))(t + 0x190))(q, *(void **)(e + 0x20), e + 0x48);
        (*(void (**)(void *, void *, void *))(t + 0x190))(q, e + 4, e + 0x24);
        (*(void (**)(void *, void *, void *))(t + 0x190))(q, e + 0x10, e + 0x30);
        *(u32 *)e |= 9;
    }
}

} /* extern "C" */
