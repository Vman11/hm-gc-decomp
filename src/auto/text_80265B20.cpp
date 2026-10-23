// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
extern void *lbl_8035B738;
extern u8 lbl_802F2D3C[];
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
} /* extern "C" */
struct C80261CB0 {
    C80261CB0();
};
struct N_80265B20 : C80261CB0 {
    u8 *vt;
    u8 pad[172];
    u32 f176;
    N_80265B20() {
        vt = lbl_802F2D3C;
        f176 = 0;
    }
};
struct C80266030 {
    u8 d[180];
    C80266030();
    ~C80266030();
};
extern "C" {

void *fn_80265B20(s32 n) {
    if (n <= 1) {
        N_80265B20 *p;
        if (!lbl_8035B738) fn_800604C4(-2, 0, 0, 0);
        fn_800F7EC0(lbl_8035B738);
        p = new N_80265B20;
        fn_800F7E98();
        if (!p) fn_800604C4(-4, 0, 0, 0);
        return p;
    } else {
        C80266030 *p;
        if (!lbl_8035B738) fn_800604C4(-2, 0, 0, 0);
        fn_800F7EC0(lbl_8035B738);
        p = new C80266030[n];
        fn_800F7E98();
        if (!p) fn_800604C4(-4, 0, 0, 0);
        return p;
    }
}

} /* extern "C" */
