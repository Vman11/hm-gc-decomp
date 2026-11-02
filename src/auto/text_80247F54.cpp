// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern "C" { char *strcpy(char *, const char *); char *strcat(char *, const char *); }
extern void *lbl_8035B508;
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
typedef struct S28 { u8 pad[12]; char *fC; } S28;
struct C80215F50 { u8 pad0[36]; void *f24; S28 *f28; void *f2C; u8 pad30[8]; C80215F50(); ~C80215F50(); };
struct C80247A00 { C80247A00(); ~C80247A00(); u8 pad[108]; };
extern char lbl_803662A0[4], lbl_803662A4[8];
struct G { u8 pad[8]; void *f8; };
extern G *lbl_8035B65C;
struct B { u32 a, b; };
struct X { u8 pad[1696]; int f1696; u8 pad1700[20]; virtual void a0(); virtual void a1(); virtual void a2(); virtual void a3(); virtual void a4(); virtual int has(char *); };
struct T { u8 pad[16]; virtual void t0(); virtual void reset(); int f20; C80247A00 *f24; int f28; };
void fn_800F8E38(T *, int);
void fn_802476BC(C80247A00 *);
void fn_800F6FBC(char *, B *);
void fn_800F87F0(T *, B *, C80247A00 *);
X *fn_8021616C(void *);
s32 fn_80215C84(C80215F50 *, const char *, const char *, s32, s32);
int fn_80247CF0(T *, void *, int, char **);
static inline void fill(T *t, char **names, int i) { for (; i < t->f28; i++) { fn_802476BC(&t->f24[i]); B b; fn_800F6FBC(names[i], &b); fn_800F87F0(t, &b, &t->f24[i]); } }
int fn_80247F54(T *t, const char *name, int n, char **names) {
    C80215F50 file;
    int i;
    u32 off;
    char **p;
    if (t->f20) t->reset();
    {
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
    X *x = fn_8021616C(lbl_8035B65C->f8);
    if (x->f1696 == 5) {
        char buf[64];
        strcpy(buf, name);
        strcat(buf, lbl_803662A4);
        if (x->has(buf)) return -1;
    }
    if (fn_80215C84(&file, name, lbl_803662A0, 2, 0)) return -1;
    int r = fn_80247CF0(t, file.f2C, n, names);
    return r;
}

} /* extern "C" */
