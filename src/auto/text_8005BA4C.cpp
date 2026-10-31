// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

#include "common.h"

struct V3 { f32 x, y, z; V3() {} V3(f32 a, f32 b, f32 c) { x = a; y = b; z = c; } };
inline V3 Cross(const V3 &a, const V3 &b) {
    V3 t; t.x = a.y * b.z - a.z * b.y; t.y = a.z * b.x - a.x * b.z; t.z = a.x * b.y - a.y * b.x; return t;
}
class C802449C4 { public: u8 d[56]; C802449C4(); ~C802449C4(); };
#define V(n) virtual void n();
class Cam { public: V(c0) V(c1) V(c2) V(c3) V(c4) V(c5) V(c6) V(c7) V(c8) V(c9) V(c10) V(c11) V(c12)
    virtual void get(V3 *, V3 *, V3 *, V3 *, int); virtual void set(V3 *, V3 *, V3 *, V3 *, int); };
struct St { s32 f0; u8 p[16]; s32 f20; };
struct Ps { u8 p[12]; u32 f12; u8 p16[508]; void *f524; };
struct O { u8 p0[224]; Cam *f224; u8 p228[68]; s32 *f296; u32 *f300; s32 *f304; u8 p308[8]; f32 *f316; char *f320; u32 f324; u8 p328[12];
    V3 *f340; u8 p344[8]; s32 f352; s32 f356; s32 f360; s32 f364; };
extern "C" {
extern f32 lbl_8035E420;
extern f32 lbl_8035E424;
extern char lbl_8035E3A8[8];
St *fn_80242144(O *, int);
void fn_802448C8(C802449C4 *, St *);
void fn_80244750(C802449C4 *, int);
Cam *fn_8024457C(C802449C4 *);
void fn_80244594(C802449C4 *);
int fn_80244584(C802449C4 *);
Ps *fn_80240028(void *);
V3 *fn_80245F8C(Ps *, u32);
void fn_80245E58(Ps *, int, V3 *);
void fn_80245D9C(Ps *, int, V3 *, V3 *, int, int);
f32 fn_80101590(V3 *, V3 *);
int fn_800F6CD0(char *, char *);
void fn_80242BC0(St *, char *, Cam *, int, u32, int);
void fn_8023FE08(O *, f32);
}
extern "C" void fn_8005BA4C(O *o, f32 t) {
    V3 v, c, b, a, M, Q, P;
    if (o->f360) {
        if (fn_80242144(o, 3)->f20 > 0 && o->f296 && *o->f296 && o->f300) {
            C802449C4 it;
            fn_802448C8(&it, fn_80242144(o, 3));
            fn_80244750(&it, 0);
            o->f340 = fn_80245F8C(fn_80240028(((Ps *)fn_8024457C(&it))->f524), *o->f300);
        }
        if (fn_80240028(o)->f12) {
            fn_80245E58(fn_80240028(o), 0, &M);
            { f32 z0 = lbl_8035E420; a.x = z0; ((f32 *)&M)[4] = z0; a.z = lbl_8035E424; f32 y = a.z;
            ((f32 *)&M)[6] = z0; b.y = y; b.z = z0; }
            fn_80245D9C(fn_80240028(o), 0, &a, &b, 0, 0);
            c = Cross(b, a);
            if (o->f364) {
                o->f224->set(&M, &b, &a, &c, 0);
                o->f364 = 0;
            } else {
                o->f224->set(&M, 0, 0, 0, 0);
            }
        }
        o->f360 = 0;
    }
    if (o->f340) {
        o->f224->get(&v, 0, 0, 0, 0);
        { V3 *d = o->f340; d->x = v.x; d->y = v.y; d->z = v.z; }
    }
    if (o->f356 && !o->f352 && o->f316 && o->f320) {
        C802449C4 it;
        u8 done;
        fn_802448C8(&it, fn_80242144(o, 1));
        fn_80244750(&it, 0);
        done = 0;
        o->f224->get(&P, 0, 0, 0, 0);
        while (!fn_80244584(&it) && !done) {
            fn_8024457C(&it)->get(&Q, 0, 0, 0, 0);
            if (o->f304 && *o->f304) Q.z = P.z;
            if (fn_80101590(&P, &Q) <= *o->f316) {
                char *s = o->f320;
                u32 x = o->f324;
                if (s && !fn_800F6CD0(s, lbl_8035E3A8)) fn_80242BC0(fn_80242144(o, 2), s, o->f224, 0, x, 0);
                done = 1;
            }
            fn_80244594(&it);
        }
    }
    fn_8023FE08(o, t);
}

} /* extern "C" */
