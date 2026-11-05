// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct B { u32 a, b; };
struct L0 { u8 pad[16]; u32 n; };
struct L { L0 *f0; u8 pad4[8]; u8 *f12; };
struct V9C { u8 pad[0x38]; void *f38; };
struct VE {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18();
    virtual void on(); virtual void off();
    u8 pad4[0x9c - 4];
    V9C *f9c;
    u8 padA0[0x114 - 0xa0];
    s32 f114;
};
struct G { u8 pad[0xc]; u32 fc; };
struct T {
    u8 pad[0xe0];
    VE *fe0;
    u8 pade4[0x118 - 0xe4];
    s32 *f118;
    u8 pad11c[0x128 - 0x11c];
    char *f128;
    u8 pad12c[0x140 - 0x12c];
    L *f140;
    L *f144;
    void *f148;
    void *f14c;
    void *f150;
    u8 pad154[0x168 - 0x154];
    u32 f168;
    u8 pad16c[4];
    u32 f170;
    u8 pad174[0x184 - 0x174];
    u32 f184;
    u32 f188;
    u8 pad18c[4];
    u32 *f190;
    u32 f194;
};
extern void *lbl_8035A0A4;
extern void *lbl_8035B530;
extern char lbl_8035F940[4];
extern char lbl_80298768[];
void *fn_8023F4A0(T *, char *, char *, char *, int);
G *fn_80240004(T *, int);
int fn_8024548C(void *, int, int, int, B *, int, int);
void fn_800F6E88(B *, const void *);
int fn_800F6CD0(B *, const void *);
void fn_8022AE50(VE *);
void fn_8022A7A8(VE *);
void fn_8022BBF4(VE *);
void fn_8022B618(VE *);
s32 fn_8003C778(void *, VE *, u32 **);
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
void fn_8003CA10(void *, int);
void fn_8003CAD8(void *, int);
void fn_802494A4(T *, int);

static inline int chk(T *t, L *l, int idx) {
    B n;
    B tt;
    u32 i, o;
    if (!fn_8024548C(fn_80240004(t, 0), idx, -1, 1, &n, 0, 0)) fn_800F6E88(&n, t->f128);
    i = 0;
    o = i;
    for (; i < l->f0->n; o += 8, i++) {
        fn_800F6E88(&tt, l->f12 + o);
        if (fn_800F6CD0(&n, &tt)) return 1;
    }
    return 0;
}

#pragma opt_propagation off
void fn_8007E104(T *t) {
    char *s = lbl_80298768;
    s32 ok;
    u32 i;
    int all;
    VE *e;

    t->f140 = (L *)fn_8023F4A0(t, lbl_8035F940, lbl_8035F940, s + 0x64, 1);
    t->f144 = (L *)fn_8023F4A0(t, lbl_8035F940, lbl_8035F940, s + 0x7c, 1);
    t->f148 = fn_8023F4A0(t, lbl_8035F940, lbl_8035F940, s + 0x90, 1);
    t->f14c = fn_8023F4A0(t, lbl_8035F940, lbl_8035F940, s + 0xa4, 1);
    t->f150 = fn_8023F4A0(t, lbl_8035F940, lbl_8035F940, s + 0xc0, 1);
    if (*t->f118) {
        t->fe0->on();
        fn_8022AE50(t->fe0);
        e = t->fe0;
        if (e->f9c && e->f9c->f38) fn_8022BBF4(e);
        t->f170 = 1;
    } else {
        t->fe0->off();
        fn_8022A7A8(t->fe0);
        e = t->fe0;
        if (e->f9c && e->f9c->f38) fn_8022B618(e);
        t->f170 = 0;
    }
    t->f188 = fn_80240004(t, 0)->fc;
    ok = 0;
    if (t->f188 && t->fe0->f114 == 0) {
        t->f168 = 1;
        ok = fn_8003C778(lbl_8035A0A4, t->fe0, &t->f190);
    } else if (t->f190 == 0) {
        if (lbl_8035B530 == 0) fn_800604C4(-2, 0, 0, 0);
        fn_800F7EC0(lbl_8035B530);
        t->f190 = new u32;
        fn_800F7E98();
        if (t->f190 == 0) fn_800604C4(-4, 0, 0, 0);
    }
    if (ok == 0) {
        if (t->f188 > t->f184) t->f188 = t->f184;
        *t->f190 = *t->f190 & ~t->f194;
    }
    for (i = 0; i < t->f188; i++) {
        if (chk(t, t->f140, i)) {
            fn_8003CA10(lbl_8035A0A4, 1);
            if (*t->f190 & (t->f194 & (1 << i))) fn_8003CAD8(lbl_8035A0A4, 1);
        }
    }
    all = 1;
    for (i = 0; i < t->f188; i++) {
        if (chk(t, t->f140, i)) all = (u8)(all && (*t->f190 & (t->f194 & (1 << i))));
    }
    if (all) {
        all = 1;
        for (i = 0; i < t->f188; i++) {
            if (chk(t, t->f144, i)) all = (u8)(all && (*t->f190 & (t->f194 & (1 << i))));
        }
        if (all) {
            fn_802494A4(t, 3);
            return;
        }
    }
    fn_802494A4(t, 1);
}
#pragma opt_propagation reset

} /* extern "C" */
