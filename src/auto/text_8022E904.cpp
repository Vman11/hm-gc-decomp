// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
extern u8 lbl_802F13F4[];
extern void *lbl_8035B320;
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
} /* extern "C" */
struct C8022DFC8 { C8022DFC8(); };
struct C8022E904 : C8022DFC8 {
    u8 pad[276];
    u32 f276;
    C8022E904() {
        *(void **)this = lbl_802F13F4;
        f276 = 0;
    }
};
struct C8022E8C0 {
    u8 pad[280];
    C8022E8C0();
    ~C8022E8C0();
};
extern "C" {
void *fn_8022E904(s32 n) {
    C8022E904 *p;
    C8022E8C0 *a;
    if (n <= 1) {
        if (lbl_8035B320 == 0) {
            fn_800604C4(-2, 0, 0, 0);
        }
        fn_800F7EC0(lbl_8035B320);
        p = new C8022E904;
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
    a = new C8022E8C0[n];
    fn_800F7E98();
    if (a == 0) {
        fn_800604C4(-4, 0, 0, 0);
    }
    return a;
}

} /* extern "C" */
