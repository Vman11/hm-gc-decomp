// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

// NonMatching draft (wA_80127F34, wPE): const char *k fixed the prologue load hoist; SDIFF 0, register-only.
// saved-GPR colouring of start/idx/oldn/new[]/loop vars differs. DIFF 94 / SDIFF 0.

extern "C" {
class C800F930C { public: char key[8]; void *v; C800F930C(); };
struct H8F { C800F930C *arr; u32 n; };
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
s32 fn_800F6CD0(void *, void *);
void fn_800F6E40(char *, void *);
void fn_800F6E88(void *, void *);
void fn_80060568(char *, s32, s32, s32);
char *strcat(char *, const char *);
extern void *lbl_8035A9F8;
extern u32 lbl_8029CA70[];
extern char lbl_8029CAB8[];
void fn_800F87F0(H8F *h, const char *k, void *v);

inline u32 fn_800F8CD8(H8F *h, const char *k) {
    u32 value = k[0];
    u32 shift = 7;
    int i;
    for (i = 1; i < 8; i++) {
        if (!k[i]) break;
        value += k[i] << shift;
        shift = (shift + 7) & 31;
    }
    return value % h->n;
}

inline void fn_800F8FF4(H8F *h) {
    C800F930C *old;
    u32 oldn;
    u32 i;
    C800F930C *e;
    oldn = h->n;
    h->n++;
    for (i = 0; i < 18; i++) {
        if (h->n < lbl_8029CA70[i]) break;
    }
    if (i < 18) h->n = lbl_8029CA70[i];
    old = h->arr;
    if (!lbl_8035A9F8) fn_800604C4(-2, 0, 0, 0);
    fn_800F7EC0(lbl_8035A9F8);
    h->arr = new C800F930C[h->n];
    fn_800F7E98();
    if (!h->arr) fn_800604C4(-4, 0, 0, 0);
    e = old;
    for (i = 0; i < oldn; e++, i++) {
        if (e->v) fn_800F87F0(h, e->key, e->v);
    }
    delete[] old;
}

void fn_800F87F0(H8F *h, const char *k, void *v) {
    u32 start;
    u32 idx;
    start = fn_800F8CD8(h, k);
    idx = start;
    while (h->arr[idx].v) {
        if (fn_800F6CD0(&h->arr[idx], (void *)k)) {
            char buf[0x28];
            fn_800F6E40(buf, (void *)k);
            buf[8] = 0;
            strcat(buf, lbl_8029CAB8);
            fn_80060568(buf, 0, 0, 0);
        }
        idx++;
        if (idx >= h->n) idx = 0;
        if (idx == start) {
            fn_800F8FF4(h);
            fn_800F87F0(h, k, v);
            return;
        }
    }
    fn_800F6E88(&h->arr[idx], (void *)k);
    h->arr[idx].v = v;
}
}
