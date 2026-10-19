// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_8010A874 { u8 pad[0x124]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void m(f32); };
void fn_8010C348(void *, void *);

void fn_8010A874(u8 *a, V_8010A874 *b) {
    b->m(*(f32 *)(a + 0xC));
    fn_8010C348(a, b);
}

} /* extern "C" */
