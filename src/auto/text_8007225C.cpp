#include "common.h"
extern "C" {
typedef struct P_225C { u8 pad[424]; f32 f424; f32 f428; u8 pad2[0x544 - 0x1B0]; int *f1348; u8 pad3[0x684 - 0x548]; int f1668; } P_225C;
extern char lbl_80298060[];
extern void *lbl_8035B65C;
extern f32 lbl_8035F3EC;
extern f32 lbl_8035F3F8;
extern f32 lbl_8035F3FC;
f32 fn_802539FC(void *);
f64 fn_800EFC38(f64);
void __ct__9C80253F24Fiiii(void *, const char *, int, int, int);
void fn_8007225C(P_225C *p, f32 f) {
    
    if (p->f1668) {
        f32 r = fn_802539FC(lbl_8035B65C);
        if (f < lbl_8035F3EC) f *= r;
        p->f428 += f;
        if (p->f428 > p->f424) p->f428 = p->f424;
        *p->f1348 = (f32)fn_800EFC38(p->f428);
        if (f <= lbl_8035F3F8) __ct__9C80253F24Fiiii(lbl_8035B65C, "RUMBLE_H", 0, 0, 0);
        else if (f <= lbl_8035F3FC) __ct__9C80253F24Fiiii(lbl_8035B65C, "RUMBLE_M", 0, 0, 0);
        else if (f < lbl_8035F3EC) __ct__9C80253F24Fiiii(lbl_8035B65C, "RUMBLE_L", 0, 0, 0);
    }
}
}
