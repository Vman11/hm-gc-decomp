// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

#define F(p, T, off) (*(T *)((u8 *)(p) + (off)))
extern void *lbl_8035B530;
extern u8 lbl_802B5E10[];
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);

struct C8024262C {
    C8024262C();
    ~C8024262C();
};

struct C80049570 : C8024262C {
    u8 pad[304];
    C80049570(u8 *base) {
        F(this, u8 *, 0) = base + 804;
        F(this, s32, 84) = 6;
        F(this, s32, 44) = 6;
        F(this, s32, 104) = 3;
        F(this, s32, 92) = 0;
        F(this, s32, 128) = 0;
        F(this, s32, 124) = 0;
        F(this, s32, 132) = 0;
        F(this, s32, 136) = 1;
        F(this, s32, 140) = 0;
        F(this, s32, 148) = 0;
        F(this, u8 *, 88) = base + 572;
        F(this, u8 *, 40) = base + 596;
        F(this, u8 *, 48) = base + 668;
        F(this, u8 *, 108) = base + 560;
        F(this, s32, 120) = 0;
        F(this, s32, 196) = 0;
        F(this, s32, 200) = 0;
        F(this, s32, 204) = 0;
        F(this, u8 *, 244) = base + 540;
        F(this, s32, 252) = 0;
        F(this, s32, 268) = 0;
        F(this, s32, 280) = 0;
        F(this, s32, 284) = 0;
        F(this, s32, 288) = 0;
        F(this, s32, 292) = 0;
        F(this, s32, 296) = 0;
        F(this, s32, 300) = 0;
    }
};

void *fn_80049570(void) {
    u8 *base = lbl_802B5E10;
    void *r;
    if (lbl_8035B530 == NULL) {
        fn_800604C4(-2, 0, 0, 0);
    }
    fn_800F7EC0(lbl_8035B530);
    r = new C80049570(base);
    fn_800F7E98();
    if (r == NULL) {
        fn_800604C4(-4, 0, 0, 0);
    }
    return r;
}

} /* extern "C" */
