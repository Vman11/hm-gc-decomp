// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct R { u8 pad[0x124]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void err(s32); virtual u32 next(); };
class T12 { u8 d[12]; };
struct E8 { u32 a, b; };
struct Key { u8 d[8]; };
extern "C" { u32 fn_800FADA8(R *); void fn_800FB064(R *, void *); void fn_800FAEF8(R *); void fn_800FAEA0(R *); void fn_800604C4(s32, s32, s32, s32); void fn_800F7EC0(void *); void fn_800F7E98(void); void *memset(void *, int, u32); void *memcpy(void *, const void *, u32); void fn_8011D060(void *); void fn_8011D1C4(void *, s32, u32, u32); extern void *lbl_8035AB48; }
void *__nwa__FUl(u32);
struct P;
extern "C" { void fn_8011BA1C(P *, R *); void fn_8011B7D4(P *, R *); void *fn_800F9398(void *, void *); void *fn_800F9788(void *, char *, void *); }
struct Src { s32 h; u8 pad4[0x18]; u8 t1C[0x3C]; u8 t58[4]; };
struct P {
    s32 h;
    u8 sub[0x50];
    T12 *arr;
    E8 *e;
    u32 na;
    u32 n;
    u32 cntA;
    u32 cnt;
    void reset() {
        if (h != 0) {
            fn_8011D060(sub);
            if (arr) delete[] arr;
            if (n) delete[] e;
            h = 0;
            arr = 0;
            e = 0;
            na = 0;
            cntA = 0;
            n = 0;
            cnt = 0;
        }
    }
    void create(s32 nh, u32 nna, u32 nn) {
        reset();
        h = nh;
        na = nna * 2;
        n = nn;
        fn_8011D1C4(sub, h, na, n);
        if (na != 0) {
            if (!lbl_8035AB48) fn_800604C4(-2, 0, 0, 0);
            fn_800F7EC0(lbl_8035AB48);
            arr = new T12[na];
            fn_800F7E98();
            if (!arr) fn_800604C4(-4, 0, 0, 0);
            memset(arr, 0, na * sizeof(T12));
        }
        if (n != 0) {
            if (!lbl_8035AB48) fn_800604C4(-2, 0, 0, 0);
            fn_800F7EC0(lbl_8035AB48);
            e = (E8 *)__nwa__FUl(n * sizeof(E8));
            fn_800F7E98();
            if (!e) fn_800604C4(-4, 0, 0, 0);
            memset(e, 0, n * sizeof(E8));
        }
    }
};

extern "C" void fn_8011BDB0(P *p, Src *src, R *r) {
    Key key;
    char grp[8];
    P *t;
    u32 k;
    p->reset();
    p->h = src->h;
    fn_800FAEF8(r);
    while ((k = r->next()) != 6) {
        switch ((s32)k) {
        case 59:
            p->na = fn_800FADA8(r) * 2;
            fn_8011BA1C(p, r);
            break;
        case 60:
            p->n = fn_800FADA8(r);
            fn_8011B7D4(p, r);
            break;
        case 58:
            fn_800FB064(r, &key);
            fn_800FB064(r, grp);
            if ((char *)grp == 0 || grp[0] == 0) {
                t = (P *)fn_800F9398(src->t1C, &key);
            } else {
                t = (P *)fn_800F9788(src->t58, grp, &key);
            }
            { s32 h = t->h; u32 na = t->na; u32 n = t->n; p->create(h, na, n); }
            if (p->na != 0) {
                p->cntA = t->cntA;
                memcpy(p->arr, t->arr, p->cntA * sizeof(T12));
            }
            if (p->n != 0) {
                p->cnt = t->cnt;
                memcpy(p->e, t->e, p->cnt * sizeof(E8));
            }
            fn_800FAEA0(r);
            return;
        default:
            r->err(30);
            break;
        }
    }
    fn_8011D1C4(p->sub, p->h, p->na, p->n);
}

} /* extern "C" */
