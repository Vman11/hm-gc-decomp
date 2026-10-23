// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

#define F(p,o,t) (*(t*)((u8*)(p)+(o)))
struct R;
void fn_800FB064(R *, char *);
void *fn_800F9398(void *, char *);
void *fn_800F9788(void *, char *, char *);
void fn_801EB474(void *, R *);
static inline void *findA(u8 *m, char *g, char *n) { if ((u32)g == 0 || !g[0]) return fn_800F9398(m + 144, n); return fn_800F9788(m + 168, g, n); }
static inline void *findB(u8 *m, char *g, char *n) { if ((u32)g == 0 || !g[0]) return fn_800F9398(m + 120, n); return fn_800F9788(m + 144, g, n); }
static inline void *findC(u8 *m, char *g, char *n) { if ((u32)g == 0 || !g[0]) return fn_800F9398(m + 384, n); return fn_800F9788(m + 408, g, n); }
void fn_801EAAE4(u8 *p, R *r, int tok) {
    char b16[8];
    char b8[8];
    void *x;
    switch (tok) {
    case 133:
        fn_800FB064(r, b16); fn_800FB064(r, b8);
        x = findA(F(F(p,16,u8*),212,u8*), b8, b16);
        F(p,32,int) = 0; F(p,28,int) = 0; F(p,28,void*) = x;
        break;
    case 80:
        fn_800FB064(r, b16); fn_800FB064(r, b8);
        x = findA(F(F(p,16,u8*),212,u8*), b8, b16);
        F(p,40,int) = 0; F(p,36,int) = 0; F(p,36,void*) = x;
        break;
    case 132:
        fn_800FB064(r, b16); fn_800FB064(r, b8);
        F(p,44,void*) = findB(F(F(F(p,16,u8*),212,u8*),4,u8*), b8, b16);
        break;
    case 81:
        fn_800FB064(r, b16); fn_800FB064(r, b8);
        F(p,48,void*) = findC(F(F(p,16,u8*),212,u8*), b8, b16);
        break;
    case 69: F(p,52,u32) |= 1; break;
    case 70: F(p,52,u32) |= 2; break;
    case 71: F(p,52,u32) |= 4; break;
    default: fn_801EB474(p, r); break;
    }
}

} /* extern "C" */
