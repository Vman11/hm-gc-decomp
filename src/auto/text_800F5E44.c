// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

typedef struct { void *o; u8 pad4[4]; s32 f8; u8 padc[4]; f32 f10; } S800F5E44;
void fn_800FBB44(char *buf);
void fn_800F9FE0(void *o, s32 c);
void fn_800F5E44(S800F5E44 *p, f32 x) {
    char buf[32];
    char *s;
    char *e;
    p->f10 = x;
    p->f8 = 3;
    fn_800FBB44(buf);
    for (s = buf, e = buf + 31; s < e && *s != 0; s++) fn_800F9FE0(p->o, *s);
}
