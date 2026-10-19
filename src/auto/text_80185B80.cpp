// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_80185B80 { u8 pad[0xC]; virtual void p0(); virtual void m(void *, void *); };
void fn_80185B80(u8 *p, void *a, void *b) {
    u32 i;
    if (!(*(u32 *)p & 2)) {
        for (i = 0; i < *(u32 *)(p + 0x10); i++) {
            (*(V_80185B80 ***)(p + 0x18))[i]->m(a, b);
        }
    }
}

} /* extern "C" */
