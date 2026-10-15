/* Functions from 0x8020DDC4 to 0x8020DE18, found by decomp-toolkit. */
#include "common.h"

s32 fn_8020DDC4(void *arg0) {
    return *(s32 *)((u8 *)arg0 + 0x6BC);
}

u8 fn_8020DDCC(void *arg0) {
    u8 *ptr = *(u8 **)((u8 *)arg0 + 0x6BC);
    if (ptr != NULL) {
        u32 flags = *(u32 *)(ptr + 8);
        return !(flags & 8) && (flags & 0x20) && (flags & 2) && (flags & 4);
    }
    return 0;
}

void fn_8020DE14(void) {

}
