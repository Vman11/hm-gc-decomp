// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern void *lbl_8035B448;
extern u8 lbl_802E2558[];
extern u8 lbl_802F19D4[];
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
class C8023D2AC { public: u8 d[20]; C8023D2AC(); ~C8023D2AC(); };
struct B_8023D2D8 { void *vt; B_8023D2D8() { vt = lbl_802E2558; } };
struct N_8023D2D8 : B_8023D2D8 {
    u32 x4;
    u32 a;
    u32 b;
    u32 c;
    N_8023D2D8() { vt = lbl_802F19D4; a = 0; b = 0; c = 0; }
};

void *fn_8023D2D8(s32 n) {
    if (n <= 1) {
        N_8023D2D8 *p;
        if (!lbl_8035B448) fn_800604C4(-2, 0, 0, 0);
        fn_800F7EC0(lbl_8035B448);
        p = new N_8023D2D8;
        fn_800F7E98();
        if (!p) fn_800604C4(-4, 0, 0, 0);
        return p;
    } else {
        C8023D2AC *p;
        if (!lbl_8035B448) fn_800604C4(-2, 0, 0, 0);
        fn_800F7EC0(lbl_8035B448);
        p = new C8023D2AC[n];
        fn_800F7E98();
        if (!p) fn_800604C4(-4, 0, 0, 0);
        return p;
    }
}

} /* extern "C" */
