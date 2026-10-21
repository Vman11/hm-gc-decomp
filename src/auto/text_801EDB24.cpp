// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

s32 fn_801EB764(void);
struct C801EDB24_18 { u8 pad[0x70]; u32 flags; };
struct C801EDB24 { u8 pad[0x14]; virtual void p0(); virtual void m(); C801EDB24_18 *x18; u32 x1c; };

#pragma opt_propagation off
u32 fn_801EDB24(C801EDB24 *o) {
    u32 mask;

    if (fn_801EB764() == 0) {
        return 0;
    }
    mask = o->x1c;
    if (o->x18->flags & mask) {
        o->m();
    }
    return 1;
}
#pragma opt_propagation reset

} /* extern "C" */
