// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct S_801BA470 { u8 pad[0x124]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void err(s32); virtual u32 n(); };
extern "C" { extern void *lbl_8035AFCC; void fn_800604C4(s32, s32, s32, s32); void fn_800F7EC0(void *); void fn_800F7E98(void); void *__nwa__FUl(u32); void fn_800FB064(void *, void *); u32 fn_800FADA8(void *); u32 fn_800FB33C(void *); f32 fn_800FB2E0(void *); void fn_800FAEA0(void *); void fn_800FAFA8(void *); void fn_800FAF50(void *); void *fn_800F9398(void *, void *); void *fn_800F9788(void *, void *, void *); void fn_801C068C(void *, void *, void *, void *); void fn_801DCA84(void *, s32, void *, void *); }

void fn_801BA470(u8 *p, s32 a, void *b, S_801BA470 *s) {
    u8 buf[8];
    switch (a) {
    case 96: {
        u32 i;
        *(u32 *)(p + 408) = fn_800FADA8(s);
        if (lbl_8035AFCC == 0) {
            fn_800604C4(-2, 0, 0, 0);
        }
        fn_800F7EC0(lbl_8035AFCC);
        *(void **)(p + 372) = __nwa__FUl(*(u32 *)(p + 408) * 4);
        fn_800F7E98();
        if (*(void **)(p + 372) == 0) {
            fn_800604C4(-4, 0, 0, 0);
        }
        if (lbl_8035AFCC == 0) {
            fn_800604C4(-2, 0, 0, 0);
        }
        fn_800F7EC0(lbl_8035AFCC);
        *(void **)(p + 376) = __nwa__FUl(*(u32 *)(p + 408) * 4);
        fn_800F7E98();
        if (*(void **)(p + 376) == 0) {
            fn_800604C4(-4, 0, 0, 0);
        }
        for (i = 0; i < *(u32 *)(p + 408); i++) {
            s->n();
            fn_800FB064(s, buf);
            fn_801C068C(p, b, &(*(u32 **)(p + 372))[i], buf);
            (*(u32 **)(p + 376))[i] = fn_800FB33C(s);
        }
        if (s->n() != 6) {
            s->err(7);
        }
        break;
    }
    case 99:
        *(s32 *)(p + 360) = 1;
        break;
    case 98:
        *(s32 *)(p + 356) = 1;
        break;
    case 107:
        *(f32 *)(p + 384) = fn_800FB2E0(s);
        *(f32 *)(p + 388) = fn_800FB2E0(s);
        break;
    case 108:
        *(f32 *)(p + 392) = fn_800FB2E0(s);
        *(f32 *)(p + 396) = fn_800FB2E0(s);
        break;
    case 109:
        *(f32 *)(p + 400) = fn_800FB2E0(s);
        *(f32 *)(p + 404) = fn_800FB2E0(s);
        break;
    default:
        fn_801DCA84(p, a, b, s);
        break;
    }
}

} /* extern "C" */
