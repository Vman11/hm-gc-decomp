// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

#define F(p, T, off) (*(T *)((u8 *)(p) + (off)))
extern void *lbl_8035B530;
extern u8 lbl_802D50E0[];
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);

struct C8024262C {
    C8024262C();
    ~C8024262C();
};

struct C800AF53C : C8024262C {
    u8 pad[312];
    C800AF53C(u8 *base) {
        F(this, u8 *, 0) = base + 1128;
        F(this, s32, 84) = 6;
        F(this, s32, 44) = 6;
        F(this, s32, 104) = 5;
        F(this, s32, 92) = 1;
        F(this, s32, 128) = 0;
        F(this, s32, 124) = 3;
        F(this, s32, 132) = 1;
        F(this, s32, 136) = 0;
        F(this, s32, 140) = 0;
        F(this, s32, 148) = 10;
        F(this, u8 *, 88) = base + 824;
        F(this, u8 *, 40) = base + 848;
        F(this, u8 *, 48) = base + 920;
        F(this, u8 *, 108) = base + 804;
        F(this, u8 *, 120) = base + 588;
        F(this, s32, 196) = 0;
        F(this, u8 *, 200) = base + 540;
        F(this, u8 *, 204) = base + 576;
        F(this, s32, 244) = 0;
        F(this, s32, 252) = 0;
        F(this, u8 *, 268) = base + 604;
        F(this, s32, 280) = 0;
        F(this, s32, 284) = 0;
        F(this, s32, 288) = 0;
        F(this, s32, 292) = 0;
        F(this, s32, 296) = 0;
        F(this, s32, 300) = 0;
        F(this, s32, 304) = 0;
        F(this, s32, 308) = 0;
    }
};

void *fn_800AF53C(void) {
    u8 *base = lbl_802D50E0;
    void *r;
    if (lbl_8035B530 == 0) {
        fn_800604C4(-2, 0, 0, 0);
    }
    fn_800F7EC0(lbl_8035B530);
    r = new C800AF53C(base);
    fn_800F7E98();
    if (r == 0) {
        fn_800604C4(-4, 0, 0, 0);
    }
    return r;
}

} /* extern "C" */
