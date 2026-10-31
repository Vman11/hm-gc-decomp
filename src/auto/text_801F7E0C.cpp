// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

#include "common.h"
struct R { u8 pad[0x124]; virtual void p0(); virtual void p1(); virtual void setup(void *, s32, void *); virtual void p3(); virtual void err(s32); virtual u32 next(); };
struct C801EB420 { virtual void v0(); virtual void v1(); virtual void v2(); virtual void load(void *, R *); u8 rest_[48]; C801EB420(); ~C801EB420(); };
struct C801F0560 { virtual void v0(); virtual void v1(); virtual void v2(); virtual void load(void *, R *); u8 rest_[56]; C801F0560(); ~C801F0560(); };
struct C801E91AC { virtual void v0(); virtual void v1(); virtual void v2(); virtual void load(void *, R *); u8 rest_[56]; C801E91AC(); ~C801E91AC(); };
struct C801E7E04 { virtual void v0(); virtual void v1(); virtual void v2(); virtual void load(void *, R *); u8 rest_[56]; C801E7E04(); ~C801E7E04(); };
struct C801E820C { virtual void v0(); virtual void v1(); virtual void v2(); virtual void load(void *, R *); u8 rest_[48]; C801E820C(); ~C801E820C(); };
struct C801E87C8 { virtual void v0(); virtual void v1(); virtual void v2(); virtual void load(void *, R *); u8 rest_[100]; C801E87C8(); ~C801E87C8(); };
struct C801E048C { virtual void v0(); virtual void v1(); virtual void v2(); virtual void load(void *, R *); u8 rest_[68]; C801E048C(); ~C801E048C(); };
struct C801DF508 { virtual void v0(); virtual void v1(); virtual void v2(); virtual void load(void *, R *); u8 rest_[60]; C801DF508(); ~C801DF508(); };
struct C801EE07C { virtual void v0(); virtual void v1(); virtual void v2(); virtual void load(void *, R *); u8 rest_[44]; C801EE07C(); ~C801EE07C(); };
struct C801DEEF0 { virtual void v0(); virtual void v1(); virtual void v2(); virtual void load(void *, R *); u8 rest_[44]; C801DEEF0(); ~C801DEEF0(); };
struct C801E4080 { virtual void v0(); virtual void v1(); virtual void v2(); virtual void load(void *, R *); u8 rest_[44]; C801E4080(); ~C801E4080(); };
struct C801E7124 { virtual void v0(); virtual void v1(); virtual void v2(); virtual void load(void *, R *); u8 rest_[44]; C801E7124(); ~C801E7124(); };
struct C801E8C4C { virtual void v0(); virtual void v1(); virtual void v2(); virtual void load(void *, R *); u8 rest_[44]; C801E8C4C(); ~C801E8C4C(); };
struct C801DE934 { virtual void v0(); virtual void v1(); virtual void v2(); virtual void load(void *, R *); u8 rest_[48]; C801DE934(); ~C801DE934(); };
struct C801EEADC { virtual void v0(); virtual void v1(); virtual void v2(); virtual void load(void *, R *); u8 rest_[44]; C801EEADC(); ~C801EEADC(); };
struct C801F73E0 { virtual void v0(); virtual void v1(); virtual void v2(); virtual void load(void *, R *); u8 rest_[124]; C801F73E0(); ~C801F73E0(); };
struct C801F6BA8 { virtual void v0(); virtual void v1(); virtual void v2(); virtual void load(void *, R *); u8 rest_[128]; C801F6BA8(); ~C801F6BA8(); };
struct C801E0AE8 { virtual void v0(); virtual void v1(); virtual void v2(); virtual void load(void *, R *); u8 rest_[56]; C801E0AE8(); ~C801E0AE8(); };
struct C801E1138 { virtual void v0(); virtual void v1(); virtual void v2(); virtual void load(void *, R *); u8 rest_[96]; C801E1138(); ~C801E1138(); };
struct C801E156C { virtual void v0(); virtual void v1(); virtual void v2(); virtual void load(void *, R *); u8 rest_[80]; C801E156C(); ~C801E156C(); };
struct C801E1890 { virtual void v0(); virtual void v1(); virtual void v2(); virtual void load(void *, R *); u8 rest_[52]; C801E1890(); ~C801E1890(); };
struct C801EE640 { virtual void v0(); virtual void v1(); virtual void v2(); virtual void load(void *, R *); u8 rest_[52]; C801EE640(); ~C801EE640(); };
struct C801E9608 { virtual void v0(); virtual void v1(); virtual void v2(); virtual void load(void *, R *); u8 rest_[60]; C801E9608(); ~C801E9608(); };
struct C801E99C8 { virtual void v0(); virtual void v1(); virtual void v2(); virtual void load(void *, R *); u8 rest_[72]; C801E99C8(); ~C801E99C8(); };
struct C801E7490 { virtual void v0(); virtual void v1(); virtual void v2(); virtual void load(void *, R *); u8 rest_[56]; C801E7490(); ~C801E7490(); };
struct C801EA320 { virtual void v0(); virtual void v1(); virtual void v2(); virtual void load(void *, R *); u8 rest_[108]; C801EA320(); ~C801EA320(); };
struct C801EFF94 { virtual void v0(); virtual void v1(); virtual void v2(); virtual void load(void *, R *); u8 rest_[60]; C801EFF94(); ~C801EFF94(); };
struct C801ED250 { virtual void v0(); virtual void v1(); virtual void v2(); virtual void load(void *, R *); u8 rest_[60]; C801ED250(); ~C801ED250(); };
struct C801F1028 { virtual void v0(); virtual void v1(); virtual void v2(); virtual void load(void *, R *); u8 rest_[112]; C801F1028(); ~C801F1028(); };
struct C801E3C20 { virtual void v0(); virtual void v1(); virtual void v2(); virtual void load(void *, R *); u8 rest_[56]; C801E3C20(); ~C801E3C20(); };
struct T { u8 pad[16]; virtual void v0(); virtual void clr(); void *x;
    C801DEEF0 *a24;
    C801E4080 *a28;
    C801E7124 *a32;
    C801E8C4C *a36;
    C801DE934 *a40;
    C801EEADC *a44;
    C801E048C *a48;
    C801DF508 *a52;
    C801E0AE8 *a56;
    C801E1138 *a60;
    C801E156C *a64;
    C801E1890 *a68;
    C801E7E04 *a72;
    C801E820C *a76;
    C801E87C8 *a80;
    C801E91AC *a84;
    C801EB420 *a88;
    C801EE07C *a92;
    C801EE640 *a96;
    C801F73E0 *a100;
    C801F6BA8 *a104;
    C801F0560 *a108;
    C801E9608 *a112;
    C801E99C8 *a116;
    C801E7490 *a120;
    C801EA320 *a124;
    C801EFF94 *a128;
    C801ED250 *a132;
    C801F1028 *a136;
    C801E3C20 *a140;
    s32 f144; u32 f148;
    u16 n152;
    u16 n154;
    u16 n156;
    u16 n158;
    u16 n160;
    u16 n162;
    u16 n164;
    u16 n166;
    u16 n168;
    u16 n170;
    u16 n172;
    u16 n174;
    u16 n176;
    u16 n178;
    u16 n180;
    u16 n182;
    u16 n184;
    u16 n186;
    u16 n188;
    u16 n190;
    u16 n192;
    u16 n194;
    u16 n196;
    u16 n198;
    u16 n200;
    u16 n202;
    u16 n204;
    u16 n206;
    u16 n208;
    u16 n210;
};
extern "C" {
u32 fn_800FADA8(R *);
void fn_800FB064(R *, void *);
void fn_800FB000(R *, s32);
void fn_800FAEA0(R *);
void fn_800FAFA8(R *);
u32 fn_800FB33C(R *);
void fn_800FAF50(R *);
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
void fn_800F8E38(T *, u32);
void fn_801E40D0(void *, T *, char *);
void fn_800F87F0(T *, void *, void *);
void fn_801F7928(T *);
unsigned long strlen(const char *);
extern void *lbl_8035B110;
extern u8 lbl_802EEBB8[];
}
#define ALLOC(H, dst, expr) \
    if (!H) fn_800604C4(-2, 0, 0, 0); \
    fn_800F7EC0(H); \
    dst = expr; \
    fn_800F7E98(); \
    if (!dst) fn_800604C4(-4, 0, 0, 0);
template <class C> static inline void ld(T *t, R *r, u32 tok, u16 &n, C *&a) {
    u8 buf[8];
    u32 cnt;
    C *p;
    u32 i;
    n = fn_800FADA8(r);
    ALLOC(lbl_8035B110, a, new C[n])
    cnt = n;
    for (i = 0, p = a; i < cnt; p++, i++) {
        fn_800FB000(r, tok);
        fn_800FB064(r, buf);
        fn_800F87F0(t, buf, p);
        p->load(t->x, r);
    }
    fn_800FAEA0(r);
}
extern "C" void fn_801F7E0C(T *t, void *x, R *r) {
    char *name = 0;
    char nb[8];
    u32 n;
    u32 tok;
    if (t->f144) t->clr();
    t->x = x;
    r->setup(lbl_802EEBB8, 134, 0);
    tok = r->next();
    if (tok == 57) {
        fn_800FB064(r, nb);
        if (strlen(nb)) name = nb;
        tok = r->next();
    }
    if (tok != 58) r->err(30);
    fn_800FAFA8(r);
    n = fn_800FB33C(r);
    fn_800FAF50(r);
    if (n < 1) r->err(35);
    fn_800F8E38(t, n);
    fn_801E40D0(x, t, name);
    while ((tok = r->next()) != 0) {
        switch (tok) {
        case 73: ld(t, r, tok, t->n184, t->a88); break;
        case 78: ld(t, r, tok, t->n194, t->a108); break;
        case 72: ld(t, r, tok, t->n182, t->a84); break;
        case 70: ld(t, r, tok, t->n176, t->a72); break;
        case 71: ld(t, r, tok, t->n178, t->a76); break;
        case 87: ld(t, r, tok, t->n180, t->a80); break;
        case 65: ld(t, r, tok, t->n164, t->a48); break;
        case 85: ld(t, r, tok, t->n166, t->a52); break;
        case 74: ld(t, r, tok, t->n186, t->a92); break;
        case 59: ld(t, r, tok, t->n152, t->a24); break;
        case 60: ld(t, r, tok, t->n154, t->a28); break;
        case 62: ld(t, r, tok, t->n156, t->a32); break;
        case 61: ld(t, r, tok, t->n158, t->a36); break;
        case 63: ld(t, r, tok, t->n160, t->a40); break;
        case 64: ld(t, r, tok, t->n162, t->a44); break;
        case 76: ld(t, r, tok, t->n188, t->a100); break;
        case 77: ld(t, r, tok, t->n190, t->a104); break;
        case 66: ld(t, r, tok, t->n168, t->a56); break;
        case 67: ld(t, r, tok, t->n170, t->a60); break;
        case 68: ld(t, r, tok, t->n172, t->a64); break;
        case 69: ld(t, r, tok, t->n174, t->a68); break;
        case 75: ld(t, r, tok, t->n192, t->a96); break;
        case 79: ld(t, r, tok, t->n196, t->a112); break;
        case 80: ld(t, r, tok, t->n198, t->a116); break;
        case 81: ld(t, r, tok, t->n200, t->a120); break;
        case 82: ld(t, r, tok, t->n202, t->a124); break;
        case 84: ld(t, r, tok, t->n206, t->a128); break;
        case 83: ld(t, r, tok, t->n204, t->a132); break;
        case 86: ld(t, r, tok, t->n210, t->a136); break;
        case 88: ld(t, r, tok, t->n208, t->a140); break;
        default:
            r->err(30);
            break;
        }
    }
    fn_801F7928(t);
}

} /* extern "C" */
