/* Functions from 0x8022DAC0 to 0x8022DB40, found by decomp-toolkit. */
#include "common.h"

static inline u8 isTypeInRange(u8 *p) {
    u16 t = *(u16 *)(p + 4);
    return t >= 1 && t <= 13;
}

void fn_8022DAC0(u8 *arg0) {
    u8 *p;
    s32 flag;
    u16 t;
    *(s32 *)(arg0 + 0x94) = 0;
    p = *(u8 **)(arg0 + 0x9C);
    if (p == NULL) {
        goto none;
    }
    t = *(u16 *)(p + 4);
    if (!(u8)(t >= 1 && t <= 13)) {
    none:
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
