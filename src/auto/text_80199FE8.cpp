// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_80199FE8 { u8 pad[0xC]; virtual void p0(); virtual void m(void *, s32); };
void fn_8018F380(void *);

void fn_80199FE8(V_80199FE8 **p, u8 *q) {
    if (*p != NULL) {
        fn_8018F380(q + 0x210);
        (*p)->m(*(u8 **)(q + 0x218) + *(s32 *)(q + 0x214) * 8, 0);
    }
}

} /* extern "C" */
