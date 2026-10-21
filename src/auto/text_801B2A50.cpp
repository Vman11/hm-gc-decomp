// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern void *lbl_8035AFCC;
extern u8 lbl_802EACC8[];
extern f32 lbl_80364EF8;
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
void __ct__9C801DDC8CFv(void *);

} /* extern "C" */

struct C801B2A50 {
    u8 pad[420];
    C801B2A50() {
        __ct__9C801DDC8CFv(this);
        *(void **)((u8 *)this + 128) = lbl_802EACC8;
        *(s32 *)((u8 *)this + 364) = 0;
        *(s32 *)((u8 *)this + 392) = 0;
        *(s32 *)((u8 *)this + 396) = 0;
        *(s32 *)((u8 *)this + 404) = 0;
        *(s32 *)((u8 *)this + 368) = 0;
        *(s32 *)((u8 *)this + 372) = 0;
        *(s32 *)((u8 *)this + 376) = 0;
        *(s32 *)((u8 *)this + 380) = 0;
        *(s32 *)((u8 *)this + 412) = 0;
        *(s32 *)((u8 *)this + 360) = 0;
        *(s32 *)((u8 *)this + 408) = 13;
        *(s32 *)((u8 *)this + 384) = 0;
        *(s32 *)((u8 *)this + 388) = 0;
        *(f32 *)((u8 *)this + 416) = lbl_80364EF8;
    }
};

extern "C" void *fn_801B2A50(void) {
    C801B2A50 *r;
    if (lbl_8035AFCC == 0) {
        fn_800604C4(-2, 0, 0, 0);
    }
    fn_800F7EC0(lbl_8035AFCC);
    r = new C801B2A50;
    fn_800F7E98();
    if (r == 0) {
        fn_800604C4(-4, 0, 0, 0);
    }
    return r;
}
