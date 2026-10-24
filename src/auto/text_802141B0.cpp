// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

}
struct C80213A84 { C80213A84(); ~C80213A84(); u8 b[32]; };
extern "C" {
struct OB { virtual void v0(); virtual void v1(); virtual s32 s2(); };
struct RD {
    u8 pad[16];
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual s32 s4(int); virtual s32 s5(u8 *, u32, u32 *, OB **);
    virtual void v6(); virtual void v7(); virtual void v8(); virtual void s9(OB *);
};
struct SRC {
    u8 pad[1704];
    u32 n1704;
    u8 pad1708[28];
    u32 a1736;
    u32 a1740;
    u8 pad1744[20];
    RD *rd1764;
};
struct P {
    u32 pad0;
    u8 sub4[24];
    SRC *src;
    C80213A84 *arr;
    u8 *buf;
    u8 sub40[4];
};
extern void *lbl_8035B1F0;
static const char s0[] = "AtIoSafeJamHeader::vInit:  error waiting on async op!\n";
static const char s1[] = "AtIoSafeJamHeader::vInit:  error loaading name table!\n";
static const char s2[] = "AtIoSafeJamHeader::vInit:  unable to load the entire name table (& root counts)!\n";
void fn_800E1E88(void *, void *);
void __dt__9C80213A84Fv(void);
void fn_80213268(u8 *);
void fn_802127F0(u8 *);
void fn_800604C4(int, int, int, int);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
void fn_80060568(char *, int, int, int);
void fn_80212814(u8 *, u8 *, u32, u32);
void fn_802132E0(u8 *, u16, u16, int, u32);
void fn_80212DA4(u8 *, RD *);

void fn_802141B0(P *p, SRC *src) {
    u32 got;
    OB *ob;
    s32 r;
    u32 sz;
    if (p->src) {
        fn_80213268(p->sub40);
        fn_802127F0(p->sub4);
        if (p->buf) delete[] p->buf;
        if (p->arr) fn_800E1E88(p->arr, (void *)__dt__9C80213A84Fv);
        p->src = 0;
        p->arr = 0;
        p->buf = 0;
    }
    p->src = src;
    sz = p->src->a1736 * 8;
    sz += p->src->a1740 * 4;
    if (!lbl_8035B1F0) fn_800604C4(-2, 0, 0, 0);
    fn_800F7EC0(lbl_8035B1F0);
    p->buf = new u8[sz + 4];
    fn_800F7E98();
    if (!p->buf) fn_800604C4(-4, 0, 0, 0);
    r = p->src->rd1764->s5(p->buf, sz + 4, &got, &ob);
    if (r == 7) {
        if (ob->s2()) fn_80060568((char *)s0, 0, 0, 0);
        p->src->rd1764->s9(ob);
    } else if (r) {
        fn_80060568((char *)s1, 0, 0, 0);
    }
    if (got != sz + 4) fn_80060568((char *)s2, 0, 0, 0);
    fn_80212814(p->sub4, p->buf, p->src->a1736, p->src->a1740);
    if (!lbl_8035B1F0) fn_800604C4(-2, 0, 0, 0);
    fn_800F7EC0(lbl_8035B1F0);
    p->arr = new C80213A84[p->src->n1704];
    fn_800F7E98();
    if (!p->arr) fn_800604C4(-4, 0, 0, 0);
    {
        u8 *b = (u8 *)(sz + (u32)p->buf);
        fn_802132E0(p->sub40, b[2] + (b[3] << 8), b[0] + (b[1] << 8), 0, sz + 36);
    }
    fn_80212DA4(p->sub40, p->src->rd1764);
}

} /* extern "C" */
