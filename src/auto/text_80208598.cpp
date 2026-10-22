// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct S80208598 {
    u32 x0;
    u8 *data;
    u32 flags;
    u32 base;
    u32 cap;
    u32 size;
} S80208598;
extern u32 lbl_803657C0;
void *memcpy(void *d, const void *s, u32 n);

u32 fn_80208598(S80208598 *p, u32 off, u32 n, void *src) {
    if (off < p->base || src == 0 || n == 0 || off >= p->base + p->cap) {
        return 0;
    }
    if (n > p->base + p->cap - off) {
        n = p->base + p->cap - off;
    }
    memcpy(p->data + off - p->base, src, n);
    if (n + off > p->size + p->base) {
        p->size = n + (off - p->base);
    }
    p->flags |= lbl_803657C0;
    return n;
}

} /* extern "C" */
