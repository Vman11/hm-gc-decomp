// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_8021D760 { u8 pad[0x124]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void m4(s32); virtual u32 m5(); };
struct W_8021D760 { u8 pad[0x10]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void m(u32); };
extern "C" { extern u32 lbl_8036598C; extern u32 lbl_80365970; u32 fn_800FADA8(void *); void fn_800FB064(void *, void *); void fn_80101124(void *, void *); void fn_800FAEA0(void *); }

void fn_8021D760(u8 *p, V_8021D760 *s) {
    u8 *d;
    u32 i;
    if (*(void **)(p + 52) != NULL) {
        s->m4(39);
    }
    *(u32 *)(p + 28) = fn_800FADA8(s);
    if (s->m5() == 75) {
        *(u32 *)p |= lbl_8036598C;
        fn_800FB064(s, p + 4);
    } else {
        *(s32 *)((u8 *)s + 4) = 1;
        ((W_8021D760 *)p)->m(*(u32 *)(p + 28));
        for (d = *(u8 **)(p + 52), i = 0; i < *(u32 *)(p + 28); i++) {
            fn_80101124(d, s);
            d += 12;
        }
        *(u32 *)p |= lbl_80365970;
    }
    fn_800FAEA0(s);
}

} /* extern "C" */
