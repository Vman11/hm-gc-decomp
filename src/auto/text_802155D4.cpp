// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

#include "common.h"

extern "C" {

struct R215 { u8 pad[0x114]; u32 f114; s32 f118; u8 pad11c[0x124 - 0x11c]; virtual void p0(); virtual void p1(); virtual void setup(void *, s32, s32); virtual void p3(); virtual void err(s32); virtual u32 next(); };
struct Key215 { u8 d[8]; };
class C800FBA24 { public: u8 d[0x14]; C800FBA24(); };
class C800FB754 { public: u8 d[0x14]; C800FB754(); };
struct P215 { u8 pad[0x10]; virtual void p0(); virtual void clr(); void *f14; void *f18; s32 f1c; s32 f20; u32 f24; u32 f28; u32 f2c; u32 f30; };
void fn_800FB064(R215 *, void *);
void fn_800FAFA8(R215 *);
void fn_800FAF50(R215 *);
u32 fn_800FB33C(R215 *);
char *fn_800FB284(R215 *);
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
void fn_800F8E38(P215 *, u32);
void fn_800F87F0(P215 *, void *, void *);
void fn_80060568(char *, s32, s32, s32);
void fn_800FB9D4(C800FBA24 *, char *, u32);
void fn_800FB700(C800FB754 *, u16 *, u32);
void fn_80215F98(void *, P215 *, char *);
char *strncpy(char *, const char *, u32);
extern void *lbl_8035B200;
extern char lbl_802EFFD0[];
extern char lbl_802A7530[];

void fn_802155D4(P215 *p, void *ctx, R215 *r) {
    Key215 key;
    char buf[8];
    u32 len;
    u32 chars;
    u32 i;
    u32 k;
    u32 n;
    u32 i2;
    u32 j2;
    u16 c;
    char *name;
    n = 0;
    chars = 0;

    if (p->f20 != 0) p->clr();
    r->f118 = 1;
    r->setup(lbl_802EFFD0, 5, 0);
    k = r->next();
    name = 0;
    if (k == 0x3d) {
        fn_800FB064(r, buf);
        name = buf;
        k = r->next();
    }
    while (k != 5) {
        switch (k) {
        case 0x39:
        case 0x3b:
            if (n == 0) {
                fn_800FAFA8(r);
                n = fn_800FB33C(r);
                fn_800FAF50(r);
            }
            break;
        case 0x3a:
            fn_800FAFA8(r);
            chars = fn_800FB33C(r);
            fn_800FAF50(r);
            p->f1c = 1;
            break;
        case 0x3c:
            fn_800FAFA8(r);
            chars = fn_800FB33C(r);
            fn_800FAF50(r);
            p->f1c = 0;
            break;
        }
        k = r->next();
    }
    if (n && !chars) fn_80060568(lbl_802A7530, 0, 0, 0);
    if (p->f1c) {
        fn_800F8E38(p, n);
        p->f24 = chars;
        p->f2c = n;
        if (!lbl_8035B200) fn_800604C4(-2, 0, 0, 0);
        fn_800F7EC0(lbl_8035B200);
        p->f14 = new char[p->f24];
        fn_800F7E98();
        if (!p->f14) fn_800604C4(-4, 0, 0, 0);
        if (!lbl_8035B200) fn_800604C4(-2, 0, 0, 0);
        fn_800F7EC0(lbl_8035B200);
        p->f18 = new C800FBA24[n];
        fn_800F7E98();
        if (!p->f18) fn_800604C4(-4, 0, 0, 0);
        p->f1c = 1;
        p->f20 = 1;
        for (i = 0; i < n; i++) {
            fn_800FB064(r, &key);
            char *s = fn_800FB284(r);
            len = r->f114;
            strncpy((char *)p->f14 + p->f28, s, len);
            fn_800FB9D4(&((C800FBA24 *)p->f18)[p->f30], (char *)p->f14 + p->f28, len + 1);
            fn_800F87F0(p, &key, &((C800FBA24 *)p->f18)[p->f30]);
            p->f28 += len;
            p->f28++;
            p->f30++;
        }
    } else {
        fn_800F8E38(p, n);
        p->f24 = chars;
        p->f2c = n;
        if (!lbl_8035B200) fn_800604C4(-2, 0, 0, 0);
        fn_800F7EC0(lbl_8035B200);
        p->f14 = new u16[p->f24];
        fn_800F7E98();
        if (!p->f14) fn_800604C4(-4, 0, 0, 0);
        if (!lbl_8035B200) fn_800604C4(-2, 0, 0, 0);
        fn_800F7EC0(lbl_8035B200);
        p->f18 = new C800FB754[n];
        fn_800F7E98();
        if (!p->f18) fn_800604C4(-4, 0, 0, 0);
        p->f1c = 0;
        p->f20 = 1;
        for (i2 = 0; i2 < n; i2++) {
            fn_800FB064(r, &key);
            j2 = 0;
            while ((c = fn_800FB33C(r)) != 0) {
                ((u16 *)p->f14)[p->f28] = c;
                j2++;
                p->f28++;
            }
            fn_800FB700(&((C800FB754 *)p->f18)[p->f30], &((u16 *)p->f14)[p->f28 - j2], j2 + 1);
            fn_800F87F0(p, &key, &((C800FB754 *)p->f18)[p->f30]);
            p->f28++;
            p->f30++;
        }
    }
    fn_80215F98(ctx, p, name);
    r->f118 = 0;
}

}

} /* extern "C" */
