/* Functions from 0x8021CD88 to 0x8021CD98, found by decomp-toolkit. */
#include "common.h"

u16 fn_8021CD88(void *arg0, s32 arg1) {
    return *(u16 *)(*(u8 **)((u8 *)arg0 + 0x28) + arg1 * 2);
}
