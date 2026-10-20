// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_8021B9DC { u8 pad[0x124]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void m4(s32); virtual u32 m5(); };
struct W_8021B9DC { u8 pad[0x10]; virtual void m0(u32); virtual void p1(); virtual void m2(void *); virtual void m3(); };
extern "C" { extern u32 lbl_80365900; extern u32 lbl_80365904; extern u32 lbl_80365908; u32 fn_800FADA8(void *); void fn_800FB064(void *, void *); void fn_800FAEA0(void *); }

void fn_8021B9DC(u8 *p, V_8021B9DC *s) {
    if (*(u32 *)p & 1) {
        ((W_8021B9DC *)p)->m3();
    }
    if (*(void **)(p + 12) != NULL) {
        s->m4(39);
    }
    *(u32 *)(p + 12) = fn_800FADA8(s);
    if (s->m5() == 75) {
        *(u32 *)p |= lbl_80365900;
        fn_800FB064(s, p + 4);
    } else {
        *(s32 *)((u8 *)s + 4) = 1;
        ((W_8021B9DC *)p)->m0(*(u32 *)(p + 12));
        ((W_8021B9DC *)p)->m2(s);
        *(u32 *)p |= lbl_80365904;
    }
    fn_800FAEA0(s);
    *(u32 *)p |= lbl_80365908;
}

} /* extern "C" */
