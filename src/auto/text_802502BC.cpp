// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct VCall_fn_802502BC_0 { char vptr_pad[0x2f0]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void m(int); };
struct VCall_fn_802502BC_1 { char vptr_pad[0x1c]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void m(int); };
extern u8 *lbl_8035B308;
extern void *lbl_8035B5E4;
extern u8 *lbl_8035B65C;
extern void **lbl_8035B334;
extern void *lbl_8035B79C;
extern u8 *lbl_8035B7BC;
extern char lbl_803664B0[8];
extern char lbl_803664A8[8];
extern char lbl_802A93E8[];
extern f32 lbl_803664B8;
extern f32 lbl_803664BC;
extern f32 lbl_803664C0;
void *fn_800F8274(void *a, char *s);
u32 fn_80253664(void *a, int n);
void fn_801E20BC(u32 a);
void __ct__9C80253F24Fiiii(void *a, char *s, int b, int c, int d);
u8 *fn_802288FC(void *a, char *s);
void fn_80268020(void *a);
void fn_8026B5CC(void *a, f32 f);
void fn_8026D920(void *a, f32 f);

void fn_802502BC(u8 *self) {
    if (*(s32 *)(*(u8 **)(lbl_8035B308 + 76) + 676) == 0 && *(s32 *)(self + 36) == 0) {
        *(u32 *)(self + 68) = 0;
        *(u32 *)(self + 72) = fn_80253664(fn_800F8274(lbl_8035B5E4, lbl_803664B0), 76);
        *(u32 *)(lbl_8035B65C + 712) = 0;
        if (*(s32 *)(self + 28) != 0) {
            ((VCall_fn_802502BC_0 *)lbl_8035B65C)->m(0);
        }
        if (*(s32 *)(self + 44) == 0 || *(s32 *)(self + 40) == 0) {
            *(u32 *)(self + 36) = 1;
            *(u32 *)(self + 40) = 1;
            fn_801E20BC(*(u32 *)(self + 64));
            __ct__9C80253F24Fiiii(lbl_8035B65C, lbl_802A93E8, 0, 0, 0);
            if (*(s32 *)(self + 32) != 0) {
                u8 *cam = fn_802288FC(*lbl_8035B334, lbl_803664A8);
                *(u32 *)(cam + 788) = 1;
            }
            if (*(VCall_fn_802502BC_1 **)(self + 52) != 0) {
                (*(VCall_fn_802502BC_1 **)(self + 52))->m(0);
                fn_80268020(lbl_8035B79C);
            }
            f32 x = **(f32 **)(lbl_8035B7BC + 32);
            x = lbl_803664B8 * x;
            fn_8026B5CC(lbl_8035B7BC, x);
            fn_8026D920(lbl_8035B7BC, lbl_803664BC);
            *(f32 *)(self + 48) = lbl_803664C0;
        }
    }
}

} /* extern "C" */
