// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
#pragma optEH2 on

extern "C" {
extern void *lbl_8035B320;
extern u8 lbl_802CFE30[];
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
} /* extern "C" */

struct C8005F938 {
    C8005F938();
    ~C8005F938();
};

struct C800A3494 : C8005F938 {
    u8 pad[608];
    s32 f608;
    u8 pad2[888 - 612];
    C800A3494();
    ~C800A3494();
};

struct C800A3494i : C8005F938 {
    u8 pad[608];
    s32 f608;
    u8 pad2[888 - 612];
    C800A3494i() {
        *(void **)this = lbl_802CFE30;
        f608 = 64;
    }
};

extern "C" void *fn_800A34D8(s32 n) {
    C800A3494 *r;
    if (n <= 1) {
        if (lbl_8035B320 == NULL) {
            fn_800604C4(-2, 0, 0, 0);
        }
        fn_800F7EC0(lbl_8035B320);
        r = (C800A3494 *)new C800A3494i;
        fn_800F7E98();
        if (r == NULL) {
            fn_800604C4(-4, 0, 0, 0);
        }
        return r;
    }
    if (lbl_8035B320 == NULL) {
        fn_800604C4(-2, 0, 0, 0);
    }
    fn_800F7EC0(lbl_8035B320);
    r = new C800A3494[n];
    fn_800F7E98();
    if (r == NULL) {
        fn_800604C4(-4, 0, 0, 0);
    }
    return r;
}

} /* extern "C" */
