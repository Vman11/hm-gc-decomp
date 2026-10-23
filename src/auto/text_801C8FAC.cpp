// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct A { u8 pad_[128]; virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9(); virtual void s10(); virtual void s11(); virtual void s12(); virtual void s13(); virtual void s14(); virtual void s15(); virtual void s16(); virtual void s17(); virtual void s18(); virtual void s19(); virtual void s20(); virtual void s21(); virtual void s22(); virtual void s23(); virtual void s24(); virtual void s25(); virtual void s26(); virtual void s27(); virtual void s28(); virtual void s29(); virtual void s30(); virtual void s31(); virtual void s32(); virtual void s33(); virtual void s34(); virtual void s35(); virtual void s36(); virtual void s37(); virtual void s38(); virtual void s39(); virtual void s40(); virtual void s41(); virtual void s42(); virtual void s43(); virtual void s44(); virtual void s45(); virtual void s46(); virtual void s47(); virtual void s48(); virtual void s49(); virtual void s50(); virtual void s51(); virtual void s52(); virtual void s53(); virtual void s54(); virtual void s55(); virtual void s56(); virtual void s57(); virtual void s58(); virtual void v59(u32,int); virtual void s60(); virtual void s61(); virtual void s62(); virtual void s63(); virtual void s64(); virtual void s65(); virtual void s66(); virtual void s67(); virtual void s68(); virtual void s69(); virtual void s70(); virtual void s71(); virtual void v72(int); virtual void s73(); virtual void s74(); virtual void s75(); virtual void s76(); virtual void s77(); virtual void s78(); virtual void s79(); virtual void s80(); virtual void v81(); virtual void v82(); virtual void v83(); virtual void s84(); virtual void s85(); virtual void s86(); virtual void v87(); virtual void s88(); virtual void v89(u32); };
#define F(p,o,t) (*(t*)((u8*)(p)+(o)))
extern f32 lbl_80365010;
u32 fn_801DAD34(A *, u32, f32, f32);
static inline bool inRect(f32 x, f32 y, f32 *r) { bool b = false; if (x >= r[0] && x <= r[2] && y >= r[1] && y <= r[3]) b = true; return b; }
int fn_801C8FAC(A *p, u32 key, f32 x, f32 y) {
    f32 t, acc;
    acc = t = lbl_80365010;
    u32 row, col, i;
    if (fn_801DAD34(p, key, x, y) == 1) return 1;
    F(p,0x1e0,f32) = x;
    F(p,0x1e4,f32) = y;
    row = (F(p,0x1d4,f32) + (y - F(p,0x4c,f32))) / F(p,0x1cc,f32);
    if (inRect(x, y, &F(p,0x204,f32))) {
        t = F(p,0x1d0,f32) + (x - F(p,0x48,f32));
        if (F(p,0x1e8,u32) && F(p,0x238,int)) t -= F(p,0x1ec,f32);
    } else if (inRect(x, y, &F(p,0x1f4,f32))) {
        t = x - F(p,0x48,f32);
    }
    col = 0;
    for (i = 0; i < F(p,0x1ac,u32); i++) {
        if (t >= acc && t < acc + F(p,0x1c8,f32*)[i]) break;
        col++;
        acc += F(p,0x1c8,f32*)[i];
    }
    if (F(p,0x1bc,u32) == row && F(p,0x1c0,u32) == col && F(p,0x178,u8*) && (u16)F(F(p,0x178,u8*),0x144,u32) == 32) {
        p->v89(key);
    } else {
        F(p,0x1bc,u32) = row;
        F(p,0x1c0,u32) = col;
        p->v59(key, 1);
        p->v72(1);
        p->v87();
        p->v81();
        p->v82();
        if (!F(p,0x238,int) || !F(p,0x1ac,u32)) p->v83();
    }
    return 1;
}

} /* extern "C" */
