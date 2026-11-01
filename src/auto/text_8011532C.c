// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

typedef struct { s32 f0; s32 f4; } A8011532C;
void fn_80116B10(void *b, s32 k, void **h);
void fn_80116A70(void *h, s32 *n);
void *__nwa__FUl(u32 n);
void fn_80116794(char *buf, void *h);
f64 fn_800EB838(char *s);
s32 fn_8011532C(void *a, void *b, A8011532C *c) {
    void *h;
    s32 n;
    char *buf;
    f32 f;
    fn_80116B10(b, c->f4, &h);
    fn_80116A70(h, &n);
    buf = __nwa__FUl(n + 1);
    fn_80116794(buf, h);
    f = fn_800EB838(buf);
    return *(s32 *)&f;
}
