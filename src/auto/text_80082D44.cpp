// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

#include "common.h"

struct Cl { u8 p[52]; u16 f52; };
struct Tm { u8 p[4]; f32 f4; f32 f8; u8 p12[4]; Tm *f16; u8 p20[16]; f32 f36; };
struct Ob { u8 p0[208]; Cl **f208; u8 p212[12]; void *f224; u8 p228[176]; s32 f404; u8 p408[24]; s32 f432; u32 f436; u32 *f440; u8 p444[12]; u32 f456; u32 f460; };
extern "C" {
extern f32 lbl_8035FC28;
extern char lbl_80298A78[];
Tm *fn_8022D694(void *);
void fn_80241588(Ob *, u32, int, f32);
f64 fn_800F04FC(f64, f64);
void fn_80241DD0(Ob *, char *, int, int, int, int);
}
inline u32 Mode(Ob *o) {
    u32 v = (s32)(*o->f440 & o->f456) >> 27;
    return v == 3 ? 1 : v;
}
inline bool IsAB(Ob *o) { bool b = true; if (Mode(o) != 1 && Mode(o) != 3) b = false; return b; }
inline void SetT(Tm *t, f32 v) {
    t->f8 = v;
    if (t->f16) t->f36 = t->f8 / t->f16->f4;
}
extern "C" void fn_80082D44(Ob *o, u32 mode) {
    u32 old = Mode(o);
    f32 sp;
    *o->f440 &= ~o->f456;
    *o->f440 |= mode << 27;
    if (o->f208[Mode(o)] && fn_8022D694(o->f224)) {
        sp = fn_8022D694(o->f224)->f4;
        fn_80241588(o, Mode(o), 0, 0.2f);
        { Tm *t = fn_8022D694(o->f224); SetT(t, 0.0f); }
        f32 r = 0.0f;
        if (o->f404 && o->f432 && IsAB(o)) {
            u32 n = o->f208[1]->f52;
            f64 p = fn_800F04FC(10.0, o->f436);
            f32 d = (f32)(s32)(*o->f440 & o->f460) / (f32)p;
            r = d * n;
        } else if ((mode == 1 || mode == 3) && old == 1) {
            r = sp;
        } else if (mode == 3 && (old == 2 || (old == 1 && 0.0f == sp))) {
            r = o->f208[Mode(o)]->f52;
        }
        fn_8022D694(o->f224)->f4 = r;
        *o->f440 &= ~o->f460;
        sp = lbl_8035FC28;
        {
            u32 m = Mode(o);
            if (m == 1 && o->f208[m] && o->f208[m]->f52)
                sp = fn_8022D694(o->f224)->f4 / o->f208[m]->f52;
        }
        *o->f440 |= (u32)(sp * (f32)fn_800F04FC(10.0, o->f436));
        return;
    }
    fn_80241DD0(o, lbl_80298A78, 0, 0, 0, 0);
}

} /* extern "C" */
