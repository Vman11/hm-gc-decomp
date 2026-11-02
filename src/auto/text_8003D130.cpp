// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

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
extern Str lbl_80294E10;
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
const char *wG_strpool_8003D130[] = { "DIFFCLTY", "LvSprFnd", "LvSprTtl" };
extern "C" void fn_8003D130(u8 *o, int a) {
    Str *s;
    u8 *p = o;
    u8 *q = o;
    u32 i;
    s = &lbl_80294E10;
    for (i = 0; i < 31; i++) {
        memset(*(void **)(p + 1360), 0, 200);
        memset(((En *)q)->f740, 0, ((En *)q)->f744 * 12);
        *(u32 *)(p + 1484) = 0;
        p += 4;
        q += 20;
    }
    fn_8024D7E4(lbl_8035B594);
    SetI((char *)"DETHCERT", 0);
    if (a) {
        SetI(lbl_8035C1D8, 2);
        { u32 *pp = lbl_8035B5E4->f24->get(0); pp[2] = 1; }
        lbl_8035B5E4->cur()->f48 = 0;
        SetF((char *)"SOUNDVOL", lbl_8035C1E0);
        SetF((char *)"MUSICVOL", lbl_8035C1E0);
        SetI(lbl_8035C1E4, 1);
        SetI(lbl_8035C1EC, 1);
        SetF(lbl_8035C1F4, lbl_8035C1FC);
        SetF(lbl_8035C200, lbl_8035C208);
        SetI(lbl_8035C20C, 2);
        SetI(lbl_8035C214, 2);
        SetI((char *)"DIFFCLTY", 1);
    }
    SetI((char *)"mGemFlag", 1);
    SetI((char *)"NUMCARDS", 0);
    SetI(lbl_8035C21C, 0);
    SetI((char *)"ZEKERSHP", 0);
    SetI((char *)"ZEKELIVE", 0);
}

} /* extern "C" */
