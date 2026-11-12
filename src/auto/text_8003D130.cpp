#include "common.h"
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

#include "common.h"

class Var { public: u8 p[8]; virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void *ptr(int); };
class Cam { public: virtual void c0(); virtual void c1(); virtual void c2(); virtual void c3(); virtual void c4(); virtual void c5();
    virtual void c6(); virtual void c7(); virtual void c8(); virtual void c9(); virtual void c10(); virtual void c11();
    virtual void c12(); virtual void c13(); virtual void c14(); virtual void c15(); virtual void c16(); virtual void c17();
    virtual void c18(); virtual void c19(); virtual void c20(); virtual void c21(); virtual void c22(); 
    virtual u32 *get(int); };
struct E52 { u8 p[48]; u32 f48; };
struct Sc { u8 p[24]; Cam *f24; u8 p28[76]; u32 f104; u8 p108[4]; E52 *f112; E52 *cur() { return &f112[f104]; } };
struct En { u8 p[740]; void *f740; u32 f744; u8 p748[8]; };
struct Ob { u8 p[1360]; void *f1360[31]; u8 p1484[0]; };
extern "C" {
extern u8 *lbl_8035A1DC;
extern void *lbl_8035B594;
extern Sc *lbl_8035B5E4;
struct Str { char s0[36]; char s36[12]; char s48[12]; char s60[12]; char s72[12]; char s84[12]; char s96[12]; char s108[12]; };
extern char lbl_8035C1D8[8];
extern char lbl_8035C1E4[8];
extern char lbl_8035C1EC[8];
extern char lbl_8035C1F4[8];
extern char lbl_8035C200[8];
extern char lbl_8035C20C[8];
extern char lbl_8035C214[8];
extern char lbl_8035C21C[8];
extern f32 lbl_8035C1E0;
extern f32 lbl_8035C1FC;
extern f32 lbl_8035C208;
void *memset(void *, int, u32);
void fn_8024D7E4(void *);
Var *fn_80207198(u8 *, char *, int);
}
inline void SetI(char *n, s32 v) { *(s32 *)fn_80207198(lbl_8035A1DC + 992, n, 0)->ptr(0) = v; }
inline void SetF(char *n, f32 v) { *(f32 *)fn_80207198(lbl_8035A1DC + 992, n, 0)->ptr(0) = v; }

inline E52 *Cur() { return &lbl_8035B5E4->f112[lbl_8035B5E4->f104]; }
inline void SetCam(u32 v) { lbl_8035B5E4->f24->get(0)[2] = v; }
inline void SetCur(u32 v) { Cur()->f48 = v; }
extern const char lbl_80294E10[];
const char lbl_80294E10[] = "DIFFCLTY";
extern const char lbl_80294E1C[];
const char lbl_80294E1C[] = "LvSprFnd";
extern const char lbl_80294E28[];
const char lbl_80294E28[] = "LvSprTtl";
static const char sE34[] = "DETHCERT";
static const char sE40[] = "SOUNDVOL";
static const char sE4C[] = "MUSICVOL";
static const char sE58[] = "mGemFlag";
static const char sE64[] = "NUMCARDS";
static const char sE70[] = "ZEKERSHP";
static const char sE7C[] = "ZEKELIVE";
extern const char lbl_80294E88[];
const char lbl_80294E88[] = "MansionX";
extern const char lbl_80294E94[];
const char lbl_80294E94[] = "";
extern "C" void fn_8003D130(u8 *o, int a) {
    u8 *p = o;
    u8 *q = o;
    u32 i;
    for (i = 0; i < 31; i++) {
        memset(*(void **)(p + 1360), 0, 200);
        memset(((En *)q)->f740, 0, ((En *)q)->f744 * 12);
        *(u32 *)(p + 1484) = 0;
        p += 4;
        q += 20;
    }
    fn_8024D7E4(lbl_8035B594);
    SetI((char *)sE34, 0);
    if (a) {
        SetI(lbl_8035C1D8, 2);
        { u32 *pp = lbl_8035B5E4->f24->get(0); pp[2] = 1; }
        lbl_8035B5E4->cur()->f48 = 0;
        SetF((char *)sE40, lbl_8035C1E0);
        SetF((char *)sE4C, lbl_8035C1E0);
        SetI(lbl_8035C1E4, 1);
        SetI(lbl_8035C1EC, 1);
        SetF(lbl_8035C1F4, lbl_8035C1FC);
        SetF(lbl_8035C200, lbl_8035C208);
        SetI(lbl_8035C20C, 2);
        SetI(lbl_8035C214, 2);
        SetI((char *)lbl_80294E10, 1);
    }
    SetI((char *)sE58, 1);
    SetI((char *)sE64, 0);
    SetI(lbl_8035C21C, 0);
    SetI((char *)sE70, 0);
    SetI((char *)sE7C, 0);
}

} /* extern "C" */


namespace m8003D50C {
extern "C" {
/* Functions from 0x8003D50C to 0x8003D518, found by decomp-toolkit. */

s32 fn_8003D50C(void) {
    return 0;
}

int fn_8003D514(int a) { return a; }

} /* extern "C" */
} /* namespace m8003D50C */

namespace m8003D518 {

extern "C" {

struct OV { u8 pad[8]; virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void *s5(s32); };
struct OQ { u8 pad[12]; u32 f12; };
struct M { u8 pad[192]; virtual void a0(); virtual void a1(); virtual void a2(); virtual void a3(); virtual void a4(); virtual u8 a5(void *); virtual u32 a6(); };
struct G { u8 c[4]; u32 n; u8 pad[12]; };
struct T { u8 pad[740]; G g[37]; u8 pad1480[4]; u32 a1484[31]; };
struct H { u8 pad[12]; u8 *h; };
extern char lbl_80357740[];
extern void *lbl_8035A9F4;
extern M *lbl_8035B684;
extern H *lbl_8035B460;
extern char lbl_8035C1D8[8], lbl_8035C1E4[8], lbl_8035C1EC[8], lbl_8035C1F4[8], lbl_8035C200[8], lbl_8035C20C[8], lbl_8035C214[8], lbl_8035C21C[8];
void fn_800604C4(int, int, int, int);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
void *__nwa__FUl(u32);
void *memset(void *, int, u32);
void *memcpy(void *, const void *, u32);
void fn_800F6FBC(void *, void *);
void *fn_800F85F0(G *, u32);
void fn_800F803C(G *, u32, void *);
void *fn_80207198(void *, const char *, int);
static inline void SumA(T *t, u32 *s) { u32 k; *s = 0; for (k = 0; k < 31; k++) *s += t->a1484[k]; }
static inline u32 *SumB(T *t, u32 *s) { u32 k; for (k = 0; k < 31; k++) *s += t->a1484[k]; return s; }
static inline void Put(u8 **b, s32 *p, u8 v) { (*b)[*p] = v; (*p)++; }
#pragma push
#pragma opt_lifetimes off
void fn_8003D518(T *t, u8 **pbuf, s32 *pos) {
    u32 sum;
    u32 v8;
    u8 k24[8];
    u8 k16[8];
    u32 j, i;
    u32 k;
    T *tt;
    *pos = 0;
    if (lbl_8035A9F4 == 0) fn_800604C4(-2, 0, 0, 0);
    fn_800F7EC0(lbl_8035A9F4);
    *pbuf = (u8 *)__nwa__FUl(8191);
    fn_800F7E98();
    if (*pbuf == 0) fn_800604C4(-4, 0, 0, 0);
    memset(*pbuf, 0, 8191);
    (*pbuf)[(*pos)++] = 3;
    (*pbuf)[(*pos)++] = 0;
    fn_800F6FBC(lbl_80357740, k24);
    k = lbl_8035B684->a5(k24);
    (*pbuf)[*pos] = k;
    (*pos)++;
    sum = 0; for (k = 0; k < 31; k++) sum += t->a1484[k];
    memcpy(*pbuf + *pos, &sum, 4);
    *pos += 4;
    for (i = 0; i < lbl_8035B684->a6(); i++) {
        for (j = 0; j < t->g[i].n; j++) {
            void *e = fn_800F85F0(&t->g[i], j);
            if (e != 0) {
                (*pbuf)[*pos] = i;
                (*pos)++;
                fn_800F803C(&t->g[i], j, k16);
                memcpy(*pbuf + *pos, k16, 8);
                *pos += 8;
                memcpy(*pbuf + *pos, e, 4);
                *pos += 4;
            }
        }
    }
    (*pbuf)[(*pos)++] = 3;
    v8 = ((OQ *)fn_80207198(lbl_8035B460->h + 992, sE34, 0))->f12;
    memcpy(*pbuf + *pos, &v8, 4);
    *pos += 4;
    (*pbuf)[(*pos)++] = 1;
    memcpy(*pbuf + *pos, ((OV *)fn_80207198(lbl_8035B460->h + 992, lbl_8035C1D8, 0))->s5(0), 4);
    *pos += 4;
    memcpy(*pbuf + *pos, ((OV *)fn_80207198(lbl_8035B460->h + 992, sE40, 0))->s5(0), 4);
    *pos += 4;
    memcpy(*pbuf + *pos, ((OV *)fn_80207198(lbl_8035B460->h + 992, sE4C, 0))->s5(0), 4);
    *pos += 4;
    memcpy(*pbuf + *pos, ((OV *)fn_80207198(lbl_8035B460->h + 992, lbl_8035C1E4, 0))->s5(0), 4);
    *pos += 4;
    memcpy(*pbuf + *pos, ((OV *)fn_80207198(lbl_8035B460->h + 992, lbl_8035C1EC, 0))->s5(0), 4);
    *pos += 4;
    memcpy(*pbuf + *pos, ((OV *)fn_80207198(lbl_8035B460->h + 992, sE58, 0))->s5(0), 4);
    *pos += 4;
    memcpy(*pbuf + *pos, ((OV *)fn_80207198(lbl_8035B460->h + 992, sE64, 0))->s5(0), 4);
    *pos += 4;
    memcpy(*pbuf + *pos, ((OV *)fn_80207198(lbl_8035B460->h + 992, lbl_8035C1F4, 0))->s5(0), 4);
    *pos += 4;
    memcpy(*pbuf + *pos, ((OV *)fn_80207198(lbl_8035B460->h + 992, lbl_8035C200, 0))->s5(0), 4);
    *pos += 4;
    memcpy(*pbuf + *pos, ((OV *)fn_80207198(lbl_8035B460->h + 992, lbl_80294E10, 0))->s5(0), 4);
    *pos += 4;
    memcpy(*pbuf + *pos, ((OV *)fn_80207198(lbl_8035B460->h + 992, lbl_8035C20C, 0))->s5(0), 4);
    *pos += 4;
    memcpy(*pbuf + *pos, ((OV *)fn_80207198(lbl_8035B460->h + 992, lbl_8035C214, 0))->s5(0), 4);
    *pos += 4;
    memcpy(*pbuf + *pos, ((OV *)fn_80207198(lbl_8035B460->h + 992, lbl_8035C21C, 0))->s5(0), 4);
    *pos += 4;
    memcpy(*pbuf + *pos, ((OV *)fn_80207198(lbl_8035B460->h + 992, sE70, 0))->s5(0), 4);
    *pos += 4;
    memcpy(*pbuf + *pos, ((OV *)fn_80207198(lbl_8035B460->h + 992, sE7C, 0))->s5(0), 4);
    *pos += 4;
    (*pbuf)[(*pos)++] = 2;
}
#pragma pop


} /* extern "C" */

} /* namespace m8003D518 */

namespace m8003DD00 {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

extern "C" {

/* QV=2.0p1 */
} /* extern "C" */
struct Mgr3DD00 {
    u8 pad[192];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void m3(void *out, u8 v);
    virtual void v4();
    virtual void v5();
    virtual u32 m6();
};
extern "C" {
typedef struct { char d[8]; } Key3DD00;
typedef struct { u8 *f0; } Buf3DD00;
typedef struct { u8 pad[736]; s32 f736; } P3DD00;
extern Mgr3DD00 *lbl_8035B684;
extern char lbl_8035C224[4];
extern char lbl_80294E1C[];
void *memcpy(void *, const void *, unsigned long);
s32 fn_800F6CD0(void *, void *);
s32 fn_8003DD00(P3DD00 *p, Buf3DD00 *b) {
    s32 type;
    s32 pos;
    p->f736 = 0;
    pos = 1;
    do {
        type = b->f0[pos++];
        switch (type) {
        case 0: {
            Key3DD00 buf;
            u32 cnt;
            u32 i;
            lbl_8035B684->m3(&buf, b->f0[pos]);
            memcpy(&cnt, &b->f0[pos + 1], 4);
            pos += 5;
            for (i = 0; i < cnt; i++) {
                Key3DD00 key;
                u8 v = b->f0[pos];
                if (v >= lbl_8035B684->m6()) return 0;
                memcpy(&key, &b->f0[pos + 1], 8);
                if (fn_800F6CD0(&key, lbl_8035C224)) return 0;
                if (fn_800F6CD0(&key, lbl_80294E1C)) {
                    u32 val = 0;
                    memcpy(&val, &b->f0[pos + 9], 4);
                    p->f736 += val;
                }
                pos += 13;
            }
            continue;
        }
        case 3:
            pos += 4;
            continue;
        case 1:
            pos += 60;
            continue;
        case 2:
            break;
        }
        if (type != 2) return 0;
    } while (type != 2);
    return 1;
}

} /* extern "C" */

} /* namespace m8003DD00 */

namespace m8003DE9C {
// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).

// fn_8003DE9C code matches 100%; unit stays NonMatching: string pool is .rodata lbl_80294E10, shared with 8003C8E4/8003D130/8003D518 (needs TU merge).

class Var { public: u8 p[8]; virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void *ptr(int); void *f12; };
struct Mgr3DE9C {
    u8 pad[192];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void m3(void *out, s32 v);
    virtual void v4();
    virtual s32 m5(void *key);
};
struct G65C { u8 p[36]; u8 *f36; };
struct En { u8 p[740]; void *f740; u32 f744; u8 p748[8]; };
extern "C" {
typedef struct { char d[8]; } Key3DE9C;
typedef struct { u8 *f0; } Buf3DE9C;
extern u8 *lbl_8035A1DC;
extern void *lbl_8035B594;
extern G65C *lbl_8035B65C;
extern Mgr3DE9C *lbl_8035B684;
struct Str { char s0[36]; char s36[12]; char s48[12]; char s60[12]; char s72[12]; char s84[12]; char s96[12]; char s108[12]; };
extern char lbl_8035C1D8[8];
extern char lbl_8035C1E4[8];
extern char lbl_8035C1EC[8];
extern char lbl_8035C1F4[8];
extern char lbl_8035C200[8];
extern char lbl_8035C20C[8];
extern char lbl_8035C214[8];
extern char lbl_8035C21C[8];
extern char lbl_8035C224[4];
void *memset(void *, int, u32);
void *memcpy(void *, const void *, unsigned long);
void fn_8024D7E4(void *);
Var *fn_80207198(u8 *, char *, int);
void fn_800F6E88(void *, char *);
s32 fn_8003DD00(u8 *o, Buf3DE9C *b);
u32 *fn_800F8274(void *, Key3DE9C *);
void fn_800F87F0(void *, Key3DE9C *, u32 *);
}
inline void SetI(char *n, s32 v) { *(s32 *)fn_80207198(lbl_8035A1DC + 992, n, 0)->ptr(0) = v; }
inline Var *Get(char *n) { return fn_80207198(lbl_8035B65C->f36 + 992, n, 0); }

static inline void ClrC(u8 *o, u32 s) {
    u8 *q; u8 *p; p = o; q = o;
    u32 i;
    for (i = s; i < 31; i++) {
        memset(*(void **)(p + 1360), 0, 200);
        memset(((En *)q)->f740, 0, ((En *)q)->f744 * 12);
        *(u32 *)(p + 1484) = s;
        p += 4;
        q += 20;
    }
}
extern "C" s32 fn_8003DE9C(u8 *o, Buf3DE9C *b, void *x) {
    s32 pos;
    u32 i;
    s32 type;
    u8 *p;
    u8 *q;
    fn_800F6E88(x, lbl_8035C224);
    if (b->f0[0] != 3) return 0;
    pos = 1;
    ClrC(o, 0);
    fn_8024D7E4(lbl_8035B594);
    SetI((char *)sE34, 0);
    SetI((char *)sE58, 1);
    SetI((char *)sE64, 0);
    SetI(lbl_8035C21C, 0);
    SetI((char *)sE70, 0);
    SetI((char *)sE7C, 0);
    if (!fn_8003DD00(o, b)) return 0;
    do {
        u8 *d = b->f0;
        type = d[pos++];
        switch (type) {
        case 0: {
            u32 cnt;
            u32 j;
            lbl_8035B684->m3(x, d[pos]);
            memcpy(&cnt, &b->f0[pos + 1], 4);
            pos += 5;
            for (j = 0; j < cnt; j++) {
                Key3DE9C key;
                Key3DE9C tmp;
                u32 val;
                s32 c;
                En *e;
                s32 k;
                u32 *slot;
                c = b->f0[pos];
                memcpy(&key, &b->f0[pos + 1], 8);
                memcpy(&val, &b->f0[pos + 9], 4);
                pos += 13;
                k = c;
                if (c == -1) {
                    lbl_8035B684->m3(&tmp, -1);
                    k = lbl_8035B684->m5(&tmp);
                }
                e = (En *)(o + k * 20 + 740);
                slot = fn_800F8274(e, &key);
                if (!slot) {
                    u8 *pk = o + k * 4;
                    slot = (u32 *)*(void **)(pk + 1360) + *(u32 *)(pk + 1484);
                    fn_800F87F0(e, &key, slot);
                    (*(u32 *)(pk + 1484))++;
                }
                *slot = val;
            }
            continue;
        }
        case 3:
            Get((char *)sE34)->f12 = b->f0 + pos;
            pos += 4;
            continue;
        case 1:
            memcpy(Get(lbl_8035C1D8)->ptr(0), d + pos, 4);
            memcpy(Get((char *)sE40)->ptr(0), &b->f0[pos + 4], 4);
            memcpy(Get((char *)sE4C)->ptr(0), &b->f0[pos + 8], 4);
            memcpy(Get(lbl_8035C1E4)->ptr(0), &b->f0[pos + 12], 4);
            memcpy(Get(lbl_8035C1EC)->ptr(0), &b->f0[pos + 16], 4);
            memcpy(Get((char *)sE58)->ptr(0), &b->f0[pos + 20], 4);
            memcpy(Get((char *)sE64)->ptr(0), &b->f0[pos + 24], 4);
            memcpy(Get(lbl_8035C1F4)->ptr(0), &b->f0[pos + 28], 4);
            memcpy(Get(lbl_8035C200)->ptr(0), &b->f0[pos + 32], 4);
            memcpy(Get((char *)lbl_80294E10)->ptr(0), &b->f0[pos + 36], 4);
            memcpy(Get(lbl_8035C20C)->ptr(0), &b->f0[pos + 40], 4);
            memcpy(Get(lbl_8035C214)->ptr(0), &b->f0[pos + 44], 4);
            memcpy(Get(lbl_8035C21C)->ptr(0), &b->f0[pos + 48], 4);
            memcpy(Get((char *)sE70)->ptr(0), &b->f0[pos + 52], 4);
            memcpy(Get((char *)sE7C)->ptr(0), &b->f0[pos + 56], 4);
            pos += 60;
            continue;
        case 2:
            break;
        }
        if (type != 2) return 0;
    } while (type != 2);
    return 1;
}


} /* namespace m8003DE9C */
