#include "common.h"

extern "C" {

struct VB { u8 pad[0xc0]; };
struct Str;
struct VO : VB { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void f8(Str *); };
struct Y { u8 pad[0xc0]; void **names; char **types; u8 pad2[0x10]; u32 cur; };
struct HY { u8 pad[0x20c]; Y *y; };
struct Z { u8 pad[0x20c]; Y *y; };
struct X { u8 pad[4]; char name[16]; u32 n; Z **items; };
struct L { u8 pad[12]; u32 n; };
struct L;
struct P9 { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19(); virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31(); virtual void v32(); virtual void f33(Str *, P9 *, L *, f32 *, Str *); u8 pad[0x208]; void *f20c; };
struct G308 { u8 pad[0x48]; HY *h; };
struct Obj { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void f14(f32); u8 pad[0x98]; P9 *p9c; u8 pad2[0x40]; f32 fe0; f32 fe4; f32 fe8; u8 pad3[8]; L *lst; s32 cur; };
struct Str { char c[8]; };
typedef void (*VF40)(Obj *, f32);
typedef void (*VF8C)(P9 *, Str *, P9 *, L *, f32 *, Str *);
typedef void (*VF28)(VO *, Str *);
extern "C" int strncmp(const char *, const char *, unsigned long);
f32 fn_802455A0(void *);
s32 fn_8024548C(L *, u32, s32, s32, Str *, f32 *, Str *);
void fn_800F6E88(void *, void *);
int fn_800F6CD0(void *, char *);
X *fn_80242144(void *, s32);
void __ct__9C80253F24Fiiii(void *, void *, int, int, int);
extern f32 lbl_80366B18;
extern char lbl_80366B24[6];
extern char lbl_80366B2C[4];
extern char lbl_80366B30[8];
extern char lbl_80366B38[7];
extern char lbl_80366B40[4];
extern char lbl_80366B44[8];
extern char lbl_80366B4C[7];
extern char lbl_80366B54[7];
extern char lbl_80366B5C[6];
extern char lbl_802AA1C8[];
extern char lbl_802AA1D4[];
extern VO *lbl_8035B684;
extern void *lbl_8035B65C;
extern G308 *lbl_8035B308;

void fn_80263044(Obj *o);
static inline void recurse(Y *y) {
    if (strncmp(y->types[y->cur], lbl_80366B5C, 5) == 0)
        fn_80263044((Obj *)y->names[y->cur]);
}

void fn_80263044(Obj *o) {
    Str bufA[60];
    Str bufB[60];
    f32 bufF[60];
    Str name;
    Str val;
    Str t;
    f32 f;
    s32 n;
    s32 done;
    u32 i;
    X *x;
    u32 cnt;
    u32 k;
    done = 0;
    if (o->lst) {
        o->fe0 = fn_802455A0(o->lst);
        o->fe4 = lbl_80366B18;
    }
    o->f14(lbl_80366B18);
    o->fe8 = lbl_80366B18;
    if (o->lst == 0) return;
    for (i = 0; i < o->lst->n; i++) {
        n = fn_8024548C(o->lst, i, -1, 60, bufA, bufF, bufB);
        if (n <= 0) continue;
        for (o->cur = 0; o->cur < n; o->cur++) {
            s32 j = o->cur;
            fn_800F6E88(&name, &bufA[j]);
            fn_800F6E88(&val, &bufB[j]);
            f = bufF[j];
            if (!fn_800F6CD0(&name, lbl_80366B24) && !fn_800F6CD0(&name, lbl_80366B2C) &&
                !fn_800F6CD0(&name, lbl_80366B30) && !fn_800F6CD0(&name, lbl_80366B38)) {
                P9 *p = o->p9c;
                p->f33(&name, p, o->lst, &f, &val);
            }
            if (strncmp(name.c, lbl_80366B40, 3) == 0) {
                fn_80263044(o);
                done = 1;
                break;
            }
            if (fn_800F6CD0(&name, lbl_802AA1C8)) {
                lbl_8035B684->f8(&val);
            } else if (fn_800F6CD0(&name, lbl_80366B44)) {
                __ct__9C80253F24Fiiii(lbl_8035B65C, &val, 0, 0, 0);
            } else if (fn_800F6CD0(&name, lbl_802AA1D4)) {
                x = fn_80242144(o->p9c->f20c, (s32)f);
                cnt = x->n;
                if (strncmp(val.c, lbl_80366B4C, 6) == 0) {
                    fn_800F6E88(&t, x->name);
                    if (strncmp(t.c, lbl_80366B54, 6) == 0) {
                        recurse(lbl_8035B308->h->y);
                    }
                    for (k = 0; k < cnt; k++) {
                        Z *z = x->items[k];
                        if (z) recurse(z->y);
                    }
                }
            }
        }
        if (done) break;
    }
}

} /* extern "C" */
