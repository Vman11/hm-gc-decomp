/* Functions from 0x8022C558 to 0x8022C59C, found by decomp-toolkit. */
#include "common.h"

extern "C" {

s32 fn_8022C558(u8 *arg0) {
    u8 *ptr;
    u8 valid;
    u16 type;
    ptr = *(u8 **)(arg0 + 0x9C);
    if (ptr == NULL || (type = *(u16 *)(ptr + 4), valid = type >= 1U && type <= 0xDU, valid == 0)) {
        return 0;
    }
    return (*(u32 *)ptr >> 11) & 1;
}

} /* extern "C" */
