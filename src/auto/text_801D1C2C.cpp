// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern void *lbl_8035AFCC;
extern u8 lbl_802ECA08[];
extern f32 lbl_80365180;
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
void fn_801A7684(void *);

struct C801D1C2C {
    u8 d[488];
    C801D1C2C() {
        fn_801A7684(this);
        *(u8 **)(d + 128) = lbl_802ECA08;
        *(f32 *)(d + 460) = lbl_80365180;
        *(f32 *)(d + 464) = lbl_80365180;
        *(f32 *)(d + 448) = lbl_80365180;
        *(f32 *)(d + 452) = lbl_80365180;
        *(f32 *)(d + 456) = lbl_80365180;
        *(u32 *)(d + 484) = 1;
        *(u32 *)(d + 444) = 0;
        *(u32 *)(d + 360) = 0;
        *(u32 *)(d + 384) = 0;
        *(u8 **)(d + 408) = d + 360;
        *(u32 *)(d + 380) = 0;
        *(u32 *)(d + 376) = 0;
        *(f32 *)(d + 372) = lbl_80365180;
        *(f32 *)(d + 368) = lbl_80365180;
        *(f32 *)(d + 364) = lbl_80365180;
        *(u32 *)(d + 404) = 0;
        *(u32 *)(d + 400) = 0;
        *(f32 *)(d + 396) = lbl_80365180;
        *(f32 *)(d + 392) = lbl_80365180;
        *(f32 *)(d + 388) = lbl_80365180;
        *(f32 *)(d + 468) = lbl_80365180;
        *(f32 *)(d + 472) = lbl_80365180;
        *(f32 *)(d + 476) = lbl_80365180;
        *(f32 *)(d + 480) = lbl_80365180;
        *(u32 *)(d + 324) = 2;
    }
};

void *fn_801D1C2C(void) {
    C801D1C2C *r;
    if (lbl_8035AFCC == 0) {
        fn_800604C4(-2, 0, 0, 0);
    }
    fn_800F7EC0(lbl_8035AFCC);
    r = new C801D1C2C;
    fn_800F7E98();
    if (r == 0) {
        fn_800604C4(-4, 0, 0, 0);
    }
    return r;
}

} /* extern "C" */
