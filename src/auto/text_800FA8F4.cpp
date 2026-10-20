// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_800FA8F4 { u8 pad[0xC]; virtual void *m(u32); };

s32 fn_800FA8F4(V_800FA8F4 *q) {
    u8 *p = (u8 *)q;
    u32 i;
    for (i = 0; i < *(s32 *)p - *(s32 *)(p + 4); i++) {
        if (q->m(i) == NULL) {
            return *(s32 *)(p + 4) + i;
        }
    }
    return *(s32 *)p - 1;
}

} /* extern "C" */
