// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

} /* extern "C" */
struct Obj {
    u8 pad[16];
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void f();
};
struct Ent { Obj *obj; u8 pad[24]; };
struct Self { u32 f0; Ent *f4; u32 f8; u8 pad[16]; u32 *f28; };
extern "C" {
void fn_801CDDE4(Self *s, u32 mask, Obj **arr) {
    u32 i;
    for (i = 0; i < s->f8; i++) {
        Obj *o = s->f4[i].obj;
        u32 fl;
        if (o == 0) continue;
        fl = s->f28[i];
        if ((mask & (fl & 0xFFFF)) == 0) continue;
        if ((mask >> 16) != (fl >> 16) && (fl & 0xFFFF0000) != 0) continue;
        if (arr != 0) {
            if (arr[i] != 0) arr[i]->f();
        } else {
            if (o != 0) o->f();
        }
    }
}

} /* extern "C" */
