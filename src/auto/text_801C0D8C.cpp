// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct A { u8 pad_[128]; virtual void s0(); virtual void s1(); virtual void s2(); virtual void v3(int,void*,void*); virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7(); virtual void v8(int); virtual void v9(void*); virtual void s10(); virtual void s11(); virtual void s12(); virtual void s13(); virtual void s14(); virtual void s15(); virtual void s16(); virtual void s17(); virtual void s18(); virtual void s19(); virtual void s20(); virtual void s21(); virtual void s22(); virtual void s23(); virtual void s24(); virtual void s25(); virtual void s26(); virtual void s27(); virtual void s28(); virtual void s29(); virtual void s30(); virtual void s31(); virtual void s32(); virtual void s33(); virtual void s34(); virtual void s35(); virtual void s36(); virtual void s37(); virtual void s38(); virtual void s39(); virtual void s40(); virtual void s41(); virtual void s42(); virtual void s43(); virtual void s44(); virtual void s45(); virtual void s46(); virtual void s47(); virtual void s48(); virtual void s49(); virtual void s50(); virtual void s51(); virtual void s52(); virtual void s53(); virtual void s54(); virtual void s55(); virtual void s56(); virtual void s57(); virtual void s58(); virtual void s59(); virtual void s60(); virtual void s61(); virtual void s62(); virtual void s63(); virtual void s64(); virtual void s65(); virtual void s66(); virtual void s67(); virtual void s68(); virtual void s69(); virtual void s70(); virtual void s71(); virtual void s72(); virtual void s73(); virtual void v74(char*); };
struct R { u8 pad_[292]; virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual u32 v5(); };
#define F(p,o,t) (*(t*)((u8*)(p)+(o)))
extern void *lbl_8035AFD4;
void fn_800FB064(R *, char *);
int fn_800FADA8(R *);
void fn_800F8E38(void *, void *);
void fn_800604C4(int, int, int, int);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
A *fn_801DDE00(char *);
void fn_801C0614(A *, char *, void *);
struct P { u8 pad[0x14]; int a; int pad18; A **items; u32 n; int pad24; int c; };
int fn_801C0D8C(P *p, int a, R *r, int c, char *d) {
    char t24[8];
    char b16[8];
    char b8[8];
    u32 j;
    u32 t;
    u32 i;
    p->a = a;
    t = r->v5();
    if (t == 228) {
        if (d) fn_800FB064(r, d);
        else fn_800FB064(r, t24);
        t = r->v5();
    }
    p->c = c;
    while (t != 6) {
        switch (t) {
        case 57:
            p->n = fn_800FADA8(r);
            fn_800F8E38(p, (void *)(p->n + 16));
            if (!lbl_8035AFD4) fn_800604C4(-2, 0, 0, 0);
            fn_800F7EC0(lbl_8035AFD4);
            p->items = new A*[p->n];
            fn_800F7E98();
            if (!p->items) fn_800604C4(-4, 0, 0, 0);
            for (i = 0; i < p->n; i++) {
                fn_800FB064(r, b16);
                fn_800FB064(r, b8);
                p->items[i] = fn_801DDE00(b16);
                p->items[i]->v74(b16);
                p->items[i]->v8(p->c);
                F(p->items[i],0x160,P*) = p;
                p->items[i]->v3(p->a, p, r);
                fn_801C0614(p->items[i], b8, p);
            }
            break;
        }
        t = r->v5();
    }
    for (j = 0; j < p->n; j++) p->items[j]->v9(p);
    return 0;
}

} /* extern "C" */
