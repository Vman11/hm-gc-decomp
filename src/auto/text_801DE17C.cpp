// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_801DE17C { u8 pad[0x34]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void m(void *); };
void fn_8012D634(void *);
void fn_8012D5F0(void *);

void fn_801DE17C(u8 *p) {
    if (*(u8 **)(p + 0x24) != NULL && (*(u32 *)(*(u8 **)(p + 0x24) + 8) & 8) && !(*(u32 *)(*(u8 **)(p + 0x24) + 8) & 0x10)) {
        fn_8012D634(*(void **)(*(u8 **)(p + 0x24) + 0x14));
        (*(V_801DE17C **)(p + 0x24))->m(*(void **)(p + 8));
        fn_8012D5F0(*(void **)(*(u8 **)(p + 0x24) + 0x14));
    }
}

} /* extern "C" */
