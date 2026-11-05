#include "common.h"

extern "C" {
struct V { virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7(); virtual void s8(); virtual void *v9(); };
struct W { u8 pad_[16]; virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void v6(void*,u32,u32,u32,int); virtual void s7(); virtual void *v8(u32); };
#define F(p,o,t) (*(t*)((u8*)(p)+(o)))
}
struct C8013ECE4 { C8013ECE4(); int n; void **arr; };
extern "C" {
extern u8 *lbl_8035B460;
extern void *lbl_8035B530;
extern f32 lbl_80360F80;
extern f32 lbl_80360F84;
int fn_802416D4(void);
u8 *fn_8022C3F4(void *);
void fn_800604C4(int, int, int, int);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
void fn_8013EBAC(C8013ECE4 *, void *, u32);
void fn_8012FE8C(void *, void *, W *, void *);
struct L { u32 n; u8 **items; u32 cnt() { return n; } u8 *get(u32 i) { return items[i]; } };
static inline u8 sz1(u8 *q) { return q[48]; }
static inline u8 sz2(u8 *q) { return q[52]; }
struct PP { u8 pad[300]; L *l; };
int fn_80094E24(u8 *p, void *a) {
    void *res;
    int r = fn_802416D4();
    res = F(F(lbl_8035B460,12,u8*),11340,void*);
    u8 *o = fn_8022C3F4(a);
    u32 i;
    {
        L *l = F(o,108,L*);
        if (!l) l = (L *)(F(o,144,u8*) + 28);
        F(p,300,L*) = l;
    }
    F(p,312,u32) = F(p,300,L*)->n;
    if (!lbl_8035B530) fn_800604C4(-2, 0, 0, 0);
    fn_800F7EC0(lbl_8035B530);
    F(p,304,C8013ECE4*) = new C8013ECE4;
    fn_800F7E98();
    if (!F(p,304,C8013ECE4*)) fn_800604C4(-4, 0, 0, 0);
    fn_8013EBAC(F(p,304,C8013ECE4*), res, F(p,312,u32));
    F(p,308,W*) = (W *)F(F(lbl_8035B460,12,u8*),11332,V*)->v9();
    {
        u32 s2 = 0, s1 = 0;
        PP *pp = (PP *)p;
        for (i = 0; i < pp->l->cnt(); i++) {
            s1 += sz1(pp->l->get(i));
            s2 += sz2(pp->l->get(i));
        }
        F(p,308,W*)->v6(res, s2, s1, F(p,312,u32), 0);
    }
    for (i = 0; i < F(p,312,u32); i++) {
        void *x = F(p,308,W*)->v8(i);
        fn_8012FE8C(x, res, F(p,308,W*), F(p,300,L*)->items[i]);
        F(p,304,C8013ECE4*)->arr[i] = x;
    }
    F(o,108,C8013ECE4*) = F(p,304,C8013ECE4*);
    F(p,280,void*) = F(p,304,C8013ECE4*)->arr[0];
    F(p,284,void*) = F(p,304,C8013ECE4*)->arr[1];
    F(p,288,int) = 1;
    if (F(p,316,int*)) F(p,288,int) = *F(p,316,int*);
    if (F(p,288,int)) F(p,296,f32) = lbl_80360F80;
    else F(p,296,f32) = lbl_80360F84;
    F(p,336,int) = 0;
    return r;
}
}
