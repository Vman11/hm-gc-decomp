// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

#define F(p,o,t) (*(t*)((u8*)(p)+(o)))
struct Str { u32 pad; u32 begin; u32 end; virtual u32 at(u32); virtual void set(u32, u32); virtual void erase(u32, u32); virtual void s3(); virtual void ins(u32, u32); virtual void s5(); virtual int toInt(); virtual f32 toFloat(); };
struct UI { u8 pad_[128]; virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9(); virtual void s10(); virtual void s11(); virtual void s12(); virtual void s13(); virtual void s14(); virtual void s15(); virtual void s16(); virtual void s17(); virtual void s18(); virtual void s19(); virtual void s20(); virtual void s21(); virtual void s22(); virtual void s23(); virtual void s24(); virtual void s25(); virtual void s26(); virtual void s27(); virtual void s28(); virtual void s29(); virtual void s30(); virtual void s31(); virtual void s32(); virtual void s33(); virtual void s34(); virtual void s35(); virtual void s36(); virtual void s37(); virtual void s38(); virtual void s39(); virtual void s40(); virtual void s41(); virtual void s42(); virtual void s43(); virtual void s44(); virtual void s45(); virtual void s46(); virtual void s47(); virtual void s48(); virtual void s49(); virtual void s50(); virtual void s51(); virtual void s52(); virtual void s53(); virtual void s54(); virtual void s55(); virtual void s56(); virtual void s57(); virtual void s58(); virtual void s59(); virtual void s60(); virtual void s61(); virtual void s62(); virtual void s63(); virtual void s64(); virtual void s65(); virtual void s66(); virtual void focus(void *); virtual void s68(); virtual void changed(void *); };
struct L { virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9(); virtual void s10(); virtual void s11(); virtual void s12(); virtual void s13(); virtual void s14(); virtual void s15(); virtual void s16(); virtual void s17(); virtual void s18(); virtual void s19(); virtual void s20(); virtual void s21(); virtual void s22(); virtual void s23(); virtual void s24(); virtual void s25(); virtual void s26(); virtual void s27(); virtual void s28(); virtual void s29(); virtual void s30(); virtual void s31(); virtual void s32(); virtual void s33(); virtual int key(void *, u32, u32); };
struct LN { L *obj; int on; LN *next; };
void fn_801B1D54(u8 *, u32);
static inline u32 slen(Str *s) { return s->end - s->begin; }
static inline void putc(u8 *t, u32 ch) {
    if (F(t,0x16c,int) && F(t,0x170,u32) < slen(F(t,0x18c,Str*))) {
        F(t,0x18c,Str*)->set(F(t,0x170,u32), ch);
    } else {
        if (slen(F(t,0x18c,Str*)) >= F(t,0x17c,u32) - 1) return;
        F(t,0x18c,Str*)->ins(ch, F(t,0x170,u32));
    }
    fn_801B1D54(t, F(t,0x170,u32) + 1);
    F(t,0x174,u32)++;
}
int fn_801AF628(u8 *t, u32 ch, u32 c) {
    int old;
    LN *l;
    u32 a;
    int handled;
    handled = 0;
    for (l = F(t,0x88,LN*); l; l = l->next) {
        if (l->on && !l->obj->key(t, ch, c)) handled = 1;
    }
    if (handled) return 0;
    switch (F(t,0x144,s32)) {
    case 16:
        F(t,0x144,s32) = 32;
        if (F(t,0x11c,UI*)) F(t,0x11c,UI*)->focus(t);
    case 32: {
        a = F(t,0x170,u32);
        if (a != F(t,0x174,u32)) {
            if (a < F(t,0x174,u32)) {
                fn_801B1D54(t, F(t,0x174,u32));
                F(t,0x174,u32) = a;
            }
            F(t,0x18c,Str*)->erase(F(t,0x174,u32), F(t,0x170,u32) - 1);
            F(t,0x184,u32) = 0;
            fn_801B1D54(t, F(t,0x174,u32));
        }
        if (F(t,0x198,s32) == 5) {
            putc(t, ch);
        } else if (F(t,0x198,s32) == 3) {
            if (ch == '-') {
                if (F(t,0x170,u32) == 0 && (u32)(u16)F(t,0x18c,Str*)->at(0) != '-') putc(t, ch);
            } else if (ch == '.') {
                u32 k;
                for (k = 0; k < slen(F(t,0x18c,Str*)); k++) {
                    if (F(t,0x18c,Str*)->at(k) == '.') break;
                }
                if (k == slen(F(t,0x18c,Str*))) putc(t, ch);
            } else if (ch >= '0' && ch <= '9') {
                if (F(t,0x170,u32) != 0 || (u32)(u16)F(t,0x18c,Str*)->at(0) != '-') putc(t, ch);
            }
        } else if (F(t,0x198,s32) == 2) {
            if (ch == '-') {
                if (F(t,0x170,u32) == 0 && (u32)(u16)F(t,0x18c,Str*)->at(0) != '-') putc(t, ch);
            } else if (ch >= '0' && ch <= '9') {
                if (F(t,0x170,u32) != 0 || (u32)(u16)F(t,0x18c,Str*)->at(0) != '-') putc(t, ch);
            }
        }
        if (F(t,0x198,s32) == 5) {
            if (F(t,0x11c,UI*)) F(t,0x11c,UI*)->changed(t);
        } else if (F(t,0x198,s32) == 2) {
            old = F(F(F(t,0x188,u8*),0x28,u8*),12,int);
            int v = F(t,0x18c,Str*)->toInt();
            if (old != v) {
                F(F(F(t,0x188,u8*),0x28,u8*),12,int) = v;
                if (F(t,0x11c,UI*)) F(t,0x11c,UI*)->changed(t);
            }
        } else if (F(t,0x198,s32) == 3) {
            f32 old = F(F(F(t,0x188,u8*),0x28,u8*),12,f32);
            f32 v = F(t,0x18c,Str*)->toFloat();
            if (old != v) {
                F(F(F(t,0x188,u8*),0x28,u8*),12,f32) = v;
                if (F(t,0x11c,UI*)) F(t,0x11c,UI*)->changed(t);
            }
        }
        break;
    }
    }
    return 0;
}

} /* extern "C" */
