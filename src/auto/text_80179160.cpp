// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct S1_80179160 { u8 pad[0x20]; virtual void p0(); virtual void m(); };
struct S2_80179160 { u8 pad[0x10]; virtual void p0(); virtual void m(); };
void fn_80128D78(void *);

void fn_80179160(u8 *p) {
    if (*(u32 *)(p + 8) & 0x10) {
        ((S1_80179160 *)(p + 0x9C))->m();
        ((S2_80179160 *)(p + 0x5C))->m();
        fn_80128D78(p);
    }
}

} /* extern "C" */
