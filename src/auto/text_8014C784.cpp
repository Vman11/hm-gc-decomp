// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void *memcpy(void *d, const void *s, u32 n);
typedef struct { u8 pad[0xc]; s32 f0c; u8 buf[8]; u8 f18; u8 f19; } S8014C784;
void fn_80101970(S8014C784 *a, S8014C784 *b);
void fn_8014C784(S8014C784 *__restrict a, S8014C784 *__restrict b) { fn_80101970(a, b); a->f18 = b->f18; a->f19 = b->f19; a->f0c = b->f0c; memcpy(a->buf, b->buf, 8); }

} /* extern "C" */
