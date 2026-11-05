#include "common.h"

extern "C" {

}
struct S12_FD54 { u8 pad[12]; char *name; };
struct C80215F50 { u8 pad[0x28]; S12_FD54 *f40; int f44; u8 pad2[0x10]; C80215F50(); ~C80215F50(); };
struct P_FD54 { u8 pad[0x1e4]; char *f1e4; int f1e8; };
extern "C" {
extern void *lbl_8035AAD8;
extern char lbl_80363A14[4];
extern char lbl_80363A18[4];
int fn_80215C84(C80215F50 *, char *, char *, int, int);
void fn_80060E30(int, char *, ...);
void fn_800604C4(int, int, int, int);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
void fn_8010F3DC(P_FD54 *, int, int, int, int);
void fn_80215BFC(C80215F50 *);
u32 strlen(const char *);
char *strcpy(char *, const char *);
int fn_8010FD54(P_FD54 *p, int a, char *s, int u, int b, int c) {
    C80215F50 o;
    int e;
    char *n;
    if ((e = fn_80215C84(&o, s, lbl_80363A14, 2, 0)) != 0) fn_80060E30(e, lbl_80363A18, s, lbl_80363A14);
    n = o.f40->name;
    if (lbl_8035AAD8 == 0) fn_800604C4(-2, 0, 0, 0);
    fn_800F7EC0(lbl_8035AAD8);
    p->f1e4 = new char[strlen(n) + 1];
    fn_800F7E98();
    if (p->f1e4 == 0) fn_800604C4(-4, 0, 0, 0);
    strcpy(p->f1e4, n);
    fn_8010F3DC(p, a, o.f44, b, c);
    fn_80215BFC(&o);
    p->f1e8 = 1;
    return 0;
}

} /* extern "C" */
