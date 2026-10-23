// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
} /* extern "C" */
struct V8019F1B0 {
    u8 pad[8];
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
};
struct S8019F1B0 {
    u8 pad[12];
    V8019F1B0 *f12;
    V8019F1B0 *f16;
    f32 f20;
};
extern "C" {
void fn_8018B8F8(void *a, S8019F1B0 *self);

void fn_8019F1B0(S8019F1B0 *self, void *a, const f32 *p) {
    f32 d = p[0] - self->f20;
    if (d >= p[3]) {
        if (self->f12) self->f12->v11();
    } else if (d < -p[3]) {
        if (self->f16) self->f16->v11();
    } else {
        fn_8018B8F8(a, self);
    }
}

} /* extern "C" */
