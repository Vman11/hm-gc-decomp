// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void *memcpy(void *, const void *, u32);
void fn_800F6E88(char *d, const char *s) {
    u32 n = 8;
    if (!s) d[0] = 0; else
    memcpy(d, s, 8);
    while (n--) { if (d[0] == '.') { d[0] = 0; return; } }
}

} /* extern "C" */
