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
struct C { u32 f0, f4, f8; u8 pad[40];
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5();
    virtual void Parse(void *, void *, char *, S *);
    virtual void v7(); virtual void v8();
    virtual void Finish(void *);
};
struct P { u32 f0, f4, f8, f12;
    virtual void v0(); virtual void Reset(); virtual void Begin(void *); virtual void Alloc();
    virtual void v4(); virtual void v5(); virtual C *Get(u32);
    u8 f20[8]; u32 f28;
};
extern u8 lbl_802E4610[];
extern char lbl_8029E30C[];
extern u32 lbl_8035ABD4;
void fn_800FB064(S *, char *);
void fn_800FB000(S *, int);
void fn_800FAFA8(S *);
u32 fn_800FB33C(S *);
void fn_800FAF50(S *);
void fn_800FAEF8(S *);
void fn_800FAEA0(S *);
void fn_800F8E38(P *, u32);
void fn_80135DD4(void *, P *, char *);
void fn_8013E904(u8 *, void *, S *, char *);
void fn_800F87F0(P *, char *, C *);
void fn_80060568(char *, int, int, int);
void fn_8012D8B8(P *p, void *a, S *s) {
    u32 t;
    u32 i;
    u32 n;
    C *c;
    char *name;
    char buf[8];
    char nm[16];
    if (p->f28) p->Reset();
    s->Expect(lbl_802E4610, 20, 0);
    t = s->Next();
    name = 0;
    if (t == 58) {
        fn_800FB064(s, buf);
        fn_800FB000(s, 57);
        name = buf;
    } else if (t != 57) {
        s->Error(30);
    }
    fn_800FAFA8(s);
    n = fn_800FB33C(s);
    fn_800FAF50(s);
    fn_800F8E38(p, n);
    fn_80135DD4(a, p, name);
    p->Begin(a);
    lbl_8035ABD4 = 0;
    while ((t = s->Next()) != 0) {
        switch ((int)t) {
        case 59:
            fn_8013E904(p->f20, a, s, name);
            break;
        case 60:
            if (p->f28) s->Error(39);
            fn_800FAFA8(s);
            p->f28 = fn_800FB33C(s);
            if (p->f28 == 0 || p->f28 > n) s->Error(35);
            fn_800FAF50(s);
            fn_800FAEF8(s);
            p->Alloc();
            for (i = 0; i < p->f28; i++) {
                fn_800FB000(s, 60);
                fn_800FB064(s, nm);
                c = p->Get(i);
                fn_800F87F0(p, nm, c);
                c->Parse(a, p, nm, s);
            }
            fn_800FAEA0(s);
            break;
        case 61:
            fn_80060568(lbl_8029E30C, 0, 0, 0);
            break;
        default:
            s->Error(30);
            break;
        }
    }
    for (i = 0; i < p->f28; i++) {
        c = p->Get(i);
        if (!(c->f8 & 8)) c->Finish(a);
        else lbl_8035ABD4++;
    }
}

} /* extern "C" */
