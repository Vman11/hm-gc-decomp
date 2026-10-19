// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct S_8013DF34 { u8 pad[0x10]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual s32 m(void *, void *, void *); };
void fn_8013DF34(u8 *p, u8 *q, s32 i) {
    s32 k = ((S_8013DF34 *)(*(u8 **)p + 0x14))->m(*(void **)(p + 0x10), *(void **)(p + 0x18), *(void **)(p + 0xC));
    (*(u32 **)(q + 4))[i] = (*(u32 **)(*(u8 **)p + 0x30))[*(s32 *)(p + 0x14) + k];
}

} /* extern "C" */
