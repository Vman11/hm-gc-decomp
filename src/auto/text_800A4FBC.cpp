// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

#define F(p, T, off) (*(T *)((u8 *)(p) + (off)))
extern void *lbl_8035B530;
extern u8 lbl_802D0440[];
extern u8 lbl_80359440[8];
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);

struct C8024262C {
    C8024262C();
    ~C8024262C();
};

struct C800A4FBC : C8024262C {
    u8 pad[300];
    C800A4FBC(u8 *base) {
        F(this, u8 *, 0) = base + 1204;
        F(this, s32, 84) = 12;
        F(this, s32, 44) = 12;
        F(this, s32, 104) = 6;
        F(this, s32, 92) = 0;
        F(this, s32, 128) = 1;
        F(this, s32, 124) = 4;
        F(this, s32, 132) = 0;
        F(this, s32, 136) = 0;
        F(this, s32, 140) = 0;
        F(this, s32, 148) = 0;
        F(this, u8 *, 88) = base + 612;
        F(this, u8 *, 40) = base + 660;
        F(this, u8 *, 48) = base + 804;
        F(this, u8 *, 108) = base + 588;
        F(this, s32, 120) = 0;
        F(this, u8 *, 196) = lbl_80359440;
        F(this, u8 *, 200) = base + 540;
        F(this, s32, 204) = 0;
        F(this, s32, 244) = 0;
        F(this, s32, 252) = 0;
        F(this, s32, 268) = 0;
        F(this, s32, 280) = 0;
        F(this, s32, 284) = 0;
        F(this, s32, 288) = 0;
        F(this, s32, 292) = 0;
        F(this, s32, 296) = 0;
    }
};

void *fn_800A4FBC(void) {
    u8 *base = lbl_802D0440;
    void *r;
    if (lbl_8035B530 == NULL) {
        fn_800604C4(-2, 0, 0, 0);
    }
    fn_800F7EC0(lbl_8035B530);
    r = new C800A4FBC(base);
    fn_800F7E98();
    if (r == NULL) {
        fn_800604C4(-4, 0, 0, 0);
    }
    return r;
}

} /* extern "C" */
