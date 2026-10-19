// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_8018C68C { u8 pad[0x68]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void m(f32); };
void fn_801A0A1C(void *);

void fn_8018C68C(u8 *p, f32 f) {
    u32 i;
    fn_801A0A1C(p);
    for (i = 0; i < *(u32 *)(p + 0x98); i++) {
        (*(V_8018C68C ***)(p + 0x9C))[i]->m(f);
    }
}

} /* extern "C" */
