// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802F2818[];
extern void *lbl_8035B738;
extern f32 lbl_80366860;
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
void fn_80267F2C(void *);

struct C8025BA80 {
    u8 pad[256];
    C8025BA80();
    ~C8025BA80();
};

struct C8025B028 {
    u8 *vt;
    u8 pad[248];
    f32 f252;
    C8025B028() {
        fn_80267F2C(this);
        vt = lbl_802F2818;
        f252 = lbl_80366860;
    }
};

void *fn_8025B028(s32 n) {
    C8025B028 *p;
    C8025BA80 *a;

    if (n <= 1) {
        if (lbl_8035B738 == 0) {
            fn_800604C4(-2, 0, 0, 0);
        }
        fn_800F7EC0(lbl_8035B738);
        p = new C8025B028;
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
    a = new C8025BA80[n];
    fn_800F7E98();
    if (a == 0) {
        fn_800604C4(-4, 0, 0, 0);
    }
    return a;
}

} /* extern "C" */
