// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

#include "common.h"
typedef struct S {
    u32 f0;
    u8 pad4[0x10];
    u32 f14;
    u8 pad18[0xa];
    u16 f22;
    u8 pad24[6];
    u16 count;
    union { u32 inl[4]; u32 *ptr; } data;
    u8 f3C[16];
    u16 f4C;
} S;
void fn_801683BC(void *, u32, u32, u32 *, u32, u32, u8 *, u32);
void fn_8015F6B0(S *s, void *q) { u32 a = s->f0; fn_801683BC(q, a, s->count, s->count <= 4 ? s->data.inl : s->data.ptr, s->f14, s->f22, s->f3C, s->f4C); }
