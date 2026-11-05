#include "common.h"

extern "C" {
struct A { u8 pad_[128]; virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9(); virtual void s10(); virtual void s11(); virtual void s12(); virtual void s13(); virtual void s14(); virtual void s15(); virtual void s16(); virtual void s17(); virtual void s18(); virtual void s19(); virtual void v20(int); virtual void s21(); virtual void s22(); virtual void s23(); virtual void s24(); virtual void v25(); virtual void s26(); virtual void s27(); virtual void s28(); virtual void s29(); virtual void s30(); virtual void s31(); virtual void s32(); virtual void s33(); virtual void s34(); virtual void s35(); virtual void s36(); virtual void s37(); virtual void s38(); virtual void s39(); virtual void s40(); virtual void s41(); virtual void s42(); virtual void s43(); virtual void s44(); virtual void s45(); virtual void s46(); virtual void s47(); virtual void s48(); virtual void s49(); virtual void s50(); virtual void s51(); virtual void s52(); virtual void s53(); virtual void s54(); virtual void s55(); virtual void s56(); virtual void s57(); virtual void s58(); virtual void s59(); virtual void s60(); virtual void s61(); virtual void s62(); virtual void s63(); virtual void s64(); virtual void s65(); virtual void s66(); virtual void s67(); virtual void s68(); virtual void s69(); virtual void s70(); virtual void s71(); virtual void s72(); virtual void s73(); virtual void s74(); virtual void s75(); virtual void s76(); virtual void s77(); virtual void s78(); virtual void v79(); };
#define F(p,o,t) (*(t*)((u8*)(p)+(o)))
struct It { u8 pad[20]; A *obj; };
int fn_801BDAD0(void *, f32, f32);
int fn_801DA5E8(A *, u32, f32, f32);
static inline void offs(u8 *q, f32 dx, f32 dy) {
    F(q,0x58,f32) += dx; F(q,0x5c,f32) += dy; F(q,0x60,f32) += dx; F(q,0x64,f32) += dy;
}
struct Vec { It *data; u8 pad[0x40]; u32 size; It *get(u32 idx) { if (!data || idx >= size) return 0; return &data[idx]; } };
static inline It *getItem(A *p) {
    u8 *s = F(p,0x308,u8*);
    if (!s) return 0;
    return F(p,0x31c,Vec).get(F(s,0x20,u32));
}
int fn_801D44D8(A *p, u32 key, f32 x, f32 y) {
    F(F(p,0x74,u8*),0x1c,int) = 0;
    F(F(p,0x74,u8*),0x20,int) = 0;
    F(p,0x318,int) = 0;
    if (fn_801BDAD0(p, x, y)) {
        u8 *s = F(p,0x308,u8*);
        if (s) {
            if (getItem(p)) {
                A *q = getItem(p)->obj;
                if (q) {
                    F(p,0x318,u8*) = s;
                    F(q,0x17c,A*) = p;
                    { f32 nx = -F(q,0x58,f32); f32 ny = -F(q,0x5c,f32); offs((u8 *)q, nx, ny); }
                    offs((u8 *)q, x, y);
                    q->v25();
                    q->v20(1);
                    F(q,0x6c,u32) |= 2;
                    q->v79();
                    return 1;
                }
            }
        } else {
            fn_801DA5E8(p, key, x, y);
            return 0;
        }
    }
    return 0;
}

} /* extern "C" */
