// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

#include "common.h"

struct V3 { f32 x, y, z; };
struct K4 { u32 v; };
struct M20 { u8 d[20]; };
class S { public: u8 p[292]; virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void skip(int); virtual u32 next(); };
class O { public: void *f0; u32 f4; u32 f8; u32 f12; u32 f16, f20, f24, f28; f32 f32_; f32 f36, f40; V3 f44; u8 p56[12];
    virtual void set(void *); virtual void o1(); virtual void o2(); virtual void o3(); virtual void reset(); virtual void o5(); virtual void o6(); virtual void mat(M20 *); };
extern "C" {
extern u32 lbl_80364160, lbl_80364164, lbl_80364168, lbl_8036416C, lbl_80364170;
extern u32 lbl_80364174, lbl_80364178, lbl_8036417C, lbl_80364180, lbl_80364184;
void fn_800FAEF8(S *);
void fn_800FB000(S *, int);
void *fn_800FADA8(S *);
void fn_800FAEA0(S *);
void fn_80136ED0(O *, S *);
void fn_80121670(K4 *, S *);
void fn_80148310(M20 *);
u32 fn_80147CD8(M20 *, K4 *);
f32 fn_800FB2E0(S *);
void fn_80101124(V3 *, S *);
void fn_80101820(V3 *);
}
inline u32 Next(S *s) {
    s->skip(30);
    return s->next();
}
extern "C" void fn_80137530(O *o, void *a, S *s) {
    u32 c;
    K4 k[4];
    if (o->f4 & 1) o->reset();
    fn_800FAEF8(s);
    fn_800FB000(s, 'o');
    fn_800FAEF8(s);
    o->f8 = 0;
    o->f12 = 0;
    while ((c = s->next()) != 6) {
        switch (c) {
        case 'A': o->f8 |= lbl_80364174; break;
        case 'E': o->f8 |= lbl_80364178; break;
        case 'p': o->f8 |= lbl_8036417C; break;
        case 'q': o->f8 |= lbl_80364180; break;
        case 'r': o->f8 |= lbl_80364184; break;
        default: s->skip(30); break;
        }
    }
    while ((c = s->next()) != 6) {
        switch (c) {
        case 's':
            if (o->f0) s->skip(39);
            o->f0 = fn_800FADA8(s);
            o->set(a);
            fn_80136ED0(o, s);
            fn_800FAEA0(s);
            break;
        case 'E': {
            M20 m;
            fn_80121670(&k[0], s);
            fn_80148310(&m);
            o->mat(&m);
            o->f16 = fn_80147CD8(&m, &k[0]);
            o->f20 = o->f16;
            o->f24 = o->f16;
            o->f28 = o->f16;
            o->f4 |= lbl_80364170;
            break;
        }
        case 'p': {
            M20 m;
            fn_80121670(&k[0], s);
            fn_80121670(&k[1], s);
            fn_80121670(&k[2], s);
            fn_80121670(&k[3], s);
            fn_80148310(&m);
            o->mat(&m);
            o->f16 = fn_80147CD8(&m, &k[0]);
            o->f20 = fn_80147CD8(&m, &k[1]);
            o->f24 = fn_80147CD8(&m, &k[2]);
            o->f28 = fn_80147CD8(&m, &k[3]);
            o->f4 |= lbl_8036416C;
            break;
        }
        case 'q':
            o->f32_ = fn_800FB2E0(s);
            o->f4 |= lbl_80364168;
            break;
        case 'r': {
            f32 x = fn_800FB2E0(s);
            f32 y = fn_800FB2E0(s);
            o->f36 = x;
            o->f40 = y;
            o->f4 |= lbl_80364164;
            break;
        }
        case 't': {
            V3 v;
            fn_80101124(&v, s);
            o->f44.x = v.x; o->f44.y = v.y; o->f44.z = v.z;
            fn_80101820(&o->f44);
            o->f4 |= lbl_80364160;
            break;
        }
        default: s->skip(30); break;
        }
    }
}

} /* extern "C" */
