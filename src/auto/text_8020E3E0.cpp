// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct S_8020E3E0 { u8 pad[0x10]; virtual void p0(); virtual void m(); };
void fn_802148D4(void *);
void fn_802114B4(void *);

void fn_8020E3E0(u8 *p) {
    if (*(u32 *)(p + 0x6BC) != 0) {
        ((S_8020E3E0 *)(p + 0x88C))->m();
        fn_802148D4(p + 0x6C0);
        fn_802114B4(p);
    }
    *(s32 *)(p + 0x6BC) = 0;
    *(s32 *)(p + 0x880) = -1;
    *(s32 *)(p + 0x884) = -1;
    *(s32 *)(p + 0x888) = -1;
}

} /* extern "C" */
