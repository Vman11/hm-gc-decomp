// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_8005FCE8 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void m(f32); };
void fn_8005D9EC(void *);
u32 rand(void);
extern f32 lbl_8035E518;

void fn_8005FCE8(V_8005FCE8 *p) {
    fn_8005D9EC(p);
    *(u32 *)((u8 *)p + 0x38C) = rand() & 1;
    p->m(lbl_8035E518);
}

} /* extern "C" */
