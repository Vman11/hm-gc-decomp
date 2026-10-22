// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802F2BA0[];
extern void *lbl_8035B738;
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);

struct C80262540 {
    u8 pad[208];
    C80262540();
    ~C80262540();
};

struct C80257738 {
    C80257738();
};

struct C80261DEC : C80257738 {
    u8 *vt;
    u8 pad[188];
    u32 fC0;
    u32 fC4;
    u32 fC8;
    u32 fCC;
    C80261DEC() {
        vt = lbl_802F2BA0;
        fC0 = 0;
        fC4 = 0;
        fC8 = 0;
        fCC = 0;
    }
};

void *fn_80261DEC(s32 n) {
    C80261DEC *p;
    C80262540 *a;

    if (n <= 1) {
        if (lbl_8035B738 == 0) {
            fn_800604C4(-2, 0, 0, 0);
        }
        fn_800F7EC0(lbl_8035B738);
        p = new C80261DEC;
        fn_800F7E98();
        if (p == 0) {
            fn_800604C4(-4, 0, 0, 0);
        }
        return p;
    }
    if (lbl_8035B738 == 0) {
        fn_800604C4(-2, 0, 0, 0);
    }
    fn_800F7EC0(lbl_8035B738);
    a = new C80262540[n];
    fn_800F7E98();
    if (a == 0) {
        fn_800604C4(-4, 0, 0, 0);
    }
    return a;
}

} /* extern "C" */
