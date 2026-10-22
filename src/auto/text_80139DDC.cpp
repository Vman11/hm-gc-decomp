// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

/* QV=2.0p1 */
} /* extern "C" */
struct Vec { f32 x, y, z; };
struct Buf { u8 *data; s32 stride; u8 pad[112]; };
struct Obj {
    u8 pad[12];
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
    virtual void v15(); virtual void v16(); virtual void v17();
    virtual void update(s32);
    virtual void v19(); virtual void v20(); virtual void v21();
    virtual void getBuf(Buf *, s32);
};
extern "C" {
void fn_80139DDC(Obj *o, s32 idx, const Vec *v) {
    Buf buf;
    o->getBuf(&buf, 8);
    *(Vec *)(buf.data + idx * buf.stride) = *v;
    o->update(idx);
}

} /* extern "C" */
