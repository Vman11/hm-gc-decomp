// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_8012EAF4 { u8 pad[0x20]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void m(void *, void *, u32, s32); };
void fn_800F6E40(void *, void *);

void fn_8012EAF4(u8 *p, void *a, V_8012EAF4 *b, u16 c) {
    u8 t[12];
    fn_800F6E40(t, p);
    t[8] = 0;
    b->m(a, t, *(u32 *)(p + 0xC) | (c | 8), 0);
    *(u16 *)(p + 0x10) = *(u16 *)((u8 *)b + 0x1C);
    *(u16 *)(p + 0x12) = *(u16 *)((u8 *)b + 0x1E);
}

} /* extern "C" */
