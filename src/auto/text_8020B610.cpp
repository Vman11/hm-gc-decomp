// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct { void *o; u8 pad[0x918]; void *t; } S8020B610;
typedef struct { s32 a; s32 b; u8 rest[60]; } R8020B610;
s32 fn_800D339C(void *o, u32 i, u8 *buf);
s32 fn_8020AD88(void *t, s32 *a, s32 *b);
s32 fn_8020B610(S8020B610 *p) {
    u8 buf[40]; R8020B610 r;
    s32 *px = &r.a;
    s32 *py = &r.b;
    s32 n = 0;
    u32 i;
    for (i = 0; i < 127; i++) {
        if (fn_800D339C(p->o, i, buf) == 0 && fn_8020AD88(p->t, py, px) != 0) n++;
    }
    return n;
}

} /* extern "C" */
