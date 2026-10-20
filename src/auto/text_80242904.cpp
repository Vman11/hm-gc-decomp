// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V_80242904 { u8 pad[0x8]; virtual void p0(); virtual void p1(); virtual void m2(); virtual s32 m3(); };
extern "C" { extern void *lbl_8035B4A4; extern void *lbl_8035B4A0; extern u8 *lbl_8035B460; extern void *lbl_8035B1C0; extern char lbl_803661D4[4]; extern char lbl_802A8F28[]; extern char lbl_803661D8[8]; extern char lbl_80359A0C[4]; extern char lbl_803661D0[4]; extern char lbl_80359A08[4]; extern char lbl_802A8F1C[]; void fn_80115114(void *); void *fn_8021616C(void *); void fn_80115784(void *, void *, const char *, void *); void fn_80115714(void *, const char *, const char *); void fn_8024279C(void); void fn_80242750(void); void fn_802428A8(void); }

s32 fn_80242904(u8 *p) {
    if (((V_80242904 *)p)->m3() != 0) {
        ((V_80242904 *)p)->m2();
    }
    *(s32 *)p = 1;
    lbl_8035B4A4 = p;
    fn_80115114(lbl_8035B4A0);
    *(u8 **)(p + 4) = *(u8 **)(lbl_8035B460 + 12) + 1140;
    *(void **)(*(u8 **)(p + 4) + 10132) = fn_8021616C(lbl_8035B1C0);
    fn_80115784(*(void **)(p + 4), p, lbl_803661D4, (void *)fn_8024279C);
    fn_80115784(*(void **)(p + 4), p, lbl_802A8F28, (void *)fn_80242750);
    fn_80115784(*(void **)(p + 4), p, lbl_803661D8, (void *)fn_802428A8);
    fn_80115714(*(void **)(p + 4), lbl_80359A0C, lbl_803661D0);
    fn_80115714(*(void **)(p + 4), lbl_80359A08, lbl_802A8F1C);
    return 0;
}

} /* extern "C" */
