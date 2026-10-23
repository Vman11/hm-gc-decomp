// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
extern u8 lbl_802F24CC[];
extern void *lbl_8035B738;
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
} /* extern "C" */
struct C80261CB0 {
    C80261CB0();
};
struct C80256D34 {
    u8 pad[216];
    C80256D34();
    ~C80256D34();
};
struct C8025673C : C80261CB0 {
    u8 *vt;
    u8 pad[172];
    u32 f176;
    u32 f180;
    u32 f184;
    u32 f188;
    u32 f192;
    u32 f196;
    u32 f200;
    u8 pad2[12];
    C8025673C() {
        vt = lbl_802F24CC;
        f192 = 0;
        f196 = 0;
        f200 = 0;
        f180 = 0;
        f184 = 0;
        f188 = 0;
        f176 = 0;
    }
};
extern "C" {

void *fn_8025673C(s32 n) {
    C8025673C *p;
    C80256D34 *a;

    if (n <= 1) {
        if (lbl_8035B738 == 0) {
            fn_800604C4(-2, 0, 0, 0);
        }
        fn_800F7EC0(lbl_8035B738);
        p = new C8025673C;
        fn_800F7E98();
        if (p == 0) {
            fn_800604C4(-4, 0, 0, 0);
        }
        return p;
    }
    if (lbl_8035B738 == 0) {
        fn_800604C4(-2, 0, 0, 0);
    }
    fn_800F7EC0(lbl_8035B738);
    a = new C80256D34[n];
    fn_800F7E98();
    if (a == 0) {
        fn_800604C4(-4, 0, 0, 0);
    }
    return a;
}

} /* extern "C" */
