// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

}
struct Lt { u8 pad_[208]; virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9(); virtual void s10(); virtual void s11(); virtual void s12(); virtual void s13(); virtual void s14(); virtual void set(f32, int, int); virtual void off(int); };
struct Lst { u8 pad[12]; int n; };
struct Tb { virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9(); virtual void s10(); virtual void s11(); virtual void s12(); virtual void s13(); virtual void s14(); virtual void s15(); virtual void s16(); virtual void s17(); virtual void s18(); virtual void s19(); virtual void s20(); virtual void s21(); virtual void s22(); virtual Lt **get(int); };
extern "C" {
struct H44 { u8 pad[24]; Tb *x24; };
struct O { int id; int state; u8 pad8[4]; f32 f12; f32 f16; int toggle; int dir; u32 t28; u32 timeout; u32 period; u8 pad40[4]; H44 *x44; int x48; };
extern f32 lbl_80366568;
u32 fn_800FBB9C(void);
static inline Lt *L(O *o) { return *o->x44->x24->get(o->id); }
static inline void AllOff(O *o) {
    if (o->id != -1) {
        int i, n = ((Lst *)L(o))->n;
        for (i = 0; i < n; i++) L(o)->off(i);
    }
}
static inline void AllOff2(O *o) {
    if (o->id != -1) {
        int n = ((Lst *)L(o))->n;
        int i;
        for (i = 0; i < n; i++) L(o)->off(i);
    }
}
static inline void AllSet3(O *o, f32 f) {
    if (o->id != -1) {
        int n = ((Lst *)L(o))->n;
        int i;
        for (i = 0; i < n; i++) {
            if (f > lbl_80366568 && o->x48 == 0) L(o)->set(f, i, 0);
            else L(o)->off(i);
        }
    }
}
static inline void AllSet(O *o, f32 f) {
    if (o->id != -1) {
        int i, n = ((Lst *)L(o))->n;
        for (i = 0; i < n; i++) {
            if (f > lbl_80366568 && o->x48 == 0) L(o)->set(f, i, 0);
            else L(o)->off(i);
        }
    }
}
void fn_80252DB0(O *o) {
    if (o->id == -1 || o->x48 != 0 || o->state == 0) return;
    switch (o->state) {
    case 1:
        if (fn_800FBB9C() > o->t28 + o->period) {
            if (o->toggle) {
                o->state = 0;
                AllOff2(o);
            } else {
                AllSet3(o, o->f12);
            }
            o->toggle = 1 - o->toggle;
            o->t28 = fn_800FBB9C();
        }
        break;
    case 2: {
        f32 f = (f32)(s32)(fn_800FBB9C() - o->t28) / (f32)o->period;
        if (o->dir == 0) f = 1.0 - f;
        AllSet(o, f * (o->f12 - o->f16) + o->f16);
        if (fn_800FBB9C() > o->t28 + o->period) {
            o->dir = 1 - o->dir;
            o->t28 = fn_800FBB9C();
        }
        break;
    }
    }
    if (fn_800FBB9C() - o->t28 > 5000) {
        o->state = 0;
        AllOff(o);
    }
    if (o->timeout && fn_800FBB9C() > o->timeout) {
        o->state = 0;
        AllOff(o);
    }
}

} /* extern "C" */
