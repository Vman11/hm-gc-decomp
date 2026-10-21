// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

struct C80116200 {
    u8 b[0x27AC];
    C80116200();
};

extern "C" {

extern void *lbl_8035AB00;
extern C80116200 *lbl_8035AB04;
extern char lbl_803661C0[0x7];
extern char lbl_803661C8[0x7];
void fn_800604C4(s32, s32, s32, s32);
u32 fn_800EB1B4(void);
void fn_800F6FBC(char *, void *);
void fn_800F7E98(void);
void fn_800F7EC0(void *);
void *fn_80115568(C80116200 *, void *);
void fn_80116320(void *, void *, u32);
void fn_80116B10(u32, u32, void *);

u32 fn_8024279C(u32 param_1, u32 param_2, u32 param_3) {
    u32 uVar1;
    void *uVar3;
    u32 uVar4;
    u8 auStack_28[4];
    u8 auStack_24[8];
    u8 auStack_1c[20];

    fn_80116B10(param_2, *(u32 *)(param_3 + 4), auStack_28);
    fn_800F6FBC(lbl_803661C0, auStack_1c); /* "Player" */
    if (lbl_8035AB04 == 0) {
        if (lbl_8035AB00 == 0) {
            fn_800604C4(-2, 0, 0, 0);
        }
        fn_800F7EC0(lbl_8035AB00);
        lbl_8035AB04 = new C80116200;
        fn_800F7E98();
        if (lbl_8035AB04 == 0) {
            fn_800604C4(-4, 0, 0, 0);
        }
    }
    uVar3 = fn_80115568(lbl_8035AB04, auStack_1c);
    fn_800F6FBC(lbl_803661C8, auStack_24); /* "nState" */
    fn_80116320(uVar3, auStack_24, *(u32 *)(param_3 + 4));
    uVar4 = *(u32 *)(param_3 + 4);
    uVar1 = 0;
    if (uVar4 != 0) {
        uVar1 = fn_800EB1B4();
        uVar1 = uVar1 % uVar4;
    }
    return uVar1 & 0xffff;
}

} /* extern "C" */
