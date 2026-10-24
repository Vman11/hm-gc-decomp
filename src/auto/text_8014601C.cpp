// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct T12 { u32 v[3]; };
struct E24 { T12 a, b; };
struct P {
    u8 pad0[20];
    u8 fmt[4];
    u32 r, g, b, a;
    u8 pad40[20];
    s32 sh[4];
    s32 bits[4];
    u8 pad92[32];
    s32 mask[4];
    u8 pad140[1616];
    T12 m1756;
    u8 pad1768[12];
    T12 m1780;
};
struct BIG { u8 pad[660]; E24 e[6]; };
static BIG sBig = {1};
s32 fn_80147F68(u8 *);
s32 fn_80147F38(u8 *);
s32 fn_80147F08(u8 *);
s32 fn_80147ED8(u8 *);
s32 fn_801480D8(u8 *);
s32 fn_80148098(u8 *);
s32 fn_80148058(u8 *);
s32 fn_80148018(u8 *);

void fn_8014601C(P *p) {
    BIG *t = &sBig;
    u32 a = p->a;

    if (a == 0) {
        if (p->r == 0xFF && p->g == 0xFF00 && p->b == 0xFF0000) {
            p->m1756 = t->e[0].a;
            p->m1780 = t->e[0].b;
            return;
        } else if (p->r == 0xFF0000 && p->g == 0xFF00 && p->b == 0xFF) {
            p->m1756 = t->e[1].a;
            p->m1780 = t->e[1].b;
            return;
        } else {
            p->m1756 = t->e[2].a;
            p->m1780 = t->e[2].b;
        }
    } else {
        u32 r = p->r;
        if (r == 0xFF && p->g == 0xFF00 && p->b == 0xFF0000 && a == 0xFF000000) {
            p->m1756 = t->e[3].a;
            p->m1780 = t->e[3].b;
            return;
        } else if (r == 0xFF0000 && p->g == 0xFF00 && p->b == 0xFF && a == 0xFF000000) {
            p->m1756 = t->e[4].a;
            p->m1780 = t->e[4].b;
            return;
        } else {
            p->m1756 = t->e[5].a;
            p->m1780 = t->e[5].b;
        }
    }
    p->sh[0] = fn_80147F68(p->fmt);
    p->sh[1] = fn_80147F38(p->fmt);
    p->sh[2] = fn_80147F08(p->fmt);
    p->sh[3] = fn_80147ED8(p->fmt);
    p->bits[0] = 8 - fn_801480D8(p->fmt);
    p->bits[1] = 8 - fn_80148098(p->fmt);
    p->bits[2] = 8 - fn_80148058(p->fmt);
    p->bits[3] = 8 - fn_80148018(p->fmt);
    p->mask[0] = (1 << p->bits[0]) - 1;
    p->mask[1] = (1 << p->bits[1]) - 1;
    p->mask[2] = (1 << p->bits[2]) - 1;
    p->mask[3] = (1 << p->bits[3]) - 1;
}

} /* extern "C" */
