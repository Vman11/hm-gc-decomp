// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

}
struct E_6C30 { u8 pad_[292];
    virtual void v0(); virtual void v1(); virtual void m2(char *, int, int); virtual void v3(); virtual void m4(int); virtual u32 m5();
};
struct P_6C30 { u8 pad_[16];
    virtual void v0(); virtual void v12(); virtual void v16(); virtual void *v20(u32);
    u32 f20;
};
struct C80215F50 { u8 pad[0x2C]; E_6C30 *f44; u8 pad2[0x10]; C80215F50(); ~C80215F50(); };
extern "C" {
extern char lbl_80364144[4];
extern char lbl_80364148[8];
extern char lbl_802E5350[];
int fn_80215C84(C80215F50 *, char *, char *, int, int);
void fn_80060E30(int, char *, ...);
void fn_80215BFC(C80215F50 *);
void fn_800FB064(E_6C30 *, void *);
void fn_800FB000(E_6C30 *, int);
u32 fn_800FADA8(E_6C30 *);
void fn_800F8E38(P_6C30 *, u32);
void fn_80135F6C(void *, P_6C30 *, void *);
void fn_800F87F0(P_6C30 *, void *, void *);
void fn_801367EC(void *, void *, P_6C30 *, E_6C30 *, void *);
void fn_800FAEA0(E_6C30 *);
static inline void *get(P_6C30 *p, u32 i) { return p->v20(i); }
static inline void *pick(E_6C30 *r, u8 *b16) {
    void *x;
    u32 k = r->m5();
    x = 0;
    if (k == 57) {
        fn_800FB064(r, b16);
        fn_800FB000(r, 58);
        x = b16;
    } else if (k != 58) {
        r->m4(30);
    }
    return x;
}
void fn_80136C30(P_6C30 *p, void *a, char *s) {
    C80215F50 o;
    u8 b16[8];
    u8 b8[8];
    int e;
    void *x;
    void *c;
    u32 i;
    E_6C30 *r;
    if ((e = fn_80215C84(&o, s, lbl_80364144, 2, 0)) != 0) fn_80060E30(e, lbl_80364148, s, lbl_80364144);
    r = o.f44;
    if (p->f20) p->v12();
    r->m2(lbl_802E5350, 58, 0);
    x = pick(r, b16);
    p->f20 = fn_800FADA8(r);
    fn_800F8E38(p, p->f20);
    fn_80135F6C(a, p, x);
    p->v16();
    for (i = 0; i < p->f20; i++) {
        fn_800FB000(r, 58);
        fn_800FB064(r, b8);
        c = get(p, i);
        fn_800F87F0(p, b8, c);
        fn_801367EC(c, a, p, r, x);
    }
    fn_800FAEA0(r);
    fn_80215BFC(&o);
}
}
extern "C" {

} /* extern "C" */
