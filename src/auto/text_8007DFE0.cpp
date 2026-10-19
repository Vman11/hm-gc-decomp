// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V1_8007DFE0 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void p17(); virtual void p18(); virtual void p19(); virtual void m(); };
struct V2_8007DFE0 { u8 pad[0x68]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void n(f32); };
extern u32 lbl_8035F920;
s32 fn_8022C558(void *);
void fn_8022A7A8(void *);
void fn_8022B618(void *);
void *fn_80242144(void *, s32);
void fn_80242BC0(void *, void *, s32, s32, s32, s32);
void fn_8007DE14(void *);
void fn_8023FE08(void *, f32);

void fn_8007DFE0(u8 *p, f32 f) {
    if (*(s32 *)(p + 0x170) == 0 && fn_8022C558(*(void **)(p + 0xE0)) != 0) {
        u8 *q;
        (*(V1_8007DFE0 **)(p + 0xE0))->m();
        fn_8022A7A8(*(void **)(p + 0xE0));
        q = *(u8 **)(*(u8 **)(p + 0xE0) + 0x9C);
        if (q != NULL && *(void **)(q + 0x38) != NULL) {
            fn_8022B618(*(void **)(p + 0xE0));
        }
        *(s32 *)(p + 0x170) = 0;
    }
    if (*(s32 *)(p + 0x16C) != 0) {
        *(s32 *)(p + 0x16C) = 0;
        fn_80242BC0(fn_80242144(p, 0), &lbl_8035F920, 0, 0, 0, 0);
    }
    if (*(void **)(p + 0x154) != NULL) {
        s32 s = *(s32 *)(p + 0x60);
        if (s == 2 || (s == 3 && *(s32 *)(p + 0x17C) != 0)) {
            fn_8007DE14(p);
        }
        (*(V2_8007DFE0 **)(p + 0x154))->n(f);
    }
    fn_8023FE08(p, f);
}

} /* extern "C" */
