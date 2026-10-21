#include "common.h"

extern "C" {

extern u32 lbl_8035B4C0;
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7E98(void);
void fn_800F7EC0(u32);

struct C80243440 {
    u32 f0;
    u8 f4;
    u8 pad5[7];
    u8 fc;
    u8 padd[7];
    u32 f14;
    u32 f18;
    u32 f1c;
    C80243440 *f20;
    C80243440 *f24;
    u32 f28;
    C80243440() {
        f0 = 0;
        f4 = 0;
        fc = 0;
        f14 = 0;
        f18 = 0;
        f1c = 0;
        f20 = 0;
        f24 = 0;
        f28 = 0;
    }
};

s32 fn_800F6CD0(u32, u8 *);
void fn_80243868(C80243440 *, u32, u8 *, u32, u32);

void fn_80243440(C80243440 *p, u32 a, u32 b) {
    C80243440 *n;

    n = p;
    if (fn_800F6CD0(a, &p->fc) != 0) {
        while (n->f20 != 0) {
            n = n->f20;
        }
        if (lbl_8035B4C0 == 0) {
            fn_800604C4(-2, 0, 0, 0);
        }
        fn_800F7EC0(lbl_8035B4C0);
        n->f20 = new C80243440;
        fn_800F7E98();
        if (n->f20 == 0) {
            fn_800604C4(-4, 0, 0, 0);
        }
        fn_80243868(n->f20, p->f1c, &p->f4, a, b);
    }
    else {
        while (n->f24 != 0) {
            n = n->f24;
        }
        if (lbl_8035B4C0 == 0) {
            fn_800604C4(-2, 0, 0, 0);
        }
        fn_800F7EC0(lbl_8035B4C0);
        n->f24 = new C80243440;
        fn_800F7E98();
        if (n->f24 == 0) {
            fn_800604C4(-4, 0, 0, 0);
        }
        fn_80243868(n->f24, p->f1c, &p->f4, a, b);
    }
}

} /* extern "C" */
