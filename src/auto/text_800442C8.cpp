// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

#include "common.h"
struct V3 { f32 x, y, z; };
struct Act { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void getPos(V3 *, int, int, int, int); };
struct Obj { char pad0[224]; Act *a224; char pad1[280-228]; Act *a280; char pad2[296-284]; f32 *lim; f32 *spd; char pad3[312-304]; s32 on; char pad4[344-316]; f32 cur; };
extern "C" {
void fn_80101820(V3 *);
void fn_80071E34(Act *, V3 *);
void fn_8023FE08(Obj *, f32);
void fn_800442C8(Obj *o, f32 t) {
    if (o->on != 0 && o->cur < *o->lim) {
        V3 d, a, b;
        o->a280->getPos(&a, 0, 0, 0, 0);
        o->a224->getPos(&b, 0, 0, 0, 0);
        d.x = a.x - b.x; d.y = a.y - b.y; d.z = a.z - b.z;
        fn_80101820(&d);
        f32 k = *o->spd * t;
        d.x *= k; d.y *= k; d.z *= k;
        fn_80071E34(o->a280, &d);
    }
    fn_8023FE08(o, t);
}
}

} /* extern "C" */
