// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct T { u8 pad[12]; f32 *v; };
struct T2 { struct { u8 pad[16]; u32 n; } *h; u8 pad[8]; f32 *v; };
struct P {
    u8 pad0[96];
    s32 t96;
    u8 pad100[184];
    f32 *f284;
    u8 pad288[8];
    s32 i296;
    s32 i300;
    u8 pad304[16];
    T *t320;
    T2 *t324;
    u32 n328;
    u32 i332;
};
static u8 sPad[696] = {1};
static s32 tA[7] = {1};
static s32 tB[13] = {1};
static s32 tC[34] = {1};
extern char lbl_80360098[4], lbl_8036009C[8];
extern char lbl_80299040[];
void fn_802494A4(P *, int);
void fn_802490E0(P *, int, f32);
void fn_80249008(P *, int);
void *fn_8023F4A0(P *, char *, char *, char *, int);

static inline void step(P *p) {
    fn_802490E0(p, 0, p->t320->v[p->i332]);
    *p->f284 = p->t324->v[p->i332];
    p->i332++;
    if (p->i332 >= p->n328) p->i332 = 0;
}

void fn_8008A8A8(P *p, s32 n) {
    s32 *q;
    s32 i;
    s32 t;
    t = p->t96;
    i = tA[n];
    for (q = tB + i; t > 0; q++) {
        if (*q > t) break;
        t -= tB[i++];
    }
    switch (tC[i]) {
    case 0:
        p->t320 = (T *)fn_8023F4A0(p, lbl_80360098, lbl_80360098, lbl_8036009C, 1);
        p->t324 = (T2 *)fn_8023F4A0(p, lbl_80360098, lbl_80360098, lbl_80299040, 1);
        p->n328 = p->t324->h->n;
        p->i332 = 0;
        fn_802494A4(p, 1);
        break;
    case 1:
        return;
    case 2:
        p->i296 = 1;
        step(p);
        break;
    case 3:
        p->i296 = 0;
        fn_80249008(p, 0);
        break;
    case 4:
        p->i300 = 1;
        step(p);
        break;
    case 5:
        p->i300 = 0;
        fn_80249008(p, 0);
        break;
    case 6:
        step(p);
        break;
    case 7:
        break;
    }
}

} /* extern "C" */
