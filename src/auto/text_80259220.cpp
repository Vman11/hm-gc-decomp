// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern void *lbl_8035B738;
extern u8 lbl_802F2768[];
extern f32 lbl_803667B4;
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);

struct C80261CB0 {
    C80261CB0();
};
struct N_80259220 : C80261CB0 {
    u8 *vt;
    u8 pad[172];
    u32 a, b, c, d, e;
    f32 f;
    N_80259220() {
        vt = lbl_802F2768;
        a = 0;
        b = 0;
        c = 0;
        d = 0;
        e = 0;
        f = lbl_803667B4;
    }
};
struct C8025AF5C {
    u8 d[200];
    C8025AF5C();
    ~C8025AF5C();
};

void *fn_80259220(s32 n) {
    if (n <= 1) {
        N_80259220 *p;
        if (!lbl_8035B738) fn_800604C4(-2, 0, 0, 0);
        fn_800F7EC0(lbl_8035B738);
        p = new N_80259220;
        fn_800F7E98();
        if (!p) fn_800604C4(-4, 0, 0, 0);
        return p;
    } else {
        C8025AF5C *p;
        if (!lbl_8035B738) fn_800604C4(-2, 0, 0, 0);
        fn_800F7EC0(lbl_8035B738);
        p = new C8025AF5C[n];
        fn_800F7E98();
        if (!p) fn_800604C4(-4, 0, 0, 0);
        return p;
    }
}

} /* extern "C" */
