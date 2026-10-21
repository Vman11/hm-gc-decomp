// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct R { u8 pad[0x124]; virtual void p0(); virtual void p1(); virtual void setup(void *, s32, s32); virtual void p3(); virtual void err(s32); virtual u32 next(); };
class C8013E224 { public: u8 d[0x1C]; C8013E224(); ~C8013E224(); };
struct Nm { u8 d[8]; };
struct Key { u8 d[8]; };
struct Q { u8 pad[0x78]; u8 t78[0x18]; u8 t90[4]; };
struct P { u8 pad[0x10]; virtual void p0(); virtual void clr(); u8 sub[0x18]; u32 nr; void **refs; u32 n; C8013E224 *arr; };
extern "C" { u32 fn_800FADA8(R *); void fn_800FB064(R *, void *); void fn_800FB000(R *, s32); void fn_800FAEA0(R *); void fn_800604C4(s32, s32, s32, s32); void fn_800F7EC0(void *); void fn_800F7E98(void); void fn_800F8E38(P *, u32); void fn_80135E5C(Q *, P *, void *); void fn_800F87F0(P *, void *, void *); void fn_8021B9DC(void *, R *); void *fn_800F9398(void *, void *); void *fn_800F9788(void *, char *, void *); void fn_8013DFBC(C8013E224 *, Q *, P *, R *); extern void *lbl_8035AC78; extern u8 lbl_802E5ED0[]; }
void *__nwa__FUl(u32);

static inline BOOL empty(const char *s) { return !s || !*s; }

extern "C" void fn_8013E2CC(P *p, Q *q, R *r) {
    Key key;
    Nm nm;
    char grp[8];
    Nm *name;
    u32 k;
    u32 i;
    u32 j;
    void *v;
    if (p->refs != 0) {
        p->clr();
    }
    r->setup(lbl_802E5ED0, 8, 0);
    k = r->next();
    name = 0;
    if (k == 57) {
        fn_800FB064(r, &nm);
        name = &nm;
        k = r->next();
    }
    do {
        switch ((s32)k) {
        case 58:
            fn_8021B9DC(p->sub, r);
            break;
        case 59:
            if (p->nr != 0) {
                r->err(39);
            }
            p->nr = fn_800FADA8(r);
            if (p->nr < 1) {
                r->err(35);
            }
            if (!lbl_8035AC78) fn_800604C4(-2, 0, 0, 0);
            fn_800F7EC0(lbl_8035AC78);
            p->refs = (void **)__nwa__FUl(p->nr * 4);
            fn_800F7E98();
            if (!p->refs) fn_800604C4(-4, 0, 0, 0);
            for (i = 0; i < p->nr; i++) {
                fn_800FB064(r, &key);
                fn_800FB064(r, grp);
                if ((char *)grp == 0 || grp[0] == 0) {
                    v = fn_800F9398(q->t78, &key);
                } else {
                    v = fn_800F9788(q->t90, grp, &key);
                }
                p->refs[i] = v;
            }
            fn_800FAEA0(r);
            break;
        case 60:
            if (p->n != 0) {
                r->err(39);
            }
            p->n = fn_800FADA8(r);
            if (p->n < 1) {
                r->err(35);
            }
            fn_800F8E38(p, p->n);
            fn_80135E5C(q, p, name);
            if (!lbl_8035AC78) fn_800604C4(-2, 0, 0, 0);
            fn_800F7EC0(lbl_8035AC78);
            p->arr = new C8013E224[p->n];
            fn_800F7E98();
            if (!p->arr) fn_800604C4(-4, 0, 0, 0);
            for (j = 0; j < p->n; j++) {
                fn_800FB000(r, 60);
                fn_800FB064(r, &key);
                fn_800F87F0(p, &key, &p->arr[j]);
                fn_8013DFBC(&p->arr[j], q, p, r);
            }
            fn_800FAEA0(r);
            break;
        default:
            r->err(30);
            break;
        }
    } while ((k = r->next()) != 0);
}

} /* extern "C" */
