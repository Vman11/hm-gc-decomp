// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct A { u8 pad_[128]; virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void v5(); virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9(); virtual void s10(); virtual void s11(); virtual void s12(); virtual void s13(); virtual void s14(); virtual void s15(); virtual void s16(); virtual void s17(); virtual void s18(); virtual void s19(); virtual void v20(int); virtual void s21(); virtual void s22(); virtual void s23(); virtual void s24(); virtual void s25(); virtual void s26(); virtual void s27(); virtual void s28(); virtual void s29(); virtual void s30(); virtual void s31(); virtual void s32(); virtual void s33(); virtual void s34(); virtual void s35(); virtual void s36(); virtual void s37(); virtual void s38(); virtual void s39(); virtual void s40(); virtual void s41(); virtual void s42(); virtual void s43(); virtual void s44(); virtual void s45(); virtual void s46(); virtual void s47(); virtual void s48(); virtual void s49(); virtual void s50(); virtual void s51(); virtual void s52(); virtual void s53(); virtual void s54(); virtual void s55(); virtual void s56(); virtual void s57(); virtual void s58(); virtual void v59(u32,int); virtual void v60(u32,int); virtual void s61(); virtual void s62(); virtual void s63(); virtual void s64(); virtual void s65(); virtual void s66(); virtual void s67(); virtual void s68(); virtual void s69(); virtual void s70(); virtual void s71(); virtual void v72(int); virtual void s73(); virtual void s74(); virtual void s75(); virtual void s76(); virtual void s77(); virtual void s78(); virtual void s79(); virtual void s80(); virtual void s81(); virtual void s82(); virtual void s83(); virtual void s84(); virtual void s85(); virtual void v86(); };
struct N { virtual int v0(int); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9(); virtual void s10(); virtual void s11(); virtual void s12(); virtual void s13(); virtual void s14(); virtual void s15(); virtual void s16(); virtual void s17(); virtual void s18(); virtual void s19(); virtual void s20(); virtual void s21(); virtual void s22(); virtual void s23(); virtual void s24(); virtual void s25(); virtual void s26(); virtual void s27(); virtual void s28(); virtual void s29(); virtual void s30(); virtual void s31(); virtual void s32(); virtual void s33(); virtual void s34(); virtual void s35(); virtual void s36(); virtual void s37(); virtual void s38(); virtual void s39(); virtual void s40(); virtual void s41(); virtual void s42(); virtual void s43(); virtual void s44(); virtual void s45(); virtual void s46(); virtual void s47(); virtual void s48(); virtual void s49(); virtual void v50(void*,u16); virtual void v51(void*,void*); };
#define F(p,o,t) (*(t*)((u8*)(p)+(o)))
struct Node { N *obj; int on; Node *next; };
void *fn_8010EE60(void *, void *);
void *fn_8010D0BC(void *, void *);
static inline void setState(u8 *o, u16 s) {
    for (Node *n = F(o,0x88,Node*); n; n = n->next) n->obj->v50(o, s);
    F(o,0x148,u32) = F(o,0x144,u32);
    F(o,0x144,u32) = (F(o,0x144,u32) & 0xffff0000) | s;
}
void fn_801C95EC(u8 *p, u32 key) {
    if (F(p,0x178,u8*) && F(p,0x16c,u8*)) {
        u8 *s = F(p,0x178,u8*);
        u8 *d = F(p,0x16c,u8*);
        u32 save;
        F(d,0x48,f32) = F(s,0x48,f32);
        F(d,0x4c,f32) = F(s,0x4c,f32);
        F(d,0x50,f32) = F(s,0x50,f32);
        F(d,0x54,f32) = F(s,0x54,f32);
        save = F(p,0x18c,u32);
        F(p,0x18c,u32) = 0;
        F(p,0x190,u32) = F(F(p,0x164,u8*),0x20,u32);
        F(F(F(p,0x16c,u8*),0x188,u8*),0x28,void*) = fn_8010D0BC(fn_8010EE60(p + 0x180, F(p,0x1bc,void*)), F(p,0x1c0,void*));
        F(p,0x16c,A*)->v5();
        F(p,0x18c,u32) = save;
        ((A *)p)->v86();
        setState(F(p,0x178,u8*), 16);
        ((A *)p)->v60(key, 1);
        F(p,0x16c,A*)->v20(1);
        F(F(p,0x16c,u8*),0x6c,u32) |= 2;
        F(p,0x16c,A*)->v59(key, 1);
        F(p,0x16c,A*)->v72(1);
        for (Node *n = F(p,0x88,Node*); n; n = n->next) if (n->obj->v0(16) && n->on) n->obj->v51(p, F(p,0x16c,void*));
    }
}

} /* extern "C" */
