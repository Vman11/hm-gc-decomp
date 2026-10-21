#include "common.h"
extern "C" {
void *memcpy(void *, const void *, unsigned long);
struct C800FB908 { u8 pad0[4]; s32 start; s32 end; u8 pad0c[4]; u8 *data; };

void fn_800FB908(C800FB908 *p, s32 a, s32 b) {
    s32 s = p->start;
    u8 *base = p->data + s;
    memcpy(base + a, base + b + 1, (p->end - s) - b);
    p->end = p->end - ((b - a) + 1);
}
}
