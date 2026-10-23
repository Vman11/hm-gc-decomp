// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
extern u8 lbl_802F15C8[];
extern void *lbl_8035B320;
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
} /* extern "C" */
struct C80239B40 {
    C80239B40();
};
struct C8022FDC8 {
    u8 pad[608];
    C8022FDC8();
    ~C8022FDC8();
};
struct C8022FE10 : C80239B40 {
    u8 *vt;
    u8 pad[592];
    u8 f596;
    u8 pad2[7];
    u32 f604;
    C8022FE10() {
        vt = lbl_802F15C8;
        f596 = 0;
        f604 = 0;
    }
};
extern "C" {

void *fn_8022FE10(s32 n) {
    C8022FE10 *p;
    C8022FDC8 *a;

    if (n <= 1) {
        if (lbl_8035B320 == 0) {
            fn_800604C4(-2, 0, 0, 0);
        }
        fn_800F7EC0(lbl_8035B320);
        p = new C8022FE10;
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
    a = new C8022FDC8[n];
    fn_800F7E98();
    if (a == 0) {
        fn_800604C4(-4, 0, 0, 0);
    }
    return a;
}

} /* extern "C" */
