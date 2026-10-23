// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
extern u8 lbl_802C55E0[];
extern void *lbl_8035B320;
extern f32 lbl_8035FDB0;
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
} /* extern "C" */

struct C8005F938 {
    C8005F938();
};

struct C8008598C {
    u8 pad[940];
    C8008598C();
    ~C8008598C();
};

struct C800859FC : C8005F938 {
    u8 *vt;
    u8 pad[604];
    s32 f260;
    u8 pad2[276];
    u32 f378;
    f32 f37c[4];
    u8 pad3[12];
    u32 f398;
    u8 pad4[16];
    C800859FC() {
        vt = lbl_802C55E0;
        f378 = 0;
        for (int i = 0; i < 4; i++) f37c[i] = lbl_8035FDB0;
        f260 = 8;
        f398 = 0;
    }
};

extern "C" {

void *fn_800859FC(s32 n) {
    void *p;

    if (n <= 1) {
        if (lbl_8035B320 == 0) {
            fn_800604C4(-2, 0, 0, 0);
        }
        fn_800F7EC0(lbl_8035B320);
        p = new C800859FC;
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
    p = new C8008598C[n];
    fn_800F7E98();
    if (p == 0) {
        fn_800604C4(-4, 0, 0, 0);
    }
    return p;
}

} /* extern "C" */
