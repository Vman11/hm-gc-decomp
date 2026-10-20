// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_801A14C4 { u8 pad[0x68]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void *m(); };

void *fn_801A14C4(u8 *p) {
    if (*(V_801A14C4 **)(p + 136) != NULL) {
        return (*(V_801A14C4 **)(p + 136))->m();
    }
    if (*(void **)(p + 120) != NULL) {
        return *(void **)(p + 120);
    }
    return *(void **)(p + 48);
}

} /* extern "C" */
