// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct T20_8003C930 { u8 b[20]; };
struct S_8003C930 { u8 pad[740]; T20_8003C930 a[31]; u8 pad2[0]; };
struct V_8003C930 { u8 pad[0xC0]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void m3(void *, s32); virtual void p4(); virtual s32 m5(void *); };
extern "C" { extern V_8003C930 *lbl_8035B684; extern char lbl_802B0378[31][8]; extern char lbl_80294E1C[]; u32 *fn_800F8274(void *, const char *); void fn_800F6E88(void *, void *); }

u32 fn_8003C930(u8 *p) {
    u8 name[8];
    u8 buf[8];
    u32 sum = 0;
    u32 i;
    for (i = 0; i < 31; i++) {
        s32 k;
        u32 *r;
        fn_800F6E88(name, lbl_802B0378[i]);
        k = lbl_8035B684->m5(name);
        if (k == -1) {
            lbl_8035B684->m3(buf, -1);
            k = lbl_8035B684->m5(buf);
        }
        r = fn_800F8274(&((S_8003C930 *)p)->a[k], lbl_80294E1C);
        sum += r != 0 ? *r : 0;
    }
    return sum;
}

} /* extern "C" */
