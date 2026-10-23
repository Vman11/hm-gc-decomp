// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
extern void *lbl_8035B738;
extern u8 lbl_802F2444[];
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);

} /* extern "C" */
struct C80261CB0 {
    C80261CB0();
};
struct N_80255BD4 : C80261CB0 {
    u8 *vt;
    u8 pad[184];
    u32 f188, f192, f196, f200, f204, f208, f212, f216, f220;
    u8 pad2[36];
    N_80255BD4() {
        vt = lbl_802F2444;
        f196 = 0;
        f204 = 0;
        f208 = 0;
        f212 = 0;
        f188 = 0;
        f200 = 0;
        f216 = 0;
        f220 = 0;
        f192 = 0;
    }
};
struct C8025666C {
    u8 d[260];
    C8025666C();
    ~C8025666C();
};
extern "C" {

void *fn_80255BD4(s32 n) {
    if (n <= 1) {
        N_80255BD4 *p;
        if (!lbl_8035B738) fn_800604C4(-2, 0, 0, 0);
        fn_800F7EC0(lbl_8035B738);
        p = new N_80255BD4;
        fn_800F7E98();
        if (!p) fn_800604C4(-4, 0, 0, 0);
        return p;
    } else {
        C8025666C *p;
        if (!lbl_8035B738) fn_800604C4(-2, 0, 0, 0);
        fn_800F7EC0(lbl_8035B738);
        p = new C8025666C[n];
        fn_800F7E98();
        if (!p) fn_800604C4(-4, 0, 0, 0);
        return p;
    }
}

} /* extern "C" */
