#include "common.h"
extern "C" {
struct E34_181 { u8 d[0x34]; };
struct E1C_181 { u8 d[0x1c]; };
struct E2C_181 { u8 d[0x2c]; };
struct E44_181 { u8 d[0x44]; };
struct EF0_181 { u8 d[0xf0]; };
struct E60_181 { u8 d[0x60]; };
struct E78_181 { u8 d[0x78]; };
struct A181 { u8 pad[0xc]; void *fc; };
struct P181 {
    u8 pad0[4]; EF0_181 *f4; E44_181 *f8; E1C_181 *fc; E1C_181 *f10; E60_181 *f14; E2C_181 *f18; E1C_181 *f1c; E34_181 *f20; E1C_181 *f24; E1C_181 *f28; E78_181 *f2c;
    u8 f30[0x14]; u8 f44[0x14];
    u16 f58; u16 f5a; u16 f5c; u16 f5e; u16 f60; u16 f62; u16 f64; u16 f66; u16 f68; u16 f6a; u16 f6c; u16 pad6e; char **f70;
};
struct K181 { char d[8]; };
void fn_80215534(E34_181 *, void *, char *, void *);
void fn_8019E610(E1C_181 *, A181 *, char *, void *);
void fn_80187330(E1C_181 *, A181 *, char *, void *);
void fn_8017CA64(E2C_181 *, A181 *, char *, void *);
void fn_8018E424(E44_181 *, A181 *, char *, void *);
void fn_80184D9C(E1C_181 *, A181 *, char *, void *);
void fn_8018AB8C(E1C_181 *, A181 *, char *, void *);
void fn_80193E60(EF0_181 *, A181 *, char *, void *);
void fn_8017EA48(E1C_181 *, A181 *, char *, void *);
void fn_8019BE80(E60_181 *, A181 *, char *, void *);
void fn_8018182C(E78_181 *, A181 *, char *, void *);
void fn_800F87F0(void *, void *, void *);
char *strrchr(const char *, int);
char *strchr(const char *, int);
unsigned long strlen(const char *);
void *memcpy(void *, const void *, unsigned long);
extern char **lbl_8035ADE4;
extern char **lbl_8035ADE8;
extern char **lbl_8035ADEC;
extern char **lbl_8035ADF0;
extern char **lbl_8035ADF4;
extern char **lbl_8035ADF8;
extern char **lbl_8035ADFC;
extern char **lbl_8035AE00;
extern char **lbl_8035AE04;
extern char **lbl_8035AE08;

static inline void Free181(char **a, u32 n) {
    u32 i;
    for (i = 0; i < n; i++) {
        if (a[i]) delete[] a[i];
    }
    delete[] a;
}

static inline void Base181(char *path, K181 *k) {
    char *s; u32 len; char *d;
    if (!(s = strrchr(path, '\\')) && !(s = strrchr(path, '/'))) s = strrchr(path, ':');
    if (s == 0) s = path; else ++s;
    d = strchr(s, '.');
    len = !d ? strlen(s) : d - s;
    if (len >= 8) { memcpy(k, s, 8); } else { memcpy(k, s, len); k->d[len] = 0; }
}
void fn_80181088(P181 *p, A181 *a, void *b) {
    EF0_181 *e1; E60_181 *e2; u32 i; K181 k;
    for (i = 0; i < p->f66; i++) fn_80215534(&p->f20[i], a->fc, lbl_8035AE00[i], b);
    for (i = 0; i < p->f6a; i++) fn_8019E610(&p->f28[i], a, lbl_8035AE08[i], b);
    for (i = 0; i < p->f68; i++) fn_80187330(&p->f24[i], a, lbl_8035AE04[i], b);
    for (i = 0; i < p->f64; i++) fn_8017CA64(&p->f18[i], a, lbl_8035ADFC[i], b);
    for (i = 0; i < p->f5a; i++) fn_8018E424(&p->f8[i], a, lbl_8035ADE8[i], b);
    for (i = 0; i < p->f5c; i++) fn_80184D9C(&p->fc[i], a, lbl_8035ADEC[i], b);
    for (i = 0; i < p->f5e; i++) fn_8018AB8C(&p->f10[i], a, lbl_8035ADF0[i], b);
    for (i = 0; i < p->f58; i++) {
        e1 = &p->f4[i];
        fn_80193E60(e1, a, lbl_8035ADE4[i], b);
        Base181(lbl_8035ADE4[i], &k);
        fn_800F87F0(p->f30, &k, e1);
    }
    for (i = 0; i < p->f60; i++) fn_8017EA48(&p->f1c[i], a, lbl_8035ADF4[i], b);
    for (i = 0; i < p->f62; i++) {
        e2 = &p->f14[i];
        fn_8019BE80(e2, a, lbl_8035ADF8[i], b);
        Base181(lbl_8035ADF8[i], &k);
        fn_800F87F0(p->f44, &k, e2);
    }

    if (lbl_8035ADF4) { Free181(lbl_8035ADF4, p->f60); lbl_8035ADF4 = 0; }
    if (lbl_8035ADEC) { Free181(lbl_8035ADEC, p->f5c); lbl_8035ADEC = 0; }
    if (lbl_8035ADF0) { Free181(lbl_8035ADF0, p->f5e); lbl_8035ADF0 = 0; }
    if (lbl_8035ADFC) { Free181(lbl_8035ADFC, p->f64); lbl_8035ADFC = 0; }
    if (lbl_8035ADF8) { Free181(lbl_8035ADF8, p->f62); lbl_8035ADF8 = 0; }
    if (lbl_8035ADE8) { Free181(lbl_8035ADE8, p->f5a); lbl_8035ADE8 = 0; }
    if (lbl_8035ADE4) { Free181(lbl_8035ADE4, p->f58); lbl_8035ADE4 = 0; }
    if (lbl_8035AE00) { Free181(lbl_8035AE00, p->f66); lbl_8035AE00 = 0; }
    if (lbl_8035AE04) { Free181(lbl_8035AE04, p->f68); lbl_8035AE04 = 0; }
    if (lbl_8035AE08) { Free181(lbl_8035AE08, p->f6a); lbl_8035AE08 = 0; }
    for (i = 0; i < p->f6c; i++) fn_8018182C(&p->f2c[i], a, p->f70[i], b);
}
}
