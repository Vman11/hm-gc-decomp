// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
extern u8 lbl_802F0DC0[];
extern void *lbl_8035B320;
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
} /* extern "C" */

struct C80239B40 {
    C80239B40();
};

struct C802271B4 {
    u8 pad[636];
    C802271B4();
    ~C802271B4();
};

struct C8022721C : C80239B40 {
    u8 *vt;
    u8 pad[592];
    u32 f[10];
    C8022721C() {
        vt = lbl_802F0DC0;
        for (int i = 0; i < 10; i++) f[i] = 0;
    }
};

extern "C" {

void *fn_8022721C(s32 n) {
    C8022721C *p;
    C802271B4 *a;

    if (n <= 1) {
        if (lbl_8035B320 == 0) {
            fn_800604C4(-2, 0, 0, 0);
        }
        fn_800F7EC0(lbl_8035B320);
        p = new C8022721C;
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
    a = new C802271B4[n];
    fn_800F7E98();
    if (a == 0) {
        fn_800604C4(-4, 0, 0, 0);
    }
    return a;
}

} /* extern "C" */
