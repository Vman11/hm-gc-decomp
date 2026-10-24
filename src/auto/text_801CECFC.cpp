// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

#define F(p,o,t) (*(t*)((u8*)(p)+(o)))
struct W { u8 pad_[128]; virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9(); virtual void s10(); virtual void s11(); virtual void s12(); virtual void s13(); virtual void s14(); virtual void s15(); virtual void s16(); virtual void s17(); virtual void s18(); virtual u32 type(); virtual void s20(); virtual void s21(); virtual void s22(); virtual void s23(); virtual void s24(); virtual void upd(); };
extern f64 lbl_80365160;
extern f32 lbl_80365168;
static inline f32 posX(W *t) {
    if (F(t,0x168,int)) {
        f32 range;
        f32 track;
        f32 mn;
        f32 mx;
        f32 v;
        track = (F(t,0x60,f32) - F(t,0x58,f32)) - (F(t,0x1b4,f32) - F(t,0x1ac,f32));
        mn = F(t,0x170,f32);
        mx = F(t,0x174,f32);
        if (F(t,0x178,u8*)) F(t,0x16c,f32) = F(F(t,0x178,u8*),12,f32);
        range = mx - mn;
        v = F(t,0x16c,f32);
        if (lbl_80365160 != range) return F(t,0x58,f32) + track * ((v - mn) / range);
        return F(t,0x58,f32) + (f64)track;
    }
    return F(t,0x58,f32) + lbl_80365168 * ((F(t,0x60,f32) - F(t,0x58,f32)) - (F(t,0x1b4,f32) - F(t,0x1ac,f32)));
}
static inline f32 posY(W *t) {
    if (F(t,0x180,int)) {
        f32 track;
        f32 v;
        f32 mn;
        f32 mx;
        f32 range;
        track = (F(t,0x1a8,f32) - F(t,0x1a0,f32)) - (F(t,0x1b8,f32) - F(t,0x1b0,f32));
        mn = F(t,0x188,f32);
        mx = F(t,0x18c,f32);
        if (F(t,0x190,u8*)) F(t,0x184,f32) = F(F(t,0x190,u8*),12,f32);
        v = mx - F(t,0x184,f32);
        if (F(t,0x11c,W*) && F(F(t,0x11c,W*),0x11c,W*) && (F(F(t,0x11c,W*),0x11c,W*)->type() == 117 || F(F(t,0x11c,W*),0x11c,W*)->type() == 121)) {
            if (F(t,0x190,u8*)) F(t,0x184,f32) = F(F(t,0x190,u8*),12,f32);
            v = F(t,0x184,f32);
        }
        range = mx - mn;
        if (lbl_80365160 != range) return F(t,0x5c,f32) + track * ((v - mn) / range);
        return F(t,0x5c,f32) + (f64)track;
    }
    return F(t,0x5c,f32) + lbl_80365168 * ((F(t,0x64,f32) - F(t,0x5c,f32)) - (F(t,0x1b8,f32) - F(t,0x1b0,f32)));
}
void fn_801CECFC(W *t) {
    W *pp;
    W *c;
    if (!F(t,0x11c,W*)) {
        F(t,0x19c,f32) = F(t,0x58,f32);
        F(t,0x1a0,f32) = F(t,0x5c,f32);
        F(t,0x1a4,f32) = F(t,0x60,f32);
        F(t,0x1a8,f32) = F(t,0x64,f32);
    } else {
        F(t,0x19c,f32) = F(t,0x58,f32) + F(F(t,0x11c,W*),0x48,f32);
        F(t,0x1a0,f32) = F(t,0x5c,f32) + F(F(t,0x11c,W*),0x4c,f32);
        F(t,0x1a4,f32) = F(t,0x60,f32) + F(F(t,0x11c,W*),0x48,f32);
        F(t,0x1a8,f32) = F(t,0x64,f32) + F(F(t,0x11c,W*),0x4c,f32);
    }
    if (!F(t,0x11c,W*)) {
        F(t,0x48,f32) = posX(t);
        F(t,0x50,f32) = F(t,0x48,f32) + (F(t,0x1b4,f32) - F(t,0x1ac,f32));
        F(t,0x4c,f32) = posY(t);
        F(t,0x54,f32) = F(t,0x4c,f32) + (F(t,0x1b8,f32) - F(t,0x1b0,f32));
    } else {
        pp = F(t,0x11c,W*);
        { f32 q = posX(t); F(t,0x48,f32) = q + F(pp,0x48,f32); }
        F(t,0x50,f32) = F(t,0x48,f32) + (F(t,0x1b4,f32) - F(t,0x1ac,f32));
        pp = F(t,0x11c,W*);
        { f32 q = posY(t); F(t,0x4c,f32) = q + F(pp,0x4c,f32); }
        F(t,0x54,f32) = F(t,0x4c,f32) + (F(t,0x1b8,f32) - F(t,0x1b0,f32));
    }
    for (c = F(t,0x138,W*); c; c = F(c,0x134,W*)) c->upd();
}

} /* extern "C" */
