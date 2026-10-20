// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_8021D5D8 { u8 pad[0x124]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void m(s32); };
struct W_8021D5D8 { u8 pad[0x10]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void m(u32); };
extern "C" { u32 fn_800FADA8(void *); void fn_8020708C(void *, void *); void fn_800FAEA0(void *); }

void fn_8021D5D8(u8 *p, V_8021D5D8 *s) {
    u32 off;
    u32 i;
    if (*(void **)(p + 60) != NULL) {
        s->m(39);
    }
    *(u32 *)(p + 36) = fn_800FADA8(s);
    ((W_8021D5D8 *)p)->m(*(u32 *)(p + 36));
    for (i = 0, off = 0; i < *(u32 *)(p + 36); i++) {
        fn_8020708C(*(u8 **)(p + 60) + off, s);
        off += 16;
    }
    fn_800FAEA0(s);
}

} /* extern "C" */
