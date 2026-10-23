// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
extern void *lbl_8035B738;
extern u8 lbl_802F35BC[];
extern f32 lbl_80366E98;
extern f32 lbl_80366E9C;
extern f32 lbl_80366EA0;
extern f32 lbl_80366EA4;
extern f32 lbl_80366EA8;
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);

struct C80261CB0 {
    C80261CB0();
    ~C80261CB0();
};
struct N_802708A8 : C80261CB0 {
    u8 *vt;
    u8 pad0[172];
    u32 f176;
    u32 f180;
    u8 pad1[304 - 184];
    f32 f304;
    u8 pad2[4];
    f32 f312;
    f32 f316;
    f32 f320;
    f32 f324;
    u8 pad3[340 - 328];
    u32 f340;
    u8 pad4[4];
    N_802708A8() {
        vt = lbl_802F35BC;
        f340 = 0;
        f176 = 0;
        f304 = lbl_80366E98;
        f320 = lbl_80366E9C;
        f324 = lbl_80366EA0;
        f316 = lbl_80366EA4;
        f312 = lbl_80366EA8;
        f180 = 0;
    }
};
struct C80271AD8 {
    u8 d[348];
    C80271AD8();
    ~C80271AD8();
};

void *fn_802708A8(s32 n) {
    if (n <= 1) {
        N_802708A8 *p;
        if (!lbl_8035B738) fn_800604C4(-2, 0, 0, 0);
        fn_800F7EC0(lbl_8035B738);
        p = new N_802708A8;
        fn_800F7E98();
        if (!p) fn_800604C4(-4, 0, 0, 0);
        return p;
    } else {
        C80271AD8 *p;
        if (!lbl_8035B738) fn_800604C4(-2, 0, 0, 0);
        fn_800F7EC0(lbl_8035B738);
        p = new C80271AD8[n];
        fn_800F7E98();
        if (!p) fn_800604C4(-4, 0, 0, 0);
        return p;
    }
}

} /* extern "C" */
