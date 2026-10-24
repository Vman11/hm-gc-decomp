// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

}
struct C80210CEC { C80210CEC(); ~C80210CEC(); u32 a0; struct SZ { u32 p0; u32 size; } *sz; };
extern "C" {
struct HP { u8 pad[24]; u32 a24; u32 a28; };
struct P { u32 pad0; u32 size4; u8 *data8; u8 fl12; u8 pad13[3]; char *name16; };
extern HP *lbl_8035B188;
extern char lbl_80365750[4], lbl_80365754[4], lbl_80365758[4];
s32 fn_80210ABC(C80210CEC *, char *, char *, int);
void fn_800604C4(int, int, int, int);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
s32 fn_802108B4(C80210CEC *, void *, u32, u32 *);
void fn_80210938(C80210CEC *);
void fn_80207DAC(u32, char *, int);
char *strcat(char *, const char *);
u32 strlen(const char *);
char *strcpy(char *, const char *);
void *memset(void *, int, u32);

s32 fn_802041B8(P *p, char *name) {
    u32 got;
    C80210CEC f;
    char buf[268];
    s32 r;
    u32 size;
    u8 *data;
    if (p->fl12 & 1) return 0;
    if ((r = fn_80210ABC(&f, name, lbl_80365750, 2)) != 0) return r;
    size = f.sz->size;
    if (lbl_8035B188->a24 >= 5) lbl_8035B188->a28 = lbl_8035B188->a24;
    else lbl_8035B188->a28 = 5;
    if (!lbl_8035B188) fn_800604C4(-2, 0, 0, 0);
    fn_800F7EC0(lbl_8035B188);
    data = new u8[size];
    fn_800F7E98();
    if (!data) fn_800604C4(-4, 0, 0, 0);
    lbl_8035B188->a28 = lbl_8035B188->a24;
    fn_802108B4(&f, data, size, &got);
    fn_80210938(&f);
    p->data8 = data;
    r = fn_80210ABC(&f, name, lbl_80365754, 2);
    size = f.sz->size;
    fn_80207DAC(f.a0, buf, 268);
    strcat(buf, name);
    strcat(buf, lbl_80365758);
    if (!lbl_8035B188) fn_800604C4(-2, 0, 0, 0);
    fn_800F7EC0(lbl_8035B188);
    p->name16 = new char[strlen(buf) + 1];
    fn_800F7E98();
    if (!p->name16) fn_800604C4(-4, 0, 0, 0);
    memset(p->name16, 0, strlen(buf) + 1);
    strcpy(p->name16, buf);
    p->size4 = size;
    fn_80210938(&f);
    p->fl12 |= 1;
    return r;
}

} /* extern "C" */
