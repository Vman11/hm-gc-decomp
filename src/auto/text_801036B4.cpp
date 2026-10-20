// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_801036B4 { u8 pad[0x4]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void m(void *); };

void fn_801036B4(u8 *p, void *a) {
    if (*(void **)(p + 8) != NULL) {
        u32 off;
        u32 i;
        for (i = 0, off = 0; i < *(u32 *)(p + 12); i++) {
            V_801036B4 *o = *(V_801036B4 **)(*(u8 **)(p + 16) + off);
            if (o != NULL) {
                o->m(a);
            }
            off += 4;
        }
    }
}

} /* extern "C" */
