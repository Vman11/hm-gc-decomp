#include "common.h"
extern "C" {
typedef struct { u32 v[3]; } T12_8015FA20;
void fn_80217880(void *, void *);
void fn_80132BC0(void *, u32, void *);

void fn_8015FA20(u8 *p, u32 a, u8 *q) {
    *(T12_8015FA20 *)(p + 0x58) = *(T12_8015FA20 *)(q + 0x58);
    *(u16 *)(p + 0x4c) = *(u16 *)(q + 0x4c);
    *(u32 *)(p + 0x50) = *(u32 *)(q + 0x50);
    fn_80217880(p + 0x3c, q + 0x3c);
    fn_80132BC0(p, a, q);
}
}
