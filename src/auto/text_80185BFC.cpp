// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct S_80185BFC { u8 pad[0x124]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void err(s32); virtual u32 n(); };
extern "C" { void fn_800FAEF8(void *); void fn_800FB064(void *, void *); void *fn_800F9398(void *, void *); void *fn_800F9788(void *, void *, void *); void fn_8018E20C(void *, void *, u32); u32 fn_800FADA8(void *); void fn_800FAEA0(void *); void fn_8018E1F4(void *); void __dla__FPv(void *); void *__nwa__FUl(u32); void fn_800604C4(s32, s32, s32, s32); void fn_800F7EC0(void *); void fn_800F7E98(void); extern void *lbl_8035AE18; extern u32 lbl_80364980; }

void fn_80185BFC(u8 *p, u8 *q, S_80185BFC *s) {
    u8 b16[8];
    char b8[8];
    u32 t;
    if (*(void **)(p + 24) != 0) {
        fn_8018E1F4(p);
        if (*(void **)(p + 24) != 0) {
            __dla__FPv(*(void **)(p + 24));
        }
        *(u32 *)(p + 16) = 0;
        *(u32 *)(p + 20) = 0;
        *(void **)(p + 24) = 0;
    }
    *(s32 *)(p + 4) = 4;
    fn_800FAEF8(s);
    while ((t = s->n()) != 6) {
        if (t == 57) {
            void *r;
            u32 i;
            *(u32 *)(p + 20) = fn_800FADA8(s);
            if (lbl_8035AE18 == 0) {
                fn_800604C4(-2, 0, 0, 0);
            }
            fn_800F7EC0(lbl_8035AE18);
            *(void **)(p + 24) = __nwa__FUl(*(u32 *)(p + 20) * 4);
            fn_800F7E98();
            if (*(void **)(p + 24) == 0) {
                fn_800604C4(-4, 0, 0, 0);
            }
            for (i = 0; i < *(u32 *)(p + 20); i++) {
                fn_800FB064(s, b16);
                fn_800FB064(s, b8);
                if (b8 == 0 || b8[0] == 0) {
                    r = fn_800F9398(q + 204, b16);
                } else {
                    r = fn_800F9788(q + 228, b8, b16);
                }
                if (r == 0) {
                    s->err(37);
                }
                if (*(u32 *)(p + 16) < *(u32 *)(p + 20)) {
                    (*(void ***)(p + 24))[(*(u32 *)(p + 16))++] = r;
                }
            }
            fn_800FAEA0(s);
        } else {
            fn_8018E20C(p, s, t);
        }
    }
    *(u32 *)p |= lbl_80364980;
}

} /* extern "C" */
