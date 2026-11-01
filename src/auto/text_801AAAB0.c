// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

typedef struct { u8 pad[0xc]; s32 fc; } B801AAAB0;
void fn_800F6E88(char *d, s32 s);
void fn_800F951C(void *a, B801AAAB0 *b);
void fn_800F980C(void *a, B801AAAB0 *b);
void fn_801AAAB0(u8 *p, B801AAAB0 *b) {
    char buf[16];
    buf[0] = 0;
    fn_800F6E88(buf, b->fc);
    if (buf == 0 || *buf == 0) fn_800F951C(p + 0x24, b);
    else fn_800F980C(p + 0x3c, b);
}
