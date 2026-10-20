// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern "C" {

struct V_801A0C74 { u8 pad[0x68]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void m(void *); };
void fn_80190480(void *, void *);


void fn_801A0C74(u8 *p, void *a) {
    if (*(V_801A0C74 **)(p + 0x88) != NULL) {
        (*(V_801A0C74 **)(p + 0x88))->m(a);
    } else {
        fn_80190480(p, a);
    }
}

} /* extern "C" */

} /* extern "C" */
