// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {
extern u8 lbl_802F2600[];
extern void *lbl_8035B738;
extern f32 lbl_80366710;
extern f32 lbl_80366714;
extern f32 lbl_80366718;
extern f32 lbl_8036671C;
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
int rand(void);
}
inline f32 rnd_80257838() { s32 r = rand() % 20000u; return lbl_80366714 * (f32)r; }
struct C80267F2C {
    C80267F2C();
    ~C80267F2C();
    u8 pad[0x108];
};
struct C802588D4_inl : C80267F2C {
    s32 f108;
    s32 f10c;
    f32 f110;
    f32 f114;
    f32 f118;
    f32 f11c;
    s32 f120;
    s32 f124;
    s32 f128;
    s32 f12c;
    C802588D4_inl() {
        *(void **)this = lbl_802F2600;
        f120 = 0;
        f124 = 0;
        f128 = 0;
        f12c = 0;
        f108 = 0;
        f110 = lbl_80366710;
        f11c = rnd_80257838() - lbl_80366718;
        f118 = rnd_80257838() - lbl_80366718;
        if (f11c > lbl_80366710) {
            f114 = lbl_80366718;
        } else {
            f114 = lbl_8036671C;
        }
    }
};
struct C802588D4 : C80267F2C {
    C802588D4();
    ~C802588D4();
    u8 pad2[0x28];
};
extern "C" C802588D4 *fn_80257838(s32 n) {
    if (n <= 1) {
        C802588D4_inl *p;
        if (lbl_8035B738 == 0) {
            fn_800604C4(-2, 0, 0, 0);
        }
        fn_800F7EC0(lbl_8035B738);
        p = new C802588D4_inl;
        fn_800F7E98();
        if (p == 0) {
            fn_800604C4(-4, 0, 0, 0);
        }
        return (C802588D4 *)p;
    } else {
        C802588D4 *a;
        if (lbl_8035B738 == 0) {
            fn_800604C4(-2, 0, 0, 0);
        }
        fn_800F7EC0(lbl_8035B738);
        a = new C802588D4[n];
        fn_800F7E98();
        if (a == 0) {
            fn_800604C4(-4, 0, 0, 0);
        }
        return a;
    }
}
