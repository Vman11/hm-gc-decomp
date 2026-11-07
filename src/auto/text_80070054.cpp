#include "common.h"

extern "C" {

}
struct C801883E0 { C801883E0(); u8 b[204]; };
extern "C" {
struct H { u8 pad[16]; u32 n; };
struct R524 { H *h; u8 pad[8]; u32 *v; };
struct P {
    u8 pad0[524];
    R524 *r524;
    void *r528;
    u32 n532;
    u8 pad536[4];
    char *s540;
    char *s544;
    C801883E0 **a548;
    u32 *a552;
    C801883E0 *o556;
};
extern char lbl_8035ED68[4];
extern char lbl_80297E10[], lbl_80297E1C[];
extern void *lbl_8035B530;
extern u8 **lbl_8035B684;
extern u8 *lbl_8035B460;
void *fn_8023F4A0(P *, char *, char *, char *, int);
void fn_800604C4(int, int, int, int);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
void *fn_800F9398(u8 *, char *);
struct Nd;
void fn_80188144(C801883E0 *, void *, Nd *, int);

void fn_80070054(P *p) {
    u8 *m;
    void *r;
    u32 off;
    u32 i;
    if (!p->r524) {
        p->r524 = (R524 *)fn_8023F4A0(p, lbl_8035ED68, lbl_8035ED68, lbl_80297E10, 1);
        p->r528 = fn_8023F4A0(p, lbl_8035ED68, lbl_8035ED68, lbl_80297E1C, 1);
        p->n532 = p->r524->v[(s32)(p->r524->h->n - 1)];
        if (!lbl_8035B530) fn_800604C4(-2, 0, 0, 0);
        fn_800F7EC0(lbl_8035B530);
        p->a548 = new C801883E0 *[p->n532];
        fn_800F7E98();
        if (!p->a548) fn_800604C4(-4, 0, 0, 0);
        if (!lbl_8035B530) fn_800604C4(-2, 0, 0, 0);
        fn_800F7EC0(lbl_8035B530);
        p->a552 = new u32[p->n532];
        fn_800F7E98();
        if (!p->a552) fn_800604C4(-4, 0, 0, 0);
        m = *lbl_8035B684;
        r = fn_800F9398(m + 12496, p->s540);
        for (i = 0, off = 0; i < p->n532; off += 4, i++) {
            *(C801883E0 **)((u8 *)p->a548 + off) = 0;
            if (r) {
                C801883E0 *o;
                if (!lbl_8035B530) fn_800604C4(-2, 0, 0, 0);
                fn_800F7EC0(lbl_8035B530);
                o = new C801883E0;
                fn_800F7E98();
                if (!o) fn_800604C4(-4, 0, 0, 0);
                fn_80188144(o, *(void **)(lbl_8035B460 + 8), (Nd *)r, 0);
                *(C801883E0 **)((u8 *)p->a548 + off) = o;
            }
        }
        {
        void *r2 = fn_800F9398(m + 12496, p->s544);
        if (r2) {
            Nd *n = (Nd *)r2;
            if (!lbl_8035B530) fn_800604C4(-2, 0, 0, 0);
            fn_800F7EC0(lbl_8035B530);
            p->o556 = new C801883E0;
            fn_800F7E98();
            if (!p->o556) fn_800604C4(-4, 0, 0, 0);
            fn_80188144(p->o556, *(void **)(lbl_8035B460 + 8), n, 0);
        }
        }
    }
    { u32 j; for (j = 0; j < p->n532; j++) p->a552[j] = 0; }
}

} /* extern "C" */
