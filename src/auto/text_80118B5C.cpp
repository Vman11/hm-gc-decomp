// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_80118B5C { u8 pad[0x3C]; virtual void p0(); virtual void m1(); virtual void m2(u32); virtual void m3(u32); virtual void m4(f32); virtual void m5(f32); virtual void m6(f32); virtual void m7(f32); virtual void m8(f32); };
extern "C" { extern f32 lbl_80363D90; extern f32 lbl_80363D7C; extern u32 lbl_80363D8C; void *memcpy(void *, const void *, u32); }

void fn_80118B5C(V_80118B5C *q, u32 *s) {
    u8 *p = (u8 *)q;
    q->m1();
    memcpy(q, s, 36);
    if (((f32 *)s)[7] > ((f32 *)s)[8]) {
        ((f32 *)s)[8] = lbl_80363D90;
    }
    q->m7(lbl_80363D7C);
    q->m8(lbl_80363D7C);
    q->m3(s[0]);
    q->m2(s[1]);
    q->m4(((f32 *)s)[4]);
    q->m5(((f32 *)s)[5]);
    q->m6(((f32 *)s)[6]);
    q->m8(((f32 *)s)[8]);
    q->m7(((f32 *)s)[7]);
    *(u32 *)(p + 52) |= lbl_80363D8C;
    *(s32 *)(p + 56) = 1;
}

} /* extern "C" */
