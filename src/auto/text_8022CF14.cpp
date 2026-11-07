#include "common.h"

extern "C" {
}
struct Tr { u32 f0; f32 f4; u8 pad[4]; void *f12; void *anim; u8 pad2[40 - 20]; f32 f40; u8 pad3[4]; u32 f48; u8 pad4[60 - 52]; };
struct Ob { u8 pad0[4]; u16 type; u8 pad6[108 - 6]; s32 val; u8 pad70[152 - 112]; u32 count; Ob **children; s32 index; u8 padA4[176 - 164]; Tr *trs; };
struct Own { u8 pad[160]; Ob *m; };
struct Pl { u8 pad[8]; u32 idx; Own *own; };
struct Req { Req *next; Req *prev; void *anim; f32 a; s32 b; f32 d; s32 c; };
struct O {
    u8 pad[156];
    Ob *f9C;
    Ob *m;
    u8 padA4[176 - 164];
    u32 idx;
    u32 fB4;
    Pl *pl;
    Req *head;
    Req *tail;
    f32 timer;
    s32 fC8;
    s32 active;
    s32 fD0;
    s32 fD4;
    s32 fD8;
    u8 padDC[4];
    f32 cx, cy, cz, cw;
    f32 tx, ty, tz, tw;
    f32 rx, ry, rz, rw;
};
extern "C" {
extern f32 lbl_80365D28;
void fn_80222420(Pl *, f32);
void fn_8022CC44(O *o, void *anim, f32 a, s32 unused, s32 b, s32 c, s32 q, f32 d);
void fn_8022BF30(O *, s32, s32, f32);
void fn_8022C128(O *, s32, s32, s32, s32, f32);
Ob *fn_801954E8(Ob *o);
Ob *fn_801955D8(Ob *o);

static inline Tr *plTr(Pl *p) {
    if (p->own && p->own->m) return &p->own->m->trs[p->idx];
    return 0;
}
static inline Tr *curTr(O *o) {
    if (o->pl) return plTr(o->pl);
    if (o->m) return &o->m->trs[o->idx];
    return 0;
}
static inline void popFront(O *o) {
    if (o->head) {
        if ((o->head = o->head->next) != 0) o->head->prev = 0;
        else o->tail = 0;
    }
}
static inline s32 getIndex(Ob *o) {
    u16 t = o->type;
    s32 i = 0;
    if (t == 13) {
        i = 0;
    } else if (t == 12) {
        i = o->index;
    }
    return i;
}
static inline Ob *resolve(O *p, Ob *o) {
    if (o == 0) return 0;
    if (o->type >= 11 && o->type <= 13) {
        Ob *g = fn_801954E8(o);
        return fn_801955D8(g->children[getIndex(p->f9C)]);
    }
    if (o->type >= 2 && o->type <= 3) return fn_801955D8(o);
    return 0;
}
static inline void setVal(O *p, s32 v) {
    Ob *o = p->f9C;
    Ob *r;
    u32 i;
    if (o != 0) {
        if (o->type >= 11 && o->type <= 13) {
            for (i = 0; i < o->count; i++) o->children[i]->val = v;
        } else {
            r = resolve(p, o);
            if (r != 0) r->val = v;
        }
    }
}

void fn_8022CF14(O *o, f32 dt) {
    if (!o->f9C) return;
    if (o->f9C->type == 12) {
        Ob *c = o->f9C->children[o->f9C->index];
        if (c->type == 3) o->m = c;
    }
    if (o->pl) fn_80222420(o->pl, dt);
    if (o->active) {
        Tr *t = curTr(o);
        if (t) {
            if (o->fC8) {
                o->timer -= dt;
                if (o->timer <= lbl_80365D28) {
                    o->timer = *(f32 *)&lbl_80365D28;
                    o->fC8 = 0;
                    o->active = 0;
                    if (t->f48 & 1) t->f0 &= ~2;
                }
            }
            if ((t->f0 & 8) || (t->f0 & 4)) {
                if (lbl_80365D28 == o->timer) o->active = 0;
            }
        }
    }
    {
        void *h = o->head;
        if (h) {
            Tr *t = curTr(o);
            int go = 0;
            if (t) {
                if (o->active) {
                    u32 fl = t->f0;
                    if ((fl & 8) || (fl & 4)) {
                        if (lbl_80365D28 == o->timer) go = 1;
                    }
                    if (fl & 4) go = 1;
                } else {
                    go = 1;
                }
                if (go) {
                    Req *r = (Req *)h;
                    o->active = 1;
                    o->timer = r->d;
                    if (o->timer > lbl_80365D28) o->fC8 = 1;
                    fn_8022CC44(o, r->anim, r->a, 1, r->b, r->c, 0, lbl_80365D28);
                    popFront(o);
                    delete r;
                }
            } else {
                o->timer = lbl_80365D28;
                o->fC8 = 0;
                o->active = 0;
                while (o->head) {
                    Req *r = o->head;
                    popFront(o);
                    delete r;
                }
            }
        }
    }
    if (o->fD4) {
        o->cw += o->rw * dt;
        if (o->rw > lbl_80365D28) {
            if (o->cw >= o->tw) {
                o->cw = o->tw;
                o->fD4 = 0;
                o->rw = lbl_80365D28;
            }
        } else {
            if (o->cw <= o->tw) {
                o->cw = o->tw;
                o->fD4 = 0;
                o->rw = lbl_80365D28;
            }
        }
        if (!o->fD4 && o->fD8 == 1) setVal(o, 0);
        else fn_8022BF30(o, (s32)o->cw, 1, lbl_80365D28);
    }
    if (o->fD0) {
        o->cx += o->rx * dt;
        o->cy += o->ry * dt;
        o->cz += o->rz * dt;
        if (lbl_80365D28 != o->rx) {
            if (o->rx > lbl_80365D28) {
                if (o->cx >= o->tx) { o->cx = o->tx; o->fD0 = 0; o->rx = lbl_80365D28; }
            } else {
                if (o->cx <= o->tx) { o->cx = o->tx; o->fD0 = 0; o->rx = lbl_80365D28; }
            }
        }
        if (lbl_80365D28 != o->ry) {
            if (o->ry > lbl_80365D28) {
                if (o->cy >= o->ty) { o->cy = o->ty; o->fD0 = 0; o->ry = lbl_80365D28; }
            } else {
                if (o->cy <= o->ty) { o->cy = o->ty; o->fD0 = 0; o->ry = lbl_80365D28; }
            }
        }
        if (lbl_80365D28 != o->rz) {
            if (o->rz > lbl_80365D28) {
                if (o->cz >= o->tz) { o->cz = o->tz; o->fD0 = 0; o->rz = lbl_80365D28; }
            } else {
                if (o->cz <= o->tz) { o->cz = o->tz; o->fD0 = 0; o->rz = lbl_80365D28; }
            }
        }
        if (!o->fD0 && o->fD8 == 1) setVal(o, 0);
        else fn_8022C128(o, (s32)o->cx, (s32)o->cy, (s32)o->cz, 1, lbl_80365D28);
    }
}

}
