// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_801A3B0C { u8 pad[0x100]; virtual void p0(); virtual void m(s32, void *, s32, s32, s32, s32); };
void fn_801A3B0C(u8 *p, s32 a) {
    (*(V_801A3B0C **)(p + 0x18))->m(a, *(void **)(p + 0x14), 32, 32, 32, 32);
}

} /* extern "C" */
