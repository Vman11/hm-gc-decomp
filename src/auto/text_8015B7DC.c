/* Functions from 0x8015B7DC to 0x8015B81C, found by decomp-toolkit. */
#include "common.h"

void *fn_8015B7DC(void *arg0) {
    extern u8 lbl_8032E51C[];
    extern u8 lbl_8032E654[];
    u16 idx = *(u16 *)((char *)arg0 + 0x18);
    if (idx == 0xFFFF) {
        if (*(u32 *)((char *)arg0 + 0x8) & 4) {
            return lbl_8032E654;
        }
        return lbl_8032E51C;
    }
    return (*(void ***)(*(char **)((char *)arg0 + 0x14) + 4))[idx];
}
