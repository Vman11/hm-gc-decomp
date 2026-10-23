// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
} /* extern "C" */
struct D8011FA98 { u32 f0; u32 f4; u32 f8; u32 f12; u32 f16; u32 f20; f32 f24; };
struct C8011FA98 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16(u32 a);
    u32 f4;
    u32 f8;
    u32 f12;
    f32 f16;
    u8 pad[12];
    u32 f32;
    u32 f36;
    u32 f40;
};
extern "C" {
extern f32 lbl_80363DC8;
extern f32 lbl_80363DCC;

s32 fn_8011FA98(C8011FA98 *self, const D8011FA98 *d) {
    self->v13();
    self->f4 = d->f12;
    self->v16(d->f8);
    self->f40 = d->f0;
    self->f36 = d->f16;
    self->f36 &= ~1;
    if (d->f20 != 0) {
        self->f12 = d->f20;
    } else {
        self->f12 = 5;
    }
    if (lbl_80363DC8 != d->f24) {
        self->f16 = d->f24;
    } else {
        self->f16 = lbl_80363DCC;
    }
    self->f32 = 1;
    return 0;
}

} /* extern "C" */
