// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
extern u8 __vt__9C80078B94[];
extern void *lbl_8035B320;
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
void fn_800786B8(void *);
} /* extern "C" */
struct C8022F98C { C8022F98C(); ~C8022F98C(); };
struct C80226E64 { u8 pad[296]; C80226E64(); ~C80226E64(); };
struct C8023D65C { u8 pad[44]; C8023D65C(); ~C8023D65C(); };
struct C8023D0CC { u8 pad[276]; C8023D0CC(); ~C8023D0CC(); };
struct VtHold { void *vt; VtHold() { vt = __vt__9C80078B94; } };
struct C80078BF8 : C8022F98C {
    VtHold vth;
    u8 pad0[828];
    C80226E64 m832;
    C8023D65C m1128;
    C8023D65C m1172;
    u8 pad1[368];
    C8023D0CC m1584;
    C80078BF8() { fn_800786B8(this); }
};
struct C80078B94 {
    u8 pad[1860];
    C80078B94();
    ~C80078B94();
};
extern "C" {
void *fn_80078BF8(s32 n) {
    C80078BF8 *p;
    C80078B94 *a;
    if (n <= 1) {
        if (lbl_8035B320 == 0) {
            fn_800604C4(-2, 0, 0, 0);
        }
        fn_800F7EC0(lbl_8035B320);
        p = new C80078BF8;
        fn_800F7E98();
        if (p == 0) {
            fn_800604C4(-4, 0, 0, 0);
        }
        return p;
    }
    if (lbl_8035B320 == 0) {
        fn_800604C4(-2, 0, 0, 0);
    }
    fn_800F7EC0(lbl_8035B320);
    a = new C80078B94[n];
    fn_800F7E98();
    if (a == 0) {
        fn_800604C4(-4, 0, 0, 0);
    }
    return a;
}

} /* extern "C" */
