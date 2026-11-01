// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

typedef struct { f32 x, y, z; } V3;
typedef struct { u32 a; u32 b; } T8;
typedef struct { void *f0; u8 pad[8]; T8 *arr; } S14C;
typedef struct { void *p; s32 a; s32 b; s32 c; s32 d; } T20;
struct VO {
    virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5();
    virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11();
    virtual void p12();
    virtual void get(V3 *, V3 *, s32, s32, s32);
};
struct VB {
    u8 pad[104];
    virtual void v0(); virtual void v1(); virtual void v2();
};
struct FT { void *a[3]; void (*f12)(void *, V3 *); void *b[72]; void (*f304)(void *, V3 *); };
extern FT lbl_803286D0;
extern T20 lbl_80294F4C;
extern u8 *lbl_8035B308;
extern char lbl_8035C2F8[4];
extern u32 lbl_8035C320;
s32 fn_800F6CD0(void *, char *);
void fn_8024118C(void *, void *, s32);
void fn_800F6E88(void *, void *);
void fn_8023F764(void *, void **, T20);
void fn_8023FA2C(void *, void **, T20);
void fn_80101820(V3 *);
void fn_80190C98(void *);
struct Ctr { u32 n; Ctr() : n(0) {} };

static inline void setp(u8 *q, V3 *v) {
    u8 *c = *(u8 **)(q + 48);
    if (c != 0) {
        lbl_803286D0.f12(*(void **)(c + 16), v);
        *(u32 *)(c + 32) |= lbl_8035C320;
        fn_80190C98(q);
    }
}
static inline void chk(u8 *p) {
    void *e = *(void **)(p + 284);
    if (e != 0 && fn_800F6CD0(e, lbl_8035C2F8) == 0) fn_8024118C(p, e, 0);
}
#define F(T, o) (*(T *)(p + (o)))
void fn_80040274(u8 *p) {
    u32 i;
    if (*(s32 *)(*(u8 **)(lbl_8035B308 + 76) + 676) == 0) {
        chk(p);
    }
    static Ctr s;
    s.n = (s.n + 1) % 3;
    for (i = 0; i < *(u32 *)((u8 *)(*F(S14C *, 332)).f0 + 16); i++) {
        u8 buf[8];
        fn_800F6E88(buf, &F(S14C *, 332)->arr[i]);
        if (fn_800F6CD0(buf, lbl_8035C2F8) == 0) {
            u32 idx = i + s.n * 2;
            T20 t = lbl_80294F4C;
            u8 *q;
            t.p = buf;
            if (F(void **, 372)[idx] != 0) {
                fn_8023F764(p, &F(void **, 372)[idx], t);
                F(void **, 372)[idx] = 0;
            }
            fn_8023FA2C(p, &F(void **, 372)[idx], t);
            q = (u8 *)F(void **, 372)[idx];
            if (q != 0) {
                V3 v;
                V3 w;
                VB *o;
                f32 k;
                u8 *c;
                if (*(void **)(q + 48) != 0) {
                    lbl_803286D0.f304(*(void **)(*(u8 **)(q + 48) + 16), &v);
                } else {
                    v.x = 0.0f; v.y = 0.0f; v.z = 0.0f;
                }
                F(VO *, 224)->get(0, &w, 0, 0, 0);
                o = *(VB **)((u8 *)F(VO *, 224) + 156);
                if (*(u32 *)o & 4) o->v2();
                k = *(f32 *)((u8 *)o + 36);
                fn_80101820(&w);
                w.x *= k; w.y *= k; w.z *= k;
                v.x += w.x; v.y += w.y; v.z += w.z;
                setp((u8 *)F(void **, 372)[idx], &v);
            }
        }
    }
}

} /* extern "C" */
