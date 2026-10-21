// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern u8 lbl_802ECB70[];
extern u32 lbl_8035AFCC;
void fn_800604C4(int, int, int, int);
void fn_800F7E98(void);
void fn_800F7EC0(u32);
void fn_801B31A4(void *);
void fn_801D6910(void *);

struct C801B31A4 {
    C801B31A4() { fn_801B31A4(this); }
    ~C801B31A4();
};

struct C801DDC8C {
    u8 b[0x1ec];
    C801DDC8C();
    ~C801DDC8C();
};

struct C801D6ADC : C801B31A4 {
    u8 b0[0x80];
    u8 *vt;
    u8 b1[0x178 - 0x84];
    C801DDC8C m;
    C801D6ADC() : vt(lbl_802ECB70) { fn_801D6910(this); }
};

C801D6ADC *fn_801D6ADC(void) {
    C801D6ADC *p;

    if (lbl_8035AFCC == 0) {
        fn_800604C4(-2, 0, 0, 0);
    }
    fn_800F7EC0(lbl_8035AFCC);
    p = new C801D6ADC;
    fn_800F7E98();
    if (p == 0) {
        fn_800604C4(-4, 0, 0, 0);
    }
    return p;
}

} /* extern "C" */
