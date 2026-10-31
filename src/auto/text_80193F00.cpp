// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct R { u8 pad_[292]; virtual void s0(); virtual void s1(); virtual void s2(void *, int, int); virtual void s3(); virtual void err(int); virtual u32 next(); };
struct X { u8 pad_[48]; virtual void x0(); virtual void x1(); virtual void x2(); virtual void x3(); virtual void x4(); virtual void x5(); virtual void x6(); virtual void x7(); virtual void x8(); virtual void x9(); virtual void x10(); virtual void x11(); virtual void x12(); virtual void x13(); virtual void x14(); virtual void *x15(); };
struct B { u32 f0; X *f4; };
struct T;
struct C80192398 { u8 pad_[104]; virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void load(B *, T *, R *); C80192398(); ~C80192398(); };
struct C8018E150 { u8 pad_[104]; virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void load(B *, T *, R *); u8 rest_[60]; C8018E150(); ~C8018E150(); };
struct C801883E0 { u8 pad_[104]; virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void load(B *, T *, R *); u8 rest_[96]; C801883E0(); ~C801883E0(); };
struct C8018FCF0 { u8 pad_[104]; virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void load(B *, T *, R *); u8 rest_[8]; C8018FCF0(); ~C8018FCF0(); };
struct C80197988 { u8 pad_[104]; virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void load(B *, T *, R *); u8 rest_[120]; C80197988(); ~C80197988(); };
struct C80185960 { u8 pad_[104]; virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void load(B *, T *, R *); u8 rest_[52]; C80185960(); ~C80185960(); };
struct C8018CED0 { u8 pad_[104]; virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void load(B *, T *, R *); u8 rest_[60]; C8018CED0(); ~C8018CED0(); };
struct C8019DC90 { u8 pad_[104]; virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void load(B *, T *, R *); u8 rest_[56]; C8019DC90(); ~C8019DC90(); };
struct C8019F0B4 { u8 pad_[104]; virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void load(B *, T *, R *); u8 rest_[164]; C8019F0B4(); ~C8019F0B4(); };
struct C8018AACC { u8 pad_[104]; virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void load(B *, T *, R *); u8 rest_[200]; C8018AACC(); ~C8018AACC(); };
struct C80197F58 { u8 pad_[104]; virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void load(B *, T *, R *); u8 rest_[64]; C80197F58(); ~C80197F58(); };
struct C80199ECC { u8 pad_[104]; virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void load(B *, T *, R *); u8 rest_[4]; C80199ECC(); ~C80199ECC(); };
struct C80106E10 { u8 d[48]; C80106E10(); };
struct T {
    u32 f0;
    u8 pad4[12];
    virtual void w0(); virtual void clr();
    u8 f20[56];
    C80106E10 *f76;
    u32 f80, f84, f88;
    u8 pad92[12];
    u32 n104;
    u32 n108;
    u8 pad112[4];
    u32 n116;
    u32 n120;
    u8 pad124[16];
    u32 n140;
    u32 n144;
    u32 n148;
    u32 n152;
    u32 n156;
    u32 n160;
    u32 n164;
    u32 n168;
    C80192398 *a172;
    C8018FCF0 *a176;
    u8 pad180[4];
    C8018E150 *a184;
    C801883E0 *a188;
    u8 pad192[16];
    C80197988 *a208;
    C8019F0B4 *a212;
    C8018AACC *a216;
    C80185960 *a220;
    C8019DC90 *a224;
    C8018CED0 *a228;
    C80197F58 *a232;
    C80199ECC *a236;
};
extern char lbl_802E9370[];
extern void *lbl_8035AE68;
u32 fn_800FADA8(R *);
void fn_800FAEA0(R *);
void fn_800FB000(R *, s32);
void fn_800FB064(R *, void *);
u32 fn_800FB33C(R *);
void fn_800FAFA8(R *);
void fn_800FAF50(R *);
void fn_800F8E38(T *, u32);
void fn_800F87F0(T *, void *, void *);
void fn_80105B88(void *, void *, u32, u32, s32);
void fn_8017F74C(B *, T *, char *);
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
#define ALLOC(H, dst, expr) \
    if (!H) fn_800604C4(-2, 0, 0, 0); \
    fn_800F7EC0(H); \
    dst = expr; \
    fn_800F7E98(); \
    if (!dst) fn_800604C4(-4, 0, 0, 0);
void fn_80193F00(T *t, B *b, R *r) {
    u8 buf[8];
    char nb[8];
    char *name;
    X *x;
    u32 n;
    u32 m;
    u32 tok;
    u32 i;
    if (t->f0) t->clr();
    x = b->f4;
    r->s2(lbl_802E9370, 108, 0);
    tok = r->next();
    if (tok == 117) {
        fn_800FB064(r, nb);
        name = nb;
        tok = r->next();
    } else {
        name = 0;
    }
    while (tok != 57) {
        switch (tok) {
        case 58: fn_800FAFA8(r); t->f80 = fn_800FB33C(r); fn_800FAF50(r); break;
        case 59: fn_800FAFA8(r); t->f84 = fn_800FB33C(r); fn_800FAF50(r); break;
        case 60: fn_800FAFA8(r); t->f88 = fn_800FB33C(r); fn_800FAF50(r); break;
        default: r->err(30); break;
        }
        tok = r->next();
    }
    n = t->f80;
    if (n || t->f84) fn_80105B88(t->f20, x->x15(), n, t->f84, 0);
    if (t->f88) {
        ALLOC(lbl_8035AE68, t->f76, new C80106E10[t->f88])
    }
    fn_800FAFA8(r);
    m = fn_800FB33C(r);
    fn_800FAF50(r);
    if (m < 1) r->err(35);
    fn_800F8E38(t, m);
    fn_8017F74C(b, t, name);
    while ((tok = r->next()) != 0) {
        switch (tok) {
        case 57:
            if (t->n104) r->err(39);
            t->n104 = fn_800FADA8(r);
            ALLOC(lbl_8035AE68, t->a172, new C80192398[t->n104])
            for (i = 0; i < t->n104; i++) {
                fn_800FB000(r, 57);
                fn_800FB064(r, buf);
                fn_800F87F0(t, buf, &t->a172[i]);
                t->a172[i].load(b, t, r);
            }
            fn_800FAEA0(r);
            break;
        case 64:
            if (t->n116) r->err(39);
            t->n116 = fn_800FADA8(r);
            ALLOC(lbl_8035AE68, t->a184, new C8018E150[t->n116])
            for (i = 0; i < t->n116; i++) {
                fn_800FB000(r, 64);
                fn_800FB064(r, buf);
                fn_800F87F0(t, buf, &t->a184[i]);
                t->a184[i].load(b, t, r);
            }
            fn_800FAEA0(r);
            break;
        case 65:
            if (t->n120) r->err(39);
            t->n120 = fn_800FADA8(r);
            ALLOC(lbl_8035AE68, t->a188, new C801883E0[t->n120])
            for (i = 0; i < t->n120; i++) {
                fn_800FB000(r, 65);
                fn_800FB064(r, buf);
                fn_800F87F0(t, buf, &t->a188[i]);
                t->a188[i].load(b, t, r);
            }
            fn_800FAEA0(r);
            break;
        case 61:
            if (t->n108) r->err(39);
            t->n108 = fn_800FADA8(r);
            ALLOC(lbl_8035AE68, t->a176, new C8018FCF0[t->n108])
            for (i = 0; i < t->n108; i++) {
                fn_800FB000(r, 61);
                fn_800FB064(r, buf);
                fn_800F87F0(t, buf, &t->a176[i]);
                t->a176[i].load(b, t, r);
            }
            fn_800FAEA0(r);
            break;
        case 84:
            if (t->n140) r->err(39);
            t->n140 = fn_800FADA8(r);
            ALLOC(lbl_8035AE68, t->a208, new C80197988[t->n140])
            for (i = 0; i < t->n140; i++) {
                fn_800FB000(r, 84);
                fn_800FB064(r, buf);
                fn_800F87F0(t, buf, &t->a208[i]);
                t->a208[i].load(b, t, r);
            }
            fn_800FAEA0(r);
            break;
        case 87:
            if (t->n152) r->err(39);
            t->n152 = fn_800FADA8(r);
            ALLOC(lbl_8035AE68, t->a220, new C80185960[t->n152])
            for (i = 0; i < t->n152; i++) {
                fn_800FB000(r, 87);
                fn_800FB064(r, buf);
                fn_800F87F0(t, buf, &t->a220[i]);
                t->a220[i].load(b, t, r);
            }
            fn_800FAEA0(r);
            break;
        case 91:
            if (t->n160) r->err(39);
            t->n160 = fn_800FADA8(r);
            ALLOC(lbl_8035AE68, t->a228, new C8018CED0[t->n160])
            for (i = 0; i < t->n160; i++) {
                fn_800FB000(r, 91);
                fn_800FB064(r, buf);
                fn_800F87F0(t, buf, &t->a228[i]);
                t->a228[i].load(b, t, r);
            }
            fn_800FAEA0(r);
            break;
        case 89:
            if (t->n156) r->err(39);
            t->n156 = fn_800FADA8(r);
            ALLOC(lbl_8035AE68, t->a224, new C8019DC90[t->n156])
            for (i = 0; i < t->n156; i++) {
                fn_800FB000(r, 89);
                fn_800FB064(r, buf);
                fn_800F87F0(t, buf, &t->a224[i]);
                t->a224[i].load(b, t, r);
            }
            fn_800FAEA0(r);
            break;
        case 151:
            if (t->n144) r->err(39);
            t->n144 = fn_800FADA8(r);
            ALLOC(lbl_8035AE68, t->a212, new C8019F0B4[t->n144])
            for (i = 0; i < t->n144; i++) {
                fn_800FB000(r, 151);
                fn_800FB064(r, buf);
                fn_800F87F0(t, buf, &t->a212[i]);
                t->a212[i].load(b, t, r);
            }
            fn_800FAEA0(r);
            break;
        case 138:
            if (t->n148) r->err(39);
            t->n148 = fn_800FADA8(r);
            ALLOC(lbl_8035AE68, t->a216, new C8018AACC[t->n148])
            for (i = 0; i < t->n148; i++) {
                fn_800FB000(r, 138);
                fn_800FB064(r, buf);
                fn_800F87F0(t, buf, &t->a216[i]);
                t->a216[i].load(b, t, r);
            }
            fn_800FAEA0(r);
            break;
        case 148:
            if (t->n164) r->err(39);
            t->n164 = fn_800FADA8(r);
            ALLOC(lbl_8035AE68, t->a232, new C80197F58[t->n164])
            for (i = 0; i < t->n164; i++) {
                fn_800FB000(r, 148);
                fn_800FB064(r, buf);
                fn_800F87F0(t, buf, &t->a232[i]);
                t->a232[i].load(b, t, r);
            }
            fn_800FAEA0(r);
            break;
        case 157:
            if (t->n168) r->err(39);
            t->n168 = fn_800FADA8(r);
            ALLOC(lbl_8035AE68, t->a236, new C80199ECC[t->n168])
            for (i = 0; i < t->n168; i++) {
                fn_800FB000(r, 157);
                fn_800FB064(r, buf);
                fn_800F87F0(t, buf, &t->a236[i]);
                t->a236[i].load(b, t, r);
            }
            fn_800FAEA0(r);
            break;
        default:
            r->err(30);
            break;
        }
    }
}

} /* extern "C" */
