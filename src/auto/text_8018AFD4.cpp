/* Functions from 0x8018AFD4 to 0x8018AFF4, found by decomp-toolkit. */
#include "common.h"

extern "C" {

#pragma opt_propagation off
void fn_8018AFD4(u32 arg0, void *arg1, u32 arg2, u32 arg3, u32 arg4) {
    u8 *list = *(u8 **)((u8 *)arg1 + 0x228);

    *(u32 *)list = arg4;
    arg3 <<= 3;
    *(u32 *)(list + arg3 + 4) = arg0;
    *(u32 *)(list + arg3 + 8) = 0;
}
#pragma opt_propagation reset

} /* extern "C" */
