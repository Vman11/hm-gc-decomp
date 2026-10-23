// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
} /* extern "C" */
struct V80120410 {
    u8 pad[16];
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual s32 v4(u32);
};
struct S80120410 {
    u8 pad0[16];
    u32 f16;
    u32 f20;
    u32 f24;
    u8 pad28[2];
    u16 f30;
    u8 pad32[16];
    u8 f48[4];
    V80120410 *f52;
    u32 f56;
    u8 pal[321][4];
    u32 f1344;
    u32 f1348;
};
extern "C" {
void fn_801485B4(S80120410 *, s32);
s32 fn_802108B4(u8 *, u8 *, u32, u32 *);

static inline void wp80120410(S80120410 *self, u8 *out) {
    u32 i;
    u8 *dst = out;
    for (i = 0; i < self->f56; i++) {
        dst[0] = self->pal[i][2];
        dst[1] = self->pal[i][1];
        dst[2] = self->pal[i][0];
        dst += 3;
    }
}
void fn_80120410(S80120410 *self, u8 *buf) {
    u32 i;
    u8 *dst;
    u8 *out;
    s32 err;
    u32 tmp;
    out = buf + 16;
    buf[0] = self->f16;
    buf[1] = self->f16 >> 8;
    buf[2] = self->f20;
    buf[3] = self->f20 >> 8;
    buf[4] = self->f30;
    buf[5] = (u32)self->f30 >> 8;
    buf[6] = self->f56;
    buf[7] = self->f56 >> 8;
    buf[8] = self->f24;
    buf[9] = self->f24 >> 8;
    buf[10] = self->f24 >> 16;
    buf[11] = self->f24 >> 24;
    buf[12] = self->f1348;
    buf[13] = self->f1348 >> 8;
    buf[14] = self->f1348 >> 16;
    buf[15] = self->f1348 >> 24;
    wp80120410(self, out);
    out += self->f56 * 3;
    err = self->f52->v4(self->f1344);
    if (err) fn_801485B4(self, err);
    err = fn_802108B4(self->f48, out, self->f1348, &tmp);
    if (err) fn_801485B4(self, err);
}

} /* extern "C" */
