// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct S_801BCD28 { u8 pad[0x124]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void err(s32); virtual u32 n(); };
extern "C" { extern void *lbl_8035AFCC; void fn_800604C4(s32, s32, s32, s32); void fn_800F7EC0(void *); void fn_800F7E98(void); void *__nwa__FUl(u32); void __dla__FPv(void *); u32 fn_800FADA8(void *); void fn_800FB064(void *, void *); void fn_800FB0F8(void *, void *); void fn_801C068C(void *, void *, void *, void *); void *fn_80207198(void *, void *, void *); void fn_801DCA84(void *, s32, void *, void *); }

void fn_801BCD28(u8 *p, s32 a, void *b, S_801BCD28 *s) {
    u8 b20[8];
    u8 b12[8];
    void *a8;
    switch (a) {
    case 111: {
        s32 i;
        *(u32 *)(p + 364) = fn_800FADA8(s);
        if (lbl_8035AFCC == 0) {
            fn_800604C4(-2, 0, 0, 0);
        }
        fn_800F7EC0(lbl_8035AFCC);
        *(void **)(p + 356) = __nwa__FUl(*(u32 *)(p + 364) * 4);
        fn_800F7E98();
        if (*(void **)(p + 356) == 0) {
            fn_800604C4(-4, 0, 0, 0);
        }
        for (i = 0; i < *(s32 *)(p + 364); i++) {
            s->n();
            fn_800FB064(s, b20);
            fn_801C068C(p, b, &(*(void ***)(p + 356))[i], b20);
        }
        while (s->n() != 6) {
        }
        break;
    }
    case 113:
        fn_800FB0F8(s, &a8);
        fn_800FB064(s, b12);
        *(void **)(p + 360) = fn_80207198(*(void **)(*(u8 **)(p + 116) + 8), a8, b12);
        __dla__FPv(a8);
        break;
    default:
        fn_801DCA84(p, a, b, s);
        break;
    }
}

} /* extern "C" */
