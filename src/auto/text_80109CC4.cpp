// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_80109CC4 { u8 pad[0x124]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void m8(void *); };
extern "C" { extern void *lbl_8035AAB8; void fn_800604C4(s32, s32, s32, s32); void fn_800F7EC0(void *); void fn_800F7E98(void); void *__nwa__FUl(u32); void __dla__FPv(void *); void fn_800FA474(void *, void *, u32); void fn_8010C348(void *, void *); }

void fn_80109CC4(u8 *p, V_80109CC4 *q) {
    u8 *s = *(s32 *)(p + 52) != 0 ? p + 32 : p + 12;
    u32 n = *(u32 *)(s + 8) - *(u32 *)(s + 4) + 1;
    void *buf;
    if (lbl_8035AAB8 == NULL) {
        fn_800604C4(-2, 0, 0, 0);
    }
    fn_800F7EC0(lbl_8035AAB8);
    buf = __nwa__FUl(n + 1);
    fn_800F7E98();
    if (buf == NULL) {
        fn_800604C4(-4, 0, 0, 0);
    }
    fn_800FA474(*(s32 *)(p + 52) != 0 ? p + 32 : p + 12, buf, n);
    q->m8(buf);
    __dla__FPv(buf);
    fn_8010C348(p, q);
}

} /* extern "C" */
