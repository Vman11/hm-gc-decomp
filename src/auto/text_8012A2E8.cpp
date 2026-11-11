#include "common.h"

extern "C" {

struct E38 { u8 d[0x38]; };
struct E1C { u8 d[0x1c]; };
struct E3C { u8 d[0x3c]; };
struct E4C { u8 d[0x4c]; };
struct Map { u8 d[0x14]; };

struct AB {
    u8 pad[0x30];
    virtual void a0(); virtual void a1(); virtual void a2(); virtual void a3(); virtual void a4(); virtual void a5();
    virtual void a6(); virtual void a7(); virtual void a8(); virtual void a9(); virtual void a10(); virtual void a11();
    virtual void a12(); virtual void a13(); virtual void a14();
    virtual void *get();
};
struct A : AB { u32 f34; void *f38; };

struct QB {
    u8 pad[0x10];
    virtual void q0(); virtual void q1(); virtual void q2(); virtual void q3(); virtual void q4();
    virtual void load(A *a, char *name, void *b);
};

struct T {
    u32 f0;
    E38 *f4;
    E38 *f8;
    E1C *fc;
    void **f10;
    E1C *f14;
    E3C *f18;
    E4C *f1c;
    u8 pad20[8];
    Map m28;
    Map m3c;
    Map m50;
    Map m64;
    u16 n78, n7a, n7c, n7e, n80, n82, n84, n86, n88, n8a, n8c, n8e, n90, n92, n94, n96, n98, n9a;
    char **f9c;
    u8 padA0[4];
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5();
    virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12();
    virtual void *g3c(u32 i);
    virtual QB *g40(u32 i);
    virtual void *g44(u32 i);
    virtual void *g48(u32 i);
    virtual void *g4c(u32 i);
    virtual void *g50(u32 i);
    virtual void *g54(u32 i);
    virtual void *g58(u32 i);
    virtual void *g5c(u32 i);
    virtual void *g60(u32 i);
};

extern char **lbl_8035AB80, **lbl_8035AB84, **lbl_8035AB88, **lbl_8035AB8C, **lbl_8035AB90, **lbl_8035AB94, **lbl_8035AB98, **lbl_8035AB9C, **lbl_8035ABA0, **lbl_8035ABA4, **lbl_8035ABA8, **lbl_8035ABAC, **lbl_8035ABB0, **lbl_8035ABB4, **lbl_8035ABB8, **lbl_8035ABBC;
extern void *lbl_8035A9F4;
extern char lbl_80363E88[2];

u32 strlen(const char *);
char *strrchr(const char *, int);
char *strchr(const char *, int);
char *strcpy(char *, const char *);
char *strcat(char *, const char *);
void *memcpy(void *, const void *, u32);
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
void fn_800F87F0(Map *, char *, void *);
void fn_80129E00(T *);

void fn_8013BE6C(void *, A *, char *, void *);
void fn_80134598(void *, A *, char *, void *);
void fn_80138AA8(void *, A *, char *, void *);
void fn_80136C30(void *, A *, char *, void *);
void fn_80133AB8(void *, A *, char *, void *);
void fn_8012FA88(void *, A *, char *, void *);
void fn_80105854(E38 *, void *, char *, void *);
void fn_801067A4(E38 *, char *, void *);
void fn_801084E8(E1C *, char *, void *);
void fn_8021F6EC(void *, void *, char *, void *);
void fn_8013EF3C(E1C *, A *, char *, void *);
void fn_8012D774(void *, A *, char *, void *);
void fn_8012EFDC(void *, A *, char *, void *);
void fn_8013E680(E3C *, A *, char *, void *);
void fn_80140794(E4C *, A *, char *, void *);
void fn_8012ACAC(void *, A *, char *, void *, s32);

static inline void baseName(char *buf, char *path) {
    char *s;
    u32 n;
    if (!(s = strrchr(path, '\\')) && !(s = strrchr(path, '/')))
        s = strrchr(path, ':');
    if (s == 0)
        s = path;
    else
        s++;
    char *d = strchr(s, '.');
    if (d == 0)
        n = strlen(s);
    else
        n = d - s;
    if (n >= 8) {
        memcpy(buf, s, 8);
    } else {
        memcpy(buf, s, n);
        buf[n] = 0;
    }
}

static inline char *Alloc(u32 n) {
    if (lbl_8035A9F4 == 0) fn_800604C4(-2, 0, 0, 0);
    fn_800F7EC0(lbl_8035A9F4);
    char *p = new char[n];
    fn_800F7E98();
    if (p == 0) fn_800604C4(-4, 0, 0, 0);
    return p;
}

inline void wA_free(T *self, u32 &i) {
    char **&g = self->f9c;
    u16 *np = &self->n9a;
    char **a = g;
    if (a != 0) {
        u32 n = *np;
        char **q = a;
        for (i = 0; i < n; q++, i++) {
            if (*q != 0) {
                delete[] *q;
            }
        }
        delete[] a;
        g = 0;
    }
}

static inline void L8(T *self, A *a, void *b, u32 i, char *buf) {
    E38 *e = &self->f4[i];
    fn_80105854(e, a->get(), lbl_8035AB94[i], b);
    baseName(buf, lbl_8035AB94[i]);
    fn_800F87F0(&self->m28, buf, e);
}

static inline void L9(T *self, void *b, u32 i, char *buf) {
    E38 *e = &self->f8[i];
    fn_801067A4(e, lbl_8035AB98[i], b);
    baseName(buf, lbl_8035AB98[i]);
    fn_800F87F0(&self->m3c, buf, e);
}

static inline void L10(T *self, void *b, u32 i, char *buf) {
    E1C *e = &self->fc[i];
    fn_801084E8(e, lbl_8035AB9C[i], b);
    baseName(buf, lbl_8035AB9C[i]);
    fn_800F87F0(&self->m50, buf, e);
}

static inline void *G11(T *self, u32 i) { return self->f10[i]; }
static inline void L11(T *self, A *a, void *b, u32 i, char *buf) {
    void *e = G11(self, i);
    fn_8021F6EC(e, a->f38, lbl_8035ABA0[i], b);
    baseName(buf, lbl_8035ABA0[i]);
    fn_800F87F0(&self->m64, buf, e);
}

static inline char *G14(u32 i) { return lbl_8035ABB4[i]; }
static inline void L14(T *self, A *a, void *b, char *prefix, u32 plen, u32 i) {
    if (prefix) {
        char *path;
        char *p;
        char *s;
        if (lbl_8035A9F4 == 0) fn_800604C4(-2, 0, 0, 0);
        fn_800F7EC0(lbl_8035A9F4);
        { u32 l = strlen(lbl_8035ABB4[i]) + 1; p = new char[plen + l]; }
        fn_800F7E98();
        if (p == 0) fn_800604C4(-4, 0, 0, 0);
        path = G14(i);
        s = strrchr(path, '\\');
        if (s == 0) {
            strcpy(p, prefix);
            strcat(p, lbl_80363E88);
            strcat(p, path);
        } else {
            *s = 0;
            strcpy(p, path);
            *s = '\\';
            strcat(p, lbl_80363E88);
            strcat(p, prefix);
            strcat(p, s);
        }
        fn_8012EFDC(self->g54(i), a, p, b);
        delete[] p;
    } else {
        fn_8012EFDC(self->g54(i), a, lbl_8035ABB4[i], b);
    }
}

void fn_8012A2E8(T *self, A *a, void *b, char *prefix) {
    char buf[8];
    u32 plen = 0;
    u32 i;
    if (prefix) plen = strlen(prefix) + 2;
    for (i = 0; i < self->n96; i++) fn_8013BE6C(self->g58(i), a, lbl_8035ABB8[i], b);
    for (i = 0; i < self->n98; i++) fn_80134598(self->g5c(i), a, lbl_8035ABBC[i], b);
    for (i = 0; i < self->n78; i++) fn_80138AA8(self->g3c(i), a, lbl_8035AB80[i], b);
    for (i = 0; i < self->n7a; i++) fn_80136C30(self->g44(i), a, lbl_8035AB88[i], b);
    for (i = 0; i < self->n7c; i++) self->g40(i)->load(a, lbl_8035AB84[i], b);
    for (i = 0; i < self->n7e; i++) fn_80133AB8(self->g48(i), a, lbl_8035AB8C[i], b);
    for (i = 0; i < self->n80; i++) fn_8012FA88(self->g4c(i), a, lbl_8035AB90[i], b);
    for (i = 0; i < self->n82; i++) L8(self, a, b, i, buf);
    for (i = 0; i < self->n84; i++) L9(self, b, i, buf);
    for (i = 0; i < self->n86; i++) L10(self, b, i, buf);
    for (i = 0; i < self->n88; i++) L11(self, a, b, i, buf);
    for (i = 0; i < self->n8a; i++) fn_8013EF3C(&self->f14[i], a, lbl_8035ABA4[i], b);
    for (i = 0; i < self->n92; i++) fn_8012D774(self->g50(i), a, lbl_8035ABB0[i], b);
    for (i = 0; i < self->n94; i++) L14(self, a, b, prefix, plen, i);
    for (i = 0; i < self->n8c; i++) fn_8013E680(&self->f18[i], a, lbl_8035ABA8[i], b);
    for (i = 0; i < self->n8e; i++) fn_80140794(&self->f1c[i], a, lbl_8035ABAC[i], b);
    fn_80129E00(self);
    for (i = 0; i < self->n9a; i++) fn_8012ACAC(self->g60(i), a, self->f9c[i], b, 0);
    wA_free(self, i);
}

}
