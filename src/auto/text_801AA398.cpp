// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
} /* extern "C" */
struct VT_801AA398 {
    u8 pad[128];
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
    virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(s32);
    virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24();
    virtual void v25();
};
extern "C" {

typedef struct X372_801AA398 { u8 pad[396]; void *f396; } X372_801AA398;
typedef struct X376_801AA398 { u8 pad[360]; s32 f360; } X376_801AA398;
typedef struct Obj_801AA398 {
    u8 pad0[92]; f32 f92; u8 pad96[4]; f32 f100; u8 pad104[4]; u32 f108; u8 pad112[248];
    f32 f360; s32 f364; struct Obj_801AA398 *f368; X372_801AA398 *f372; X376_801AA398 *f376;
} Obj_801AA398;

extern f32 lbl_80364E88;
void fn_801DB744(Obj_801AA398 *);
void fn_801AF27C(X372_801AA398 *, void *);
void fn_801BD8A0(void *, s32, s32, void *, f32);

s32 fn_801AA398(Obj_801AA398 *self) {
    fn_801DB744(self);
    if (self->f364 == 0) {
        self->f360 = self->f368->f92 - (self->f100 - self->f92);
        self->f364 = 1;
    }
    if (self->f368 != 0) {
        self->f368->f108 &= ~2;
        ((VT_801AA398 *)self->f368)->v20(0);
    }
    if (self->f372 != 0) fn_801AF27C(self->f372, self->f372->f396);
    if (self->f376 != 0) self->f376->f360 = 0;
    if (self->f372 != 0 && self->f376 != 0) {
        fn_801BD8A0(self->f372, 0, 0x4000, self, lbl_80364E88);
        fn_801BD8A0(self->f376, 0, 1, self, lbl_80364E88);
        fn_801BD8A0(self->f376, 1, 32, self, lbl_80364E88);
        fn_801BD8A0(self->f376, 2, 512, self, lbl_80364E88);
        fn_801BD8A0(self->f368, 0, 2048, self, lbl_80364E88);
        fn_801BD8A0(self->f368, 1, 64, self, lbl_80364E88);
        fn_801BD8A0(self->f368, 2, 4, self, self->f360);
        ((VT_801AA398 *)self)->v25();
    }
    return 0;
}

} /* extern "C" */
