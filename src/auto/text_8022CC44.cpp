// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

void fn_800604C4(s32, s32, s32, s32); void fn_800F7EC0(void *); void fn_800F7E98(void); extern void *lbl_8035B320;
}
struct Tr;
struct Lis { u8 pad[4]; virtual void l0(); virtual void notify(Tr *); };
struct Tr { u32 f0; f32 f4; u8 pad[4]; Lis *f12; void *anim; u8 pad2[40 - 20]; f32 f40; u8 pad3[4]; u32 f48; u8 pad4[60 - 52]; };
struct M { u8 pad[168]; void *f168; u32 f172; Tr *trs; };
struct Own { u8 pad[160]; M *m; };
struct Pl { u8 pad[8]; u32 idx; Own *own; };
struct Req { Req *next; Req *prev; void *anim; f32 a; s32 b; f32 d; s32 c; };
struct O { u8 pad[160]; M *m; u8 pad2[180 - 164]; u32 f180; Pl *pl; Req *head; Req *tail; };
extern "C" {
extern u32 lbl_80365D4C, lbl_80365D50, lbl_80365D54;
extern f32 lbl_80365D58, lbl_80365D28;
void fn_80222514(Pl *, void *, s32);
void fn_80103BB4(Tr *, void *);
void fn_8017AF08(Tr *, void *);

static inline void pushFront(O *o, Req *r) {
    if ((r->next = o->head) != 0) o->head->prev = r; else o->tail = r;
    o->head = r;
    r->prev = 0;
}
static inline void pushBack(O *o, Req *r) {
    if ((r->prev = o->tail) != 0) o->tail->next = r; else o->head = r;
    o->tail = r;
    r->next = 0;
}
static inline Tr *plTr(Pl *p) {
    if (p->own && p->own->m) return &p->own->m->trs[p->idx];
    return 0;
}

void fn_8022CC44(O *o, void *anim, f32 a, s32 unused, s32 b, s32 c, s32 q, f32 d) {
    if (!o->m) return;
    if (q) {
        Req *r;
        if (!lbl_8035B320) fn_800604C4(-2, 0, 0, 0);
        fn_800F7EC0(lbl_8035B320);
        r = new Req;
        fn_800F7E98();
        if (!r) fn_800604C4(-4, 0, 0, 0);
        r->anim = anim;
        r->b = b;
        r->a = a;
        r->d = d;
        r->c = c;
        if (!o->head) pushFront(o, r);
        else pushBack(o, r);
        return;
    }
    o->f180 &= ~1;
    if (anim) {
        if (o->pl) {
            fn_80222514(o->pl, anim, b);
        } else {
            Tr *t;
            if (!o->m->f172) return;
            t = o->m->trs;
            if (t->anim == anim && !(t->f0 & 0x10)) return;
            fn_80103BB4(t, anim);
            t->f0 |= lbl_80365D4C;
            if (t->f12) t->f12->notify(t);
            t->f48 |= lbl_80365D50;
            {
                Tr *u = o->m->trs;
                if (b) u->f0 |= lbl_80365D54;
                else u->f0 &= ~4;
            }
            o->m->trs->f40 = lbl_80365D58;
        }
    }
    if (c) {
        if (o->pl) {
            plTr(o->pl)->f4 = lbl_80365D28;
            { void *k = o->m->f168; fn_8017AF08(plTr(o->pl), k); }
        } else {
            o->m->trs->f4 = lbl_80365D28;
            { void *k = *(void *volatile *)&o->m->f168; fn_8017AF08(o->m->trs, k); }
        }
    }
}

} /* extern "C" */
