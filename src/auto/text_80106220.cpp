// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct Lex80106220 {
    u8 pad[292];
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    virtual void Error(s32);
    virtual u32 Next();
};
struct Tgt80106220 { u8 pad[16]; void *link; };
struct Obj80106220 {
    void *ctx;
    s32 f4;
    Tgt80106220 *tgt;
    void *next;
    u8 pad10[8];
    u8 f18[8];
};

void fn_800FAEF8(Lex80106220 *);
void fn_800FB064(Lex80106220 *, void *);
Tgt80106220 *fn_800F8274(void *, void *);

void fn_80106220(Obj80106220 *o, void *ctx, Lex80106220 *lx, s32 a4) {
    u8 buf[8];
    Tgt80106220 *t;
    u32 tok;
    fn_800FAEF8(lx);
    o->ctx = ctx;
    o->f4 = a4;
    while ((tok = lx->Next()) != 6) {
        switch (tok) {
        case 60:
            fn_800FB064(lx, o->f18);
            break;
        case 61:
            fn_800FB064(lx, buf);
            t = fn_800F8274(ctx, buf);
            if (t == 0) {
                lx->Error(37);
            }
            if (o->tgt != t) {
                o->tgt = t;
                o->next = t->link;
                t->link = o;
            }
            break;
        default:
            lx->Error(30);
            break;
        }
    }
}

} /* extern "C" */
