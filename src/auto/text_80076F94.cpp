// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_80076F94 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void m(void *); };
extern u8 lbl_802981E0[];
extern u32 lbl_8035F5EC;
void *fn_8023BC90(void *);
V_80076F94 *fn_8023B8FC(void *, void *, s32);

void fn_80076F94(u8 *p) {
    *(V_80076F94 **)(p + 0x20C) = fn_8023B8FC(fn_8023BC90(lbl_802981E0), &lbl_8035F5EC, -1);
    (*(V_80076F94 **)(p + 0x20C))->m(p);
}

} /* extern "C" */
