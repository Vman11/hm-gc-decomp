// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

}
struct S12_BF74 { u8 pad[12]; char *name; };
struct C80215F50 { u8 pad[0x28]; S12_BF74 *f40; int f44; u8 pad2[0x10]; C80215F50(); ~C80215F50(); };
struct P_BF74 { u8 pad[0x48]; int f72; char *f76; };
extern "C" {
extern void *lbl_8035AAB0;
extern char lbl_803639AC[4];
extern char lbl_803639B0[6];
int fn_80215C84(C80215F50 *, char *, char *, int, int);
void fn_80060E30(int, char *, ...);
void fn_800604C4(int, int, int, int);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
void fn_8010B9F4(P_BF74 *, int, int, int, int, int);
void fn_80215BFC(C80215F50 *);
u32 strlen(const char *);
char *strcpy(char *, const char *);
int fn_8010BF74(P_BF74 *p, int a, char *s, int u, int b, int c, int d) {
    C80215F50 o;
    int e;
    char *n;
    if ((e = fn_80215C84(&o, s, lbl_803639AC, 2, 0)) != 0) fn_80060E30(e, lbl_803639B0, s, lbl_803639AC);
    n = o.f40->name;
    if (lbl_8035AAB0 == 0) fn_800604C4(-2, 0, 0, 0);
    fn_800F7EC0(lbl_8035AAB0);
    p->f76 = new char[strlen(n) + 1];
    fn_800F7E98();
    if (p->f76 == 0) fn_800604C4(-4, 0, 0, 0);
    strcpy(p->f76, n);
    fn_8010B9F4(p, a, o.f44, b, c, d);
    fn_80215BFC(&o);
    p->f72 = 1;
    return 0;
}

} /* extern "C" */
