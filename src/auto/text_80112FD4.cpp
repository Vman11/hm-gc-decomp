// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_80112FD4 { u8 pad[0x124]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void m8(void *); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void p17(); virtual void p18(); virtual void p19(); virtual void p20(); virtual void p21(); virtual void p22(); virtual void p23(); virtual void p24(); virtual void p25(); virtual void p26(); virtual void p27(); virtual void p28(); virtual void p29(); virtual void p30(); virtual void p31(); virtual void p32(); virtual void p33(); virtual void p34(); virtual void p35(); virtual void m36(); };
extern "C" { extern void *lbl_8035AAB8; void fn_800604C4(s32, s32, s32, s32); void fn_800F7EC0(void *); void fn_800F7E98(void); void *__nwa__FUl(u32); void __dla__FPv(void *); void fn_800FA474(void *, void *, u32); void fn_8010C348(void *, void *); }

void fn_80112FD4(u8 *p, V_80112FD4 *q) {
    u32 n;
    u8 *e;
    u32 off;
    void *buf;
    u32 len;
    u32 i;
    i = 0;
    off = 0;
    n = *(u32 *)(*(u8 **)p + 16);
    for (; i < n; i++) {
        e = *(u8 **)(p + 16) + off;
        len = *(u32 *)(e + 8) - *(u32 *)(e + 4) + 1;
        if (lbl_8035AAB8 == 0) {
            fn_800604C4(-2, 0, 0, 0);
        }
        fn_800F7EC0(lbl_8035AAB8);
        buf = __nwa__FUl(len);
        fn_800F7E98();
        if (buf == 0) {
            fn_800604C4(-4, 0, 0, 0);
        }
        fn_800FA474(e, buf, len);
        q->m8(buf);
        q->m36();
        __dla__FPv(buf);
        off += 20;
    }
    fn_8010C348(p, q);
}

} /* extern "C" */
