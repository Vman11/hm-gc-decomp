// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_80219560 { u8 pad[0x24]; virtual void m0(); virtual void m1(); virtual void m2(u8); };

void fn_80219560(V_80219560 *p, char *s) {
    p->m0();
    while (*s != 0) {
        p->m2(*s);
        s++;
    }
    p->m1();
}

} /* extern "C" */
