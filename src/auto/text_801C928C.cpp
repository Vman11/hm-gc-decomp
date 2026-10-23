// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct A { u8 pad_[128]; virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9(); virtual void s10(); virtual void s11(); virtual void s12(); virtual void s13(); virtual void s14(); virtual void s15(); virtual void s16(); virtual void s17(); virtual void s18(); virtual void s19(); virtual void s20(); virtual void s21(); virtual void s22(); virtual void s23(); virtual void s24(); virtual void v25(); virtual void s26(); virtual void s27(); virtual void s28(); virtual void s29(); virtual void s30(); virtual void s31(); virtual void s32(); virtual void s33(); virtual void s34(); virtual void s35(); virtual void s36(); virtual void s37(); virtual void s38(); virtual void s39(); virtual void s40(); virtual void s41(); virtual void s42(); virtual void s43(); virtual void s44(); virtual void s45(); virtual void s46(); virtual void s47(); virtual void s48(); virtual void s49(); virtual void s50(); virtual void s51(); virtual void s52(); virtual void s53(); virtual void s54(); virtual void s55(); virtual void s56(); virtual void s57(); virtual void s58(); virtual void s59(); virtual void s60(); virtual void s61(); virtual void s62(); virtual void s63(); virtual void s64(); virtual void s65(); virtual void s66(); virtual void s67(); virtual void s68(); virtual void s69(); virtual void s70(); virtual void s71(); virtual void s72(); virtual void s73(); virtual void s74(); virtual void s75(); virtual void s76(); virtual void s77(); virtual void s78(); virtual void s79(); virtual void s80(); virtual void v81(); };
#define F(p,o,t) (*(t*)((u8*)(p)+(o)))
#define FF(p,o) F(p,o,f32)
struct R4 { f32 a, b, c, d; };
extern f32 lbl_80365010;
void fn_801DBF24(void *);
void fn_801C928C(u8 *p) {
    u32 i;
    fn_801DBF24(p);
    if (!F(p,0x11c,u8*)) {
        FF(p,0x48) = FF(p,0x58); FF(p,0x4c) = FF(p,0x5c); FF(p,0x50) = FF(p,0x60); FF(p,0x54) = FF(p,0x64);
    } else {
        FF(p,0x48) = FF(p,0x58) + FF(F(p,0x11c,u8*),0x48);
        FF(p,0x4c) = FF(p,0x5c) + FF(F(p,0x11c,u8*),0x4c);
        FF(p,0x50) = FF(p,0x60) + FF(F(p,0x11c,u8*),0x48);
        FF(p,0x54) = FF(p,0x64) + FF(F(p,0x11c,u8*),0x4c);
    }
    if (F(p,0x17c,u8**)) {
        for (i = 0; i < F(p,0x1f0,u32); i++) {
            if (i == 0) FF(F(p,0x17c,u8**)[i],0x58) = lbl_80365010;
            else FF(F(p,0x17c,u8**)[i],0x58) = FF(F(p,0x17c,u8**)[i - 1],0x60);
            FF(F(p,0x17c,u8**)[i],0x60) = F(p,0x1c8,f32*)[i] + FF(F(p,0x17c,u8**)[i],0x58);
            F(p,0x17c,A**)[i]->v25();
        }
    }
    FF(p,0x1f4) = FF(p,0x48);
    FF(p,0x1f8) = FF(p,0x4c);
    FF(p,0x200) = FF(p,0x54);
    FF(p,0x1fc) = FF(p,0x1f4) + FF(p,0x1ec);
    FF(p,0x204) = FF(p,0x1fc);
    FF(p,0x20c) = FF(p,0x50);
    FF(p,0x208) = FF(p,0x4c);
    FF(p,0x210) = FF(p,0x54);
    FF(p,0x224) = FF(p,0x1f4);
    FF(p,0x22c) = FF(p,0x1fc);
    if (F(p,0x17c,u8**)) { FF(p,0x228) = FF(F(p,0x17c,u8**)[0],0x4c); FF(p,0x230) = FF(F(p,0x17c,u8**)[0],0x54); }
    FF(p,0x214) = FF(p,0x22c);
    FF(p,0x21c) = FF(p,0x20c);
    if (F(p,0x17c,u8**)) { FF(p,0x218) = FF(F(p,0x17c,u8**)[0],0x4c); FF(p,0x220) = FF(F(p,0x17c,u8**)[0],0x54); }
    ((A *)p)->v81();
    if (F(p,0x16c,u8*)) {
        F(F(p,0x16c,u8*),0x48,R4) = F(F(p,0x178,u8*),0x48,R4);
    }
    if (F(p,0x138,A*)) F(p,0x138,A*)->v25();
    if (F(p,0x134,A*)) F(p,0x134,A*)->v25();
}

} /* extern "C" */
