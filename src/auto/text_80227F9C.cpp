// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {
extern u8 lbl_802F10E8[];
extern void *lbl_8035B320;
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
}
struct C80239B40 {
    C80239B40();
    ~C80239B40();
    u8 pad[0x254];
};
struct C80227F60_inl : C80239B40 {
    C80227F60_inl() { *(void **)this = lbl_802F10E8; }
};
struct C80227F60 : C80239B40 {
    C80227F60();
    ~C80227F60();
};
extern "C" C80227F60 *fn_80227F9C(s32 n) {
    if (n <= 1) {
        C80227F60_inl *p;
        if (lbl_8035B320 == 0) {
            fn_800604C4(-2, 0, 0, 0);
        }
        fn_800F7EC0(lbl_8035B320);
        p = new C80227F60_inl;
        fn_800F7E98();
        if (p == 0) {
            fn_800604C4(-4, 0, 0, 0);
        }
        return (C80227F60 *)p;
    } else {
        C80227F60 *a;
        if (lbl_8035B320 == 0) {
            fn_800604C4(-2, 0, 0, 0);
        }
        fn_800F7EC0(lbl_8035B320);
        a = new C80227F60[n];
        fn_800F7E98();
        if (a == 0) {
            fn_800604C4(-4, 0, 0, 0);
        }
        return a;
    }
}
