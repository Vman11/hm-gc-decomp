// Code of main that had no source file yet: decomp.wtf gave it this one.
#include "common.h"
extern "C" {
struct Part { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void Stop(); };
struct Node { virtual ~Node(); virtual void a(); virtual void b(); virtual void Release(); };
struct Res { u8 pad[16]; virtual ~Res(); virtual void Release(); };
struct Mgr;
struct Item { u32 flags; u8 pad[148]; volatile u32 f98; };
struct Ent { u32 a; s32 b; char name[12]; };
struct Bank { u8 pad[160]; void *p; };
struct Dsp { u32 *flags; s32 n; f32 t; };
struct Obj {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void Reset();
    u8 pad4[120];
    s32 f7c;    /* 124 */
    s32 nNodes; /* 128 */
    s32 f84;    /* 132 */
    s32 f88;    /* 136 */
    s32 f8c;    /* 140 */
    s32 f90;    /* 144 */
    s32 nEnt;   /* 148 */
    u32 f98;    /* 152 */
    s32 f9c;    /* 156 */
    s32 fa0;    /* 160 */
    s32 fa4;    /* 164 */
    s32 fa8;    /* 168 */
    f32 fac;    /* 172 */
    f32 fb0;    /* 176 */
    f32 fb4;    /* 180 */
    s32 fb8;    /* 184 */
    s32 fbc;    /* 188 */
    Part **nodes; /* 192 */
    u8 pad196[12];
    u8 *fd0;    /* 208 */
    u8 *fd4;    /* 212 */
    s32 cur;    /* 216 */
    s32 fdc;    /* 220 */
    Bank *bank; /* 224 */
    u8 pad228[16];
    s32 ff4;    /* 244 */
    Res *r1;    /* 248 */
    s32 ffc;    /* 252 */
    Res *r2;    /* 256 */
    s32 f104;   /* 260 */
    Node *n1;   /* 264 */
    Ent *ents;  /* 268 */
    Item **items; /* 272 */
    Dsp *dsp;   /* 276 */
};
void *fn_8023BC90(const char *);
void fn_8023B7A0(void *, Part *);
void *fn_8019556C(void *);
s32 fn_800F6CD0(const char *, const char *);
void fn_80190604(Item *, void *, const char *);
void fn_801907D8(Item *);
void fn_80249E0C(Obj *);
extern f32 lbl_8036613C, lbl_803661B0, lbl_80366198;

void fn_80242210(Obj *o)
{
    s32 i;
    if (o->cur > -1) o->nodes[o->cur]->Stop();
    for (i = 0; i < o->nNodes; i++) {
        void *m = fn_8023BC90("Motion");
        if (o->nodes) {
            if (o->nodes[i]) {
                ((Node *)o->nodes[i])->Release();
                fn_8023B7A0(m, o->nodes[i]);
            }
            o->nodes[i] = 0;
        }
    }
    if (o->fd0) delete[] o->fd0;
    if (o->nodes) delete[] o->nodes;
    if (o->fd4) delete[] o->fd4;
    if (o->r1) { o->r1->Release(); delete o->r1; }
    if (o->n1) { o->n1->Release(); delete o->n1; }
    if (o->r2) { o->r2->Release(); delete o->r2; }
    if (o->items) {
        for (i = 0; i < o->nEnt; i++) {
            Ent e = o->ents[i];
            Item **it = o->items;
            if (it[i]) {
                if (e.b == 0) {
                    void *r = 0;
                    void *b = o->bank->p;
                    if (b) r = fn_8019556C(b);
                    if (!b || r) {
                        if (fn_800F6CD0(e.name, "") == 0) fn_80190604(it[i], r, e.name);
                        else fn_801907D8(it[i]);
                    }
                }
                if (it[i]->f98 & 8) it[i]->f98 &= ~8;
                it[i]->flags &= ~0x800;
                it[i]->f98 &= ~1;
                it[i] = 0;
            }
        }
        delete[] o->items;
    }
    if (o->dsp) {
        o->dsp->n = 0;
        o->dsp->t = lbl_8036613C;
        *o->dsp->flags &= ~0x800;
    }
    o->Reset();
    o->f7c = 0;
    o->nNodes = 0;
    o->nodes = 0;
    o->fd0 = 0;
    o->fd4 = 0;
    o->fb8 = 1;
    o->cur = -1;
    o->fdc = -1;
    o->r1 = 0;
    o->r2 = 0;
    o->n1 = 0;
    o->f9c = 0;
    o->fa0 = 0;
    o->fa4 = 0;
    o->ff4 = 0;
    o->ffc = 0;
    o->f88 = 0;
    o->f8c = 0;
    o->f104 = -1;
    o->nEnt = 0;
    o->ents = 0;
    o->items = 0;
    o->dsp = 0;
    o->fac = lbl_803661B0;
    o->fb0 = lbl_803661B0;
    o->fb4 = lbl_80366198;
    o->f98 = 0;
    o->bank = 0;
    fn_80249E0C(o);
}
}
