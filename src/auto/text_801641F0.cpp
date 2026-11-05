#include "common.h"
extern "C" {
}
#define V10 virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8();
struct FB801641F0 {
    u8 pad0[0x1c]; u16 w; u16 h;
    V10
    virtual void v9(u32 *a, u32 *b, int n);
    virtual void v10();
};
struct M801641F0 {
    u8 pad0[0x30];
    V10
    virtual void v9(); virtual void v10();
    virtual FB801641F0 *v11();
    u8 pad34[0x344 - 0x34];
    u32 x344;
};
struct S801641F0 {
    u8 pad0[4]; FB801641F0 *fb; u8 pad8[4]; u32 fc; u8 pad10[0x1930 - 0x10];
    V10
    virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29();
    virtual void v30();
    M801641F0 *mgr; u8 pad1938[4]; u32 x193c;
};
extern "C" {
void *fn_8015B06C(FB801641F0 *);
void fn_800D7480(void *a, s32 b);
void fn_800D6EC4(u32, u32, u32, u32);
u32 fn_801562D8(FB801641F0 *);
void fn_800D6F74(u16, u16, u32, u32);
void fn_800D75E8(u32, u32);
void fn_800D6270(void);
void fn_800D8704(void);
void fn_801641F0(S801641F0 *s) {
    u32 a, b;
    s->v30();
    s->x193c = 0;
    s->fc &= ~2;
    if (s->mgr->v11() == s->fb) {
        if (s->mgr->x344 > 1) fn_800D7480(fn_8015B06C(s->fb), 0);
    } else {
        fn_800D6EC4(0, 0, s->fb->w, s->fb->h);
        u16 h = s->fb->h;
        u16 w = s->fb->w;
        fn_800D6F74(w, h, fn_801562D8(s->fb), 0);
        s->fb->v9(&a, &b, 2);
        fn_800D75E8(a, 0);
        fn_800D6270();
        fn_800D8704();
        s->fb->v10();
    }
}
}
