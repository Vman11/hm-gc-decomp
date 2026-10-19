// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct S1_80179520 { u8 pad[0x20]; virtual void p0(); virtual void m(); };
struct S2_80179520 { u8 pad[0x10]; virtual void p0(); virtual void m(); };
void fn_80128D18(void *);

void fn_80179520(u8 *p) {
    ((S1_80179520 *)(p + 0x9C))->m();
    ((S2_80179520 *)(p + 0x5C))->m();
    if (*(u32 *)(p + 8) & 0x200) {
        *(s32 *)(p + 0x54) = 0;
    }
    fn_80128D18(p);
}

} /* extern "C" */
