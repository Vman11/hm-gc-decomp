#include "common.h"
extern "C" {
extern char lbl_803666D4[4];
extern char lbl_803666D8[7];
extern f32 lbl_803666B0, lbl_803666B8, lbl_803666BC, lbl_803666C0, lbl_803666C4, lbl_803666C8, lbl_803666CC;
struct G8035B65C { u8 pad[0x28]; void *f28; };
extern G8035B65C *lbl_8035B65C;
struct P8025732C { u8 pad[0x254]; f32 f254, f258, f25c, f260; };
struct O8025732C { u8 pad[0x9c]; P8025732C *f9c; u8 padA0[0x10]; void *fb0; f32 *fb4; f32 *fb8; f32 *fbc; };
f32 *fn_80261114(O8025732C *, char *, s32);
void fn_80261AA8(O8025732C *);
f64 fn_800F049C(f64);
void fn_8012962C(void *, f32, f32, f32, f32);
void fn_8025732C(O8025732C *o) {
    o->fb4 = fn_80261114(o, lbl_803666D4, 1);
    o->fbc = fn_80261114(o, lbl_803666D8, 1);
    fn_80261AA8(o);
    o->fb0 = lbl_8035B65C->f28;
    P8025732C *p = o->f9c;
    f32 d;
    f32 cur = p->f254;
    d = *o->fb4 - cur;
    if ((f32)__fabs(d) > lbl_803666B8) {
        f32 r = *o->fb8;
        if ((f32)__fabs(d) > lbl_803666B8) {
            f32 m = lbl_803666BC - (f32)fn_800F049C(-r * lbl_803666B0);
            cur = m * d + cur;
        }
        p->f254 = cur;
        p->f258 = cur;
        p->f25c = cur;
        p->f260 = lbl_803666B0;
        fn_8012962C(o->fb0, lbl_803666C0 * cur, lbl_803666C4, lbl_803666C8, lbl_803666CC);
    }
}
}
