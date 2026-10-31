// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct R { u8 pad_[292]; virtual void s0(); virtual void s1(); virtual void s2(void *, int, int); virtual void s3(); virtual void err(int); virtual u32 next(); };
struct S { u8 pad[20]; };
struct C801BD4C8 { u8 pad_[12]; u32 f12; virtual void v0(); virtual void v1(); virtual void load(void *, R *, S *); u8 rest_[16]; C801BD4C8(); ~C801BD4C8(); };
struct C801B369C { u8 pad_[12]; u32 f12; virtual void v0(); virtual void v1(); virtual void load(void *, R *, S *); u8 rest_[36]; C801B369C(); ~C801B369C(); };
struct C801CCA28 { u8 pad_[12]; u32 f12; virtual void v0(); virtual void v1(); virtual void load(void *, R *, S *); u8 rest_[48]; C801CCA28(); ~C801CCA28(); };
struct C801AE6F4 { u8 pad_[12]; u32 f12; virtual void v0(); virtual void v1(); virtual void load(void *, R *, S *); u8 rest_[184]; C801AE6F4(); ~C801AE6F4(); };
struct C801A4F00 { u8 pad_[12]; u32 f12; virtual void v0(); virtual void v1(); virtual void load(void *, R *, S *); u8 rest_[36]; C801A4F00(); ~C801A4F00(); };
struct C801BD818 { u8 pad_[12]; u32 f12; virtual void v0(); virtual void v1(); virtual void load(void *, R *, S *); u8 rest_[24]; C801BD818(); ~C801BD818(); };
struct C801A4C14 { u8 pad_[12]; u32 f12; virtual void v0(); virtual void v1(); virtual void load(void *, R *, S *); u8 rest_[92]; C801A4C14(); ~C801A4C14(); };
struct C801B3E18 { u8 pad_[12]; u32 f12; virtual void v0(); virtual void v1(); virtual void load(void *, R *, S *); u8 rest_[148]; C801B3E18(); ~C801B3E18(); };
struct C801B307C { u8 pad_[12]; u32 f12; virtual void v0(); virtual void v1(); virtual void load(void *, R *, S *); u8 rest_[36]; C801B307C(); ~C801B307C(); };
struct C801DE4E0 { u8 pad_[12]; u32 f12; virtual void v0(); virtual void v1(); virtual void load(void *, R *, S *); u8 rest_[36]; C801DE4E0(); ~C801DE4E0(); };
struct C801A460C { u8 pad_[12]; u32 f12; virtual void v0(); virtual void v1(); virtual void load(void *, R *, S *); u8 rest_[40]; C801A460C(); ~C801A460C(); };
struct C801C6614 { u8 pad_[12]; u32 f12; virtual void v0(); virtual void v1(); virtual void load(void *, R *, S *); u8 rest_[8]; C801C6614(); ~C801C6614(); };
struct T {
    void *f0;
    u8 pad4[8];
    s32 f12;
    u8 pad16[8];
    u32 n24;
    u32 n28;
    u32 n32;
    u32 n36;
    u32 n40;
    u32 n44;
    u32 n48;
    u32 n52;
    u32 n56;
    u32 n60;
    u32 n64;
    u32 n68;
    C801BD4C8 *a72;
    C801B369C *a76;
    C801CCA28 *a80;
    C801AE6F4 *a84;
    C801A4F00 *a88;
    C801A4C14 *a92;
    C801B3E18 *a96;
    C801B307C *a100;
    C801DE4E0 *a104;
    C801A460C *a108;
    C801BD818 *a112;
    C801C6614 *a116;
    S s120;
    S s140;
    S s160;
    S s180;
    S s200;
    S s220;
    S s240;
    S s260;
    S s280;
    S s300;
    S s320;
    S s340;
    virtual void w0(); virtual void clr();
};
extern char lbl_802EA4A8[];
extern void *lbl_8035AEE4;
u32 fn_800FADA8(R *);
void fn_800FAEA0(R *);
void fn_800FB064(R *, void *);
void fn_800F8E38(S *, u32);
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
#define ALLOC(H, dst, expr) \
    if (!H) fn_800604C4(-2, 0, 0, 0); \
    fn_800F7EC0(H); \
    dst = expr; \
    fn_800F7E98(); \
    if (!dst) fn_800604C4(-4, 0, 0, 0);
s32 fn_801A5560(T *t, void *x, R *r, u32 v, char *nm) {
    u8 buf[8];
    u32 tok;
    u32 i;
    if (t->f12) t->clr();
    t->f12 = 1;
    t->f0 = x;
    r->s2(lbl_802EA4A8, 48, 0);
    tok = r->next();
    if (tok == 104) {
        if (nm) fn_800FB064(r, nm);
        else fn_800FB064(r, buf);
        tok = r->next();
    }
    for (; tok != 0; tok = r->next()) {
        switch (tok) {
        case 89:
            t->n24 = fn_800FADA8(r);
            if (t->n24) {
                ALLOC(lbl_8035AEE4, t->a72, new C801BD4C8[t->n24])
            }
            fn_800F8E38(&t->s120, t->n24);
            for (i = 0; i < t->n24; i++) {
                t->a72[i].load(t->f0, r, &t->s120);
                t->a72[i].f12 = v;
            }
            fn_800FAEA0(r);
            break;
        case 94:
            t->n28 = fn_800FADA8(r);
            if (t->n28) {
                ALLOC(lbl_8035AEE4, t->a76, new C801B369C[t->n28])
            }
            fn_800F8E38(&t->s140, t->n28);
            for (i = 0; i < t->n28; i++) {
                t->a76[i].load(t->f0, r, &t->s140);
                t->a76[i].f12 = v;
            }
            fn_800FAEA0(r);
            break;
        case 90:
            t->n32 = fn_800FADA8(r);
            if (t->n32) {
                ALLOC(lbl_8035AEE4, t->a80, new C801CCA28[t->n32])
            }
            fn_800F8E38(&t->s160, t->n32);
            for (i = 0; i < t->n32; i++) {
                t->a80[i].load(t->f0, r, &t->s160);
                t->a80[i].f12 = v;
            }
            fn_800FAEA0(r);
            break;
        case 91:
            t->n36 = fn_800FADA8(r);
            if (t->n36) {
                ALLOC(lbl_8035AEE4, t->a84, new C801AE6F4[t->n36])
            }
            fn_800F8E38(&t->s180, t->n36);
            for (i = 0; i < t->n36; i++) {
                t->a84[i].load(t->f0, r, &t->s180);
                t->a84[i].f12 = v;
            }
            fn_800FAEA0(r);
            break;
        case 95:
            t->n40 = fn_800FADA8(r);
            if (t->n40) {
                ALLOC(lbl_8035AEE4, t->a88, new C801A4F00[t->n40])
            }
            fn_800F8E38(&t->s200, t->n40);
            for (i = 0; i < t->n40; i++) {
                t->a88[i].load(t->f0, r, &t->s200);
                t->a88[i].f12 = v;
            }
            fn_800FAEA0(r);
            break;
        case 96:
            t->n64 = fn_800FADA8(r);
            if (t->n64) {
                ALLOC(lbl_8035AEE4, t->a112, new C801BD818[t->n64])
            }
            fn_800F8E38(&t->s320, t->n64);
            for (i = 0; i < t->n64; i++) {
                t->a112[i].load(t->f0, r, &t->s320);
                t->a112[i].f12 = v;
            }
            fn_800FAEA0(r);
            break;
        case 97:
            t->n44 = fn_800FADA8(r);
            if (t->n44) {
                ALLOC(lbl_8035AEE4, t->a92, new C801A4C14[t->n44])
            }
            fn_800F8E38(&t->s220, t->n44);
            for (i = 0; i < t->n44; i++) {
                t->a92[i].load(t->f0, r, &t->s220);
                t->a92[i].f12 = v;
            }
            fn_800FAEA0(r);
            break;
        case 98:
            t->n48 = fn_800FADA8(r);
            if (t->n48) {
                ALLOC(lbl_8035AEE4, t->a96, new C801B3E18[t->n48])
            }
            fn_800F8E38(&t->s240, t->n48);
            for (i = 0; i < t->n48; i++) {
                t->a96[i].load(t->f0, r, &t->s240);
                t->a96[i].f12 = v;
            }
            fn_800FAEA0(r);
            break;
        case 99:
            t->n52 = fn_800FADA8(r);
            if (t->n52) {
                ALLOC(lbl_8035AEE4, t->a100, new C801B307C[t->n52])
            }
            fn_800F8E38(&t->s260, t->n52);
            for (i = 0; i < t->n52; i++) {
                t->a100[i].load(t->f0, r, &t->s260);
                t->a100[i].f12 = v;
            }
            fn_800FAEA0(r);
            break;
        case 100:
            t->n56 = fn_800FADA8(r);
            if (t->n56) {
                ALLOC(lbl_8035AEE4, t->a104, new C801DE4E0[t->n56])
            }
            fn_800F8E38(&t->s280, t->n56);
            for (i = 0; i < t->n56; i++) {
                t->a104[i].load(t->f0, r, &t->s280);
                t->a104[i].f12 = v;
            }
            fn_800FAEA0(r);
            break;
        case 101:
            t->n60 = fn_800FADA8(r);
            if (t->n60) {
                ALLOC(lbl_8035AEE4, t->a108, new C801A460C[t->n60])
            }
            fn_800F8E38(&t->s300, t->n60);
            for (i = 0; i < t->n60; i++) {
                t->a108[i].load(t->f0, r, &t->s300);
                t->a108[i].f12 = v;
            }
            fn_800FAEA0(r);
            break;
        case 102:
            t->n68 = fn_800FADA8(r);
            if (t->n68) {
                ALLOC(lbl_8035AEE4, t->a116, new C801C6614[t->n68])
            }
            fn_800F8E38(&t->s340, t->n68);
            for (i = 0; i < t->n68; i++) {
                t->a116[i].load(t->f0, r, &t->s340);
                t->a116[i].f12 = v;
            }
            fn_800FAEA0(r);
            break;
        case 92: case 93: break;
        }
    }
    return 0;
}

} /* extern "C" */
