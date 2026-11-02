// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct S {
    u8 pad[292];
    virtual void v0();
    virtual void v1();
    virtual void Expect(void *, int, int);
    virtual void v3();
    virtual void Error(int);
    virtual u32 Next();
};
struct C { u8 pad[88];
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5();
    virtual void Parse(void *, S *);
};
struct P { u32 f0, f4, f8, f12;
    virtual void v0(); virtual void Reset(); virtual void AllocA(); virtual void AllocB();
    virtual C *GetA(u32); virtual C *GetB(u32);
    u32 f20; u32 f24;
};
extern u8 lbl_802EF288[];
void fn_800FB064(S *, char *);
void fn_800FB000(S *, int);
void fn_800FAFA8(S *);
u32 fn_800FB33C(S *);
void fn_800FAF50(S *);
u32 fn_800FADA8(S *);
void fn_800FAEA0(S *);
void fn_800F8E38(P *, u32);
void fn_801FA734(void *, P *, char *);
void fn_800F87F0(P *, char *, C *);
void fn_801FC3F8(P *p, void *a, S *s) {
    u32 t;
    u32 n;
    u32 i;
    char *name;
    char nm[8];
    char buf[8];
    if (p->f20 + p->f24) p->Reset();
    s->Expect(lbl_802EF288, 19, 0);
    t = s->Next();
    name = 0;
    if (t == 57) {
        fn_800FB064(s, buf);
        fn_800FB000(s, 58);
        name = buf;
    } else if (t != 58) {
        s->Error(30);
    }
    fn_800FAFA8(s);
    n = fn_800FB33C(s);
    fn_800FAF50(s);
    fn_800F8E38(p, n);
    fn_801FA734(a, p, name);
    while ((t = s->Next()) != 0) {
        switch ((int)t) {
        case 59: {
            C *e;
            if (p->f20) s->Error(39);
            p->f20 = fn_800FADA8(s);
            if (p->f20 == 0) s->Error(35);
            p->AllocA();
            for (i = 0; i < p->f20; i++) {
                fn_800FB000(s, 59);
                fn_800FB064(s, nm);
                e = p->GetA(i);
                fn_800F87F0(p, nm, e);
                e->Parse(a, s);
            }
            fn_800FAEA0(s);
            break;
        }
        case 60: {
            if (p->f24) s->Error(39);
            p->f24 = fn_800FADA8(s);
            if (p->f24 == 0) s->Error(35);
            p->AllocB();
            C *d;
            for (i = 0; i < p->f24; i++) {
                fn_800FB000(s, 60);
                fn_800FB064(s, nm);
                d = p->GetB(i);
                fn_800F87F0(p, nm, d);
                d->Parse(a, s);
            }
            fn_800FAEA0(s);
            break;
        }
        default:
            s->Error(30);
            break;
        }
    }
}

} /* extern "C" */
