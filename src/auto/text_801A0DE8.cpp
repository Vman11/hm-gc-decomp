// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_801A0DE8 { u8 pad[0x68]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void m(); };
struct C8018D1A4 { u8 pad[28]; C8018D1A4(); };
struct C8017AB98 { u8 pad[36]; C8017AB98(); };
struct T8_801A0DE8 { u32 a[2]; };
extern "C" { extern void *lbl_8035AEA8; extern u32 lbl_80364D8C, lbl_80364D90, lbl_80364D94; void fn_800604C4(s32, s32, s32, s32); void fn_800F7EC0(void *); void fn_800F7E98(void); void *__nwa__FUl(u32); void fn_80191EA8(void *, void *, void *); void fn_8017A8D4(void *, u32); void fn_8017A658(void *, u32); }

void fn_801A0DE8(V_801A0DE8 *q0, void *a, u8 *q) {
    u8 *p = (u8 *)q0;
    if (*(u32 *)p & 1) {
        q0->m();
    }
    fn_80191EA8(q0, a, q);
    if (*(s32 *)(q + 36) != 0) {
        *(u32 *)p |= lbl_80364D8C;
    }
    if (*(s32 *)(q + 40) != 0) {
        *(u32 *)p |= lbl_80364D90;
    }
    if (*(s32 *)(q + 44) != 0) {
        *(u32 *)p |= lbl_80364D94;
    }
    *(T8_801A0DE8 *)(p + 108) = *(T8_801A0DE8 *)(q + 56);
    if (*(u32 *)(p + 112) != 0) {
        if (lbl_8035AEA8 == 0) {
            fn_800604C4(-2, 0, 0, 0);
        }
        fn_800F7EC0(lbl_8035AEA8);
        *(C8018D1A4 **)(p + 116) = new C8018D1A4[*(u32 *)(p + 112)];
        fn_800F7E98();
        if (*(C8018D1A4 **)(p + 116) == 0) {
            fn_800604C4(-4, 0, 0, 0);
        }
    }
    if (*(void **)(q + 48) != 0) {
        *(void **)(p + 120) = *(void **)(q + 48);
    }
    if (*(u32 *)(q + 64) != 0) {
        if (*(void **)(p + 132) == 0) {
            if (lbl_8035AEA8 == 0) {
                fn_800604C4(-2, 0, 0, 0);
            }
            fn_800F7EC0(lbl_8035AEA8);
            *(C8017AB98 **)(p + 132) = new C8017AB98;
            fn_800F7E98();
            if (*(C8017AB98 **)(p + 132) == 0) {
                fn_800604C4(-4, 0, 0, 0);
            }
        }
        fn_8017A8D4(*(void **)(p + 132), *(u32 *)(q + 64));
    }
    if (*(u32 *)(q + 68) != 0) {
        if (*(void **)(p + 132) == 0) {
            if (lbl_8035AEA8 == 0) {
                fn_800604C4(-2, 0, 0, 0);
            }
            fn_800F7EC0(lbl_8035AEA8);
            *(C8017AB98 **)(p + 132) = new C8017AB98;
            fn_800F7E98();
            if (*(C8017AB98 **)(p + 132) == 0) {
                fn_800604C4(-4, 0, 0, 0);
            }
        }
        fn_8017A658(*(void **)(p + 132), *(u32 *)(q + 68));
    }
}

} /* extern "C" */
