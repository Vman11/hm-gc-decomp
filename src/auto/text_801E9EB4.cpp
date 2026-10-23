// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

#define F(p,o,t) (*(t*)((u8*)(p)+(o)))
struct R;
extern u8 __vt__9C80129A9C[];
void __ct__9C80105074Fv(void *);
void __dt__9C8010500CFv(void *, int);
void fn_800FB064(R *, char *);
void *fn_800F9398(void *, char *);
void *fn_800F9788(void *, char *, char *);
void fn_80101124(void *, R *);
void fn_800FF9E8(void *, R *);
void fn_801EF720(void *, R *, int);
struct V3 { f32 x, y, z; };
static inline void *find(u8 *m, char *g, char *n) { if ((u32)g == 0 || !g[0]) return fn_800F9398(m + 144, n); return fn_800F9788(m + 168, g, n); }
void fn_801E9EB4(u8 *p, R *r, int tok) {
    u8 obj[40];
    V3 v;
    char b16[8];
    char b8[8];
    void *x;
    __ct__9C80105074Fv(obj);
    *(u8 **)(obj + 36) = __vt__9C80129A9C;
    switch (tok) {
    case 125:
        fn_80101124(p + 96, r);
        fn_80101124(p + 84, r);
        F(p,108,int) = 1;
        break;
    case 124:
        fn_800FF9E8(p + 56, r);
        F(p,108,int) = 0;
        break;
    case 128:
        fn_80101124(p + 72, r);
        fn_80101124(&v, r);
        fn_80101124(p + 96, r);
        F(p,96,f32) = v.x - F(p,72,f32);
        F(p,100,f32) = v.y - F(p,76,f32);
        F(p,104,f32) = v.z - F(p,80,f32);
        fn_80101124(p + 84, r);
        F(p,108,int) = 1;
        break;
    case 126:
        fn_80101124(p + 72, r);
        break;
    case 100:
        fn_800FB064(r, b16); fn_800FB064(r, b8);
        x = find(F(F(p,8,u8*),212,u8*), b8, b16);
        F(p,44,int) = 0; F(p,40,int) = 0; F(p,40,void*) = x;
        break;
    case 101:
        fn_800FB064(r, b16); fn_800FB064(r, b8);
        x = find(F(F(p,8,u8*),212,u8*), b8, b16);
        F(p,52,int) = 0; F(p,48,int) = 0; F(p,48,void*) = x;
        break;
    case 180: F(p,12,int) = 42; break;
    case 181: F(p,12,int) = 43; break;
    case 182: F(p,12,int) = 44; break;
    default: fn_801EF720(p, r, tok); break;
    }
    *(u8 **)(obj + 36) = __vt__9C80129A9C;
    __dt__9C8010500CFv(obj, 0);
}

} /* extern "C" */
