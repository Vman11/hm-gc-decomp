// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_800A5384 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void m(const char *); };
extern u32 lbl_80361DFC;
extern u32 lbl_80361DF4;
extern u32 lbl_80361E04;
extern char lbl_8029AD1C[];

void fn_800A5384(V_800A5384 *p) {
    p->m((const char *)&lbl_80361DFC);
    p->m(lbl_8029AD1C);
    p->m((const char *)&lbl_80361DF4);
    p->m((const char *)&lbl_80361E04);
}

} /* extern "C" */
