// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct A { u8 pad[0x68]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void d(s32); virtual void p7(); virtual void p8(); virtual void p9(); virtual void m(); };
struct B { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void m(void *); };
struct Bq { u8 pad[0x30]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual B *o(); };
struct Cc { u8 pad[0x1930]; virtual void p0(); virtual void p1(); virtual void m(); };
struct Dd { u8 pad[0x24]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void m(); };
struct Ee { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void p17(); virtual void p18(); virtual void p19(); virtual void p20(); virtual void p21(); virtual void p22(); virtual void p23(); virtual void p24(); virtual void p25(); virtual void b(void *); virtual void p27(); virtual void p28(); virtual void p29(); virtual void p30(); virtual void p31(); virtual void p32(); virtual void p33(); virtual void a(void *); };
extern "C" { extern u8 *lbl_8035B460; extern char lbl_8035F69C[8]; extern f32 lbl_8035F45C; void *fn_800F9398(void *, const char *); void *fn_801952A0(void *); void fn_801906E0(void *, void *); void fn_8022F748(void *); void fn_800786B8(void *); }

void fn_80078980(u8 *p) {
    void *v;
    f32 f;
    if (*(u8 **)(p + 1816) != 0 && *(void **)(*(u8 **)(p + 1816) + 88) != 0) {
        void *r = fn_800F9398(*(u8 **)(lbl_8035B460 + 8) + 144, lbl_8035F69C);
        if (r != 0) {
            r = fn_801952A0(r);
            if (r != 0) {
                fn_801906E0(r, *(void **)(p + 1816));
            }
        }
    }
    if (*(A **)(p + 1060) != 0) {
        (*(A **)(p + 1060))->m();
        if (*(A **)(p + 1060) != 0) {
            (*(A **)(p + 1060))->d(1);
        }
    }
    f = lbl_8035F45C;
    *(f32 *)(p + 1648) = f;
    *(f32 *)(p + 1644) = f;
    fn_8022F748(p);
    v = *(void **)(p + 1524);
    if (v != 0) {
        (**(Bq ***)(p + 1452))->o()->m(v);
    }
    if (*(Cc **)(p + 1532) != 0) {
        (*(Cc **)(p + 1532))->m();
        (*(Ee **)(p + 1528))->a(*(void **)(p + 1532));
    }
    if (*(Dd **)(p + 1536) != 0) {
        (*(Dd **)(p + 1536))->m();
        (*(Ee **)(p + 1528))->b(*(void **)(p + 1536));
    }
    fn_800786B8(p);
}

} /* extern "C" */
