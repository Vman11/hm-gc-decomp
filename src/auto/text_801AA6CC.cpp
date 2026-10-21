// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern void *lbl_8035AFCC;
extern u8 lbl_802EA970[];
extern f32 lbl_80364E88;
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
void fn_801B31A4(void *);

} /* extern "C" */

struct C801AA6CC {
    u8 pad[380];
    C801AA6CC() {
        fn_801B31A4(this);
        *(void **)((u8 *)this + 128) = lbl_802EA970;
        *(s32 *)((u8 *)this + 356) = 1;
        *(s32 *)((u8 *)this + 368) = 0;
        *(s32 *)((u8 *)this + 372) = 0;
        *(s32 *)((u8 *)this + 376) = 0;
        *(f32 *)((u8 *)this + 360) = lbl_80364E88;
        *(s32 *)((u8 *)this + 364) = 0;
    }
};

extern "C" void *fn_801AA6CC(void) {
    C801AA6CC *r;
    if (lbl_8035AFCC == 0) {
        fn_800604C4(-2, 0, 0, 0);
    }
    fn_800F7EC0(lbl_8035AFCC);
    r = new C801AA6CC;
    fn_800F7E98();
    if (r == 0) {
        fn_800604C4(-4, 0, 0, 0);
    }
    return r;
}
