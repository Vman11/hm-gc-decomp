// Code of main that had no source file yet: decomp.wtf gave it this one.
// split_file divides it into the game's real files (file_status shows its range).
#include "common.h"

extern "C" {

struct V3 { f32 x, y, z; };
struct Ent3 { u8 pad[16]; u32 a; s32 b; s32 c; };
struct Ent5 { u8 pad[8]; u32 a; s32 b; s32 c; u32 d; };
struct Body { u8 pad[48]; void *xf; };
struct Snd { u8 pad[264]; void *ch; };
struct Act {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
    virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24();
    virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29();
    virtual void v30(); virtual void v31(); virtual void v32();
    virtual void Event(const char *, s32, s32, s32, s32); /* 140 */
    u8 pad4[152];
    Body *body;  /* 156 */
    u8 pad160[364];
    Snd *snd;    /* 524 */
    u8 pad528[44];
    s32 sndOn;   /* 572 */
    u8 pad576[248];
    void *tbl;   /* 824 */
};
struct Emit {
    u8 pad[88];
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
    virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24();
    virtual void SetPos(V3 *); /* 108 */
};
struct Glob { u8 pad[72]; Act *player; };
struct Obj { u8 pad[8]; Act *act; Body *body; Emit *em; };
void fn_800F6E88(char *, const char *);
s32 fn_800F6CD0(const char *, const char *);
void fn_80107244(void *, V3 *);
Ent3 *fn_8025EE5C(void *, const char *);
u32 fn_8026D254(void *, const char *);
Ent5 *fn_8026D1A8(void *, const char *);
void fn_802488C4(void *, s32, s32, V3 *, s32, f32);
void fn_802487D8(void *, s32, s32);
void fn_80248A14(void *, s32, f32);
void fn_80248AF4(void *, s32, s32, s32, f32);
void fn_8026D0EC(void *, Emit *, s32, s32);
void fn_8026D0B0(void *, Emit *, s32);
void __ct__9C80253F24Fiiii(void *, const char *, s32, s32, s32);
extern Glob *lbl_8035B308;
extern void *lbl_8035B7BC;
extern void *lbl_8035B65C;
extern s32 lbl_8035A238;
extern f32 lbl_80365A58, lbl_80365A64;
extern char lbl_802A821C[];

inline void GetPos(Body *b, V3 *p)
{
    if (b->xf) fn_80107244(b->xf, p);
    else { p->z = p->y = p->x = lbl_80365A58; }
}

void fn_80222840(Obj *o, const char *s)
{
    char name[8];
    char sub[6];
    V3 pos;
    s32 a = 0;
    s32 b = 0;
    u32 e = 0;
    u32 d = 0;
    fn_800F6E88(name, s);
    if (o->act) {
        char c = name[0];
        if (c == '_' && o->act->sndOn) {
            void *c;
            if (o->act->snd && (c = o->act->snd->ch) != 0) {
                GetPos(o->act->body, &pos);
                if (o->act == lbl_8035B308->player) {
                    if (lbl_8035B308->player->tbl) {
                        Ent3 *r = fn_8025EE5C(lbl_8035B308->player->tbl, name);
                        if (r) { d = r->a; a = r->b; b = r->c; }
                    }
                    if (lbl_8035A238 && fn_800F6CD0(name, lbl_802A821C))
                        d = fn_8026D254(lbl_8035B7BC, "balllnd");
                }
                if (d == 0) {
                    Ent5 *r = fn_8026D1A8(lbl_8035B7BC, name);
                    if (r) { d = r->a; a = r->b; b = r->c; }
                }
                if (b == 0) fn_802488C4(c, d, 0, &pos, a, lbl_80365A64);
                else fn_802487D8(c, 0, 0);
            }
        } else if (c == '^' && o->act->sndOn) {
            void *c;
            if (o->act->snd && (c = o->act->snd->ch) != 0) {
                GetPos(o->act->body, &pos);
                if (o->act == lbl_8035B308->player && lbl_8035B308->player->tbl) {
                    Ent3 *r = fn_8025EE5C(lbl_8035B308->player->tbl, name);
                    if (r) { d = r->a; a = r->b; b = r->c; }
                }
                if (d == 0) {
                    Ent5 *r = fn_8026D1A8(lbl_8035B7BC, name);
                    if (r) { d = r->a; a = r->b; b = r->c; e = r->d; }
                }
                if (b == 0) {
                    if (d) {
                        if (e == 2) fn_80248A14(c, d, lbl_80365A64);
                        else fn_80248AF4(c, d, 0, a, lbl_80365A64);
                    }
                } else fn_802487D8(c, 0, 0);
            }
        } else if (c == '#') {
            fn_800F6E88(sub, &name[1]);
            sub[7] = 0;
            __ct__9C80253F24Fiiii(lbl_8035B65C, sub, 0, 0, 0);
        }
        o->act->Event(name, 0, 0, 0, 0);
    } else if (name[0] == '_') {
        GetPos(o->body, &pos);
        o->em->SetPos(&pos);
        {
            Ent5 *r = fn_8026D1A8(lbl_8035B7BC, name);
            if (r) { d = r->a; a = r->b; b = r->c; }
        }
        if (d) {
            if (b == 0) fn_8026D0EC(lbl_8035B7BC, o->em, d, a);
            else fn_8026D0B0(lbl_8035B7BC, o->em, d);
        }
    }
}

} /* extern "C" */
