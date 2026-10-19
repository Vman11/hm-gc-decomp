// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_8020E2F4 { u8 pad[0x6B8]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual s32 m(); };
struct S_8020E2F4 { u8 pad[0x10]; virtual void p0(); virtual void b(); virtual s32 a(void *, void *, void *); };
extern u32 lbl_80365818;
void fn_8020CDB0(void *, void *, void *);

s32 fn_8020E2F4(V_8020E2F4 *p, void *x, void *a, void **out) {
    u8 *q = (u8 *)p;
    s32 r;
    if (p->m() == 0 || *(u32 *)(q + 0x6A4) != 0) {
        return 11;
    }
    if (a == NULL) {
        return 9;
    }
    fn_8020CDB0(q + 0x88C, p, *(void **)(q + 0x888));
    r = ((S_8020E2F4 *)(q + 0x88C))->a(&lbl_80365818, &lbl_80365818, a);
    if (r == 0) {
        *(s32 *)(q + 0x6A4) = 1;
        *out = q + 0x88C;
        return 0;
    }
    ((S_8020E2F4 *)(q + 0x88C))->b();
    *out = 0;
    return r;
}

} /* extern "C" */
