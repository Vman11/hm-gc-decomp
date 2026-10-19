// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_80179ED0 { u8 pad[0x1930]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void p17(); virtual void p18(); virtual void p19(); virtual void p20(); virtual void p21(); virtual void p22(); virtual void p23(); virtual void p24(); virtual void p25(); virtual void p26(); virtual void p27(); virtual void p28(); virtual void p29(); virtual void p30(); virtual void p31(); virtual void m(void *); };
void fn_80179ED0(u8 *p, u8 *q) {
    u32 *s = *(u32 **)(q + 0x228);
    if (s[0] != 1 || (u8 *)s[1] != p) {
        (*(V_80179ED0 **)(q + 8))->m(p + 0x10);
        s[0] = 1;
        s[1] = (u32)p;
        s[2] = 0;
    }
}

} /* extern "C" */
