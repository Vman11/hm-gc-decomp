// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
extern void *lbl_8035B738;
extern u8 lbl_802F28C8[];
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);

} /* extern "C" */
struct C80257738 {
    C80257738();
};
struct N_8025BB30 : C80257738 {
    u8 *vt;
    u8 pad[188];
    u32 a, b, c;
    N_8025BB30() {
        vt = lbl_802F28C8;
        a = 0;
        b = 0;
        c = 0;
    }
};
struct C8025C2EC {
    u8 d[204];
    C8025C2EC();
    ~C8025C2EC();
};
extern "C" {

void *fn_8025BB30(s32 n) {
    if (n <= 1) {
        N_8025BB30 *p;
        if (!lbl_8035B738) fn_800604C4(-2, 0, 0, 0);
        fn_800F7EC0(lbl_8035B738);
        p = new N_8025BB30;
        fn_800F7E98();
        if (!p) fn_800604C4(-4, 0, 0, 0);
        return p;
    } else {
        C8025C2EC *p;
        if (!lbl_8035B738) fn_800604C4(-2, 0, 0, 0);
        fn_800F7EC0(lbl_8035B738);
        p = new C8025C2EC[n];
        fn_800F7E98();
        if (!p) fn_800604C4(-4, 0, 0, 0);
        return p;
    }
}

} /* extern "C" */
