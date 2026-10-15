/* Functions from 0x8018AFD4 to 0x8018AFF4, found by decomp-toolkit. */
#include "common.h"

typedef struct {
    u32 unk0;
    u32 unk4;
} UnkPair;

void fn_8018AFD4(u32 arg0, void *arg1, u32 arg2, u32 arg3, u32 arg4) {
    register u32 *list asm("r4");
    list = *(u32 **)((u8 *)arg1 + 0x228);
    list[0] = arg4;
    list[arg3 * 2 + 1] = arg0;
    list[arg3 * 2 + 2] = 0;
}
