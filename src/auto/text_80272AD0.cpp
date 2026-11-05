#include "common.h"

extern "C" {

extern "C" { void *memset(void *, int, unsigned long); void *memcpy(void *, const void *, unsigned long); char *strcpy(char *, const char *); char *strcat(char *, const char *); }
struct S {
    u32 f0; u8 f4[16]; void *f20; u32 f24; f32 f28; u32 f32; u32 f36; u8 pad40[8]; u8 f48[8]; char *f56; u8 pad60[8]; void *f68; u32 f72;
};
extern volatile u32 lbl_80366F60, lbl_80366F64, lbl_80366F68, lbl_80366F6C;
extern char lbl_80366F50[8], lbl_80366F58[5], lbl_80366F78[6], lbl_80366F84[4];
extern char lbl_80366FA0[1];
extern char lbl_802AA958[];
extern f32 lbl_80366F80;
struct G460b { u8 pad[12112]; u32 f12112; };
struct G460 { u8 pad[12]; G460b *f12; };
extern G460 *volatile lbl_8035B460;
extern u32 *volatile lbl_8035B418;
struct G690 { u8 pad[4]; void *f4; };
extern G690 *volatile lbl_8035B690;
struct A992 { u8 pad[992]; };
struct B { int b; };
struct D { u8 pad[992]; B m; };
struct G684 { D *f0; };
extern G684 *lbl_8035B684;
struct X8 { u8 pad[8]; virtual void x0(); virtual void x1(); virtual void x2(); virtual void x3(); virtual void x4(); virtual f32 *get(int); };
X8 *fn_80207198(B *, const char *, int);
void fn_800F6FBC(const char *, void *);
void fn_80216044(void *, const char *);
void fn_80215FDC(void *);
void *fn_800F9398(void *, const char *);
void *fn_800F9788(void *, const char *, const char *);
struct R96 { u8 pad[96]; virtual void r0(); virtual void r1(); virtual void r2(); virtual void r3(); virtual void send(S *); };
struct T8 { u8 *f0; };
struct T { u8 pad[8]; T8 *f8; u8 pad12[8]; R96 *f20; };
static inline void *look(u8 *o, const char *s) {
    if (!s || !*s) return fn_800F9398(o + 60, s);
    return fn_800F9788(o + 84, s, s);
}
void fn_80272AD0(T *t, const char *name, void *c, void *d, int e) {
    char buf[128];
    S s;
    memset(&s, 0, sizeof(S));
    s.f72 |= lbl_80366F60;
    if (c) memcpy(s.f4, c, 16);
    s.f68 = d;
    u8 *o = t->f8->f0;
    s.f0 = (u32)o;
    if (!e) {
        s.f72 |= lbl_80366F64;
        s.f72 |= lbl_80366F68;
        s.f72 |= lbl_80366F6C;
        s.f72 &= ~1;
        s.f20 = look(o, lbl_80366FA0);
    }
    if (s.f72 & 4) {
        strcpy(buf, lbl_80366F50);
        strcat(buf, name);
        strcat(buf, lbl_80366F58);
    } else {
        strcpy(buf, lbl_80366F50);
        strcat(buf, name);
        strcat(buf, lbl_80366F58);
    }
    *(volatile u32 *)&s.f56 = (u32)buf;
    *(volatile u32 *)&s.f24 = lbl_8035B460->f12->f12112;
    fn_800F6FBC(lbl_80366F78, s.f48);
    D *dd = lbl_8035B684->f0;
    if (&dd->m) s.f28 = *fn_80207198(&dd->m, lbl_802AA958, 0)->get(0);
    else s.f28 = lbl_80366F80;
    *(volatile u32 *)&s.f36 = 10;
    *(volatile u32 *)&s.f32 = *lbl_8035B418;
    fn_80216044(lbl_8035B690->f4, lbl_80366F84);
    t->f20->send(&s);
    fn_80215FDC(lbl_8035B690->f4);
}

}
