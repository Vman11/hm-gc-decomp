// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_80113AEC { u8 pad[0x8]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void m(s32); };
void *memmove(void *, const void *, u32);

void fn_80113AEC(V_80113AEC *p, u32 i) {
    u8 *b = (u8 *)p;
    if (i + 1 < *(u32 *)(*(u8 **)b + 0x10)) {
        memmove(*(u8 **)(b + 0xC) + i * 4, *(u8 **)(b + 0xC) + (i + 1) * 4, (*(u32 *)(*(u8 **)b + 0x10) - (i + 1)) * 4);
    }
    p->m(*(s32 *)(*(u8 **)b + 0x10) - 1);
}

} /* extern "C" */
