// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

u32 strlen(const char *);
void *memcpy(void *, const void *, u32);

void fn_801130E0(u8 *p, const char *s, s32 i) {
    memcpy(*(u8 **)(p + 0xC) + i * 4, s, strlen(s));
}

} /* extern "C" */
