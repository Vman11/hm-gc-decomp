// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct T20 { u8 b[20]; };
struct S { u8 pad[740]; T20 a[31]; };
struct Q { u8 pad[1360]; u32 *base[31]; u32 cnt[31]; };
struct V { u8 pad[0xC0]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void m3(void *, s32); virtual void p4(); virtual s32 m5(void *); };
extern "C" { extern V *lbl_8035B684; extern char lbl_80294E1C[]; extern char lbl_80294E28[]; u32 *fn_800F8274(void *, const char *); void fn_800F87F0(void *, const char *, void *); }

void fn_8003CFB8(u8 *p) {
    u8 b16[16];
    u8 b8[8];
    s32 i;
    u32 *r;
    void *e;
    lbl_8035B684->m3(b16, -1);
    i = lbl_8035B684->m5(b16);
    e = &((S *)p)->a[i];
    r = fn_800F8274(e, lbl_80294E1C);
    if (r == 0) {
        Q *q = (Q *)p;
        r = q->base[i] + q->cnt[i];
        fn_800F87F0(e, lbl_80294E1C, r);
        q->cnt[i]++;
    }
    *r = 0;
    lbl_8035B684->m3(b8, -1);
    i = lbl_8035B684->m5(b8);
    e = &((S *)p)->a[i];
    r = fn_800F8274(e, lbl_80294E28);
    if (r == 0) {
        Q *q = (Q *)p;
        r = q->base[i] + q->cnt[i];
        fn_800F87F0(e, lbl_80294E28, r);
        q->cnt[i]++;
    }
    *r = 0;
}

} /* extern "C" */
