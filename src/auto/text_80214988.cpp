// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
typedef struct T28_80214988 { u32 v[7]; } T28_80214988;
typedef struct T20_80214988 { u32 v[5]; } T20_80214988;
typedef struct S80214988 {
    u32 f0;
    char buf1[64];
    u8 str1[20];
    char buf2[64];
    u8 str2[20];
    T28_80214988 a;
    u8 pad200[64];
    T20_80214988 b;
    u8 c[160];
    u32 f444;
} S80214988;

void fn_800FB700(void *str, char *buf, s32 size);
void fn_800FA69C(void *dst, const void *src);
void *memcpy(void *d, const void *s, u32 n);

void fn_80214988(S80214988 *d, const S80214988 *s) {
    d->f0 = s->f0;
    fn_800FB700(d->str1, d->buf1, 32);
    fn_800FA69C(d->str1, s->str1);
    fn_800FB700(d->str2, d->buf2, 32);
    fn_800FA69C(d->str2, s->str2);
    d->a = s->a;
    d->b = s->b;
    memcpy(d->c, s->c, 160);
    d->f444 = 1;
}

} /* extern "C" */
