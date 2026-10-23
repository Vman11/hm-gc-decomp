// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
} /* extern "C" */
struct P801F7694 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4();
};
extern "C" {
typedef struct V2_801F7694 { f32 x, y; } V2_801F7694;
typedef struct D801F7694 {
    u8 pad[8];
    u8 f8[16];
    f32 f24;
    f32 f28;
    f32 f32_;
    V2_801F7694 *f36;
    f32 f40;
    f32 f44;
    f32 f48;
} D801F7694;

void fn_801EF9A0(P801F7694 *p, const D801F7694 *d);
void fn_80121D44(void *a, const void *b);

void fn_801F7694(P801F7694 *p, const D801F7694 *d) {
    if (M2C_FIELD(p, s32 *, 8) != 0) {
        p->v4();
    }
    fn_801EF9A0(p, d);
    fn_80121D44((u8 *)p + 56, d->f8);
    M2C_FIELD(p, f32 *, 72) = d->f24;
    M2C_FIELD(p, f32 *, 76) = d->f28;
    M2C_FIELD(p, f32 *, 80) = d->f32_;
    M2C_FIELD(p, f32 *, 96) = d->f40;
    M2C_FIELD(p, f32 *, 100) = d->f44;
    M2C_FIELD(p, f32 *, 108) = d->f48;
    if (d->f36 != 0) {
        M2C_FIELD(p, f32 *, 88) = d->f36->x;
        M2C_FIELD(p, f32 *, 92) = d->f36->y;
        M2C_FIELD(p, s32 *, 104) = 1;
    }
}

} /* extern "C" */
