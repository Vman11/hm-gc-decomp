// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

#define F(p,o,t) (*(t*)((u8*)(p)+(o)))
struct R;
void fn_800FB064(R *, char *);
void *fn_800FB33C(R *);
f32 fn_800FB2E0(R *);
void *fn_800F9398(void *, char *);
void *fn_800F9788(void *, char *, char *);
void *fn_800F8274(void *, char *);
void *fn_8019565C(void *);
void *fn_8019556C(void *);
void fn_801EF720(void *, R *);
static inline void *find(u8 *m, char *g, char *n) { if ((u32)g == 0 || !g[0]) return fn_800F9398(m + 144, n); return fn_800F9788(m + 168, g, n); }
void fn_801E00B4(u8 *p, R *r, int tok) {
    char b40[8];
    char b32[8];
    char b24[8];
    char b16[8];
    char b8[8];
    switch (tok) {
    case 104: {
        void *x;
        u8 *m;
        fn_800FB064(r, b16);
        fn_800FB064(r, b8);
        m = F(F(p,8,u8*),212,u8*);
        x = find(m, b8, b16);
        x = fn_8019556C(x ? fn_8019565C(x) : x);
        F(p,44,int) = 0;
        F(p,40,int) = 0;
        F(p,40,void*) = x;
        break;
    }
    case 120:
        F(p,48,void*) = fn_800FB33C(r);
        fn_800FB064(r, b24);
        fn_800FB064(r, b32);
        if (b24[0]) F(p,52,void*) = fn_800F8274(fn_800F9398(F(F(F(p,8,u8*),212,u8*),4,u8*) + 732, b24), b32);
        else F(p,52,void*) = 0;
        break;
    case 167: F(p,12,int) = 15; break;
    case 168: F(p,12,int) = 16; break;
    case 169: F(p,64,int) = 1; break;
    case 122: F(p,60,f32) = fn_800FB2E0(r); break;
    case 155: F(p,68,f32) = fn_800FB2E0(r); break;
    case 121:
        fn_800FB064(r, b40);
        fn_800FB064(r, b24);
        F(p,56,void*) = fn_800F8274(fn_800F9398(*F(F(p,8,u8*),208,u8**) + 708, b24), b40);
        break;
    default:
        fn_801EF720(p, r);
        break;
    }
}

} /* extern "C" */
