// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_8019A578 { u8 pad[0x8]; virtual void p0(); virtual void m(void *); };
extern "C" { void fn_8018F424(void *, void *, void *, s32); void fn_8018F3D4(void *); }

void fn_8019A578(u8 *p, u8 *q) {
    fn_8018F424(q + 528, *(void **)(q + 612), *(void **)(q + 616), 1);
    (*(V_8019A578 **)(p + 64))->m(q);
    fn_8018F3D4(q + 528);
}

} /* extern "C" */
