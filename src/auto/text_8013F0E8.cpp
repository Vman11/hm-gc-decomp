// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct B30 { u8 pad[0x30]; };
struct O31 : B30 {
    virtual void v0(); virtual void v1(); virtual void v2();
    virtual void v3(s32 a, s32 b, s32 c, s32 d, s32 e, u32 f);

};
struct O31b { u8 pad[0x2a]; u16 n; u8 buf[1]; };
struct B14 { u8 pad[0x14]; };
struct M31 : B14 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5();
    virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual O31 *v16(s32 i);
};
struct P31 { s32 f0; u8 p4[4]; M31 *m; s32 fc; u8 p10[0x80 - 0x10]; u32 f80; u8 p84[4]; s32 f88; u8 p8c[4]; s32 f90; s32 f94; u32 f98; s32 f9c[4]; s32 fac; u32 fb0; };
void fn_8013F0E8(P31 *p) {
    p->f80 &= ~1;
    if (p->fb0 == 0) {
        p->f90--;
        return;
    }
    O31 *o = p->m->v16(p->f90 - 1);
    if (p->fc == 1) o->v3(p->f0, 8, p->f88, p->f94, p->fac, p->fb0);
    else o->v3(p->f0, 4, p->f88, p->f94, p->fac, p->fb0);
    O31b *b = (O31b *)o;
    for (u32 i = 0; i < p->f98; i++) b->buf[b->n++] = p->f9c[i];
}

} /* extern "C" */
