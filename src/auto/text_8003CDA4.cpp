// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct T20_8003CDA4 { u8 b[20]; };
struct S_8003CDA4 { u8 pad[740]; T20_8003CDA4 a[31]; };
struct V_8003CDA4 { u8 pad[0xC0]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void m3(void *, s32); virtual void p4(); virtual s32 m5(void *); };
extern "C" { extern V_8003CDA4 *lbl_8035B684; extern char lbl_80294E1C[]; u32 *fn_800F8274(void *, const char *); }

u32 fn_8003CDA4(u8 *p) {
    u8 buf2[8];
    u8 buf[8];
    u32 *r;
    s32 i;
    lbl_8035B684->m3(buf2, -1);
    i = lbl_8035B684->m5(buf2);
    if (i == -1) {
        lbl_8035B684->m3(buf, -1);
        i = lbl_8035B684->m5(buf);
    }
    r = fn_800F8274((u8 *)&((S_8003CDA4 *)p)->a[i], lbl_80294E1C);
    if (r != NULL) {
        return *r;
    }
    return 0;
}

} /* extern "C" */
