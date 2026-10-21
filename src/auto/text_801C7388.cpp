// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct Handler {
    virtual s32 isA(s32 kind);
    virtual void vf1();
    virtual void vf2();
    virtual void vf3();
    virtual void vf4();
    virtual void vf5();
    virtual void vf6();
    virtual void vf7();
    virtual void vf8();
    virtual void vf9();
    virtual void vf10();
    virtual void vf11();
    virtual void vf12();
    virtual void vf13();
    virtual void vf14();
    virtual void vf15();
    virtual void vf16();
    virtual void vf17();
    virtual void vf18();
    virtual void vf19();
    virtual void vf20();
    virtual void vf21();
    virtual void vf22();
    virtual void vf23();
    virtual void vf24();
    virtual void vf25();
    virtual void vf26();
    virtual void vf27();
    virtual void vf28();
    virtual void vf29();
    virtual void vf30();
    virtual void vf31();
    virtual void vf32();
    virtual void vf33();
    virtual void vf34();
    virtual void vf35();
    virtual void vf36();
    virtual void vf37();
    virtual void vf38();
    virtual void vf39();
    virtual void vf40();
    virtual void vf41();
    virtual void vf42();
    virtual void vf43();
    virtual s32 handle(struct Self *p, void *arg);
    virtual void vf45();
    virtual void vf46();
    virtual void vf47();
    virtual void vf48();
    virtual void vf49();
    virtual void vf50();
    virtual void vf51();
    virtual void attach(struct Self *p, struct Other *o);
};
struct Other {
    u8 pad_vt[128];
    virtual void vf0();
    virtual void vf1();
    virtual void vf2();
    virtual void vf3();
    virtual void vf4();
    virtual void vf5();
    virtual void vf6();
    virtual void vf7();
    virtual void vf8();
    virtual void vf9();
    virtual void vf10();
    virtual void vf11();
    virtual void vf12();
    virtual void vf13();
    virtual void vf14();
    virtual void vf15();
    virtual void vf16();
    virtual void vf17();
    virtual void vf18();
    virtual void vf19();
    virtual void setX(s32 v);
};
struct Self;
struct HNode { Handler *h; s32 active; HNode *next; };

s32 fn_801C7388(Self *p, Other *arg) {
    HNode *n;
    s32 blocked = 0;
    HNode *m;
    Other *o;
    for (n = *(HNode **)((u8 *)p + 136); n != 0; n = n->next) {
        if (n->active != 0 && n->h->handle(p, arg) == 0) {
            blocked = 1;
        }
    }
    if (blocked) return 0;
    o = *(Other **)((u8 *)p + 364);
    if (arg == o) {
        o->setX(0);
        *(u32 *)((u8 *)*(Other **)((u8 *)p + 364) + 108) &= ~2;
        for (m = *(HNode **)((u8 *)p + 136); m != 0; m = m->next) {
            if (m->h->isA(16) != 0 && m->active != 0) {
                m->h->attach(p, *(Other **)((u8 *)p + 364));
            }
        }
    }
    return 0;
}

} /* extern "C" */
