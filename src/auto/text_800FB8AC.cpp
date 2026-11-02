// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void *memcpy(void *d, const void *s, u32 n);
typedef struct { s32 f0; s32 f4; s32 f8; s32 fc; char *f10; } B4;
void fn_800FB8AC(B4 *p, s32 k) {
    memcpy(p->f10 + p->f4 + k, p->f10 + p->f4 + k + 1, p->f8 - p->f4 - k + 1);
    p->f8--;
}

} /* extern "C" */
