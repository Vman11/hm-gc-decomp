// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
// NonMatching draft (wGJ): 16 lines off, only r4/r5 swapped in the two Go() else branches (flag word vs fd0 table).
#include "common.h"

extern "C" {

struct VO { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19(); virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void hide(); virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31(); virtual void v32(); virtual void send(void *msg, void *to, int a, void *d, int b); };
struct Cl { u8 p[4]; f32 f4; u8 p8[44]; u16 f52; };
struct Tm { u8 p[4]; f32 f4; };
struct Ob {
    u8 p0[0x60]; s32 f60;
    u8 p64[0xd0 - 0x64]; Cl **fd0;
    u8 pd4[0xe0 - 0xd4]; VO *fe0; VO *fe4; u8 pe8[4]; f32 *fec;
    u8 pf0[0x124 - 0xf0]; s32 *f124; s32 *f128;
    u8 p12c[0x158 - 0x12c]; f32 *f158; f32 *f15c;
    u8 p160[0x17c - 0x160]; s32 f17c; VO *f180; s32 f184; s32 f188; s32 f18c;
    u8 p190[0x198 - 0x190]; s32 f198; s32 f19c; s32 f1a0; u8 p1a4[4]; s32 f1a8; VO *f1ac;
    u8 p1b0[4]; u32 f1b4; u32 *f1b8; u32 f1bc; u32 f1c0; u8 p1c4[4]; u32 f1c8; u32 f1cc;
    f32 f1d0;
};
extern char lbl_80298A60[];
extern f32 lbl_8035FC28;
extern f64 lbl_8035FC20;
extern char lbl_8035FBF4[4], lbl_8035FBFC[4];
s32 fn_8022C558(VO *);
void fn_8022A7A8(VO *);
Tm *fn_8022D694(VO *);
f64 fn_800F04FC(f64, f64);
void fn_80241DD0(Ob *, char *, int, int, int, int);
void *fn_80242144(Ob *, int);
void fn_80242BC0(void *, char *, VO *, int, f32 *, int);
void fn_802494A4(Ob *, int);
void fn_8023FE08(Ob *, f32);

inline u32 Raw(Ob *o) { return (s32)(*o->f1b8 & o->f1c8) >> 27; }
inline u32 Mode(Ob *o) {
    u32 v = Raw(o);
    return v == 3 ? 1 : v;
}
inline bool IsAB(Ob *o) { bool b = true; if (Mode(o) != 1 && Mode(o) != 3) b = false; return b; }
inline f32 Vel(Ob *o) {
    Cl *c = o->fd0[Mode(o)];
    f32 s = (Raw(o) == 1) ? *o->f158 : -*o->f15c;
    s = s * o->f1d0;
    return s * c->f4;
}
inline void Upd(Ob *o) {
    f32 sp;
    *o->f1b8 &= ~o->f1cc;
    sp = lbl_8035FC28;
    {
        u32 m = Mode(o);
        if (m == 1 && o->fd0[m] && o->fd0[m]->f52)
            sp = fn_8022D694(o->fe0)->f4 / o->fd0[m]->f52;
    }
    *o->f1b8 |= (u32)(sp * (f32)fn_800F04FC(lbl_8035FC20, o->f1b4));
}
inline f32 Pos(Ob *o, Cl **tb, f32 x) {
    u32 m = Mode(o);
    f32 n = tb[m]->f52;
    return n * x;
}
inline void Go(Ob *o, char *s) {
    f32 v;
    if (o->f1a8 == 0) {
        f64 p = fn_800F04FC(lbl_8035FC20, o->f1b4);
        v = (f32)(s32)(*o->f1b8 & o->f1cc) / (f32)p;
        o->fec = &v;
    } else {
        o->f1ac = o->fe4;
        f32 x = *o->fec;
        v = x;
        fn_8022D694(o->fe0)->f4 = Pos(o, o->fd0, x);
        Upd(o);
    }
    fn_80242BC0(fn_80242144(o, 1), s, o->fe0, 0, o->fec, 0);
}

void fn_800824C0(Ob *o, f32 dt) {
    char *str = lbl_80298A60;
    if ((*o->f1b8 & o->f1bc) == 0 && fn_8022C558(o->fe0)) {
        *o->f1b8 &= ~o->f1bc;
        o->fe0->hide();
        fn_8022A7A8(o->fe0);
    } else if (IsAB(o) && o->f1a0 && !o->f1a8) {
        f32 d = Vel(o);
        f32 mx = o->fd0[Mode(o)]->f52;
        f32 cur = fn_8022D694(o->fe0)->f4;
        f32 t = d * dt + cur;
        if (t < lbl_8035FC28) {
            t = lbl_8035FC28;
            fn_80241DD0(o, str + 0x18, 0, 0, 0, 0);
        } else if (t > mx) {
            t = mx;
            fn_80241DD0(o, str + 0x18, 0, 0, 0, 0);
        }
        fn_8022D694(o->fe0)->f4 = t;
        Upd(o);
        if (o->f60 == 2) {
            Go(o, lbl_8035FBF4);
        } else if (o->f60 == 4) {
            Go(o, str + 0x30);
        }
    }
    if ((*o->f1b8 & o->f1bc) && !IsAB(o) && o->f184 == 0) {
        if (o->f180 && o->f180 != o->fe0 && o->f19c == 0) o->f180->send(lbl_8035FBFC, 0, 0, 0, 0);
        o->f198 = 0;
        o->f19c = 1;
        o->f180 = 0;
        if (o->f17c && (*o->f1b8 & o->f1bc) != 0 && (*o->f1b8 & o->f1c0) == 0 && *o->f124 == 0 &&
            (*o->f128 != 0 || o->f188 == 0) && o->f188 == 0) {
            o->f1a0 = 1;
            o->f18c = 0;
            if (o->fe4 && o->f198 == 0) {
                o->f180 = o->fe4;
                o->f180->send(str + 0x54, 0, 0, 0, 0);
                o->f198 = 1;
                o->f19c = 0;
            }
            fn_802494A4(o, 4);
        }
    }
    fn_8023FE08(o, dt);
}

} /* extern "C" */
