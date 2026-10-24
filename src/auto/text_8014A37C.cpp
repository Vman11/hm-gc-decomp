// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct O {
    u8 pad0[16]; u32 f16; u32 f20; u32 f24; u16 h28; u8 pad30[1340 - 30];
    virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void clear();
    u32 f1344; u8 *f1348; u8 pad1352[4]; u8 b1356, b1357, b1358, b1359, b1360, b1361;
};
void fn_80148210(void *, u32, u32, u32, u32);
void fn_8014824C(void *, u32, u32, u32, u32);
void fn_80148288(void *, u32, u32, u32, u32, u32, u32);
static inline u32 rd(u8 *p) { return p[0] + (p[1] << 8) + (p[2] << 16) + (p[3] << 24); }
void fn_8014A37C(O *o, u8 *p) {
    u8 *data;
    u8 fl;
    if (o->h28) o->clear();
    data = p + 18;
    o->f1344 = rd(p);
    o->f20 = rd(p + 4);
    o->f16 = rd(p + 8);
    o->b1357 = p[12];
    o->b1356 = p[13];
    o->b1358 = p[14];
    o->b1359 = p[15];
    o->b1360 = p[16];
    o->b1361 = p[17];
    fl = o->b1356;
    if (!(fl & 2)) {
        if (fl & 4) fn_80148210((u8 *)o + 28, o->b1357, 0xff00, 255, 0);
        else fn_80148210((u8 *)o + 28, o->b1357, 255, 0, 0);
    } else if (fl & 1) {
        fn_8014824C((u8 *)o + 28, o->b1357, 255, 0, 0);
    } else if (fl & 4) {
        fn_80148288((u8 *)o + 28, o->b1357, 0xff00, 0xff0000, 0xff000000, 255, 0);
    } else {
        fn_80148288((u8 *)o + 28, o->b1357, 0xff0000, 0xff00, 255, 0, 0);
    }
    o->f24 = (o->f16 * o->b1357 + 7) >> 3;
    o->f1348 = data;
}

} /* extern "C" */
