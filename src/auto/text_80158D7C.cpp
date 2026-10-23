// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct { u8 data[112]; } E80158D7C;
typedef struct { E80158D7C arr[2]; s32 idx; } S80158D7C;
typedef struct { u8 pad[32]; void *x20; u8 pad24[4]; void *x28; S80158D7C *x2C; } A80158D7C;
typedef struct { u8 pad[6452]; void *x1934; void *x1938; } B80158D7C;
typedef struct { u8 pad[296]; u32 x128; } C80158D7C;

void fn_8015C998(C80158D7C *, void *, s32);
void fn_8016B254(void *, s32, s32, u8 *);
void fn_8015D624(C80158D7C *, B80158D7C *, u32);
void fn_8015C95C(C80158D7C *, void *, u32);
void fn_80170044(E80158D7C *, void *, void *, s32, s32);

void fn_80158D7C(A80158D7C *a, void *bv, void *cv, u8 flag) {
    void *m;
    B80158D7C *b;
    C80158D7C *c;
    u32 i;
    b = (B80158D7C *)bv;
    c = (C80158D7C *)cv;
    m = b->x1934;
    fn_8015C998(c, b->x1938, 0);
    fn_8016B254(m, 0, 1, &flag);
    i = 0;
    do {
        fn_8015D624(c, b, i);
        fn_8015C95C(c, m, i);
        fn_80170044(&a->x2C->arr[a->x2C->idx], a->x20, a->x28, 0, 0);
        i++;
    } while (i < c->x128);
}

} /* extern "C" */
