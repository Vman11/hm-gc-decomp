// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

typedef struct { s32 f0; s32 f4; } A801158A8;
typedef struct { u8 pad[0x27a8]; void *t; } S801158A8;
void fn_80116B10(void *b, s32 k, void **h);
void fn_80116A70(void *h, s32 *n);
void fn_80115B6C(void *h, s32 a, s32 b, u8 *buf);
s32 fn_801166BC(void *t, u8 *buf, f32 *f);
s32 fn_801158A8(S801158A8 *p, void *b, A801158A8 *c) {
    f32 f;
    void *h;
    s32 n;
    f32 r;
    u8 buf[80];
    fn_80116B10(b, c->f4, &h);
    fn_80116A70(h, &n);
    fn_80115B6C(h, 0, 0, buf);
    if (fn_801166BC(p->t, buf, &f)) {
        r = f;
        return *(s32 *)&r;
    }
    return 0;
}
