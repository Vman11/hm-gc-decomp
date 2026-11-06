// fn_801F4C84: JPEG quant table setup. NonMatching draft (GC/2.0p1) SDIFF 2 / DIFF 292: regs only.
#include "common.h"

extern "C" {
struct J {
    u16 q[64];
    f64 fq[64];
    s32 iq[64];
    u32 f380;
};
struct D { void *s; };
extern char lbl_802A58F0[];
extern char lbl_802A5914[];
extern char lbl_802A593C[];
extern const u32 lbl_802A5B20[];
extern const f64 lbl_802A56F0[];
extern f64 lbl_803654B0;
u8 fn_801F36D8(void *);
void fn_80060568(char *, s32, s32, s32);

void fn_801F4C84(J *p, D *d, u32 mode) {
    u32 i;
    if (mode == 1) {
        fn_80060568(lbl_802A58F0, 0, 0, 0);
    } else if (mode == 0) {
        for (i = 0; i < 64; i++) {
            p->q[i] = fn_801F36D8(d->s);
            if (p->q[i] == 0) fn_80060568(lbl_802A5914, 0, 0, 0);
        }
    } else {
        fn_80060568(lbl_802A593C, 0, 0, 0);
    }
    for (i = 0; i < 64; i++) {
        p->fq[i] = lbl_802A56F0[i] * p->q[lbl_802A5B20[i]];
    }
    for (i = 0; i < 64; i++) {
        p->iq[i] = lbl_803654B0 * lbl_802A56F0[i] * p->q[lbl_802A5B20[i]];
    }
    p->f380 = 1;
}
}
