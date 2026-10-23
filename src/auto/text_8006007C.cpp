// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
extern "C" {
extern void *lbl_8035B320;
extern u8 lbl_802BCD58[];
extern volatile f32 lbl_8035E528;
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
} /* extern "C" */

struct C8005F938 {
    C8005F938();
    ~C8005F938();
};

struct C80060010 : C8005F938 {
    u8 pad[608];
    s32 f608;
    u8 pad2[888 - 612];
    s32 f888;
    f32 f892;
    f32 f896;
    f32 f900;
    f32 f904;
    u8 pad3[4];
    C80060010();
    ~C80060010();
};

struct C80060010i : C8005F938 {
    u8 pad[608];
    s32 f608;
    u8 pad2[888 - 612];
    s32 f888;
    f32 f892;
    f32 f896;
    f32 f900;
    f32 f904;
    u8 pad3[4];
    C80060010i() {
        *(void **)this = lbl_802BCD58;
        f888 = 0;
        f892 = lbl_8035E528;
        f896 = lbl_8035E528;
        f900 = lbl_8035E528;
        f904 = lbl_8035E528;
        f608 = 2;
    }
};

#pragma opt_propagation off
extern "C" void *fn_8006007C(s32 n) {
    C80060010 *r;
    if (n <= 1) {
        if (lbl_8035B320 == 0) {
            fn_800604C4(-2, 0, 0, 0);
        }
        fn_800F7EC0(lbl_8035B320);
        r = (C80060010 *)new C80060010i;
        fn_800F7E98();
        if (r == 0) {
            fn_800604C4(-4, 0, 0, 0);
        }
        return r;
    } else {
        if (lbl_8035B320 == 0) {
            fn_800604C4(-2, 0, 0, 0);
        }
        fn_800F7EC0(lbl_8035B320);
        r = new C80060010[n];
        fn_800F7E98();
        if (r == 0) {
            fn_800604C4(-4, 0, 0, 0);
        }
    }
    return r;
}
#pragma opt_propagation reset

} /* extern "C" */
