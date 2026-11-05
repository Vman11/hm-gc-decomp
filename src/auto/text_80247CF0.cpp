#include "common.h"

extern "C" {
struct F {
    u8 pad[292];
    virtual void v0();
    virtual void v1();
    virtual void v2(void *tab, s32 n, s32 z);
};
struct C80247A00 { C80247A00(); ~C80247A00(); u8 pad[108]; };
struct B { u32 a, b; };
struct T { u8 pad[16]; virtual void t0(); virtual void reset(); int f20; C80247A00 *f24; int f28; };
extern u8 lbl_802F1B00[];
extern void *lbl_8035B508;
int strcmp(const char *, const char *);
void fn_800FB000(F *f, s32 c);
void fn_800FAFA8(F *f);
s32 fn_800FB33C(F *f);
void fn_800FAF50(F *f);
void fn_800FB064(F *f, B *out);
void fn_800F6E40(char *, B *);
void fn_80246C68(C80247A00 *e, F *f);
void fn_800F8E38(T *, int);
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
void fn_802476BC(C80247A00 *);
void fn_800F6FBC(char *, B *);
void fn_800F87F0(T *, B *, C80247A00 *);
static inline void fill(T *t, char **names, int i) { for (; i < t->f28; i++) { fn_802476BC(&t->f24[i]); B b; fn_800F6FBC(names[i], &b); fn_800F87F0(t, &b, &t->f24[i]); } }

int fn_80247CF0(T *t, F *f, int n, char **names) {
    C80247A00 dummy;
    int cnt;
    int j;
    int k;
    if (t->f20 == 0) {
        C80247A00 tmp;
        if (t->f20) t->reset();
        t->f20 = 1;
        t->f28 = n;
        fn_800F8E38(t, n);
        if (lbl_8035B508 == 0) fn_800604C4(-2, 0, 0, 0);
        fn_800F7EC0(lbl_8035B508);
        t->f24 = new C80247A00[n];
        fn_800F7E98();
        if (t->f24 == 0) fn_800604C4(-4, 0, 0, 0);
        fill(t, names, 0);
    }
    f->v2(lbl_802F1B00, 29, 0);
    fn_800FB000(f, 58);
    fn_800FAFA8(f);
    cnt = fn_800FB33C(f);
    fn_800FAF50(f);
    for (j = 0; j < cnt; j++) {
        B key;
        char buf[12];
        fn_800FB000(f, 58);
        fn_800FB064(f, &key);
        fn_800F6E40(buf, &key);
        for (k = 0; k < n; k++) {
            if (strcmp(buf, names[k]) == 0) break;
        }
        if (k < n) fn_80246C68(&t->f24[k], f);
        else fn_80246C68(&dummy, f);
    }
    return 0;
}
}
