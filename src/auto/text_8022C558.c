/* Functions from 0x8022C558 to 0x8022C59C, found by decomp-toolkit. */
#include "common.h"

s32 fn_8022C558(u8 *arg0) {
    u8 *temp_r3 = *(u8 **)(arg0 + 0x9C);
    if (temp_r3 == NULL) {
        return 0;
    }
    if (*(u16 *)(temp_r3 + 4) < 1 || *(u16 *)(temp_r3 + 4) > 0xD) {
        return 0;
    }
    return (*(u32 *)temp_r3 >> 11) & 1;
}
