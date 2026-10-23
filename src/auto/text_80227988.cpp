// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
extern void *lbl_8035B320;
extern u8 lbl_802F0EB8[];
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
} /* extern "C" */
struct C80239B40 {
    C80239B40();
};
struct N_80227988 : C80239B40 {
    u8 *vt;
    u8 pad[592];
    u32 f596;
    u32 f600;
    N_80227988() {
        vt = lbl_802F0EB8;
        f596 = 1;
        f600 = 0;
    }
};
struct C8022793C {
    u8 d[604];
    C8022793C();
    ~C8022793C();
};
extern "C" {

void *fn_80227988(s32 n) {
    if (n <= 1) {
        N_80227988 *p;
        if (!lbl_8035B320) fn_800604C4(-2, 0, 0, 0);
        fn_800F7EC0(lbl_8035B320);
        p = new N_80227988;
        fn_800F7E98();
        if (!p) fn_800604C4(-4, 0, 0, 0);
        return p;
    } else {
        C8022793C *p;
        if (!lbl_8035B320) fn_800604C4(-2, 0, 0, 0);
        fn_800F7EC0(lbl_8035B320);
        p = new C8022793C[n];
        fn_800F7E98();
        if (!p) fn_800604C4(-4, 0, 0, 0);
        return p;
    }
}

} /* extern "C" */
