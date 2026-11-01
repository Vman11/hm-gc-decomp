// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct O801FFB90 { virtual void v0(); virtual void v1(); virtual void v2(); u8 pad[476 - 4]; };
extern O801FFB90 lbl_80330CE4[];
extern u32 *lbl_8035B160;
void fn_801FFB90(void *a, O801FFB90 *o) {
    u32 i;
    o->v2();
    i = o - lbl_80330CE4;
    lbl_8035B160[i >> 5] &= ~(1 << (i & ~0x20));
}

} /* extern "C" */
