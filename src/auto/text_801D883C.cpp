// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct Handler {
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
    virtual void vf20();
    virtual void vf21();
    virtual void vf22();
    virtual s32 handle(struct Self *p, void *arg);
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
    virtual void vf44();
    virtual void vf45();
    virtual void vf46();
    virtual void notify(void *arg);
};
struct Self;
struct HNode { Handler *h; s32 active; HNode *next; };

s32 fn_801D883C(Self *p, void *arg) {
    HNode *n;
    s32 blocked = 0;
    HNode *m;
    s32 flag;
    Other *o;
    for (n = *(HNode **)((u8 *)p + 136); n != 0; n = n->next) {
        if (n->active != 0 && n->h->handle(p, arg) == 0) {
            blocked = 1;
        }
    }
    if (blocked) return 0;
    o = *(Other **)((u8 *)p + 284);
    if (o != 0) o->notify(arg);
    flag = 0;
    for (m = *(HNode **)((u8 *)p + 136); m != 0; m = m->next) {
        if (m->active == 0 && m->h->handle(p, arg) == 0) {
            flag = 1;
        }
    }
    return flag ? 0 : 0;
}

} /* extern "C" */
