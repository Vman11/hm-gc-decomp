#include "common.h"
class C800F6BDC {
public:
    u8 pad[292];
    virtual ~C800F6BDC();
    virtual void v1();
    virtual void open(void *, u32, C800F6BDC *);
    virtual void v3();
    virtual void err(s32);
    virtual u32 next();
    u8 pad2[1692 - 296];
    C800F6BDC();
};
struct Ent { u32 a; u32 b; char name[8]; };
struct Key { u8 d[8]; };
struct SV { u8 pad[16]; virtual void v0(); virtual void clear(); };
struct S : SV { s32 f20; u32 f24; Ent *ents; };
extern "C" {
extern void *lbl_8035A9F4;
extern void *lbl_8035B610;
extern u8 lbl_802E31F0[];
extern u8 lbl_802F2320[];
extern u32 lbl_80359718;
extern u32 lbl_80359BA8;
void fn_800604C4(s32, s32, s32, s32);
void fn_800F7EC0(void *);
void fn_800F7E98(void);
void fn_800FAFA8(C800F6BDC *);
u32 fn_800FB33C(C800F6BDC *);
void fn_800FAF50(C800F6BDC *);
void fn_800F8E38(S *, u32);
void fn_800FAEF8(C800F6BDC *);
void fn_800FB064(C800F6BDC *, void *);
void fn_800F6E88(char *, void *);
void fn_800FAEA0(C800F6BDC *);

s32 fn_80252614(S *s, void *a, u32 b, C800F6BDC *r) {
//P{
    C800F6BDC *r1;
    C800F6BDC *r2;
    s32 n;
//P}
    if (lbl_8035A9F4 == 0) fn_800604C4(-2, 0, 0, 0);
    fn_800F7EC0(lbl_8035A9F4);
    r1 = new C800F6BDC;
    fn_800F7E98();
    if (r1 == 0) fn_800604C4(-4, 0, 0, 0);
    if (lbl_8035A9F4 == 0) fn_800604C4(-2, 0, 0, 0);
    fn_800F7EC0(lbl_8035A9F4);
    r2 = new C800F6BDC;
    fn_800F7E98();
    if (r2 == 0) fn_800604C4(-4, 0, 0, 0);
    r1->open(lbl_802E31F0, lbl_80359718, 0);
    r2->open(lbl_802F2320, lbl_80359BA8, r1);
    r->open(a, b, r2);
    delete r2;
    delete r1;
    if (r->next() != 57) r->err(30);
    fn_800FAFA8(r);
    n = fn_800FB33C(r);
    fn_800FAF50(r);
    if (s->f20) s->clear();
    s->f20 = 1;
    s->f24 = n;
    fn_800F8E38(s, s->f24);
    if (lbl_8035B610 == 0) fn_800604C4(-2, 0, 0, 0);
    fn_800F7EC0(lbl_8035B610);
    s->ents = new Ent[s->f24];
    fn_800F7E98();
    if (s->ents == 0) fn_800604C4(-4, 0, 0, 0);
    fn_800FAEF8(r);
    {
        s32 i;
        for (i = 0; i < n; i++) {
            Key key;
            fn_800FAEF8(r);
            if (r->next() != 58) r->err(30);
            s->ents[i].a = r->next();
            if (r->next() != 59) r->err(30);
            s->ents[i].b = r->next();
            if (r->next() != 60) r->err(30);
            fn_800FB064(r, &key);
            fn_800F6E88(s->ents[i].name, &key);
            fn_800FAEA0(r);
        }
    }
    fn_800FAEA0(r);
    return 0;
}
}
