// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct R { u8 pad[0x124]; virtual void p0(); virtual void p1(); virtual void setup(void *, s32, s32); virtual void p3(); virtual void err(s32); virtual u32 next(); };
struct Nm { u8 d[8]; };
struct P;
struct El { u8 pad[8]; u32 flags; u8 padC[0x2C]; virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void load(void *, P *, Nm *, R *); virtual void p8(); virtual void p9(); virtual void finish(void *); };
struct P { u8 pad[0x10]; virtual void p0(); virtual void clr(); virtual void begin(); virtual void init(void *); virtual El *get(u32); u8 sub[8]; u32 n; };
extern "C" { u32 fn_800FB33C(R *); void fn_800FB064(R *, void *); void fn_800FB000(R *, s32); void fn_800FAEF8(R *); void fn_800FAEA0(R *); void fn_800FAFA8(R *); void fn_800FAF50(R *); void fn_800F8E38(P *, u32); void fn_80135D90(void *, P *, void *); void fn_800F87F0(P *, void *, void *); void fn_8013E904(void *, void *, R *, void *); extern u8 lbl_802E4758[]; extern s32 lbl_8035ABE8; }

extern "C" void fn_8012F120(P *p, void *x, R *r) {
    Nm key;
    Nm nm;
    u32 i;
    El *e;
    u32 k;
    Nm *name;
    if (p->n != 0) {
        p->clr();
    }
    r->setup(lbl_802E4758, 18, 0);
    k = r->next();
    name = 0;
    if (k == 58) {
        fn_800FB064(r, &nm);
        name = &nm;
        k = r->next();
    }
    lbl_8035ABE8 = 0;
    do {
        switch ((s32)k) {
        case 59:
            fn_8013E904(p->sub, x, r, name);
            break;
        case 57:
            if (p->n != 0) {
                r->err(39);
            }
            fn_800FAFA8(r);
            p->n = fn_800FB33C(r);
            if (p->n == 0) {
                r->err(35);
            }
            fn_800FAF50(r);
            fn_800F8E38(p, p->n);
            fn_80135D90(x, p, name);
            p->init(x);
            fn_800FAEF8(r);
            p->begin();
            for (i = 0; i < p->n; i++) {
                fn_800FB000(r, 57);
                fn_800FB064(r, &key);
                e = p->get(i);
                fn_800F87F0(p, &key, e);
                e->load(x, p, &key, r);
            }
            fn_800FAEA0(r);
            break;
        default:
            r->err(30);
            break;
        }
    } while ((k = r->next()) != 0);
    for (i = 0; i < p->n; i++) {
        e = p->get(i);
        if (!(e->flags & 8)) {
            e->finish(x);
        } else {
            lbl_8035ABE8++;
        }
    }
}

} /* extern "C" */
