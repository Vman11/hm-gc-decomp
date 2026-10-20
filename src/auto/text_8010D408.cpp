// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_8010D408 { u8 pad[0x10]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual u8 *m(u32); };

u8 *fn_8010D408(V_8010D408 *q, u32 *out) {
    u32 i;
    for (i = 0; i < *(u32 *)((u8 *)q + 32); i++) {
        u8 *e = q->m(i);
        if (*(s32 *)(e + 12) == 0) {
            *out = i;
            *(s32 *)(e + 12) = 1;
            return e;
        }
    }
    return 0;
}

} /* extern "C" */
