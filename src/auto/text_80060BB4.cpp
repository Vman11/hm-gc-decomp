// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

extern "C" { char *strcpy(char *, const char *); unsigned long strlen(const char *); }
typedef struct S28 { u8 pad[12]; char *fC; } S28;
struct P;
struct C80215F50 { u8 pad0[36]; void *f24; S28 *f28; P *f2C; u8 pad30[8]; C80215F50(); ~C80215F50(); };
extern char lbl_80297594[], lbl_802975A0[], lbl_8035E570[8], lbl_8035E604[4];
void fn_80060EBC();
void fn_80060F0C();
void fn_80060FA4();
void fn_80060FB8();
void fn_80061004();
void fn_80061050();
void fn_8006109C();
void fn_800610F8();
void fn_8006114C();
void fn_800611A0();
void fn_800611EC();
void fn_80061244();
void fn_80061290();
void fn_800612DC();
void fn_800612F0();
void fn_80061358();
void fn_800613CC();
void fn_80061458();
void fn_8006173C();
void fn_800619B8();
void fn_800641B0();
void fn_801191A8();
void fn_801194F8();
void fn_801194FC();
void fn_80119500();
void fn_80119A78();
void fn_80119A7C();
void fn_80119A80();
void fn_80119C34();
void fn_80119C38();
void fn_80119C3C();
void fn_8011A098();
void fn_8011A09C();
void fn_8011A5A0();
void fn_8011A5A4();
void fn_8011A5A8();
void fn_8011A998();
void fn_8011A99C();
void fn_8011A9A0();
void fn_8011AE68();
void fn_8011AE6C();
void fn_8011AE70();
void fn_801201B4();
void fn_801201F4();
void fn_801201F8();
void fn_801201FC();
void fn_801A21CC();
void fn_801A21D0();
void fn_801A21D4();
void fn_801A2664();
void fn_801A2668();
void fn_801A266C();
void fn_801A2A8C();
void fn_801A2A90();
void fn_801A2A94();
void fn_801A33FC();
void fn_801A3400();
void fn_801A3404();
void fn_801A3470();
void fn_801A38F0();
void fn_801A38F4();
void fn_801A38F8();
void fn_80216BDC();
void fn_80216BE0();
void fn_80216BE4();
extern char lbl_80297360[];
extern char lbl_8029736C[];
extern char lbl_80297378[];
extern char lbl_80297384[];
extern char lbl_80297394[];
extern char lbl_802973A0[];
extern char lbl_802973AC[];
extern char lbl_802973BC[];
extern char lbl_802973C8[];
extern char lbl_802973D4[];
extern char lbl_802973E0[];
extern char lbl_802973EC[];
extern char lbl_802973F8[];
extern char lbl_80297404[];
extern char lbl_80297410[];
extern char lbl_8029741C[];
extern char lbl_8029742C[];
extern char lbl_8035E578[];
extern char lbl_8035E580[];
extern char lbl_8035E588[];
extern char lbl_8035E590[];
extern char lbl_8035E598[];
extern char lbl_8035E5A0[];
void *lbl_802BCE28[46] = { (void *)0x39, (void *)&lbl_80297360, (void *)0x3A, (void *)&lbl_8035E578, (void *)0x3B, (void *)&lbl_8029736C, (void *)0x3C, (void *)&lbl_8035E580, (void *)0x3D, (void *)&lbl_80297378, (void *)0x3E, (void *)&lbl_8035E588, (void *)0x3F, (void *)&lbl_80297384, (void *)0x40, (void *)&lbl_80297394, (void *)0x42, (void *)&lbl_8035E590, (void *)0x43, (void *)&lbl_8035E598, (void *)0x44, (void *)&lbl_802973A0, (void *)0x45, (void *)&lbl_802973AC, (void *)0x46, (void *)&lbl_802973BC, (void *)0x47, (void *)&lbl_802973C8, (void *)0x48, (void *)&lbl_8035E5A0, (void *)0x41, (void *)&lbl_802973D4, (void *)0x49, (void *)&lbl_802973E0, (void *)0x4A, (void *)&lbl_802973EC, (void *)0x4B, (void *)&lbl_802973F8, (void *)0x4C, (void *)&lbl_80297404, (void *)0x4D, (void *)&lbl_80297410, (void *)0x4E, (void *)&lbl_8029741C, (void *)0x4F, (void *)&lbl_8029742C };
void *lbl_802BCEE0[3] = { (void *)0x0, (void *)0xFFFFFFFF, (void *)&fn_8006173C };
void *lbl_802BCEEC[66] = { (void *)0x0, (void *)0x0, (void *)&fn_80061458, (void *)&fn_80060F0C, (void *)&fn_80060EBC, (void *)&fn_801191A8, (void *)&fn_800641B0, (void *)&fn_801A3470, (void *)&fn_800619B8, (void *)&fn_80061290, (void *)&fn_80119500, (void *)&fn_801194FC, (void *)&fn_801194F8, (void *)&fn_80061358, (void *)&fn_80119A80, (void *)&fn_80119A7C, (void *)&fn_80119A78, (void *)&fn_800612F0, (void *)&fn_800612DC, (void *)&fn_8011A09C, (void *)&fn_8011A098, (void *)&fn_80061244, (void *)&fn_8011A9A0, (void *)&fn_8011A99C, (void *)&fn_8011A998, (void *)&fn_800611EC, (void *)&fn_80119C3C, (void *)&fn_80119C38, (void *)&fn_80119C34, (void *)&fn_80061004, (void *)&fn_8011AE70, (void *)&fn_8011AE6C, (void *)&fn_8011AE68, (void *)&fn_800611A0, (void *)&fn_8011A5A8, (void *)&fn_8011A5A4, (void *)&fn_8011A5A0, (void *)&fn_8006114C, (void *)&fn_801201FC, (void *)&fn_801201F8, (void *)&fn_801201F4, (void *)&fn_801201B4, (void *)&fn_800610F8, (void *)&fn_801A266C, (void *)&fn_801A2668, (void *)&fn_801A2664, (void *)&fn_8006109C, (void *)&fn_801A38F8, (void *)&fn_801A38F4, (void *)&fn_801A38F0, (void *)&fn_80060FA4, (void *)&fn_80216BE4, (void *)&fn_80216BE0, (void *)&fn_80216BDC, (void *)&fn_80061050, (void *)&fn_801A2A94, (void *)&fn_801A2A90, (void *)&fn_801A2A8C, (void *)&fn_800613CC, (void *)&fn_801A21D4, (void *)&fn_801A21D0, (void *)&fn_801A21CC, (void *)&fn_80060FB8, (void *)&fn_801A3404, (void *)&fn_801A3400, (void *)&fn_801A33FC };
extern void *lbl_802BCE28[];
extern char lbl_80357740[];
extern int lbl_8035ABF8;
struct P { u8 pad[292]; virtual void p0(); virtual void p1(); virtual void init(void *, int, int); virtual void p3(); virtual void p4(); virtual int next(); };
struct K { u8 pad[1720]; virtual void k0(); virtual void k1(); virtual void k2(); virtual void k3(); virtual void k4(); virtual int has(const char *); };
struct T { u8 pad[13284]; K *f13284; u8 pad13288[676]; int f13964, f13968, f13972, f13976, f13980, f13984, f13988, f13992, f13996, f14000, f14004, f14008, f14012, f14016, f14020, f14024, f14028, f14032; void *f14036; };
s32 fn_80215C84(C80215F50 *, const char *, const char *, s32, s32);
void fn_80215BFC(C80215F50 *);
void fn_80060E30(s32, const char *, ...);
void fn_800FAEF8(P *);
int fn_800FB33C(P *);
char *fn_800FB284(P *);
void *fn_8023C894(void *, char *);
static inline void up(char *str) {
    u32 i;
    char *s = str;
    for (i = 0; i < strlen(str); s++, i++) {
        if (*s >= 'a' && *s <= 'z') *s = *s - 32;
    }
}
void fn_80060BB4(T *t) {
    C80215F50 f;
    if (t->f13284->has(lbl_80297594)) return;
    s32 r;
    if ((r = fn_80215C84(&f, lbl_8035E570, lbl_8035E604, 2, 0)) != 0) fn_80060E30(r, lbl_802975A0);
    P *p = f.f2C;
    p->init(lbl_802BCE28, 23, 0);
    fn_800FAEF8(p);
    u32 tok;
    while ((tok = p->next()) != 6) {
        switch (tok) {
        case 57:
            t->f14028 = fn_800FB33C(p);
            t->f14032 = fn_800FB33C(p);
            break;
        case 58: {
            strcpy(lbl_80357740, fn_800FB284(p));
            up(lbl_80357740);
            break;
        }
        case 59: t->f13964 = 0; break;
        case 60: t->f13968 = 1; break;
        case 61: t->f13976 = 0; break;
        case 64: t->f13980 = 1; break;
        case 66: t->f13984 = 1; break;
        case 67: t->f13988 = 0; break;
        case 68: t->f13992 = 0; break;
        case 69: t->f14000 = 1; break;
        case 70: t->f14000 = 1; break;
        case 72: t->f14012 = 1; break;
        case 65: t->f14016 = 1; break;
        case 73: t->f14024 = 1; break;
        case 75: t->f13996 = 1; break;
        case 74: t->f14020 = fn_800FB33C(p); break;
        case 76: t->f14008 = 1; break;
        case 77: t->f14036 = fn_8023C894(&t->f14036, fn_800FB284(p)); break;
        case 79: lbl_8035ABF8 = 1; break;
        }
    }
    fn_80215BFC(&f);
}

} /* extern "C" */
