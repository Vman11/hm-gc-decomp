// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
extern void *lbl_8035B5D0;
extern u8 lbl_802F2160[];
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
} /* extern "C" */
struct C8023D2AC {
    u8 *vt;
    u8 d[16];
    C8023D2AC();
};
struct N_8025122C : C8023D2AC {
    u8 f20;
    u8 pad1[7];
    u8 f28;
    u8 pad2[255];
    u8 f284;
    u8 pad3[3];
    u32 f288;
    u32 f292;
    u32 f296;
    u32 f300;
    N_8025122C() {
        vt = lbl_802F2160;
        f20 = 0;
        f28 = 0;
        f288 = 0;
        f292 = 0;
        f296 = 0;
        f284 = 0;
    }
};
struct C802511D4 {
    u8 d[304];
    C802511D4();
    ~C802511D4();
};
extern "C" {

void *fn_8025122C(s32 n) {
    if (n <= 1) {
        N_8025122C *p;
        if (!lbl_8035B5D0) fn_800604C4(-2, 0, 0, 0);
        fn_800F7EC0(lbl_8035B5D0);
        p = new N_8025122C;
        fn_800F7E98();
        if (!p) fn_800604C4(-4, 0, 0, 0);
        return p;
    } else {
        C802511D4 *p;
        if (!lbl_8035B5D0) fn_800604C4(-2, 0, 0, 0);
        fn_800F7EC0(lbl_8035B5D0);
        p = new C802511D4[n];
        fn_800F7E98();
        if (!p) fn_800604C4(-4, 0, 0, 0);
        return p;
    }
}

} /* extern "C" */
