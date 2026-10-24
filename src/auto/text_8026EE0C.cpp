// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

#define F(p,o,t) (*(t*)((u8*)(p)+(o)))
struct SN { virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9(); virtual void s10(); virtual void s11(); virtual void s12(); virtual void s13(); virtual void s14(); virtual void s15(); virtual void s16(); virtual void s17(); virtual void s18(); virtual void s19(); virtual void s20(); virtual void s21(); virtual void s22(); virtual void s23(); virtual void s24(); virtual void s25(); virtual void s26(); virtual void s27(); virtual void s28(); virtual void s29(); virtual void s30(); virtual void s31(); virtual void s32(); virtual void s33(); virtual void s34(); virtual void s35(); virtual void s36(); virtual void s37(); virtual void s38(); virtual void s39(); virtual void s40(); virtual void s41(); virtual void s42(); virtual void s43(); virtual void s44(); virtual void s45(); virtual void s46(); virtual void s47(); virtual void s48(); virtual void s49(); virtual void st(void *, int); };
struct SNode { SN *obj; int on; SNode *next; };
struct WV { u8 pad_[128]; virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9(); virtual void s10(); virtual void s11(); virtual void s12(); virtual void s13(); virtual void s14(); virtual void s15(); virtual void s16(); virtual void s17(); virtual void s18(); virtual void s19(); virtual void show(int); };
struct IV { u8 pad_[16]; virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void act(); };
struct T { virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9(); virtual void s10(); virtual void s11(); virtual void s12(); virtual void s13(); virtual void s14(); virtual void s15(); virtual void s16(); virtual void s17(); virtual void s18(); virtual void s19(); virtual void s20(); virtual void s21(); virtual void s22(); virtual void s23(); virtual void s24(); virtual void s25(); virtual void s26(); virtual void s27(); virtual void s28(); virtual void s29(); virtual void s30(); virtual void s31(); virtual void s32(); virtual void fire(u32, u32);
    u8 *f4; u32 f8; WV *f12; u32 f16; f32 f20; int f24; };
void fn_801CEAC8(u8 *, void *, f32);
f32 fn_801CEB80(u8 *, void *);
IV *fn_801BD874(WV *, u32);
static inline void setSt(u8 *w, int s) {
    SNode *n;
    for (n = F(w,0x88,SNode*); n; n = n->next) n->obj->st(w, s);
    F(w,0x148,u32) = F(w,0x144,u32);
    F(w,0x144,u32) = (F(w,0x144,u32) & ~0xffff) | s;
}
int fn_8026EE0C(T *t, WV *w, u32 a) {
    u32 i;
    if (w == t->f12) {
        if (t->f24) {
            fn_801CEAC8(t->f4, t->f4 + 360, t->f20);
            t->fire(t->f8, a);
            return 0;
        }
        return 1;
    }
    t->f24 = !t->f24;
    if (t->f24) {
        t->f20 = fn_801CEB80(t->f4, t->f4 + 360);
        setSt(t->f4, 32);
    } else {
        setSt(t->f4, 2);
    }
    F(t->f4,0x11c,WV*)->show(t->f24);
    w->show(!t->f24);
    for (i = 0; i < F(F(w,0x70,u8*),8,u32); i++) {
        if (F(F(w,0x70,u8*),0x1c,u32*)[i] == 16) fn_801BD874(w, i)->act();
    }
    return 0;
}

} /* extern "C" */
