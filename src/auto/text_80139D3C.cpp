// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

} /* extern "C" */
struct Desc80139D3C { u8 *data; s32 stride; u8 pad[112]; };
struct Obj80139D3C {
    u8 pad[12];
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17();
    virtual void Unlock(s32 idx);
    virtual void v19(); virtual void v20(); virtual void v21();
    virtual void Lock(Desc80139D3C *d, s32 flags);
};
struct Vec4_80139D3C { f32 x, y, z, w; };
extern "C" {
#pragma opt_propagation off
void fn_80139D3C(Obj80139D3C *o, s32 idx, Vec4_80139D3C *src) {
    Desc80139D3C d;
    Vec4_80139D3C *dst;
    f32 w, z, y, x;
    o->Lock(&d, 8);
    x = src->x; y = src->y; z = src->z; w = src->w;
    dst = (Vec4_80139D3C *)(d.data + idx * d.stride);
    dst->x = x; dst->y = y; dst->z = z; dst->w = w;
    o->Unlock(idx);
}
#pragma opt_propagation reset

} /* extern "C" */
