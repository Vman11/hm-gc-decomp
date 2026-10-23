// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

#define F(p,o,t) (*(t*)((u8*)(p)+(o)))
struct T0 { u8 pad_[104]; virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9(); virtual void s10(); virtual void v11(f32);  u8 rest[60]; };
struct T1 { u8 pad_[104]; virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9(); virtual void s10(); virtual void v11(f32);  u8 rest[96]; };
struct T2 { u8 pad_[104]; virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9(); virtual void s10(); virtual void v11(f32);  u8 rest[120]; };
struct T3 { u8 pad_[104]; virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9(); virtual void s10(); virtual void v11(f32);  u8 rest[164]; };
struct T4 { u8 pad_[104]; virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9(); virtual void s10(); virtual void v11(f32);  u8 rest[200]; };
struct T5 { u8 pad_[104]; virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9(); virtual void s10(); virtual void v11(f32);  u8 rest[52]; };
struct T6 { u8 pad_[104]; virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9(); virtual void s10(); virtual void v11(f32);  u8 rest[56]; };
struct T7 { u8 pad_[104]; virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9(); virtual void s10(); virtual void v11(f32);  u8 rest[60]; };
struct T8 { u8 pad_[104]; virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9(); virtual void s10(); virtual void v11(f32);  u8 rest[64]; };
struct T9 { u8 pad_[104]; virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9(); virtual void s10(); virtual void v11(f32);  u8 rest[4]; };
void fn_80192488(u8 *p, f32 t) {
    u32 i;
    for (i = 0; i < F(p,116,u32); i++) if (!F(&F(p,184,T0*)[i],136,u32)) F(p,184,T0*)[i].v11(t);
    for (i = 0; i < F(p,120,u32); i++) if (!F(&F(p,188,T1*)[i],136,u32)) F(p,188,T1*)[i].v11(t);
    for (i = 0; i < F(p,140,u32); i++) if (!F(&F(p,208,T2*)[i],136,u32)) F(p,208,T2*)[i].v11(t);
    for (i = 0; i < F(p,144,u32); i++) if (!F(&F(p,212,T3*)[i],136,u32)) F(p,212,T3*)[i].v11(t);
    for (i = 0; i < F(p,148,u32); i++) if (!F(&F(p,216,T4*)[i],136,u32)) F(p,216,T4*)[i].v11(t);
    for (i = 0; i < F(p,152,u32); i++) if (!F(&F(p,220,T5*)[i],136,u32)) F(p,220,T5*)[i].v11(t);
    for (i = 0; i < F(p,156,u32); i++) if (!F(&F(p,224,T6*)[i],136,u32)) F(p,224,T6*)[i].v11(t);
    for (i = 0; i < F(p,160,u32); i++) if (!F(&F(p,228,T7*)[i],136,u32)) F(p,228,T7*)[i].v11(t);
    for (i = 0; i < F(p,164,u32); i++) if (!F(&F(p,232,T8*)[i],136,u32)) F(p,232,T8*)[i].v11(t);
    for (i = 0; i < F(p,168,u32); i++) F(p,236,T9*)[i].v11(t);
}

} /* extern "C" */
