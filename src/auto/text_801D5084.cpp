// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V5084 { f32 x; f32 y; f32 z; f32 w; };
struct T5084 { u8 pad[0x24]; void *f24; u8 pad28[8]; u8 f30[4]; };
struct N5084 { u8 pad[4]; N5084 *f4; N5084 *f8; u8 padc[8]; void *f14; s32 f18; };
struct P5084 { u8 pad[0x68]; void *f68; u8 pad6c[0x144 - 0x6c]; void *f144; u8 pad148[0x2f0 - 0x148]; N5084 *f2f0; N5084 *f2f4; s32 f2f8; u8 pad2fc[4]; void *f300; u8 pad304[0x334 - 0x304]; f32 f334; f32 f338; u8 pad33c[0x34c - 0x33c]; f32 f34c; };
void fn_801CCC7C(void *, s32 *, T5084 **, void *, void *);
void fn_8012D0A4(void *, V5084 *, void *, f32 *, void *, s32, f32, f32, f32);
extern f32 lbl_80365188;
extern f32 lbl_803651B0;
extern f32 lbl_803651AC;
extern f32 lbl_8035B038;
extern f32 lbl_8035B03C;

f32 fn_801D5084(P5084 *p, N5084 *n, f32 mx, f32 my, f32 x, f32 y) {
    T5084 *t;
    s32 c;
    V5084 r;
    f32 h;
    f32 v10[2];
    c = 0;
    if (!n) return lbl_80365188;
    h = p->f334;
    f32 bot = y;
    bot += h;
    if (my >= y && my <= bot) {
        fn_801CCC7C(p->f300, &c, &t, p->f144, p->f68);
        void *a0 = t->f24; void *a4 = t->f30;
        *(volatile f32 *)&v10[0] = x + p->f34c;
        *(volatile f32 *)&v10[1] = y;
        fn_8012D0A4(a0, &r, *(void * volatile *)&n->f14, v10, a4, 0x11, *(volatile f32 *)&lbl_803651B0, *(volatile f32 *)&lbl_8035B038, *(volatile f32 *)&lbl_8035B03C);
        *(volatile f32 *)&r.x -= p->f34c;
        if (my - y < *(volatile f32 *)&lbl_803651AC * p->f334) {
            p->f2f8 = 1;
        } else {
            p->f2f8 = 0;
        }
        if (mx >= r.x && mx < r.z) {
            p->f2f0 = n;
            p->f2f4 = 0;
        } else {
            r.x = x - p->f338;
            r.z = x;
            if (mx >= r.x && mx < r.z) {
                p->f2f0 = 0;
                p->f2f4 = n;
            } else {
                p->f2f0 = 0;
                p->f2f4 = 0;
            }
        }
    }
    if (n->f18) h += fn_801D5084(p, n->f4, mx, my, x + p->f338, y + h);
    h += fn_801D5084(p, n->f8, mx, my, x, y + h);
    return h;
}

} /* extern "C" */
