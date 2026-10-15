/* Functions from 0x8022DAC0 to 0x8022DB40, found by decomp-toolkit. */
#include "common.h"

static inline u8 isTypeInRange(u8 *p) {
    u8 ok = 0;
    u16 t = *(u16 *)(p + 4);
    if (t >= 1 && t <= 13) {
        ok = 1;
    }
    return ok;
}

void fn_8022DAC0(u8 *arg0) {
    u8 *p;
    s32 flag;
    *(s32 *)(arg0 + 0x94) = 0;
    p = *(u8 **)(arg0 + 0x9C);
    if (p == NULL || !isTypeInRange(p)) {
        flag = 0;
    } else {
        flag = (*(u32 *)p >> 11) & 1;
    }
    if (flag) {
        *(s32 *)(arg0 + 0xB4) |= 2;
    }
    p = *(u8 **)(arg0 + 0x9C);
    if (p != NULL && (*(u32 *)p & 2)) {
        *(s32 *)(arg0 + 0xB4) |= 8;
    }
}
