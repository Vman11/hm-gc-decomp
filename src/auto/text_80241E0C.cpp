#include "common.h"

extern "C" {

struct E20 { u32 a; s32 b; char name[12]; };
struct E12 { u32 a; u32 b; u32 c; };
struct V3 { f32 x, y, z; };
struct FT { void *a, *b, *c; void (*f12)(u32, V3 *); };
struct VA { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5();
    virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void Stop(); virtual void Get(V3 *, int, int, int, int); };
extern FT lbl_803286D0;
extern const char lbl_80366138[4];
extern const u32 lbl_80366140;
extern const u32 lbl_80366148;
extern const f32 lbl_803661AC;
extern f32 lbl_8036613C;
extern const char lbl_8036619C[4];
extern u32 lbl_8035B7BC;
int fn_800F6CD0(char *, const char *);
u32 fn_8019556C(u32);
void fn_80190604(u8 *, u32, char *);
void fn_801907D8(u8 *);
void fn_80190C98(u8 *);
void fn_80248820(u32, int, f32);
u8 *fn_8010FEDC(u32, u32, const char *, int);
u8 *fn_8010FFFC(u32, u8 *, u32, int);
void fn_800F6E88(char *, u8 *);
void fn_800F6FBC(u32, char *);
u32 fn_8026D254(u32, char *);
void fn_80249C7C(u8 *);
#define U32(o) (*(u32 *)(p + (o)))
#define S32(o) (*(s32 *)(p + (o)))
static inline void Loop2(u8 *p, s32 k) {
    u32 off;
    for (off = k; k < S32(128); off += 4, k++) {
        VA *o = *(VA **)(*(u8 **)(p + 192) + off);
        if (o) {
            o->Stop();
            *(u32 *)(*(u8 **)(*(u8 **)(p + 192) + off) + 140) = 1;
        }
    }
}
void fn_80241E0C(u8 *p) {
    FT *ft = &lbl_803286D0;
    s32 i;
    for (i = 0; i < S32(148); i++) {
        E20 e = (*(E20 **)(p + 268))[i];
        u8 **arr = *(u8 ***)(p + 272);
        if (arr[i]) {
            if (e.b == 0) {
                V3 v;
                u8 *o;
                u8 *t;
                if (fn_800F6CD0(e.name, lbl_80366138) == 0)
                    fn_80190604(arr[i], fn_8019556C(*(u32 *)(*(u8 **)(p + 224) + 160)), e.name);
                else
                    fn_801907D8(arr[i]);
                (*(VA **)(p + 224))->Get(&v, 0, 0, 0, 0);
                o = arr[i];
                t = *(u8 **)(o + 48);
                if (t) {
                    ft->f12(*(u32 *)(t + 16), &v);
                    *(u32 *)(t + 32) |= lbl_80366140;
                    fn_80190C98(o);
                }
            }
            { u8 *o2 = arr[i]; if (*(u32 *)(o2 + 152) & 1) *(volatile u32 *)(o2 + 152) |= lbl_80366148; }
            arr[i] = 0;
        }
    }
    if (U32(264)) fn_80248820(U32(264), 0, lbl_803661AC);
    if (U32(276)) {
        *(u32 *)(U32(276) + 4) = 0;
        *(f32 *)(U32(276) + 8) = lbl_8036613C;
        **(u32 **)U32(276) &= ~0x800;
    }
    ((VA *)p)->v2();
    if (S32(216) >= 0 && S32(216) < S32(128)) (*(VA ***)(p + 192))[S32(216)]->Stop();
    {
    s32 k;
    u32 off;
    u8 *h;
    u32 m;
    s32 j;
    u8 *r;
    for (off = k = 0; k < S32(128); off += 4, k++) {
        VA *o = *(VA **)(*(u8 **)(p + 192) + off);
        if (o) {
            o->Stop();
            *(u32 *)(*(u8 **)(*(u8 **)(p + 192) + off) + 140) = 1;
        }
    }
    S32(216) = -1;
    S32(220) = -1;
    U32(152) = 0;
    h = 0;
    m = *(u32 *)(*(u8 **)(p + 224) + 12);
    if (*(u32 *)(*(u8 **)(p + 224) + 16) && m) h = fn_8010FEDC(m, *(u32 *)(*(u8 **)(p + 224) + 16), lbl_8036619C, 1);
    for (j = 0; j < S32(132); j++) {
        char nm[8];
        r = 0;
        if (h) {
            u8 *t = fn_8010FFFC(m, h, (*(E12 **)(p + 204))[j].a, 1);
            if (t) r = t;
        }
        if (r) fn_800F6E88(nm, r + 12);
        else fn_800F6FBC((*(E12 **)(p + 204))[j].b, nm);
        (*(u32 **)(p + 212))[j] = fn_8026D254(lbl_8035B7BC, nm);
    }
    }
    fn_80249C7C(p);
}

} /* extern "C" */
