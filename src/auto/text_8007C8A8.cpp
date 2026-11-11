#include "common.h"
/* classes with out-of-TU ctors/dtors: must stay at global scope (mangled names) */
struct C802449C4 {
    u8 d[64];
    C802449C4();
    ~C802449C4();
};
struct C801883E0 { char pad[0xcc]; C801883E0(void); };
extern "C" {
struct Img80298768 { void *p; s32 a, b, c, d; };
extern const Img80298768 lbl_80298768;
const Img80298768 lbl_80298768 = {0, 1, 0, 0, 0};
extern const Img80298768 lbl_8029877C;
const Img80298768 lbl_8029877C = {0, 1, 0, 0, 0};
}

#pragma push
namespace m8007C8A8 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

extern char lbl_8035F908[8];

struct V80055C68 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void m(char *s);
};

void fn_8007C8A8(V80055C68 *p) {
    p->m(lbl_8035F908);
    p->m((char *)"LIGHTOFF");
    p->m((char *)"SRCHTRIG");
    p->m((char *)"SHCOLECT");
}

} /* extern "C" */

} /* namespace m8007C8A8 */
#pragma pop

#pragma push
namespace m8007C93C {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

extern char lbl_8035F908[8];
} /* extern "C" */
struct V80055CFC {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8();
    virtual void m(char *);
};
extern "C" {


void fn_8007C93C(V80055CFC *p) {
    p->m(lbl_8035F908);
    p->m((char *)"LIGHTOFF");
    p->m((char *)"SRCHTRIG");
    p->m((char *)"SHCOLECT");
}

} /* extern "C" */

} /* namespace m8007C93C */
#pragma pop

#pragma push
namespace m8007C9D0 {
extern "C" {
/* Functions from 0x8007C9D0 to 0x8007C9DC, found by decomp-toolkit. */

void fn_8007C9D0(char* arg0) {
    *(s32*)(arg0 + 0x17C) = 0;
}

}

} /* namespace m8007C9D0 */
#pragma pop

#pragma push
namespace m8007C9DC {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

/* QV=2.0p1 */
struct S16_7C { u8 pad[4]; f32 f4; u8 pad2[44]; u16 f52; };
struct S176_7C { u8 pad[4]; f32 f4; u8 pad2[8]; S16_7C *f16; };
struct S340_7C { u8 pad[176]; S176_7C *f176; };
struct P7C { u8 pad[340]; S340_7C *f340; u8 pad2[28]; s32 f372; u8 pad3[4]; s32 f380; u8 pad4[12]; u32 f396; };
extern f32 lbl_8035F910;
void fn_802494A4(P7C *, s32);
void fn_802490E0(P7C *, s32, f32);
void fn_8007C9DC(P7C *p) {
    p->f396--;
    if (p->f396 == 0) {
        p->f372 = 0;
        fn_802494A4(p, 2);
    }
    p->f380 = 1;
    p->f340->f176->f4 = lbl_8035F910;
    fn_802490E0(p, 1, (f32)p->f340->f176->f16->f52 / p->f340->f176->f16->f4);
}

} /* extern "C" */

} /* namespace m8007C9DC */
#pragma pop

#pragma push
#pragma use_lmw_stmw on
namespace m8007CA80 {
// fn_8007CA80: first inList copy hand-written in the loop (scan() start-index inline), natural procA, third copy = inList3 (void* param, l declared after j).
extern "C" {
extern "C" {
struct Name { char s[8]; };
struct LH { u8 pad[16]; u32 n; };
struct L { LH *h; u8 pad[8]; Name *names; };
struct G { u8 pad[12]; u32 n; };
struct V1 { u8 pad[192]; virtual void v0(); virtual void v1(); virtual void v2(); virtual void get(char *, s32); };
struct V2 { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
  virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
  virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29();
  virtual void v30(); virtual void v31(); virtual void v32(); virtual void m(char *, s32, s32, s32, s32); };
struct O { u8 pad[236]; s32 f236; u8 pad2[56]; char *def; u8 pad3[20]; L *l320; u8 pad4[8]; L *l332; u8 pad5[60]; u32 f396; u32 *p400; u32 m404; };
extern char lbl_8035F920[8];
extern char lbl_8035F928[8];
extern char lbl_8035F930[7];
extern char lbl_8035F938[7];
extern char lbl_8035F940[4];
extern void *lbl_8035A0A4;
extern V1 *lbl_8035B684;
extern void *lbl_8035B65C;
extern void *lbl_8035B308;
G *fn_80240004(O *, s32);
s32 fn_8024548C(G *, u32, s32, s32, char *, s32, s32);
void fn_800F6E88(char *, char *);
s32 fn_800F6CD0(char *, char *);
s32 fn_80245F8C(G *, u32);
s32 fn_80245F48(G *, s32);
void fn_8003CAD8(void *, s32);
s32 fn_8003CDA4(void *);
void *fn_80242144(O *, s32);
void fn_80242BC0(void *, char *, s32, s32, s32, s32);
void __ct__9C80253F24Fiiii(void *, void *, s32, s32, s32);
V2 *fn_802288FC(void *, char *);

static inline BOOL inList(O *o, L *l, u32 idx) {
    char name[8];
    u32 j;
    if (fn_8024548C(fn_80240004(o, 0), idx, -1, 1, name, 0, 0) == 0) fn_800F6E88(name, o->def);
    for (j = 0; j < l->h->n; j++) {
        char tmp[8];
        fn_800F6E88(tmp, l->names[j].s);
        if (fn_800F6CD0(name, tmp)) return TRUE;
    }
    return FALSE;
}

static inline BOOL inList2(O *o, u32 idx) {
    L *l = *(L *volatile *)&o->l320;
    char name[8];
    u32 off;
    u32 j;
    if (fn_8024548C(fn_80240004(o, 0), idx, -1, 1, name, 0, 0) == 0) fn_800F6E88(name, o->def);
    for (j = 0, off = 0; j < l->h->n; off += 8, j++) {
        char tmp[8];
        fn_800F6E88(tmp, (char *)l->names + off);
        if (fn_800F6CD0(name, tmp)) return TRUE;
    }
    return FALSE;
}

static inline BOOL inList3(O *o, void *lv, u32 idx) {
    char name[8];
    u32 j;
    L *l = (L *)lv;
    if (fn_8024548C(fn_80240004(o, 0), idx, -1, 1, name, 0, 0) == 0) fn_800F6E88(name, o->def);
    for (j = 0; j < l->h->n; j++) {
        char tmp[8];
        fn_800F6E88(tmp, l->names[j].s);
        if (fn_800F6CD0(name, tmp)) return TRUE;
    }
    return FALSE;
}
static inline BOOL scan(L *l, char *name, char *tmp, u32 j) {
 for (; j < l->h->n; j++) { fn_800F6E88(tmp, l->names[j].s); if (fn_800F6CD0(name, tmp)) return TRUE; }
 return FALSE; }
static inline void procA(O *o, u32 i) {
        o->f236 = fn_80245F8C(fn_80240004(o, 0), i);
        {
            s32 k = fn_80245F48(fn_80240004(o, 0), o->f236);
            if (!(*o->p400 & (o->m404 & (1 << k)))) {
                *o->p400 |= 1 << k;
                if (inList(o, o->l320, k)) {
                    char b40[8];
                    char b48[8];
                    fn_8003CAD8(lbl_8035A0A4, 1);
                    o->f396--;
                    if (o->f396 == 0) fn_80242BC0(fn_80242144(o, 0), lbl_8035F920, 0, 0, 0, 0);
                    lbl_8035B684->get(b40, -1);
                    if (fn_800F6CD0(b40, lbl_8035F928)) {
                        switch (fn_8003CDA4(lbl_8035A0A4)) {
                        case 4:
                            fn_800F6E88(b48, lbl_8035F930);
                            break;
                        case 15:
                            fn_800F6E88(b48, lbl_8035F938);
                            break;
                        case 1:
                            break;
                        default:
                            fn_800F6E88(b48, lbl_8035F940);
                            break;
                        }
                        __ct__9C80253F24Fiiii(lbl_8035B65C, b48, 0, 0, 0);
                    }
                }
            }
        }
}
void fn_8007CA80(O *o) {
    u32 i;
    for (i = 0; i < fn_80240004(o, 0)->n; i++) {
        if (*o->p400 & (o->m404 & (1 << i))) continue;
{ char tmp[8]; char name[8]; L *l1;
 l1 = o->l320;
 if (fn_8024548C(fn_80240004(o, 0), i, -1, 1, name, 0, 0) == 0) fn_800F6E88(name, o->def);
 if (!scan(l1, name, tmp, 0)) continue; }
        procA(o, i);
        if (inList3(o, o->l332, i)) {
            char b72[16];
            V2 *x;
            fn_800F6E88(b72, o->l332->names[0].s);
            x = fn_802288FC(lbl_8035B308, b72);
            if (x) x->m((char *)"SHCOLECT", 0, 0, 0, 0);
        }
    }
}
}
}

} /* namespace m8007CA80 */
#pragma pop

#pragma push
#pragma use_lmw_stmw on
namespace m8007CE4C {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

struct B { u32 a, b; };
struct L0 { u8 pad[16]; u32 n; };
struct L { L0 *f0; u8 pad4[8]; u8 *f12; };
struct T { u8 pad[236]; int f236; u8 pad240[56]; char *f296; u8 pad300[20]; L *f320; u8 pad324[72]; u32 f396; u32 *f400; u32 f404; };
extern void *lbl_8035A0A4;
struct K { u8 pad[192]; virtual void a0(); virtual void a1(); virtual void a2(); virtual void get(B *, int); };
extern K *lbl_8035B684;
extern void *lbl_8035B65C;
extern char lbl_8035F920[8], lbl_8035F928[8], lbl_8035F930[7], lbl_8035F938[7], lbl_8035F940[4];
void *fn_80240004(T *, int);
int fn_80245F48(void *, int);
int fn_8024548C(void *, int, int, int, B *, int, int);
void fn_800F6E88(B *, const void *);
int fn_800F6CD0(B *, const void *);
void fn_8003CAD8(void *, int);
int fn_8003CDA4(void *);
void *fn_80242144(T *, int);
void fn_80242BC0(void *, const char *, int, int, int, int);
void __ct__9C80253F24Fiiii(void *, B *, int, int, int);
typedef void (*VF)(void *, B *, int);
static inline int has(L *l, B *n, B &t) {
    u32 i;
    for (i = 0; i < l->f0->n; i++) {
        fn_800F6E88(&t, l->f12 + i * 8);
        if (fn_800F6CD0(n, &t)) return 1;
    }
    return 0;
}
static inline int chk(T *t, int idx) {
    L *l = t->f320;
    B n;
    B tt;
    u32 i;
    if (!fn_8024548C(fn_80240004(t, 0), idx, -1, 1, &n, 0, 0)) fn_800F6E88(&n, t->f296);
    for (i = 0; i < l->f0->n; i++) {
        fn_800F6E88(&tt, l->f12 + i * 8);
        if (fn_800F6CD0(&n, &tt)) return 1;
    }
    return 0;
}
void fn_8007CE4C(T *t) {
    int idx;
    B s;
    B r;
    idx = fn_80245F48(fn_80240004(t, 0), t->f236);
    if (*t->f400 & (t->f404 & (1 << idx))) return;
    *t->f400 |= 1 << idx;
    if (!chk(t, idx)) return;
    fn_8003CAD8(lbl_8035A0A4, 1);
    t->f396--;
    if (t->f396 == 0) fn_80242BC0(fn_80242144(t, 0), lbl_8035F920, 0, 0, 0, 0);
    lbl_8035B684->get(&r, -1);
    if (!fn_800F6CD0(&r, lbl_8035F928)) return;
    switch (fn_8003CDA4(lbl_8035A0A4)) {
    case 4: fn_800F6E88(&s, lbl_8035F930); break;
    case 15: fn_800F6E88(&s, lbl_8035F938); break;
    case 1: break;
    default: fn_800F6E88(&s, lbl_8035F940); break;
    }
    __ct__9C80253F24Fiiii(lbl_8035B65C, &s, 0, 0, 0);
}

} /* extern "C" */

} /* namespace m8007CE4C */
#pragma pop

#pragma push
namespace m8007D04C {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

struct V8007D04C {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void set(const char *s, s32 a, s32 b, s32 c, s32 d);
};
extern const char lbl_8035F920[8];
void *fn_80242144(u8 *self, s32 n);
void fn_802448C8(C802449C4 *it, void *p);
void fn_80244750(C802449C4 *it, s32 n);
void *fn_8024457C(C802449C4 *it);
void fn_80244594(C802449C4 *it);
s32 fn_80244584(C802449C4 *it);
void fn_8007D140(u8 *self, s32 a, u32 i);

void fn_8007D04C(u8 *self) {
    u32 i;
    (*(V8007D04C **)(self + 228))->set(lbl_8035F920, 0, 0, 0, 0);
    C802449C4 it;
    fn_802448C8(&it, fn_80242144(self, 0));
    fn_80244750(&it, 0);
    for (i = 0; fn_80244584(&it) == 0 && i < *(u32 *)(self + 384); i++) {
        if (fn_8024457C(&it) == *(void **)(self + 228)) {
            fn_8007D140(self, 1, i);
            return;
        }
        fn_80244594(&it);
    }
}

} /* extern "C" */

} /* namespace m8007D04C */
#pragma pop

#pragma push
#pragma use_lmw_stmw on
namespace m8007D140 {
extern "C" {
#pragma opt_common_subs off
struct B { u32 a, b; };
struct V3 { f32 x, y, z; };
struct L0 { u8 pad[16]; u32 n; };
struct L { L0 *f0; u8 pad4[8]; u8 *f12; };
struct U { u8 pad[12]; u32 n; };
struct Y { u8 pad[0x30]; void *f30; };
struct X { u8 pad[0x9c]; Y *f9c; };
struct S { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
 virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
 virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29();
 virtual void v30(); virtual void v31(); virtual void v32(); virtual void v33(const char *, X *, int, void *, void *);
 u8 pad[0x408]; B f40c; B f414; };
struct T { u8 pad[0xe0]; X *fe0; u8 pade4[0x11c - 0xe4]; int f11c; u8 pad120[4]; B *f124; void *f128; u8 pad12c[0x140 - 0x12c];
    L *f140; L *f144; L *f148; u8 pad14c[0x178 - 0x14c]; int f178; u8 pad17c[0x188 - 0x17c]; u32 f188; int f18c; u32 *f190; u32 f194; };
extern void *lbl_8035B308;
extern f32 lbl_8035F910;
extern char lbl_8035F940[4], lbl_8035F94C[6], lbl_8035F954[6], lbl_8035F95C[6];
S *fn_802288FC(void *, int);
void fn_80107244(void *, V3 *);
U *fn_80240004(T *, int);
int fn_8024548C(void *, int, int, int, B *, int, int);
void *fn_80245F8C(void *, int);
void fn_800F6E88(B *, const void *);
int fn_800F6CD0(const void *, const void *);
void fn_80240B50(T *, B *, int);
typedef void (*VF)(S *, const char *, X *, int, void *, void *);
static inline int chk(T *t, L *l, int u, int idx) {
    B n;
    B tt;
    u32 i;
    if (!fn_8024548C(fn_80240004(t, u), idx, -1, 1, &n, 0, 0)) fn_800F6E88(&n, t->f128);
    for (i = 0; i < l->f0->n; i++) {
        fn_800F6E88(&tt, l->f12 + i * 8);
        if (fn_800F6CD0(&n, &tt)) return 1;
    }
    return 0;
}
#pragma opt_lifetimes off
void fn_8007D140(T *t, int a, int b) {
    void *r;
    S *s;
    V3 v;
    int u;
    u32 n;
    int found;
    u32 i;
    void *sv = fn_802288FC(lbl_8035B308, t->f11c);
    Y *y = t->fe0->f9c;
    s = (S *)sv;
    if (y->f30) fn_80107244(y->f30, &v);
    else { v.x = lbl_8035F910; v.y = lbl_8035F910; v.z = lbl_8035F910; }
    u = a ? b + 1 : 0;
    n = a ? fn_80240004(t, u)->n : t->f188;
    found = 0;
    for (i = 0; i < n; i++) {
        int c;
        c = 1;
        if (!a) c = (!(*t->f190 & (t->f194 & (1 << i))) || (!chk(t, t->f140, 0, i) && !chk(t, t->f144, 0, i)))
                 && !(chk(t, t->f144, 0, i) && t->f178);
        if (c) {
            B nm, tmp, tmp2;
            int k;
            if (a) { if (!chk(t, t->f140, u, i)) chk(t, t->f144, u, i); }
            if (!a) { if (chk(t, t->f140, 0, i)) t->f18c++; }
            k = fn_8024548C(fn_80240004(t, u), i, -1, 1, &nm, 0, 0);
            fn_800F6E88(&tmp, k > 0 ? (void *)&nm : t->f128);
            fn_800F6E88(&s->f40c, &tmp);
            if (!a && (chk(t, t->f144, 0, i) || chk(t, t->f148, 0, i))) fn_800F6E88(&tmp2, lbl_8035F94C);
            else fn_800F6E88(&tmp2, lbl_8035F954);
            fn_800F6E88(&s->f414, &tmp2);
            r = fn_80245F8C(fn_80240004(t, u), i);
            k = a ? 0 : chk(t, t->f140, u, i);
            s->v33(lbl_8035F95C, a ? 0 : t->fe0, 0, a ? 0 : r, k ? (void *)&v : r);
            if (chk(t, t->f140, u, i)) found = 1;
        }
    }
    if (found) {
        found = (int)t->f124;
        if (!fn_800F6CD0((B *)found, lbl_8035F940)) fn_80240B50(t, (B *)found, 0);
    }
}
#pragma opt_lifetimes reset
}

} /* namespace m8007D140 */
#pragma pop

#pragma push
namespace m8007D9C0 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

extern void *lbl_8035B65C;
void __ct__9C80253F24Fiiii(void *, void *, s32, s32, s32);

void fn_8007D9C0(void) {
    __ct__9C80253F24Fiiii(lbl_8035B65C, (u8 *)"SHRIVRET", 0, 0, 0);
}

} /* extern "C" */

} /* namespace m8007D9C0 */
#pragma pop

#pragma push
namespace m8007D9F8 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

struct B { u32 a, b; };
struct CB { void *p; u32 a, b, c, d; };
extern char lbl_8035F940[4], lbl_8035F944[8], lbl_8035F964[8];
extern void *lbl_8035B65C;
extern void *lbl_8035B79C;
struct V72 { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19(); virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31(); virtual void v32(); virtual void say(const char *, void *, int, int, void *); };
struct G308 { u8 pad[72]; V72 *f72; };
extern G308 *lbl_8035B308;
struct L0 { u8 pad[16]; u32 n; };
struct L { L0 *f0; u8 pad4[8]; u8 *f12; };
struct T { u8 pad[224]; void *f224; u8 pad228[60]; B *f288; u8 pad292[44]; L *f336; u8 pad340[8]; B *f348; int *f352; u8 pad356[16]; int f372; int f376; u8 pad380[28]; void **f408; };
void __ct__9C80253F24Fiiii(void *, const char *, int, int, int);
int fn_800F6CD0(void *, const void *);
void fn_800F6E88(B *, const void *);
void fn_80240B50(T *, B *, int);
void fn_8023F764(T *, void **, CB);
void fn_8023FA2C(T *, void **, CB);
void fn_8007D140(T *, int, int);
void fn_8026820C(void *, int);
void *fn_80242144(T *, int);
void fn_80242BC0(void *, const char *, int, int, int, int);
void fn_802494A4(T *, int);
static inline CB mk(const CB &tpl, void *b) { CB t = tpl; t.p = b; return t; }
static inline void loop(T *t, u32 i) {
    for (; i < t->f336->f0->n; i++) {
        B nm;
        fn_800F6E88(&nm, t->f336->f12 + i * 8);
        if (fn_800F6CD0(&nm, lbl_8035F940) == 0) {
            CB cb = mk(*(const CB *)&lbl_8029877C, &nm);
            if (t->f408[i]) {
                fn_8023F764(t, &t->f408[i], cb);
                t->f408[i] = 0;
            }
            fn_8023FA2C(t, &t->f408[i], cb);
        }
    }
}
void fn_8007D9F8(T *t) {
    __ct__9C80253F24Fiiii(lbl_8035B65C, "SHRIVRET", 0, 0, 0);
    B *n = t->f288;
    if (fn_800F6CD0(n, lbl_8035F940) == 0) fn_80240B50(t, n, 0);
    loop(t, 0);
    fn_8007D140(t, 0, -1);
    if (fn_800F6CD0(t->f348, lbl_8035F940) == 0) lbl_8035B308->f72->say(lbl_8035F964, t->f224, 0, 0, t->f348);
    if (*t->f352) fn_8026820C(lbl_8035B79C, 3);
    if (!t->f376) fn_80242BC0(fn_80242144(t, 0), lbl_8035F944, 0, 0, 0, 0);
    t->f376 = 1;
    t->f372 = 1;
    fn_802494A4(t, 3);
}

} /* extern "C" */

extern "C" void fn_8007D9F8_pad(void (*f)(const char *)) { f("RUMBLE_L"); }

} /* namespace m8007D9F8 */
#pragma pop

#pragma push
namespace m8007DC38 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

struct V_8007DC38 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void p17(); virtual void p18(); virtual void p19(); virtual void p20(); virtual void p21(); virtual void p22(); virtual void p23(); virtual void p24(); virtual void p25(); virtual void p26(); virtual void p27(); virtual void p28(); virtual void p29(); virtual void p30(); virtual void p31(); virtual void p32(); virtual void m(void *, void *, s32, void *, void *); };
extern u32 lbl_8035F96C;

void fn_8007DC38(u8 *p) {
    if (*(s32 *)(p + 0x170) != 0 && *(s32 *)(p + 0x174) == 0) {
        (*(V_8007DC38 **)(p + 0xE4))->m(&lbl_8035F96C, *(void **)(p + 0xE0), 0, *(void **)(p + 0xEC), *(void **)(p + 0x164));
    }
}

} /* extern "C" */

} /* namespace m8007DC38 */
#pragma pop

#pragma push
namespace m8007DC98 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {



} /* extern "C" */

extern "C" {
void fn_8022A7A8(int);
void fn_8022B618(int, int);
struct VCall_fn_8007DC98_0 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void p17(); virtual void p18(); virtual void p19(); virtual void m(); };

void fn_8007DC98(u32 param_1) {
    u32 *iVar1;

    ((VCall_fn_8007DC98_0 *)(*(u32 **)(param_1 + 0xe0)))->m();
    fn_8022A7A8((int)(*(u32 *)(param_1 + 0xe0)));
    iVar1 = *(u32 **)(*(u32 *)(param_1 + 0xe0) + 0x9c);
    if ((iVar1 != NULL) && (*(u32 *)((u8 *)iVar1 + 0x38) != 0)) {
        fn_8022B618((int)(*(u32 *)(param_1 + 0xe0)), (int)(iVar1));
    }
    *(u32 *)(param_1 + 0x170) = 0;
}
}

} /* namespace m8007DC98 */
#pragma pop

#pragma push
namespace m8007DD04 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {



} /* extern "C" */

extern "C" {
void fn_8022AE50(int);
void fn_8022BBF4(int, int);
struct VCall_fn_8007DD04_0 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void p17(); virtual void p18(); virtual void m(); };

void fn_8007DD04(u32 param_1) {
    u32 *iVar1;

    ((VCall_fn_8007DD04_0 *)(*(u32 **)(param_1 + 0xe0)))->m();
    fn_8022AE50((int)(*(u32 *)(param_1 + 0xe0)));
    iVar1 = *(u32 **)(*(u32 *)(param_1 + 0xe0) + 0x9c);
    if ((iVar1 != NULL) && (*(u32 *)((u8 *)iVar1 + 0x38) != 0)) {
        fn_8022BBF4((int)(*(u32 *)(param_1 + 0xe0)), (int)(iVar1));
    }
    *(u32 *)(param_1 + 0x170) = 1;
}
}

} /* namespace m8007DD04 */
#pragma pop

#pragma push
namespace m8007DD70 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

typedef struct Vec { f32 x, y, z; } Vec;
typedef struct C16 { u8 pad[4]; f32 f4; } C16;
typedef struct C176 { u8 pad[4]; f32 f4; f32 f8; u8 pad2[4]; C16 *f16; u8 pad3[16]; f32 f36; } C176;
typedef struct C340 { u8 pad[176]; C176 *f176; } C340;
typedef struct C156 { u8 pad[120]; void *f120; } C156;
typedef struct C224 { u8 pad[156]; C156 *f156; } C224;
typedef struct Obj { u8 pad[224]; C224 *f224; u8 pad2[340 - 228]; C340 *f340; } Obj;
extern f32 lbl_8035F974;
extern f32 lbl_8035F910;
void fn_80107F3C(void *, Vec *);

static inline void setF8(C176 *r, f32 v) {
    r->f8 = v;
    if (r->f16 != 0) {
        r->f36 = r->f8 / r->f16->f4;
    }
}

void fn_8007DD70(Obj *o) {
    C156 *q;
    if (o->f340 != 0) {
        q = o->f224->f156;
        if (q != 0) {
            Vec v;
            v.x = lbl_8035F974;
            v.y = lbl_8035F974;
            v.z = lbl_8035F974;
            if (q->f120 != 0) {
                fn_80107F3C(q->f120, &v);
            }
        }
        o->f340->f176->f4 = lbl_8035F910;
        setF8(o->f340->f176, lbl_8035F910);
    }
}

} /* extern "C" */

} /* namespace m8007DD70 */
#pragma pop

#pragma push
namespace m8007DE14 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

/* QV=2.0p1 */
} /* extern "C" */
struct Vec { f32 x, y, z; };
struct OBase {
    u32 flags;
    u8 pad4[20];
    Vec pos;
    u8 pad36[68];
    virtual void v0(); virtual void v1(); virtual void v2();
};
struct Obj : OBase {
    u8 pad108[12];
    void *f120;
};
inline Vec &GetPos(Obj *o) {
    if (o->flags & 4) o->v2();
    return o->pos;
}
struct H { u8 pad[156]; Obj *f156; };
struct G { u8 pad[72]; H *f72; };
struct CC { u8 pad[40]; Vec col; };
struct Q { u8 pad[40]; CC *f40; };
struct S4 { u8 pad[4]; f32 f4; };
struct R { u8 pad[8]; f32 f8; u8 pad12[4]; S4 *f16; u8 pad20[16]; f32 f36; };
struct P { u8 pad[168]; Q *f168; u8 pad172[4]; R *f176; };
struct SelfF {
    u8 pad[224];
    H *f224;
    u8 pad228[72];
    f32 *f300;
    f32 *f304;
    f32 *f308;
    f32 *f312;
    u8 pad316[24];
    P *f340;
    u8 pad344[36];
    s32 f380;
};
static inline void setF8(R *r, f32 v) {
    r->f8 = v;
    if (r->f16 != 0) {
        r->f36 = r->f8 / r->f16->f4;
    }
}
extern "C" {
extern G *lbl_8035B308;
extern volatile f32 lbl_8035F910;
extern f32 lbl_8035F974;
f32 fn_80101590(Vec *, Vec *);
void fn_80107F3C(void *, Vec *);

/* the copy goes through volatile stores and lbl_8035F910 is volatile: keeps the 0.0f load below the copy */
static inline void GetFlatPos(Obj *o, Vec *out) {
    Vec &p = GetPos(o);
    volatile Vec *v = (volatile Vec *)out;
    v->x = p.x;
    v->y = p.y;
    v->z = p.z;
    v->z = lbl_8035F910;
}

void fn_8007DE14(SelfF *self) {
    Vec a;
    Vec b;
    Vec col;
    f32 x;
    f32 y;
    f32 z;
    f32 d;
    f32 t;
    f32 s;
    void *q;
    Vec *c;
    GetFlatPos(lbl_8035B308->f72->f156, &a);
    GetFlatPos(self->f224->f156, &b);
    d = fn_80101590(&b, &a);
    if (self->f380) d = lbl_8035F910;
    if (d < *self->f300) d = *self->f300;
    else if (d > *self->f304) d = *self->f304;
    t = (*self->f304 - d) / (*self->f304 - *self->f300);
    c = &self->f340->f168->f40->col;
    x = c->x;
    y = c->y;
    z = c->z;
    col.x = t * (x - lbl_8035F974) + lbl_8035F974;
    col.y = t * (y - lbl_8035F974) + lbl_8035F974;
    col.z = t * (z - lbl_8035F974) + lbl_8035F974;
    s = t * (*self->f312 - *self->f308) + *self->f308;
    q = self->f224->f156->f120;
    if (q) fn_80107F3C(q, &col);
    setF8(self->f340->f176, s);
}

} /* extern "C" */

} /* namespace m8007DE14 */
#pragma pop

#pragma push
namespace m8007DFE0 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

struct V1_8007DFE0 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15(); virtual void p16(); virtual void p17(); virtual void p18(); virtual void p19(); virtual void m(); };
struct V2_8007DFE0 { u8 pad[0x68]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9(); virtual void p10(); virtual void n(f32); };
extern u32 lbl_8035F920;
s32 fn_8022C558(void *);
void fn_8022A7A8(void *);
void fn_8022B618(void *);
void *fn_80242144(void *, s32);
void fn_80242BC0(void *, void *, s32, s32, s32, s32);
void fn_8007DE14(void *);
void fn_8023FE08(void *, f32);

void fn_8007DFE0(u8 *p, f32 f) {
    if (*(s32 *)(p + 0x170) == 0 && fn_8022C558(*(void **)(p + 0xE0)) != 0) {
        u8 *q;
        (*(V1_8007DFE0 **)(p + 0xE0))->m();
        fn_8022A7A8(*(void **)(p + 0xE0));
        q = *(u8 **)(*(u8 **)(p + 0xE0) + 0x9C);
        if (q != NULL && *(void **)(q + 0x38) != NULL) {
            fn_8022B618(*(void **)(p + 0xE0));
        }
        *(s32 *)(p + 0x170) = 0;
    }
    if (*(s32 *)(p + 0x16C) != 0) {
        *(s32 *)(p + 0x16C) = 0;
        fn_80242BC0(fn_80242144(p, 0), &lbl_8035F920, 0, 0, 0, 0);
    }
    if (*(void **)(p + 0x154) != NULL) {
        s32 s = *(s32 *)(p + 0x60);
        if (s == 2 || (s == 3 && *(s32 *)(p + 0x17C) != 0)) {
            fn_8007DE14(p);
        }
        (*(V2_8007DFE0 **)(p + 0x154))->n(f);
    }
    fn_8023FE08(p, f);
}

} /* extern "C" */

} /* namespace m8007DFE0 */
#pragma pop

#pragma push
#pragma use_lmw_stmw on
namespace m8007E104 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

struct B { u32 a, b; };
struct L0 { u8 pad[16]; u32 n; };
struct L { L0 *f0; u8 pad4[8]; u8 *f12; };
struct V9C { u8 pad[0x38]; void *f38; };
struct VE {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18();
    virtual void on(); virtual void off();
    u8 pad4[0x9c - 4];
    V9C *f9c;
    u8 padA0[0x114 - 0xa0];
    s32 f114;
};
struct G { u8 pad[0xc]; u32 fc; };
struct T {
    u8 pad[0xe0];
    VE *fe0;
    u8 pade4[0x118 - 0xe4];
    s32 *f118;
    u8 pad11c[0x128 - 0x11c];
    char *f128;
    u8 pad12c[0x140 - 0x12c];
    L *f140;
    L *f144;
    void *f148;
    void *f14c;
    void *f150;
    u8 pad154[0x168 - 0x154];
    u32 f168;
    u8 pad16c[4];
    u32 f170;
    u8 pad174[0x184 - 0x174];
    u32 f184;
    u32 f188;
    u8 pad18c[4];
    u32 *f190;
    u32 f194;
};
extern void *lbl_8035A0A4;
extern void *lbl_8035B530;
extern char lbl_8035F940[4];
void *fn_8023F4A0(T *, char *, char *, char *, int);
G *fn_80240004(T *, int);
int fn_8024548C(void *, int, int, int, B *, int, int);
void fn_800F6E88(B *, const void *);
int fn_800F6CD0(B *, const void *);
void fn_8022AE50(VE *);
void fn_8022A7A8(VE *);
void fn_8022BBF4(VE *);
void fn_8022B618(VE *);
s32 fn_8003C778(void *, VE *, u32 **);
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
void fn_8003CA10(void *, int);
void fn_8003CAD8(void *, int);
void fn_802494A4(T *, int);

static inline int chk(T *t, L *l, int u, int idx) {
    B n;
    B tt;
    u32 i;
    if (!fn_8024548C(fn_80240004(t, u), idx, -1, 1, &n, 0, 0)) fn_800F6E88(&n, t->f128);
    for (i = 0; i < l->f0->n; i++) {
        fn_800F6E88(&tt, l->f12 + i * 8);
        if (fn_800F6CD0(&n, &tt)) return 1;
    }
    return 0;
}

static inline void mark(T *t, u32 i) {
    if (chk(t, t->f140, 0, i)) {
        fn_8003CA10(lbl_8035A0A4, 1);
        if (*t->f190 & (t->f194 & (1 << i))) fn_8003CAD8(lbl_8035A0A4, 1);
    }
}

static inline int allSet(T *t, L **l) {
    int all = 1;
    u32 i;
    for (i = 0; i < t->f188; i++) {
        if (chk(t, *l, 0, i)) all = (u8)(all && (*t->f190 & (t->f194 & (1 << i))));
    }
    return all;
}

void fn_8007E104(T *t) {
    s32 ok;
    u32 i;
    VE *e;

    t->f140 = (L *)fn_8023F4A0(t, lbl_8035F940, lbl_8035F940, (char *)"aaShrivelSpawnActors", 1);
    t->f144 = (L *)fn_8023F4A0(t, lbl_8035F940, lbl_8035F940, (char *)"aaItemSpawnActors", 1);
    t->f148 = fn_8023F4A0(t, lbl_8035F940, lbl_8035F940, (char *)"aaSheepSpawnActors", 1);
    t->f14c = fn_8023F4A0(t, lbl_8035F940, lbl_8035F940, (char *)"aaCertificateSpawnActors", 1);
    t->f150 = fn_8023F4A0(t, lbl_8035F940, lbl_8035F940, (char *)"aaEffects", 1);
    if (*t->f118) {
        t->fe0->on();
        fn_8022AE50(t->fe0);
        e = t->fe0;
        if (e->f9c && e->f9c->f38) fn_8022BBF4(e);
        t->f170 = 1;
    } else {
        t->fe0->off();
        fn_8022A7A8(t->fe0);
        e = t->fe0;
        if (e->f9c && e->f9c->f38) fn_8022B618(e);
        t->f170 = 0;
    }
    t->f188 = fn_80240004(t, 0)->fc;
    ok = 0;
    if (t->f188 && t->fe0->f114 == 0) {
        t->f168 = 1;
        ok = fn_8003C778(lbl_8035A0A4, t->fe0, &t->f190);
    } else if (t->f190 == 0) {
        if (lbl_8035B530 == 0) fn_800604C4(-2, 0, 0, 0);
        fn_800F7EC0(lbl_8035B530);
        t->f190 = new u32;
        fn_800F7E98();
        if (t->f190 == 0) fn_800604C4(-4, 0, 0, 0);
    }
    if (ok == 0) {
        if (t->f188 > t->f184) t->f188 = t->f184;
        *t->f190 = *t->f190 & ~t->f194;
    }
    for (i = 0; i < t->f188; i++) {
        mark(t, i);
    }
    if (allSet(t, &t->f140) && allSet(t, &t->f144)) {
        fn_802494A4(t, 3);
        return;
    }
    fn_802494A4(t, 1);
}

} /* extern "C" */

} /* namespace m8007E104 */
#pragma pop

#pragma push
namespace m8007E630 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

/* QV=2.0p1 */
typedef struct { u32 a; u32 b; } T8_8007E630;
typedef struct { u8 pad[16]; u32 count; } Hdr_8007E630;
typedef struct { Hdr_8007E630 *hdr; u8 pad[8]; T8_8007E630 *arr; } S150_8007E630;
typedef struct { void *p; s32 a; s32 b; s32 c; s32 d; } T20_8007E630;
} /* extern "C" */
struct V8007E630 {
    u8 pad[104];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void d(s32);
};
extern "C" {
void __dl__FPv(void *);
void __dla__FPv(void *);
void fn_800F6E88(void *, void *);
void fn_8023F764(void *, void **, T20_8007E630);
void fn_80242210(void *);

void fn_8007E630(u8 *p) {
    u32 i;
    u8 buf[8];
    if (*(s32 *)(p + 360) == 0 && *(void **)(p + 400) != 0) {
        __dl__FPv(*(void **)(p + 400));
        *(void **)(p + 400) = 0;
    }
    if (*(V8007E630 **)(p + 340) != 0) {
        V8007E630 *o = *(V8007E630 **)(p + 340);
        if (o != 0) o->d(1);
        *(V8007E630 **)(p + 340) = 0;
    }
    if (*(void ***)(p + 408) != 0) {
        for (i = 0; i < (*(S150_8007E630 **)(p + 336))->hdr->count; i++) {
            if ((*(void ***)(p + 408))[i] != 0) {
                fn_800F6E88(buf, &(*(S150_8007E630 **)(p + 336))->arr[i]);
                {
                    T20_8007E630 t = *(const T20_8007E630 *)&lbl_80298768;
                    t.p = buf;
                    fn_8023F764(p, &(*(void ***)(p + 408))[i], t);
                }
                (*(void ***)(p + 408))[i] = 0;
            }
        }
        __dla__FPv(*(void **)(p + 408));
        *(void **)(p + 408) = 0;
    }
    fn_80242210(p);
}

} /* extern "C" */

} /* namespace m8007E630 */
#pragma pop

#pragma push
namespace m8007E7A0 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

void fn_80241E0C(void);

void fn_8007E7A0(s32 param_1) {
    if (*(s32 *)(param_1 + 0x168) != 0) {
        *(u32 *)(param_1 + 400) = 0;
    }
    *(u32 *)(param_1 + 0x118) = 0;
    *(u32 *)(param_1 + 0x128) = 0;
    *(u32 *)(param_1 + 300) = 0;
    *(u32 *)(param_1 + 0x130) = 0;
    *(u32 *)(param_1 + 0x134) = 0;
    *(u32 *)(param_1 + 0x138) = 0;
    *(u32 *)(param_1 + 0x13c) = 0;
    *(u32 *)(param_1 + 0x140) = 0;
    *(u32 *)(param_1 + 0x144) = 0;
    *(u32 *)(param_1 + 0x148) = 0;
    *(u32 *)(param_1 + 0x14c) = 0;
    *(u32 *)(param_1 + 0x150) = 0;
    *(u32 *)(param_1 + 0x120) = 0;
    *(u32 *)(param_1 + 0x124) = 0;
    *(u32 *)(param_1 + 0x15c) = 0;
    *(u32 *)(param_1 + 0x160) = 0;
    *(u32 *)(param_1 + 0x164) = 0;
    *(u32 *)(param_1 + 0x158) = 0;
    *(u32 *)(param_1 + 0x168) = 0;
    *(u32 *)(param_1 + 0x16c) = 1;
    *(u32 *)(param_1 + 0x170) = 1;
    *(u32 *)(param_1 + 0x174) = 0;
    *(u32 *)(param_1 + 0x178) = 0;
    *(u32 *)(param_1 + 0x17c) = 0;
    *(u32 *)(param_1 + 0x180) = 10;
    *(u32 *)(param_1 + 0x184) = 0x20;
    *(u32 *)(param_1 + 0x188) = 0;
    *(u32 *)(param_1 + 0x18c) = 0;
    *(u32 *)(param_1 + 0x194) = 0xffffffff;
    fn_80241E0C();
}

} /* extern "C" */

} /* namespace m8007E7A0 */
#pragma pop

#pragma push
namespace m8007E85C {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

/* QV=2.0p1 */
extern char lbl_8035F940[4];
extern char lbl_8035F978[7];
void *fn_8023F52C(void *self, char *a, char *b, char *name, s32 c, s32 d);
void fn_8023F214(void *self);

void fn_8007E85C(u8 *self) {
    M2C_FIELD(self, void **, 280) = fn_8023F52C(self, lbl_8035F940, lbl_8035F940, (char *)"bStartEnabled", 1, 0);
    M2C_FIELD(self, void **, 284) = fn_8023F52C(self, lbl_8035F940, lbl_8035F940, (char *)"aSpawnPoint", 1, 0);
    M2C_FIELD(self, void **, 288) = fn_8023F52C(self, lbl_8035F940, lbl_8035F940, lbl_8035F978, 1, 0);
    M2C_FIELD(self, void **, 292) = fn_8023F52C(self, lbl_8035F940, lbl_8035F940, (char *)"aShrivelSound", 1, 0);
    M2C_FIELD(self, void **, 296) = fn_8023F52C(self, lbl_8035F940, lbl_8035F940, (char *)"aDefaultSpawnActor", 1, 0);
    M2C_FIELD(self, void **, 300) = fn_8023F52C(self, lbl_8035F940, lbl_8035F940, (char *)"rDistMin", 1, 0);
    M2C_FIELD(self, void **, 304) = fn_8023F52C(self, lbl_8035F940, lbl_8035F940, (char *)"rDistMax", 1, 0);
    M2C_FIELD(self, void **, 308) = fn_8023F52C(self, lbl_8035F940, lbl_8035F940, (char *)"rRateMin", 1, 0);
    M2C_FIELD(self, void **, 312) = fn_8023F52C(self, lbl_8035F940, lbl_8035F940, (char *)"rRateMax", 1, 0);
    M2C_FIELD(self, void **, 316) = fn_8023F52C(self, lbl_8035F940, lbl_8035F940, (char *)"rShrivelRecallTime", 1, 0);
    M2C_FIELD(self, void **, 348) = fn_8023F52C(self, lbl_8035F940, lbl_8035F940, (char *)"aPlayerAnimation", 1, 0);
    M2C_FIELD(self, void **, 352) = fn_8023F52C(self, lbl_8035F940, lbl_8035F940, (char *)"bPlayStinger", 1, 0);
    M2C_FIELD(self, void **, 356) = fn_8023F52C(self, lbl_8035F940, lbl_8035F940, (char *)"aObjectType", 1, 0);
    fn_8023F214(self);
}

} /* extern "C" */

} /* namespace m8007E85C */
#pragma pop

#pragma push
namespace m8007EA38 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {



} /* extern "C" */

extern "C" {
extern u32 lbl_8035B460;
extern u32 lbl_8035B530;
extern char lbl_8035F980[0x8];
void fn_800604C4(int, int, int, int);
void fn_800F7E98(void);
void fn_800F7EC0(int);
u32 __nwa__FUl(int);
u32 fn_800F9398(int, int);
void fn_80188144(int, int, int, int);
void fn_802416D4(int, int);
}

extern "C" void fn_8007EA38(u32 param_1, u32 param_2) {
    u32 uVar1;
    u32 iVar2;

    uVar1 = fn_800F9398((int)(*(u32 *)(lbl_8035B460 + 8) + 0x90), (int)((void *)lbl_8035F980)); /* "srchdum" */
    if (lbl_8035B530 == 0) {
        fn_800604C4((int)(0xfffffffe), (int)(0), (int)(0), (int)(0));
    }
    fn_800F7EC0((int)(lbl_8035B530));
    iVar2 = (u32) new C801883E0();
    *(u32 *)(param_1 + 0x154) = iVar2;
    fn_800F7E98();
    if (*(u32 *)(param_1 + 0x154) == 0) {
        fn_800604C4((int)(0xfffffffc), (int)(0), (int)(0), (int)(0));
    }
    if (*(u32 *)(param_1 + 0x154) != 0) {
        fn_80188144((int)(*(u32 *)(param_1 + 0x154)), (int)(*(u32 *)(lbl_8035B460 + 8)), (int)(uVar1), (int)(0));
    }
    if (lbl_8035B530 == 0) {
        fn_800604C4((int)(0xfffffffe), (int)(0), (int)(0), (int)(0));
    }
    fn_800F7EC0((int)(lbl_8035B530));
    uVar1 = __nwa__FUl((int)(0x10));
    *(u32 *)(param_1 + 0x198) = uVar1;
    fn_800F7E98();
    if (*(u32 *)(param_1 + 0x198) == 0) {
        fn_800604C4((int)(0xfffffffc), (int)(0), (int)(0), (int)(0));
    }
    **(u32 **)(param_1 + 0x198) = 0;
    *(u32 *)(*(u32 *)(param_1 + 0x198) + 4) = 0;
    *(u32 *)(*(u32 *)(param_1 + 0x198) + 8) = 0;
    *(u32 *)(*(u32 *)(param_1 + 0x198) + 0xc) = 0;
    fn_802416D4((int)(param_1), (int)(param_2));
}

} /* namespace m8007EA38 */
#pragma pop

#pragma push
namespace m8007EBA0 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

} /* extern "C" */

extern "C" {
extern u8 lbl_802C33F8[];
void __dl__FPv(int);
void __dt__9C8024262CFv(int, int);
struct VCall_fn_8007EBA0_0 { virtual void p0(); virtual void p1(); virtual void p2(); virtual void m(); };

s32 * fn_8007EBA0(s32 *param_1, s16 param_2) {
    if (param_1 != (s32 *)0x0) {
        *param_1 = (s32)lbl_802C33F8;
        ((VCall_fn_8007EBA0_0 *)(param_1))->m();
        __dt__9C8024262CFv((int)(param_1), (int)(0));
        if (0 < param_2) {
            __dl__FPv((int)(param_1));
        }
    }
    return param_1;
}
}

} /* namespace m8007EBA0 */
#pragma pop

#pragma push
namespace m8007EC14 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

extern u8 lbl_802C33F8[];
void __ct__9C8024262CFv(void);

u32 * fn_8007EC14(u32 *param_1) {
    __ct__9C8024262CFv();
    *param_1 = (u32)lbl_802C33F8;
    param_1[0x15] = 10;
    param_1[0xb] = 10;
    param_1[0x1a] = 4;
    param_1[0x17] = 0;
    param_1[0x20] = 1;
    param_1[0x1f] = 0;
    param_1[0x21] = 0;
    param_1[0x22] = 1;
    param_1[0x23] = 1;
    param_1[0x25] = 0;
    param_1[0x43] = 0;
    param_1[0x66] = 0;
    param_1[0x46] = 0;
    param_1[0x4a] = 0;
    param_1[0x4b] = 0;
    param_1[0x4c] = 0;
    param_1[0x4d] = 0;
    param_1[0x4e] = 0;
    param_1[0x4f] = 0;
    param_1[0x50] = 0;
    param_1[0x51] = 0;
    param_1[0x52] = 0;
    param_1[0x53] = 0;
    param_1[0x54] = 0;
    param_1[0x48] = 0;
    param_1[0x49] = 0;
    param_1[0x57] = 0;
    param_1[0x58] = 0;
    param_1[0x59] = 0;
    param_1[0x56] = 0;
    param_1[0x5a] = 0;
    param_1[0x5b] = 1;
    param_1[0x5c] = 1;
    param_1[0x5d] = 0;
    param_1[0x5e] = 0;
    param_1[0x5f] = 0;
    param_1[0x60] = 10;
    param_1[0x61] = 0x20;
    param_1[0x62] = 0;
    param_1[99] = 0;
    param_1[0x65] = 0xffffffff;
    param_1[0x55] = 0;
    param_1[100] = 0;
    return param_1;
}

} /* extern "C" */

} /* namespace m8007EC14 */
#pragma pop

#pragma push
namespace m8007ED14 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

extern f32 lbl_803596E0[];
extern volatile f32 lbl_8035A2E4;
extern f32 lbl_8035A2E0;
extern volatile f64 lbl_8035F988;
double fn_800EFDA4(double);

void fn_8007ED14(void) {
    lbl_8035A2E4 = lbl_803596E0[0];
    lbl_8035A2E0 = fn_800EFDA4(lbl_8035F988);
}

__declspec(section ".ctors") static void (*const ctor_8007ED14)(void) = fn_8007ED14;

} /* extern "C" */

} /* namespace m8007ED14 */
#pragma pop
