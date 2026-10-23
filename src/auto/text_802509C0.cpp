// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern void *lbl_8035B5B0;
extern u8 lbl_802F2120[];
extern f32 lbl_803664C0;
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);

struct C8023D2AC {
    C8023D2AC();
};
struct N_802509C0 : C8023D2AC {
    u8 *vt;
    u8 pad[24];
    u32 a, b, c, d, e;
    f32 f;
    u32 g, h, i, j;
    u32 k, l;
    N_802509C0() {
        vt = lbl_802F2120;
        a = 0;
        b = 1;
        c = 0;
        d = 0;
        e = 0;
        f = lbl_803664C0;
        g = 0;
        h = 0;
        i = 0;
        j = 0;
    }
};
struct C80250950 {
    u8 d[76];
    C80250950();
    ~C80250950();
};

void *fn_802509C0(s32 n) {
    if (n <= 1) {
        N_802509C0 *p;
        if (!lbl_8035B5B0) fn_800604C4(-2, 0, 0, 0);
        fn_800F7EC0(lbl_8035B5B0);
        p = new N_802509C0;
        fn_800F7E98();
        if (!p) fn_800604C4(-4, 0, 0, 0);
        return p;
    } else {
        C80250950 *p;
        if (!lbl_8035B5B0) fn_800604C4(-2, 0, 0, 0);
        fn_800F7EC0(lbl_8035B5B0);
        p = new C80250950[n];
        fn_800F7E98();
        if (!p) fn_800604C4(-4, 0, 0, 0);
        return p;
    }
}

} /* extern "C" */
