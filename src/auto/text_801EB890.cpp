// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

#include "common.h"
extern "C" {
extern u8 __vt__9C800F5578[];
void __ct__9C800F6BDCFv(void *);
void __dt__9C800FB424Fv(void *, s16);
}
class C800F5578 {
public:
    u8 d[0x124];
    u8 *vt;
    u8 rest[1396];
    C800F5578() { __ct__9C800F6BDCFv(this); }
    ~C800F5578() { vt = __vt__9C800F5578; __dt__9C800FB424Fv(this, 0); }
};
struct R { u8 pad[0x124]; virtual void p0(); virtual void p1(); virtual void setup(void *, s32, void *); virtual void p3(); virtual void err(s32); virtual u32 next(); };

struct C801E6C80 { u8 pad_[20]; virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void load(void *, R *); u8 rest_[44]; C801E6C80(); ~C801E6C80(); };
struct C801F08CC { u8 pad_[20]; virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void load(void *, R *); u8 rest_[20]; C801F08CC(); ~C801F08CC(); };
struct C801DFDC8 { u8 pad_[20]; virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void load(void *, R *); u8 rest_[60]; C801DFDC8(); ~C801DFDC8(); };
struct C801EA59C { u8 pad_[20]; virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void load(void *, R *); u8 rest_[72]; C801EA59C(); ~C801EA59C(); };
struct C801E5BA4 { u8 pad_[20]; virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void load(void *, R *); u8 rest_[16]; C801E5BA4(); ~C801E5BA4(); };
struct C801E4C2C { u8 pad_[20]; virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void load(void *, R *); u8 rest_[120]; C801E4C2C(); ~C801E4C2C(); };
struct C801EDA6C { u8 pad_[20]; virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void load(void *, R *); u8 rest_[28]; C801EDA6C(); ~C801EDA6C(); };
struct C801EAE64 { u8 pad_[20]; virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void load(void *, R *); u8 rest_[44]; C801EAE64(); ~C801EAE64(); };
struct C801EDD20 { u8 pad_[20]; virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void load(void *, R *); u8 rest_[8]; C801EDD20(); ~C801EDD20(); };
struct C801E62E8 { u8 pad_[20]; virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void load(void *, R *); u8 rest_[16]; C801E62E8(); ~C801E62E8(); };
struct C801EF158 { u8 pad_[20]; virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void load(void *, R *); u8 rest_[24]; C801EF158(); ~C801EF158(); };
struct C801E6678 { u8 pad_[20]; virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void load(void *, R *); u8 rest_[28]; C801E6678(); ~C801E6678(); };
struct C801EF5D0 { u8 pad_[20]; virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void load(void *, R *); u8 rest_[24]; C801EF5D0(); ~C801EF5D0(); };
struct C801E5F8C { u8 pad_[20]; virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void load(void *, R *); u8 rest_[48]; C801E5F8C(); ~C801E5F8C(); };
struct C801EEE6C { u8 pad_[20]; virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void load(void *, R *); u8 rest_[32]; C801EEE6C(); ~C801EEE6C(); };
struct T { u8 pad[16]; virtual void v0(); virtual void clr();
    C801DFDC8 *a20;
    C801EA59C *a24;
    C801E4C2C *a28;
    C801E5BA4 *a32;
    C801E6C80 *a36;
    C801E5F8C *a40;
    C801EEE6C *a44;
    C801E62E8 *a48;
    C801EF158 *a52;
    C801E6678 *a56;
    C801EF5D0 *a60;
    C801EAE64 *a64;
    C801EDA6C *a68;
    C801EDD20 *a72;
    C801F08CC *a76;
    u32 n80;
    u32 n84;
    u32 n88;
    u32 n92;
    u32 n96;
    u32 n100;
    u32 n104;
    u32 n108;
    u32 n112;
    u32 n116;
    u32 n120;
    u32 n124;
    u32 n128;
    u32 n132;
    u32 n136;
    s32 f140; };
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
void fn_801E4114(void *, T *, char *);
void fn_800F87F0(T *, void *, void *);
void fn_800F5F40(void *, void *, void *, s32);
unsigned long strlen(const char *);
extern void *lbl_8035B0B0;
extern u8 lbl_802EE0E8[];
extern u8 lbl_802E31F0[];
extern void *lbl_80359718;
}
#define ALLOC(H, dst, expr) \
    if (!H) fn_800604C4(-2, 0, 0, 0); \
    fn_800F7EC0(H); \
    dst = expr; \
    fn_800F7E98(); \
    if (!dst) fn_800604C4(-4, 0, 0, 0);
extern "C" void fn_801EB890(T *t, void *x, R *r) {
    char nb[8];
    u8 buf[8];
    C800F5578 obj;
    char *name;
    u32 n;
    u32 tok;
    u32 i;
    if (t->f140) t->clr();
    fn_800F5F40(&obj, lbl_802E31F0, lbl_80359718, 0);
    r->setup(lbl_802EE0E8, 79, &obj);
    tok = r->next();
    name = 0;
    if (tok == 57) {
        fn_800FB064(r, nb);
        if (strlen(nb)) name = nb;
        tok = r->next();
    }
    fn_800FAFA8(r);
    n = fn_800FB33C(r);
    fn_800FAF50(r);
    if (n < 1) r->err(35);
    fn_800F8E38(t, n);
    fn_801E4114(x, t, name);
    for (tok = r->next(); tok != 0; tok = r->next()) {
        switch (tok) {
        case 72:
            t->n96 = fn_800FADA8(r);
            ALLOC(lbl_8035B0B0, t->a36, new C801E6C80[t->n96])
            for (i = 0; i < t->n96; i++) {
                fn_800FB000(r, 72);
                fn_800FB064(r, buf);
                fn_800F87F0(t, buf, &t->a36[i]);
                t->a36[i].load(x, r);
            }
            fn_800FAEA0(r);
            break;
        case 111:
            t->n136 = fn_800FADA8(r);
            ALLOC(lbl_8035B0B0, t->a76, new C801F08CC[t->n136])
            for (i = 0; i < t->n136; i++) {
                fn_800FB000(r, 111);
                fn_800FB064(r, buf);
                fn_800F87F0(t, buf, &t->a76[i]);
                t->a76[i].load(x, r);
            }
            fn_800FAEA0(r);
            break;
        case 59:
            t->n80 = fn_800FADA8(r);
            ALLOC(lbl_8035B0B0, t->a20, new C801DFDC8[t->n80])
            for (i = 0; i < t->n80; i++) {
                fn_800FB000(r, 59);
                fn_800FB064(r, buf);
                fn_800F87F0(t, buf, &t->a20[i]);
                t->a20[i].load(x, r);
            }
            fn_800FAEA0(r);
            break;
        case 65:
            t->n84 = fn_800FADA8(r);
            ALLOC(lbl_8035B0B0, t->a24, new C801EA59C[t->n84])
            for (i = 0; i < t->n84; i++) {
                fn_800FB000(r, 65);
                fn_800FB064(r, buf);
                fn_800F87F0(t, buf, &t->a24[i]);
                t->a24[i].load(x, r);
            }
            fn_800FAEA0(r);
            break;
        case 67:
            t->n92 = fn_800FADA8(r);
            ALLOC(lbl_8035B0B0, t->a32, new C801E5BA4[t->n92])
            for (i = 0; i < t->n92; i++) {
                fn_800FB000(r, 67);
                fn_800FB064(r, buf);
                fn_800F87F0(t, buf, &t->a32[i]);
                t->a32[i].load(x, r);
            }
            fn_800FAEA0(r);
            break;
        case 122:
            t->n88 = fn_800FADA8(r);
            ALLOC(lbl_8035B0B0, t->a28, new C801E4C2C[t->n88])
            for (i = 0; i < t->n88; i++) {
                fn_800FB000(r, 122);
                fn_800FB064(r, buf);
                fn_800F87F0(t, buf, &t->a28[i]);
                t->a28[i].load(x, r);
            }
            fn_800FAEA0(r);
            break;
        case 91:
            t->n128 = fn_800FADA8(r);
            ALLOC(lbl_8035B0B0, t->a68, new C801EDA6C[t->n128])
            for (i = 0; i < t->n128; i++) {
                fn_800FB000(r, 91);
                fn_800FB064(r, buf);
                fn_800F87F0(t, buf, &t->a68[i]);
                t->a68[i].load(x, r);
            }
            fn_800FAEA0(r);
            break;
        case 134:
            t->n124 = fn_800FADA8(r);
            ALLOC(lbl_8035B0B0, t->a64, new C801EAE64[t->n124])
            for (i = 0; i < t->n124; i++) {
                fn_800FB000(r, 134);
                fn_800FB064(r, buf);
                fn_800F87F0(t, buf, &t->a64[i]);
                t->a64[i].load(x, r);
            }
            fn_800FAEA0(r);
            break;
        case 106:
            t->n132 = fn_800FADA8(r);
            ALLOC(lbl_8035B0B0, t->a72, new C801EDD20[t->n132])
            for (i = 0; i < t->n132; i++) {
                fn_800FB000(r, 106);
                fn_800FB064(r, buf);
                fn_800F87F0(t, buf, &t->a72[i]);
                t->a72[i].load(x, r);
            }
            fn_800FAEA0(r);
            break;
        case 89:
            t->n108 = fn_800FADA8(r);
            ALLOC(lbl_8035B0B0, t->a48, new C801E62E8[t->n108])
            for (i = 0; i < t->n108; i++) {
                fn_800FB000(r, 89);
                fn_800FB064(r, buf);
                fn_800F87F0(t, buf, &t->a48[i]);
                t->a48[i].load(x, r);
            }
            fn_800FAEA0(r);
            break;
        case 131:
            t->n112 = fn_800FADA8(r);
            ALLOC(lbl_8035B0B0, t->a52, new C801EF158[t->n112])
            for (i = 0; i < t->n112; i++) {
                fn_800FB000(r, 131);
                fn_800FB064(r, buf);
                fn_800F87F0(t, buf, &t->a52[i]);
                t->a52[i].load(x, r);
            }
            fn_800FAEA0(r);
            break;
        case 87:
            t->n116 = fn_800FADA8(r);
            ALLOC(lbl_8035B0B0, t->a56, new C801E6678[t->n116])
            for (i = 0; i < t->n116; i++) {
                fn_800FB000(r, 87);
                fn_800FB064(r, buf);
                fn_800F87F0(t, buf, &t->a56[i]);
                t->a56[i].load(x, r);
            }
            fn_800FAEA0(r);
            break;
        case 88:
            t->n120 = fn_800FADA8(r);
            ALLOC(lbl_8035B0B0, t->a60, new C801EF5D0[t->n120])
            for (i = 0; i < t->n120; i++) {
                fn_800FB000(r, 88);
                fn_800FB064(r, buf);
                fn_800F87F0(t, buf, &t->a60[i]);
                t->a60[i].load(x, r);
            }
            fn_800FAEA0(r);
            break;
        case 79:
            t->n100 = fn_800FADA8(r);
            ALLOC(lbl_8035B0B0, t->a40, new C801E5F8C[t->n100])
            for (i = 0; i < t->n100; i++) {
                fn_800FB000(r, 79);
                fn_800FB064(r, buf);
                fn_800F87F0(t, buf, &t->a40[i]);
                t->a40[i].load(x, r);
            }
            fn_800FAEA0(r);
            break;
        case 82:
            t->n104 = fn_800FADA8(r);
            ALLOC(lbl_8035B0B0, t->a44, new C801EEE6C[t->n104])
            for (i = 0; i < t->n104; i++) {
                fn_800FB000(r, 82);
                fn_800FB064(r, buf);
                fn_800F87F0(t, buf, &t->a44[i]);
                t->a44[i].load(x, r);
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
