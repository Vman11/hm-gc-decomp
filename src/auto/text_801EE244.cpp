// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_801EE244 { u8 pad[0x58]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void p17(); virtual void p18(); virtual void m(void *, s32); };
void fn_801EF648(void *);

void fn_801EE244(u8 *p) {
    if (*(void **)(p + 0x28) != NULL) {
        (*(V_801EE244 **)(p + 0x34))->m(*(void **)(p + 0x28), 0);
    }
    fn_801EF648(p);
}

} /* extern "C" */
