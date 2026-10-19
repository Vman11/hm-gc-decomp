// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct S1_8015BAC4 { u8 pad[0x20]; virtual void p0(); virtual void m(); };
struct S2_8015BAC4 { u8 pad[0x10]; virtual void p0(); virtual void m(); };
void __dla__FPv(void *);
void fn_8012EB94(void *);

void fn_8015BAC4(u8 *p) {
    u8 *q = *(u8 **)(p + 0x2C);
    if (q != NULL) {
        if (q != NULL) {
            __dla__FPv(q - 16);
        }
        *(u8 **)(p + 0x2C) = 0;
    }
    ((S1_8015BAC4 *)(p + 0x7C))->m();
    ((S2_8015BAC4 *)(p + 0x3C))->m();
    fn_8012EB94(p);
}

} /* extern "C" */
