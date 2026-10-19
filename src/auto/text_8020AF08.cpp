// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_8020AF08 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void m(); };
u8 *fn_800BFF4C(void);
void *memcpy(void *, const void *, u32);
void DVDInit(void);
void fn_800CDAEC(void);

void fn_8020AF08(V_8020AF08 *p) {
    u8 *r;
    if (*(s32 *)((u8 *)p + 0xC) != 0) {
        p->m();
    }
    r = fn_800BFF4C();
    memcpy((u8 *)p + 4, r + 4, 2);
    memcpy((u8 *)p + 6, r, 4);
    DVDInit();
    fn_800CDAEC();
    *(s32 *)((u8 *)p + 0xC) = 1;
}

} /* extern "C" */
