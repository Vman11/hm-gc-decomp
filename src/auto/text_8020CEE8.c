/* Functions from 0x8020CEE8 to 0x8020CFE4, found by decomp-toolkit. */
#include "common.h"

static inline u32 count_entries(void *arg) {
    u32 i;
    for (i = 0; i < 8; i++) {
        if (M2C_FIELD(arg, u32 *, 0x11c + i * 0x14) == 0) return i;
    }
    return i;
}

s32 fn_8020CEE8(void *arg0, void *arg1) {
 s32 total;
 char *entry;
 u32 value;
 u32 extra;
 u32 i;
 extra = 0;
 entry = arg1;
 total = M2C_FIELD(arg1,s32 *,0x114) + 0x60;
 total += M2C_FIELD(arg1,s32 *,0x10c);
 for (i = 0; i < count_entries(arg1); i++) {
 value = M2C_FIELD(entry,u32 *,0x128);
 total += M2C_FIELD(entry,s32 *,0x120);
 if (extra == 0 && value != 0) extra = value;
 entry += 0x14;
 }
 return total + extra;
}
