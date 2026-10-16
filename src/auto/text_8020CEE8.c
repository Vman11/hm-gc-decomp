/* Functions from 0x8020CEE8 to 0x8020CFE4, found by decomp-toolkit. */
#include "common.h"

static inline u32 count_entries(void *arg) {
    u32 i;
    for (i = 0; i < 8; i++) {
        if (M2C_FIELD(arg, u32 *, 0x11c + i * 0x14) == 0) break;
    }
    return i;
}

s32 fn_8020CEE8(void *arg0, void *arg1) {
 s32 total;
 u32 extra = 0;
 char *entry = arg1;
 u32 i;
 total = M2C_FIELD(arg1,s32 *,0x10c) + (M2C_FIELD(arg1,s32 *,0x114) + 0x60);
 for (i = 0; i < (M2C_FIELD(arg1,u32 *,0x11c) == 0 ? 0U : M2C_FIELD(arg1,u32 *,0x130) == 0 ? 1U : M2C_FIELD(arg1,u32 *,0x144) == 0 ? 2U : M2C_FIELD(arg1,u32 *,0x158) == 0 ? 3U : M2C_FIELD(arg1,u32 *,0x16c) == 0 ? 4U : M2C_FIELD(arg1,u32 *,0x180) == 0 ? 5U : M2C_FIELD(arg1,u32 *,0x194) == 0 ? 6U : M2C_FIELD(arg1,u32 *,0x1a8) == 0 ? 7U : 8U); i++) {
 u32 value = M2C_FIELD(entry,u32 *,0x128);
 total += M2C_FIELD(entry,s32 *,0x120);
 if (extra == 0 && value != 0) extra = value;
 entry += 0x14;
 }
 return total + extra;
}
