// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern void *lbl_8035AFCC;
extern u8 lbl_802EAB78[];
extern volatile f32 lbl_80364ED8;
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
void fn_801B31A4(void *);

} /* extern "C" */

struct C801AF15C {
    u8 pad[388];
    C801AF15C() {
        fn_801B31A4(this);
        *(void **)((u8 *)this + 128) = lbl_802EAB78;
        *(f32 *)((u8 *)this + 356) = lbl_80364ED8;
        *(f32 *)((u8 *)this + 360) = lbl_80364ED8;
        *(f32 *)((u8 *)this + 364) = lbl_80364ED8;
        *(f32 *)((u8 *)this + 368) = lbl_80364ED8;
    }
};

extern "C" void *fn_801AF15C(void) {
    C801AF15C *r;
    if (lbl_8035AFCC == 0) {
        fn_800604C4(-2, 0, 0, 0);
    }
    fn_800F7EC0(lbl_8035AFCC);
    r = new C801AF15C;
    fn_800F7E98();
    if (r == 0) {
        fn_800604C4(-4, 0, 0, 0);
    }
    return r;
}
