// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

#define F(p,o,t) (*(t*)((u8*)(p)+(o)))
typedef struct T0 { u8 b[108]; } T0;
typedef struct T1 { u8 b[168]; } T1;
typedef struct T2 { u8 b[204]; } T2;
typedef struct T3 { u8 b[228]; } T3;
typedef struct T4 { u8 b[272]; } T4;
typedef struct T5 { u8 b[308]; } T5;
typedef struct T6 { u8 b[160]; } T6;
typedef struct T7 { u8 b[168]; } T7;
typedef struct T8 { u8 b[164]; } T8;
typedef struct T9 { u8 b[172]; } T9;
void fn_8019B048(void *, void *);
void fn_801928D4(u8 *p, void *a) {
    u32 i;
    for (i = 0; i < F(p,104,u32); i++) if (F(&F(p,172,T0*)[i],76,u32)) fn_8019B048(a, &F(p,172,T0*)[i]);
    for (i = 0; i < F(p,116,u32); i++) if (F(&F(p,184,T1*)[i],76,u32)) fn_8019B048(a, &F(p,184,T1*)[i]);
    for (i = 0; i < F(p,120,u32); i++) if (F(&F(p,188,T2*)[i],76,u32)) fn_8019B048(a, &F(p,188,T2*)[i]);
    for (i = 0; i < F(p,140,u32); i++) if (F(&F(p,208,T3*)[i],76,u32)) fn_8019B048(a, &F(p,208,T3*)[i]);
    for (i = 0; i < F(p,144,u32); i++) if (F(&F(p,212,T4*)[i],76,u32)) fn_8019B048(a, &F(p,212,T4*)[i]);
    for (i = 0; i < F(p,148,u32); i++) if (F(&F(p,216,T5*)[i],76,u32)) fn_8019B048(a, &F(p,216,T5*)[i]);
    for (i = 0; i < F(p,152,u32); i++) if (F(&F(p,220,T6*)[i],76,u32)) fn_8019B048(a, &F(p,220,T6*)[i]);
    for (i = 0; i < F(p,160,u32); i++) if (F(&F(p,228,T7*)[i],76,u32)) fn_8019B048(a, &F(p,228,T7*)[i]);
    for (i = 0; i < F(p,156,u32); i++) if (F(&F(p,224,T8*)[i],76,u32)) fn_8019B048(a, &F(p,224,T8*)[i]);
    for (i = 0; i < F(p,164,u32); i++) if (F(&F(p,232,T9*)[i],76,u32)) fn_8019B048(a, &F(p,232,T9*)[i]);
}

} /* extern "C" */
