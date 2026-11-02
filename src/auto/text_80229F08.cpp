// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {
extern u8 lbl_802F1284[];
extern void *lbl_8035B320;
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
}
struct C8022FDC8 {
    C8022FDC8();
    ~C8022FDC8();
    u8 pad[0x260]; u32 f260;
};
struct C80229EC4_inl : C8022FDC8 {
    C80229EC4_inl() { *(void **)this = lbl_802F1284; f260 = 0; }
};
struct C80229EC4 : C8022FDC8 {
    C80229EC4();
    ~C80229EC4();
};
extern "C" C80229EC4 *fn_80229F08(s32 n) {
    if (n <= 1) {
        C80229EC4_inl *p;
        if (lbl_8035B320 == 0) {
            fn_800604C4(-2, 0, 0, 0);
        }
        fn_800F7EC0(lbl_8035B320);
        p = new C80229EC4_inl;
        fn_800F7E98();
        if (p == 0) {
            fn_800604C4(-4, 0, 0, 0);
        }
        return (C80229EC4 *)p;
    } else {
        C80229EC4 *a;
        if (lbl_8035B320 == 0) {
            fn_800604C4(-2, 0, 0, 0);
        }
        fn_800F7EC0(lbl_8035B320);
        a = new C80229EC4[n];
        fn_800F7E98();
        if (a == 0) {
            fn_800604C4(-4, 0, 0, 0);
        }
        return a;
    }
}
