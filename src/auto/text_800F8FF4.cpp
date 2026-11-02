// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

}
class C800F930C { public: char key[8]; void *val; C800F930C(); };
struct P { C800F930C *arr; u32 n; };
extern "C" { void fn_800604C4(s32, s32, s32, s32); void fn_800F7EC0(void *); void fn_800F7E98(void); extern void *lbl_8035A9F8; extern u32 lbl_8029CA70[]; extern char lbl_8029CAB8[];
u32 fn_800F8CD8(P *p, C800F930C *e);
s32 fn_800F6CD0(C800F930C *a, C800F930C *b);
void fn_800F6E40(char *buf, C800F930C *e);
char *strcat(char *, const char *);
void fn_80060568(char *, s32, s32, s32);
void fn_800F87F0(P *p, C800F930C *e, void *v);
void fn_800F6E88(C800F930C *a, C800F930C *b);

void fn_800F8FF4(P *p);
static inline void ins(P *p, C800F930C *e, void *v, u32 h) {
    u32 j = h;
    while (p->arr[j].val) {
        if (fn_800F6CD0(&p->arr[j], e)) {
            char buf[48];
            fn_800F6E40(buf, e);
            buf[8] = 0;
            strcat(buf, lbl_8029CAB8);
            fn_80060568(buf, 0, 0, 0);
        }
        if (++j >= p->n) j = 0;
        if (j == h) {
            fn_800F8FF4(p);
            fn_800F87F0(p, e, v);
            return;
        }
    }
    fn_800F6E88(&p->arr[j], e);
    p->arr[j].val = v;
}
#pragma auto_inline off
void fn_800F8FF4(P *p) {
//P{
    u32 h;
    C800F930C *e;
    void *v;
    u32 oldn;
    C800F930C *old;
    u32 k;
    u32 j;
    u32 i;
//P}
    oldn = p->n;
    p->n = oldn + 1;
    for (i = 0; i < 18; i++) {
        if (p->n < lbl_8029CA70[i]) break;
    }
    if (i < 18) p->n = lbl_8029CA70[i];
    old = p->arr;
    if (!lbl_8035A9F8) fn_800604C4(-2, 0, 0, 0);
    fn_800F7EC0(lbl_8035A9F8);
    p->arr = new C800F930C[p->n];
    fn_800F7E98();
    if (!p->arr) fn_800604C4(-4, 0, 0, 0);
    for (e = old, k = 0; k < oldn; e++, k++) {
        v = e->val;
        if (v) ins(p, e, v, fn_800F8CD8(p, e));
    }
    delete[] old;
}
#pragma auto_inline reset

} /* extern "C" */
