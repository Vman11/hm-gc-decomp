/* Functions from 0x801CEB80 to 0x801CEB9C, found by decomp-toolkit. */
#include "common.h"

f32 fn_801CEB80(void* arg0, u8* arg1) {
    u8* p = *(u8**)(arg1 + 0x10);
    if (p != NULL) {
        *(f32*)(arg1 + 4) = *(f32*)(p + 0xC);
    }
    return *(f32*)(arg1 + 4);
}
