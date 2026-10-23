// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct VB8023CC40 {
    u8 pad[16];
    virtual void v0(); virtual void v1(); virtual void v2();
    virtual s32 v3();
};
struct Sub8023CC40 : VB8023CC40 { };
struct E8023CC40 { u8 d[32]; };
struct P8023CC40 : VB8023CC40 {
    u8 key[8];
    u32 n;
    u8 pad32[8];
    E8023CC40 *arr;
    Sub8023CC40 sub;
    P8023CC40 *next;
    s32 f68;
};
struct L8023CC40 { s8 valid; };
extern u8 lbl_8035758C[];
void fn_8023A194(E8023CC40 *e);
void fn_800E1E88(void *p, void *dt);
void __dt__9C8023A51CFv(void);
P8023CC40 *fn_800F8274(void *a, void *b);
void fn_800F806C(void *a, P8023CC40 *p, L8023CC40 *l);
void fn_800F8410(void *a, L8023CC40 *l);
void fn_800F87F0(void *a, L8023CC40 *l, P8023CC40 *n);
void fn_8023BA30(P8023CC40 *p);

void fn_8023CC40(P8023CC40 *p) {
    u32 i;
    P8023CC40 *x;
    P8023CC40 *n;
    L8023CC40 l;
    if (p->v3() != 0) {
        for (i = 0; i < p->n; i++) fn_8023A194(&p->arr[i]);
        fn_800E1E88(p->arr, (void *)__dt__9C8023A51CFv);
        x = fn_800F8274(lbl_8035758C, p->key);
        fn_800F806C(lbl_8035758C, p, &l);
        if (l.valid) {
            fn_800F8410(lbl_8035758C, &l);
            if (p->next != 0) fn_800F87F0(lbl_8035758C, &l, p->next);
        }
        if (x != p) {
            while ((n = x->next) != 0) {
                if (n == p) {
                    x->next = p->next;
                    break;
                }
                x = n;
            }
        }
        p->f68 = 0;
        p->next = 0;
        p->arr = 0;
        fn_8023BA30(p);
        p->sub.v1();
    }
}

} /* extern "C" */
