// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

}
struct C8020FA10 { C8020FA10(); ~C8020FA10(); u8 b[32]; };
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
    u8 pad1708[24];
    u32 size1732;
    u32 a1736;
    u32 a1740;
    u8 pad1744[20];
    RD *rd1764;
};
struct P {
    u32 pad0;
    u8 sub4[24];
    SRC *src;
    C8020FA10 *arr;
    u8 *buf;
    u8 *cur;
    u32 a44;
    u32 a48;
};
extern void *lbl_8035B1B8;
extern char lbl_802A6E48[], lbl_802A6E9C[];
void fn_800E1E88(void *, void *);
void __dt__9C8020FA10Fv(void);
void fn_802127F0(u8 *);
void fn_800604C4(int, int, int, int);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
void fn_80060568(char *, int, int, int);
void fn_80212814(u8 *, u8 *, u32, u32);

void fn_80210068(P *p, SRC *src) {
    u32 got;
    OB *ob;
    s32 r;
    if (p->src) {
        if (p->buf) delete[] p->buf;
        if (p->arr) fn_800E1E88(p->arr, (void *)__dt__9C8020FA10Fv);
        fn_802127F0(p->sub4);
        p->src = 0;
        p->arr = 0;
        p->buf = 0;
        p->cur = 0;
        p->a44 = 0;
        p->a48 = 0;
    }
    p->src = src;
    if (!lbl_8035B1B8) fn_800604C4(-2, 0, 0, 0);
    fn_800F7EC0(lbl_8035B1B8);
    p->buf = new u8[p->src->size1732];
    fn_800F7E98();
    if (!p->buf) fn_800604C4(-4, 0, 0, 0);
    if (src->rd1764->s4(0)) fn_80060568(lbl_802A6E48, 0, 0, 0);
    r = src->rd1764->s5(p->buf, p->src->size1732, &got, &ob);
    if (r == 7) {
        if (ob->s2()) fn_80060568(lbl_802A6E9C, 0, 0, 0);
        src->rd1764->s9(ob);
    } else if (r) {
        fn_80060568(lbl_802A6E9C, 0, 0, 0);
    }
    fn_80212814(p->sub4, p->buf + 32, p->src->a1736, p->src->a1740);
    p->cur = (p->buf + 32) + p->src->a1736 * 8 + p->src->a1740 * 4;
    p->a48 = p->cur[0] + (p->cur[1] << 8);
    p->cur += 2;
    p->a44 = p->cur[0] + (p->cur[1] << 8);
    p->cur += 2;
    if (!lbl_8035B1B8) fn_800604C4(-2, 0, 0, 0);
    fn_800F7EC0(lbl_8035B1B8);
    p->arr = new C8020FA10[p->src->n1704];
    fn_800F7E98();
    if (!p->arr) fn_800604C4(-4, 0, 0, 0);
}

} /* extern "C" */
