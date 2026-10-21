// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern void *lbl_8035AC80;
u32 fn_800FADA8(void *);
void fn_800FB064(void *, char *);
void fn_800FAEA0(void *);
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
u32 fn_800F9398(void *, char *);
u32 fn_800F9788(void *, char *, char *);
void *__nwa__FUl(u32);
void __dla__FPv(void *);

struct Arr { u32 n; u32 *a; };

void fn_8013E904(Arr *p, u8 *q, void *r, char *s) {
    u32 i;
    char key[16];
    u32 v;
    if (p->n != 0) {
        if (p->a != 0) {
            __dla__FPv(p->a);
        }
        p->n = 0;
        p->a = 0;
    }
    p->n = fn_800FADA8(r);
    if (lbl_8035AC80 == 0) {
        fn_800604C4(-2, 0, 0, 0);
    }
    fn_800F7EC0(lbl_8035AC80);
    p->a = (u32 *)__nwa__FUl(p->n * 4);
    fn_800F7E98();
    if (p->a == 0) {
        fn_800604C4(-4, 0, 0, 0);
    }
    for (i = 0; i < p->n; i++) {
        fn_800FB064(r, key);
        if (key[0] == 0) {
            p->a[i] = 0;
        } else {
            if (s == 0 || *s == 0) {
                v = fn_800F9398(q + 120, key);
            } else {
                v = fn_800F9788(q + 144, s, key);
            }
            p->a[i] = v;
        }
    }
    fn_800FAEA0(r);
}

} /* extern "C" */
