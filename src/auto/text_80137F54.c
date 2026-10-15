/* Functions from 0x80137F54 to 0x80137FA8, found by decomp-toolkit. */
#include "common.h"

extern u8 lbl_802E55B8[];

extern u8 lbl_802E55B8[];

void fn_80137F54(void *arg0) {
    u8 *p = (u8 *)arg0;
    *(void **)(p + 0x14) = lbl_802E55B8;
    *(u32 *)(p + 8) = 0;
    *(u16 *)(p + 0xC) = 0;
    p[0xF] = 0;
    p[0x10] = 0;
    p[0xE] = 0;
    p[0x11] = 0;
    p[0] = 0;
    p[1] = 0;
    p[2] = 0;
    p[3] = 0xFF;
    p[4] = 0x7F;
    p[5] = 0x7F;
    p[6] = 0;
    p[7] = 0x7F;
}
